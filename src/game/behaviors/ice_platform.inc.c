void bhv_ice_platform_loop(void) {
	if (o->oBehParams2ndByte == 1) {
		if (cur_obj_is_mario_on_platform()) {
			spawn_mist_particles_variable(0, 0, 80.f);
			spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 3.0f, TINY_DIRT_PARTICLE_ANIM_STATE_BLUE);
			struct Object *explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
			explosion->oGraphYOffset += 100.0f;
			explosion->oPosX = gMarioObject->oPosX;
			explosion->oPosY = gMarioObject->oPosY;
			explosion->oPosZ = gMarioObject->oPosZ;
			obj_mark_for_deletion(o);
		}
	}
}