#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0xa, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		WARP_NODE(0x0A, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_PSS, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_SA, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_PSS, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3159, -471, -917, 0, 61, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1726, -307, -1526, 0, 66, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, -7050, 489, 2124, 0, -20, 0, (15 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -7294, 489, 2718, 0, -20, 0, (16 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -4465, -161, -5255, 0, 0, 0, 0x00000000, bhvFishPNGSpawner),
		OBJECT(MODEL_GOOMBA, 7185, 1606, 683, 0, -115, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -2462, -52, 5637, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 6375, -424, 950, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_ICE_PLATFORM_BROKEN, 4802, 3197, -4274, 0, 45, 0, (1 << 16), bhvIcePlatform),
		OBJECT(MODEL_ICE_PLATFORM_BROKEN, 5706, 3197, -3435, 0, 45, 0, 0x00000000, bhvIcePlatform),
		OBJECT(MODEL_ICE_PLATFORM, 6451, 3197, -2673, 0, 45, 0, (0 << 16), bhvIcePlatform),
		OBJECT(MODEL_ICE_PLATFORM, 5308, 3197, -4778, 0, 46, 0, 0x00000000, bhvIcePlatform),
		OBJECT(MODEL_ICE_PLATFORM, 6212, 3197, -3939, 0, 46, 0, (1 << 16), bhvIcePlatform),
		OBJECT(MODEL_ICE_PLATFORM_BROKEN, 6957, 3197, -3177, 0, 46, 0, (1 << 16), bhvIcePlatform),
		OBJECT(MODEL_ICICLE, -6036, 241, -1190, 0, 0, 0, 0x00000000, bhvIcicle),
		OBJECT(MODEL_ICICLE, -4826, 483, -1555, 0, -37, 0, 0x00000000, bhvIcicle),
		OBJECT(MODEL_ICICLE, -5729, 143, -2794, 0, -25, 0, 0x00000000, bhvIcicle),
		OBJECT(MODEL_ICICLE, -4673, 597, -3841, 0, 103, 0, 0x00000000, bhvIcicle),
		OBJECT(MODEL_ICICLE, -634, 509, -2325, 0, 22, 0, 0x00000000, bhvIcicle),
		OBJECT(MODEL_ICICLE, 1615, 5516, -8016, 0, 0, 0, 0x00000000, bhvIcicle),
		OBJECT(MODEL_NONE, -6090, 457, 3911, 0, 0, 0, (25 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_NONE, 6242, 851, -1711, 0, 0, 0, (20 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_NONE, 6874, 2170, 1017, 0, 0, 0, (30 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_NONE, 4491, 3522, -5168, 0, 0, 0, (25 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_NONE, 5286, 979, 699, 0, 0, 0, (20 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_BITS_WARP_PIPE, 847, 3295, -8711, 0, 0, 0, (0x0B << 16), bhvWarpPipe),
		OBJECT(MODEL_EXCLAMATION_BOX, -7541, 489, 3406, 0, -20, 0, (3 << 16), bhvExclamationBox),
		OBJECT(MODEL_WOODEN_SIGNPOST, 3264, -110, 8703, 0, 74, 0, (43 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 2077, -356, -1074, 0, -116, 0, (48 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 3317, -145, -2859, 0, -23, 0, (49 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 7335, 3369, -2123, 0, 40, 0, (50 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 812, 3306, -8323, 0, 40, 0, (51 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 847, -81, -8711, 0, 40, 0, (52 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, 5965, 441, 9843, 0, -116, 0, (0x0C << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_NONE, 5965, 242, 9843, 0, -116, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -116, 5965, 0, 9843),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		SHOW_DIALOG(0x00, DIALOG_000),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -116, 5965, 0, 9843),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
