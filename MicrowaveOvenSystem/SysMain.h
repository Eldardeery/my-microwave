

#ifndef SYSMAIN_H_
#define SYSMAIN_H_
#include "MicroWave.h"

typedef enum{
    SYSTEM_STOPPED,
    SYSTEM_PAUSED,
    SYSTEM_RUNNING
}SysStateT;

void SysMainApp(void);


#endif /* SYSMAIN_H_ */
