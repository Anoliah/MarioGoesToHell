void kaizoblock_spawner_spawn_block(void) {
	struct Object *sp1C = NULL;
	sp1C = spawn_object(o, MODEL_KAIZOBLOCK, bhvKaizoBlock);
	sp1C->oPosX = gMarioObject->oPosX;
	sp1C->oPosY = gMarioObject->oPosY + 160;
	sp1C->oPosZ = gMarioObject->oPosZ;
	o->oBlockSpawned = 1;
}

void bhv_kaizoblock_spawner_loop(void) {
	if (!o->oBlockSpawned) {
		if (is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, (o->oBehParams2ndByte * 32))) {
			if ((gMarioObject->oPosY >= o->oPosY - 100) && (gMarioObject->oPosY <= o->oPosY + 100)) {
				switch (gMarioStates[0].action) {
				case ACT_JUMP:
				case ACT_DOUBLE_JUMP:
				case ACT_TRIPLE_JUMP:
				case ACT_LONG_JUMP:
				case ACT_SIDE_FLIP:
				case ACT_BACKFLIP:
				case ACT_WALL_KICK_AIR:
				case ACT_TOP_OF_POLE_JUMP:
				case ACT_FREEFALL:
					kaizoblock_spawner_spawn_block();
					break;
				}
			}
		}
	}
}