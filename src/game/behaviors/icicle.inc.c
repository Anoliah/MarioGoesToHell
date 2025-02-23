/**
 * Hitbox for icicle.
 */
static struct ObjectHitbox sIcicleHitbox = {
	/* interactType:      */ INTERACT_DAMAGE,
	/* downOffset:        */ 0,
	/* damageOrCoinValue: */ 8,
	/* health:            */ 0,
	/* numLootCoins:      */ 0,
	/* radius:            */ 500,
	/* height:            */ 1600,
	/* hurtboxRadius:     */ 500,
	/* hurtboxHeight:     */ 1600,
};

//Check if Mario is below
void icicle_act_0(void) {
	if (is_point_within_radius_of_mario(o->oPosX, (o->oPosY - 1600.0f), o->oPosZ, 1600.0f) && (o->oPosY > gMarioObject->oPosY)) {
		o->oAction = 1;
	}
}

//Fall downwards
void icicle_act_1(void) {
	approach_f32_signed(&o->oVelY, 200.0f, 8.0f);
	o->oPosY -= o->oVelY;
	if (o->oPosY < (gMarioObject->oPosY - 2000.0f)) {
		o->oAction = 2;
	}
}

//Despawn object
void icicle_act_2(void) {
	obj_mark_for_deletion(o);
}

void(*sIcicleActions[])(void) = {
	icicle_act_0,
	icicle_act_1,
	icicle_act_2,
};

void bhv_icicle_init(void){
	obj_set_hitbox(o, &sIcicleHitbox);
	o->oDrawingDistance = 10000.0f;
}

void bhv_icicle_loop(void) {
	cur_obj_call_action_function(sIcicleActions);
}