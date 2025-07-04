#ifndef POWER_GRIP_DATA_H
#define POWER_GRIP_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sPowerGripGfx[279];
extern const u16 sPowerGripPal[32];

extern const struct FrameData sPowerGripOAM_Idle[5];
extern const struct FrameData sPowerGripGlowOAM_Idle[15];

#ifdef __cplusplus
}
#endif

#endif /* POWER_GRIP_DATA_H */
