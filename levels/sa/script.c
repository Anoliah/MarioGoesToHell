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
#include "levels/sa/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sa_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sa_area_1),
		WARP_NODE(0x0A, LEVEL_COTMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_SA, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_SA, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CAGE_TOAD, 3648, 1313, -5896, 0, 72, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, -1302, 4118, 5908, 0, 118, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 290, 4118, 5688, 0, 121, 0, (1 << 16), bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 3149, 1506, -6080, 0, -47, 0, (1 << 16), bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 2884, 1541, -5641, 0, 40, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 2625, 1702, -6110, 0, -22, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 2188, 1721, -5730, 0, -20, 0, (1 << 16), bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, -836, 4118, 5673, 0, -138, 0, (1 << 16), bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, -291, 4118, 5365, 0, 75, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 941, 4217, 4390, 0, 47, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_HEART, -2426, 3789, -4715, 0, -36, 0, (1 << 16), bhvRecoveryHeart),
		OBJECT(MODEL_NONE, -3477, 4463, 6282, 0, 14, 0, 0x00000000, bhvFakeHidden1upInPoleSpawner),
		OBJECT(MODEL_EXCLAMATION_BOX, -6393, 4058, -1594, 0, -14, 0, (15 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -3908, 4058, -986, 0, -14, 0, (15 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 6337, -112, 306, 0, 151, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 3749, -112, 1533, 0, -132, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 6161, -112, 3019, 0, 115, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_GOOMBA, 5509, 160, -5839, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -3530, 3708, -3220, 0, -36, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, -6725, 3835, 4941, 0, 29, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -1253, 2843, -6138, 0, 0, 0, 0x00000000, bhvHidden1upInPoleSpawner),
		OBJECT(MODEL_NONE, 4656, 731, -6716, 0, 0, 0, (30 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_NONE, 842, 5244, 1327, 0, 29, 0, (20 << 16), bhvKaizoBlockSpawner),
		OBJECT(MODEL_NONE, 509, 2045, -6069, 0, 0, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -11, 2221, -6282, 0, 0, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -671, 2459, -6301, 0, 0, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -1253, 2751, -6138, 0, 0, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5158, 3946, 5772, 0, 14, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -4259, 4131, 6103, 0, 14, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3477, 4360, 6282, 0, 14, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 1011, 4596, 3433, 0, 29, 0, (0x27 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_HEART, -5004, 3864, -1267, 0, -14, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_WOODEN_SIGNPOST, 5113, -157, 847, 0, 0, 0, (34 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 6120, -157, 1995, 0, -89, 0, (40 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -6075, 3740, -1515, 0, 77, 0, (42 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, 580, 4475, 209, 0, 29, 0, (0xFF << 24) | (0xFF << 16), bhvPoleGrabbing),
		OBJECT(MODEL_CAGE_TOAD, 6778, -189, -451, 0, -53, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 3107, -189, 935, 0, 24, 0, 0x00000000, bhvCageToad),
		OBJECT(MODEL_CAGE_TOAD, 6964, -189, 2667, 0, -89, 0, (1 << 16), bhvCageToad),
		OBJECT(MODEL_NONE, 5266, 189, 4717, 0, -180, 0, (0x0C << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_NONE, 580, 6255, 209, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 5266, 189, 4717, 0, -180, 0, (0x0A << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 5266, -185, 4717),
		TERRAIN(sa_area_1_collision),
		MACRO_OBJECTS(sa_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		SHOW_DIALOG(0x00, DIALOG_030),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 5266, -185, 4717),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
