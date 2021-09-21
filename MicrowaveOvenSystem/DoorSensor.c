
#include "DoorSensor.h"

void DoorSensInit(void ){
	BtnInit(BTN_DOOR, BTN_RELEASED);
}

DoorStateT DoorSensGetState(void ){
	return BtnGetState(BTN_DOOR);
}

void DoorSensUpdate(void ){
	BtnUpdate();	
}


