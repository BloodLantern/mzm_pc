#ifndef STATUE_OPENING_CUTSCENE
#define STATUE_OPENING_CUTSCENE

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/structs/cutscene.h"

enum StatueOpeningOamId {
    STATUE_OPENING_OAM_ID_KRAID_IDLE = 1,
    STATUE_OPENING_OAM_ID_KRAID_ACTIVATING,
    STATUE_OPENING_OAM_ID_KRAID_ACTIVATED,
    STATUE_OPENING_OAM_ID_KRAID_OPENED,
    STATUE_OPENING_OAM_ID_RIDLEY_IDLE,
    STATUE_OPENING_OAM_ID_RIDLEY_ACTIVATING,
    STATUE_OPENING_OAM_ID_RIDLEY_ACTIVATED,
    STATUE_OPENING_OAM_ID_RIDLEY_OPENED,

    STATUE_OPENING_OAM_ID_END
};

u8 StatueOpeningOpening(void);
u8 StatueOpeningInit(void);
u8 StatueOpeningSubroutine(void);
void StatueOpeningProcessOAM(void);

#ifdef __cplusplus
}
#endif

#endif /* STATUE_OPENING_CUTSCENE */
