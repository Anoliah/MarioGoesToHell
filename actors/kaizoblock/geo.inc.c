#include "src/game/envfx_snow.h"

const GeoLayout kaizoblock_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, kaizoblock_Object_mesh_layer_1_mat_override_hitTexture_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout kaizoblock_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(2, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, kaizoblock_Object_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, kaizoblock_switch_opt1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, kaizoblock_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
