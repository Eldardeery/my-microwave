
#include "Lamp.h"

static LampStateT InternalLampStates[LAMPS_NUM];

void LampInit(LampSelectT LampSelect, LampStateT LampInitState){
	if (LampSelect == LAMP_ONE){
		GpioInitPin(LAMP_ONE_BASE, LAMP_ONE_PIN, PIN_OUT);
	}
	else{
		//donothingfornow
	}
	InternalLampStates[LampSelect] = LampInitState;
}
void LampSetState(LampSelectT LampSelect, LampStateT LampState){
	InternalLampStates[LampSelect] = LampState;
}
BtnStateT LampGetState(LampSelectT LampSelect){
	return InternalLampStates[LampSelect];
}
void LampUpdate(void ){
	if (InternalLampStates[LAMP_ONE] == LAMP_ON){
		GpioWritePin(LAMP_ONE_BASE, LAMP_ONE_PIN, PIN_HIGH);
	}
	else{
		GpioWritePin(LAMP_ONE_BASE, LAMP_ONE_PIN, PIN_LOW);
	}
}

