
#include "KeyPadApp.h"
static KeypadT KeypadHandler;

void KeypadAppInit(void){
	KeypadHandler.ColsPort = BASE_C;
	KeypadHandler.ColsPosition = PIN_FOUR;
	KeypadHandler.RowsPort = BASE_C;
	KeypadHandler.RowsPosition = PIN_ZERO;
	KeypadInit( &KeypadHandler);
}

void KeypadAppUpdate(void){
	KeypadUpdate();
}

uint8_t KeypadAppGetkey(void){
	return KeypadGetKey( &KeypadHandler);
}
