#include <pthread.h>
#include <stdlib.h>
#include "entity.h"
#include "../../util/id_vector.h"
#include "../../util/lock_util.h"
#include "../../motor.h"
#include "../../jobs/scheduler/scheduler.h"
#include "../../listening/phd/play.h"

utl_id_vector_t ent_entities = UTL_ID_VECTOR_INITIALIZER(ent_entity_t*);

uint32_t ent_register_entity(ent_entity_t* entity) {
	
	uint32_t id = utl_id_vector_push(&ent_entities, &entity);
	memcpy((uint32_t*) &entity->id, &id, sizeof(id));

	pthread_mutex_init(&entity->lock, NULL);
	
	ent_set_chunk(entity);

	return entity->id;

}

ent_entity_t* ent_get_entity_by_id(uint32_t id) {

	ent_entity_t* entity = UTL_ID_VECTOR_GET_AS(ent_entity_t*, &ent_entities, id);

	return entity;

}

void ent_destroy_entity(uint32_t client_id, void* entity) {

	ltg_client_t* client = ltg_get_client_by_id(client_id);

	phd_send_destroy_entity(client, (ent_entity_t*) entity);

}

void ent_send_entity(uint32_t client_id, void* entity) {

	ltg_client_t* client = ltg_get_client_by_id(client_id);

	phd_update_send_entity(client, (ent_entity_t*) entity);

}

void ent_send_destroy_entity(uint32_t client_id, void* entity) {

	wld_chunk_t* entity_chunk = ((ent_entity_t*) entity)->chunk;

	if (utl_bit_vector_test_bit(&entity_chunk->subscribers, client_id)) {
		ent_send_entity(client_id, entity);
	} else {
		ent_destroy_entity(client_id, entity);
	}

}

void ent_set_chunk(ent_entity_t* entity) {

	wld_chunk_t* chunk = NULL;

	const int64_t f_x = utl_int_floor(entity->position.x);
	const int64_t f_z = utl_int_floor(entity->position.z);

	if (entity->chunk != NULL) {

		// try relative
		int32_t o_x = wld_get_chunk_x(entity->chunk);
		int32_t o_z = wld_get_chunk_z(entity->chunk);
		int32_t n_x = f_x >> 4;
		int32_t n_z = f_z >> 4;

		if (UTL_ABS(n_x - o_x) < sky_main.render_distance && UTL_ABS(n_z - o_z) < sky_main.render_distance) {
			
			chunk = wld_relative_chunk(entity->chunk, n_x - o_x, n_z - o_z);
			
		} else { // set absolute (o(logn))

			chunk = wld_get_chunk_at(entity->position.world, f_x, f_z);

		}

		// update players around
		utl_bit_vector_xor_foreach(&entity->chunk->subscribers, &chunk->subscribers, ent_send_destroy_entity, entity);
		ent_remove_chunk(entity);

	} else {
		// set absolute (o(logn))
		chunk = wld_get_chunk_at(entity->position.world, f_x, f_z);
		
		// if its a player, we must wait until it has been added to the server list
		if (entity->type != ent_player) {
			// spawn in chunk to listeners
			utl_bit_vector_foreach(&chunk->subscribers, ent_send_entity, entity);
		}
	}

	assert(chunk != NULL);

	entity->chunk_node = utl_dll_push(&chunk->entities, entity);
	entity->chunk = chunk;

}

void ent_free_entity(ent_entity_t* entity) {

	// remove entity from clients
	utl_bit_vector_foreach(&entity->chunk->subscribers, ent_destroy_entity, entity);

	ent_remove_chunk(entity);

	utl_id_vector_remove(&ent_entities, entity->id);

	pthread_mutex_destroy(&entity->lock);

	free(entity);

}