#include "src/game/envfx_snow.h"

const GeoLayout cage_toad_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cage_toad_Model_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -25, 86, 19, 90, 0, 0, cage_toad_skinned_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cage_toad_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
