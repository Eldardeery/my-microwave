
void WeightSensInit(void ){
	BtnInit(BTN_WEIGHT, BTN_RELEASED);
}

WeightStateT WeightSensGetState(void ){
	return BtnGetState(BTN_WEIGHT);
}

void WeightSensUpdate(void ){
	BtnUpdate();
}
