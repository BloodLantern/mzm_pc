#ifndef CLIPDATA_H
#define CLIPDATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/structs/clipdata.h"

// Functions

void ClipdataSetupCode(void);
u32 ClipdataProcessForSamus(u16 yPosition, u16 xPosition);
u32 ClipdataProcess(u16 yPosition, u16 xPosition);
u32 ClipdataConvertToCollision(struct CollisionData* pCollision);
s32 ClipdataCheckCurrentAffectingAtPosition(u16 yPosition, u16 xPosition);
u32 ClipdataUpdateCurrentAffecting(u16 yPosition, u16 tileY, u16 tileX, u8 unk);
u32 ClipdataCheckCantUseElevator(u32 movementClip);
u32 ClipdataCheckGroundEffect(u16 yPosition, u16 xPosition);

#ifdef __cplusplus
}
#endif

#endif /* CLIPDATA_H */
