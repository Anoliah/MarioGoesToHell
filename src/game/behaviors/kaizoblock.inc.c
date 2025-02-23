void bhv_kaizoblock_init(void)
{
	o->oAnimState = 0;
	o->oVelY = 0;
}

void kaizoSpawnCoin(void) {
	gMarioState->numCoins++;
	cur_obj_play_sound_2(SOUND_GENERAL_COIN);
}

//Play spawning animation rise
void kaizoBlock_act_0(void) {
	approach_f32_signed(&o->oVelY, 40.0f, 12.0f);
	o->oPosY += o->oVelY;
	if (o->oPosY > (o->oHomeY + 70)) {
		o->oAction = 1;
	}
}

//Play spawning animation give coin
void kaizoBlock_act_1(void) {
	o->oVelY = 0;
	o->oAnimState = 1; 
	kaizoSpawnCoin();
	o->oAction = 2;
}

//Play spawning animation fall
void kaizoBlock_act_2(void) {
	approach_f32_signed(&o->oVelY, 50.0f, 12.0f);
	o->oPosY -= o->oVelY;
	if (o->oPosY <= (o->oHomeY)) {
		o->oAction = 3;
	}
}

//Wait for Mario to leave, then despawn and allow parent to respawn block
void kaizoBlock_act_3(void) {
	if (!is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 4000)) {
		o->parentObj->oBlockSpawned = 0;
		obj_mark_for_deletion(o);
	}
}

void (*sKaizoBlockActions[])(void) = {
	kaizoBlock_act_0,
	kaizoBlock_act_1,
	kaizoBlock_act_2,
	kaizoBlock_act_3,
};

void bhv_kaizoblock_loop(void)
{
	cur_obj_call_action_function(sKaizoBlockActions);
}