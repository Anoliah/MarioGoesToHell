void fish_PNG_follow_mario(struct Object* fish) {
	fish->oPosX = gMarioObject->oPosX - 500.0f;
	fish->oPosZ = gMarioObject->oPosZ + 100.0f;
}

void fish_spawner_spawn_fish(void) {
	struct Object* sp1C = NULL;
	sp1C = spawn_object(o, MODEL_FISH_PNG, bhvFishPNG);
	fish_PNG_follow_mario(sp1C);
	sp1C->oPosY = gMarioObject->oPosY - 1000.0f;
	o->oFishSpawnTimer = 200;
}

void bhv_fish_PNG_spawner_init(void) {
	o->oFishSpawnTimer = 0;
}

void bhv_fish_PNG_spawner_loop(void) {
	if ((is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 1000.0f)) && (o->oFishSpawnTimer <= 0)) {
		fish_spawner_spawn_fish();
	}else if(o->oFishSpawnTimer > 0){
		o->oFishSpawnTimer--;
	}
}

//Go up
void fish_png_act_1(void) {
	approach_f32_signed(&o->oVelY, 50.0f, 4.0f);
	o->oPosY += o->oVelY;
	fish_PNG_follow_mario(o);
	if (o->oPosY >= gMarioObject->oPosY) {
		gMarioState->health = 0;
		o->oAction = 2;
	}
}

//Wait for parent timer to run out
void fish_png_act_2(void) {
	o->oPosY += o->oVelY;
	if (o->parentObj->oFishSpawnTimer <= 0) {
		o->oAction = 3;
	}
}

//Despawn object
void fish_png_act_3(void) {
	obj_mark_for_deletion(o);
}

void(*sFishPNGActions[])(void) = {
	fish_png_act_1,
	fish_png_act_2,
	fish_png_act_3,
};

void bhv_fish_png_loop(void) {
	cur_obj_call_action_function(sFishPNGActions);
}