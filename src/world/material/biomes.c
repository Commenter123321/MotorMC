#include "material.h"

const mat_biome_t mat_biome_badlands_d = {
	.name = "badlands",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_mesa,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.foliage_color = 10387789,
		.grass_color = 9470285,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_badlands_plateau_d = {
	.name = "badlands_plateau",
	.precipitation = mat_precipitation_none,
	.depth = 1.5,
	.temperature = 2.0,
	.scale = 0.025,
	.downfall = 0.0,
	.category = mat_biome_category_mesa,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.foliage_color = 10387789,
		.grass_color = 9470285,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_bamboo_jungle_d = {
	.name = "bamboo_jungle",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.95,
	.scale = 0.2,
	.downfall = 0.9,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_bamboo_jungle_hills_d = {
	.name = "bamboo_jungle_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.45,
	.temperature = 0.95,
	.scale = 0.3,
	.downfall = 0.9,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_basalt_deltas_d = {
	.name = "basalt_deltas",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_nether,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 4341314,
		.fog_color = 6840176,
		.music = {
			.sound = "minecraft:music.nether.basalt_deltas",
			.max_delay = 24000,
			.min_delay = 12000,
		},
		.ambient_sound = "minecraft:ambient.basalt_deltas.loop",
		.additions_sound = {
			.sound = "minecraft:ambient.basalt_deltas.additions",
			.tick_chance = 0.0111,
		},
		.mood_sound = {
			.sound = "minecraft:ambient.basalt_deltas.mood",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
	.particle = {
		.probability = 0.118093334,
		.options = {
			.type = "minecraft:white_ash",
		},
	},
};
const mat_biome_t mat_biome_beach_d = {
	.name = "beach",
	.precipitation = mat_precipitation_rain,
	.depth = 0.0,
	.temperature = 0.8,
	.scale = 0.025,
	.downfall = 0.4,
	.category = mat_biome_category_beach,
	.effects = {
		.sky_color = 7907327,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_birch_forest_d = {
	.name = "birch_forest",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.6,
	.scale = 0.2,
	.downfall = 0.6,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 8037887,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_birch_forest_hills_d = {
	.name = "birch_forest_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.45,
	.temperature = 0.6,
	.scale = 0.3,
	.downfall = 0.6,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 8037887,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_cold_ocean_d = {
	.name = "cold_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.0,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_crimson_forest_d = {
	.name = "crimson_forest",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_nether,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 3343107,
		.music = {
			.sound = "minecraft:music.nether.crimson_forest",
			.max_delay = 24000,
			.min_delay = 12000,
		},
		.ambient_sound = "minecraft:ambient.crimson_forest.loop",
		.additions_sound = {
			.sound = "minecraft:ambient.crimson_forest.additions",
			.tick_chance = 0.0111,
		},
		.mood_sound = {
			.sound = "minecraft:ambient.crimson_forest.mood",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
	.particle = {
		.probability = 0.025,
		.options = {
			.type = "minecraft:crimson_spore",
		},
	},
};
const mat_biome_t mat_biome_dark_forest_d = {
	.name = "dark_forest",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.7,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 7972607,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.grass_color_modifier = mat_grass_color_modifier_dark_forest,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_dark_forest_hills_d = {
	.name = "dark_forest_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.7,
	.scale = 0.4,
	.downfall = 0.8,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 7972607,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.grass_color_modifier = mat_grass_color_modifier_dark_forest,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_deep_cold_ocean_d = {
	.name = "deep_cold_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.8,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_deep_frozen_ocean_d = {
	.name = "deep_frozen_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.8,
	.temperature = 0.5,
	.temperature_modifier = mat_temperature_modifier_frozen,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_deep_lukewarm_ocean_d = {
	.name = "deep_lukewarm_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.8,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 267827,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_deep_ocean_d = {
	.name = "deep_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.8,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_deep_warm_ocean_d = {
	.name = "deep_warm_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.8,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 270131,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_desert_d = {
	.name = "desert",
	.precipitation = mat_precipitation_none,
	.depth = 0.125,
	.temperature = 2.0,
	.scale = 0.05,
	.downfall = 0.0,
	.category = mat_biome_category_desert,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_desert_hills_d = {
	.name = "desert_hills",
	.precipitation = mat_precipitation_none,
	.depth = 0.45,
	.temperature = 2.0,
	.scale = 0.3,
	.downfall = 0.0,
	.category = mat_biome_category_desert,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_desert_lakes_d = {
	.name = "desert_lakes",
	.precipitation = mat_precipitation_none,
	.depth = 0.225,
	.temperature = 2.0,
	.scale = 0.25,
	.downfall = 0.0,
	.category = mat_biome_category_desert,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_dripstone_caves_d = {
	.name = "dripstone_caves",
	.precipitation = mat_precipitation_rain,
	.depth = 0.125,
	.temperature = 0.8,
	.scale = 0.05,
	.downfall = 0.4,
	.category = mat_biome_category_underground,
	.effects = {
		.sky_color = 7907327,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_end_barrens_d = {
	.name = "end_barrens",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_the_end,
	.effects = {
		.sky_color = 0,
		.water_fog_color = 329011,
		.fog_color = 10518688,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_end_highlands_d = {
	.name = "end_highlands",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_the_end,
	.effects = {
		.sky_color = 0,
		.water_fog_color = 329011,
		.fog_color = 10518688,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_end_midlands_d = {
	.name = "end_midlands",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_the_end,
	.effects = {
		.sky_color = 0,
		.water_fog_color = 329011,
		.fog_color = 10518688,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_eroded_badlands_d = {
	.name = "eroded_badlands",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_mesa,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.foliage_color = 10387789,
		.grass_color = 9470285,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_flower_forest_d = {
	.name = "flower_forest",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.7,
	.scale = 0.4,
	.downfall = 0.8,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 7972607,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_forest_d = {
	.name = "forest",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.7,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 7972607,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_frozen_ocean_d = {
	.name = "frozen_ocean",
	.precipitation = mat_precipitation_snow,
	.depth = -1.0,
	.temperature = 0.0,
	.temperature_modifier = mat_temperature_modifier_frozen,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8364543,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_frozen_river_d = {
	.name = "frozen_river",
	.precipitation = mat_precipitation_snow,
	.depth = -0.5,
	.temperature = 0.0,
	.scale = 0.0,
	.downfall = 0.5,
	.category = mat_biome_category_river,
	.effects = {
		.sky_color = 8364543,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_giant_spruce_taiga_d = {
	.name = "giant_spruce_taiga",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.25,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8233983,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_giant_spruce_taiga_hills_d = {
	.name = "giant_spruce_taiga_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.25,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8233983,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_giant_tree_taiga_d = {
	.name = "giant_tree_taiga",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.3,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8168447,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_giant_tree_taiga_hills_d = {
	.name = "giant_tree_taiga_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.45,
	.temperature = 0.3,
	.scale = 0.3,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8168447,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_gravelly_mountains_d = {
	.name = "gravelly_mountains",
	.precipitation = mat_precipitation_rain,
	.depth = 1.0,
	.temperature = 0.2,
	.scale = 0.5,
	.downfall = 0.3,
	.category = mat_biome_category_extreme_hills,
	.effects = {
		.sky_color = 8233727,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_ice_spikes_d = {
	.name = "ice_spikes",
	.precipitation = mat_precipitation_snow,
	.depth = 0.425,
	.temperature = 0.0,
	.scale = 0.45000002,
	.downfall = 0.5,
	.category = mat_biome_category_icy,
	.effects = {
		.sky_color = 8364543,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_jungle_d = {
	.name = "jungle",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.95,
	.scale = 0.2,
	.downfall = 0.9,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_jungle_edge_d = {
	.name = "jungle_edge",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.95,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_jungle_hills_d = {
	.name = "jungle_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.45,
	.temperature = 0.95,
	.scale = 0.3,
	.downfall = 0.9,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_lukewarm_ocean_d = {
	.name = "lukewarm_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.0,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 267827,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_lush_caves_d = {
	.name = "lush_caves",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_underground,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
	},
};
const mat_biome_t mat_biome_modified_badlands_plateau_d = {
	.name = "modified_badlands_plateau",
	.precipitation = mat_precipitation_none,
	.depth = 0.45,
	.temperature = 2.0,
	.scale = 0.3,
	.downfall = 0.0,
	.category = mat_biome_category_mesa,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.foliage_color = 10387789,
		.grass_color = 9470285,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_modified_gravelly_mountains_d = {
	.name = "modified_gravelly_mountains",
	.precipitation = mat_precipitation_rain,
	.depth = 1.0,
	.temperature = 0.2,
	.scale = 0.5,
	.downfall = 0.3,
	.category = mat_biome_category_extreme_hills,
	.effects = {
		.sky_color = 8233727,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_modified_jungle_d = {
	.name = "modified_jungle",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.95,
	.scale = 0.4,
	.downfall = 0.9,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_modified_jungle_edge_d = {
	.name = "modified_jungle_edge",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.95,
	.scale = 0.4,
	.downfall = 0.8,
	.category = mat_biome_category_jungle,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_modified_wooded_badlands_plateau_d = {
	.name = "modified_wooded_badlands_plateau",
	.precipitation = mat_precipitation_none,
	.depth = 0.45,
	.temperature = 2.0,
	.scale = 0.3,
	.downfall = 0.0,
	.category = mat_biome_category_mesa,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.foliage_color = 10387789,
		.grass_color = 9470285,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_mountains_d = {
	.name = "mountains",
	.precipitation = mat_precipitation_rain,
	.depth = 1.0,
	.temperature = 0.2,
	.scale = 0.5,
	.downfall = 0.3,
	.category = mat_biome_category_extreme_hills,
	.effects = {
		.sky_color = 8233727,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_mountain_edge_d = {
	.name = "mountain_edge",
	.precipitation = mat_precipitation_rain,
	.depth = 0.8,
	.temperature = 0.2,
	.scale = 0.3,
	.downfall = 0.3,
	.category = mat_biome_category_extreme_hills,
	.effects = {
		.sky_color = 8233727,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_mushroom_fields_d = {
	.name = "mushroom_fields",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.9,
	.scale = 0.3,
	.downfall = 1.0,
	.category = mat_biome_category_mushroom,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_mushroom_field_shore_d = {
	.name = "mushroom_field_shore",
	.precipitation = mat_precipitation_rain,
	.depth = 0.0,
	.temperature = 0.9,
	.scale = 0.025,
	.downfall = 1.0,
	.category = mat_biome_category_mushroom,
	.effects = {
		.sky_color = 7842047,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_nether_wastes_d = {
	.name = "nether_wastes",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_nether,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 3344392,
		.music = {
			.sound = "minecraft:music.nether.nether_wastes",
			.max_delay = 24000,
			.min_delay = 12000,
		},
		.ambient_sound = "minecraft:ambient.nether_wastes.loop",
		.additions_sound = {
			.sound = "minecraft:ambient.nether_wastes.additions",
			.tick_chance = 0.0111,
		},
		.mood_sound = {
			.sound = "minecraft:ambient.nether_wastes.mood",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_ocean_d = {
	.name = "ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.0,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_plains_d = {
	.name = "plains",
	.precipitation = mat_precipitation_rain,
	.depth = 0.125,
	.temperature = 0.8,
	.scale = 0.05,
	.downfall = 0.4,
	.category = mat_biome_category_plains,
	.effects = {
		.sky_color = 7907327,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_river_d = {
	.name = "river",
	.precipitation = mat_precipitation_rain,
	.depth = -0.5,
	.temperature = 0.5,
	.scale = 0.0,
	.downfall = 0.5,
	.category = mat_biome_category_river,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_savanna_d = {
	.name = "savanna",
	.precipitation = mat_precipitation_none,
	.depth = 0.125,
	.temperature = 1.2,
	.scale = 0.05,
	.downfall = 0.0,
	.category = mat_biome_category_savanna,
	.effects = {
		.sky_color = 7711487,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_savanna_plateau_d = {
	.name = "savanna_plateau",
	.precipitation = mat_precipitation_none,
	.depth = 1.5,
	.temperature = 1.0,
	.scale = 0.025,
	.downfall = 0.0,
	.category = mat_biome_category_savanna,
	.effects = {
		.sky_color = 7776511,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_shattered_savanna_d = {
	.name = "shattered_savanna",
	.precipitation = mat_precipitation_none,
	.depth = 0.3625,
	.temperature = 1.1,
	.scale = 1.225,
	.downfall = 0.0,
	.category = mat_biome_category_savanna,
	.effects = {
		.sky_color = 7776767,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_shattered_savanna_plateau_d = {
	.name = "shattered_savanna_plateau",
	.precipitation = mat_precipitation_none,
	.depth = 1.05,
	.temperature = 1.0,
	.scale = 1.2125001,
	.downfall = 0.0,
	.category = mat_biome_category_savanna,
	.effects = {
		.sky_color = 7776511,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_small_end_islands_d = {
	.name = "small_end_islands",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_the_end,
	.effects = {
		.sky_color = 0,
		.water_fog_color = 329011,
		.fog_color = 10518688,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_snowy_beach_d = {
	.name = "snowy_beach",
	.precipitation = mat_precipitation_snow,
	.depth = 0.0,
	.temperature = 0.05,
	.scale = 0.025,
	.downfall = 0.3,
	.category = mat_biome_category_beach,
	.effects = {
		.sky_color = 8364543,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_snowy_mountains_d = {
	.name = "snowy_mountains",
	.precipitation = mat_precipitation_snow,
	.depth = 0.45,
	.temperature = 0.0,
	.scale = 0.3,
	.downfall = 0.5,
	.category = mat_biome_category_icy,
	.effects = {
		.sky_color = 8364543,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_snowy_taiga_d = {
	.name = "snowy_taiga",
	.precipitation = mat_precipitation_snow,
	.depth = 0.2,
	.temperature = -0.5,
	.scale = 0.2,
	.downfall = 0.4,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8625919,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_snowy_taiga_hills_d = {
	.name = "snowy_taiga_hills",
	.precipitation = mat_precipitation_snow,
	.depth = 0.45,
	.temperature = -0.5,
	.scale = 0.3,
	.downfall = 0.4,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8625919,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_snowy_taiga_mountains_d = {
	.name = "snowy_taiga_mountains",
	.precipitation = mat_precipitation_snow,
	.depth = 0.3,
	.temperature = -0.5,
	.scale = 0.4,
	.downfall = 0.4,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8625919,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_snowy_tundra_d = {
	.name = "snowy_tundra",
	.precipitation = mat_precipitation_snow,
	.depth = 0.125,
	.temperature = 0.0,
	.scale = 0.05,
	.downfall = 0.5,
	.category = mat_biome_category_icy,
	.effects = {
		.sky_color = 8364543,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_soul_sand_valley_d = {
	.name = "soul_sand_valley",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_nether,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 1787717,
		.music = {
			.sound = "minecraft:music.nether.soul_sand_valley",
			.max_delay = 24000,
			.min_delay = 12000,
		},
		.ambient_sound = "minecraft:ambient.soul_sand_valley.loop",
		.additions_sound = {
			.sound = "minecraft:ambient.soul_sand_valley.additions",
			.tick_chance = 0.0111,
		},
		.mood_sound = {
			.sound = "minecraft:ambient.soul_sand_valley.mood",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
	.particle = {
		.probability = 0.00625,
		.options = {
			.type = "minecraft:ash",
		},
	},
};
const mat_biome_t mat_biome_stone_shore_d = {
	.name = "stone_shore",
	.precipitation = mat_precipitation_rain,
	.depth = 0.1,
	.temperature = 0.2,
	.scale = 0.8,
	.downfall = 0.3,
	.category = mat_biome_category_none,
	.effects = {
		.sky_color = 8233727,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_sunflower_plains_d = {
	.name = "sunflower_plains",
	.precipitation = mat_precipitation_rain,
	.depth = 0.125,
	.temperature = 0.8,
	.scale = 0.05,
	.downfall = 0.4,
	.category = mat_biome_category_plains,
	.effects = {
		.sky_color = 7907327,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_swamp_d = {
	.name = "swamp",
	.precipitation = mat_precipitation_rain,
	.depth = -0.2,
	.temperature = 0.8,
	.scale = 0.1,
	.downfall = 0.9,
	.category = mat_biome_category_swamp,
	.effects = {
		.sky_color = 7907327,
		.water_fog_color = 2302743,
		.fog_color = 12638463,
		.foliage_color = 6975545,
		.grass_color_modifier = mat_grass_color_modifier_swamp,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_swamp_hills_d = {
	.name = "swamp_hills",
	.precipitation = mat_precipitation_rain,
	.depth = -0.1,
	.temperature = 0.8,
	.scale = 0.3,
	.downfall = 0.9,
	.category = mat_biome_category_swamp,
	.effects = {
		.sky_color = 7907327,
		.water_fog_color = 2302743,
		.fog_color = 12638463,
		.foliage_color = 6975545,
		.grass_color_modifier = mat_grass_color_modifier_swamp,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_taiga_d = {
	.name = "taiga",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.25,
	.scale = 0.2,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8233983,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_taiga_hills_d = {
	.name = "taiga_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.45,
	.temperature = 0.25,
	.scale = 0.3,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8233983,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_taiga_mountains_d = {
	.name = "taiga_mountains",
	.precipitation = mat_precipitation_rain,
	.depth = 0.3,
	.temperature = 0.25,
	.scale = 0.4,
	.downfall = 0.8,
	.category = mat_biome_category_taiga,
	.effects = {
		.sky_color = 8233983,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_tall_birch_forest_d = {
	.name = "tall_birch_forest",
	.precipitation = mat_precipitation_rain,
	.depth = 0.2,
	.temperature = 0.6,
	.scale = 0.4,
	.downfall = 0.6,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 8037887,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_tall_birch_hills_d = {
	.name = "tall_birch_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.55,
	.temperature = 0.6,
	.scale = 0.5,
	.downfall = 0.6,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 8037887,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_the_end_d = {
	.name = "the_end",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_the_end,
	.effects = {
		.sky_color = 0,
		.water_fog_color = 329011,
		.fog_color = 10518688,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_the_void_d = {
	.name = "the_void",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 0.5,
	.scale = 0.2,
	.downfall = 0.5,
	.category = mat_biome_category_none,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_warm_ocean_d = {
	.name = "warm_ocean",
	.precipitation = mat_precipitation_rain,
	.depth = -1.0,
	.temperature = 0.5,
	.scale = 0.1,
	.downfall = 0.5,
	.category = mat_biome_category_ocean,
	.effects = {
		.sky_color = 8103167,
		.water_fog_color = 270131,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_warped_forest_d = {
	.name = "warped_forest",
	.precipitation = mat_precipitation_none,
	.depth = 0.1,
	.temperature = 2.0,
	.scale = 0.2,
	.downfall = 0.0,
	.category = mat_biome_category_nether,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 1705242,
		.music = {
			.sound = "minecraft:music.nether.warped_forest",
			.max_delay = 24000,
			.min_delay = 12000,
		},
		.ambient_sound = "minecraft:ambient.warped_forest.loop",
		.additions_sound = {
			.sound = "minecraft:ambient.warped_forest.additions",
			.tick_chance = 0.0111,
		},
		.mood_sound = {
			.sound = "minecraft:ambient.warped_forest.mood",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
	.particle = {
		.probability = 0.01428,
		.options = {
			.type = "minecraft:warped_spore",
		},
	},
};
const mat_biome_t mat_biome_wooded_badlands_plateau_d = {
	.name = "wooded_badlands_plateau",
	.precipitation = mat_precipitation_none,
	.depth = 1.5,
	.temperature = 2.0,
	.scale = 0.025,
	.downfall = 0.0,
	.category = mat_biome_category_mesa,
	.effects = {
		.sky_color = 7254527,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.foliage_color = 10387789,
		.grass_color = 9470285,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_wooded_hills_d = {
	.name = "wooded_hills",
	.precipitation = mat_precipitation_rain,
	.depth = 0.45,
	.temperature = 0.7,
	.scale = 0.3,
	.downfall = 0.8,
	.category = mat_biome_category_forest,
	.effects = {
		.sky_color = 7972607,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};
const mat_biome_t mat_biome_wooded_mountains_d = {
	.name = "wooded_mountains",
	.precipitation = mat_precipitation_rain,
	.depth = 1.0,
	.temperature = 0.2,
	.scale = 0.5,
	.downfall = 0.3,
	.category = mat_biome_category_extreme_hills,
	.effects = {
		.sky_color = 8233727,
		.water_fog_color = 329011,
		.fog_color = 12638463,
		.mood_sound = {
			.sound = "minecraft:ambient.cave",
			.offset = 2.0,
			.tick_delay = 6000,
			.block_search_extent = 8,
		},
	},
};