//Wait for Mario to land
void cageToad_act_0(void) {
	if (o->oBehParams2ndByte == 1) {
		if (cur_obj_is_mario_on_platform()) {
			cur_obj_play_sound_2(SOUND_GENERAL_ACTIVATE_CAP_SWITCH);
			o->oAction = 1;
		}
	}
}

//Fall a certain distance
void cageToad_act_1(void) {
	approach_f32_signed(&o->oVelY, 200.0f, 4.0f);
	o->oPosY -= o->oVelY;
	if (o->oPosY < (o->oHomeY - 1000.0f)) {
		o->oAction = 2;
	}
}

//Explode
void cageToad_act_2(void) {
	spawn_mist_particles_variable(0, 0, 80.f);
	spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 3.0f, TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW);
	create_sound_spawner(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION);
	obj_mark_for_deletion(o);
}

void (*sCageToadActions[])(void) = {
	cageToad_act_0,
	cageToad_act_1,
	cageToad_act_2,
};

void bhv_cage_toad_init(void) 
{
	o->oDrawingDistance = 6000.0f;
}

void bhv_cage_toad_loop(void)
{
	cur_obj_call_action_function(sCageToadActions);
}