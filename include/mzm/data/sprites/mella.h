#ifndef MELLA_DATA_H
#define MELLA_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const s16 sMellaIdleYMovement[65];

extern const s16 sMellaIdleXMovement[49];

extern const u16 sMellaGoingDownYMovement[6];

extern const u16 sMellaGoingUpYMovement[7];

extern const u16 sMellaMovingXMovement[7];

extern const u32 sMellaGfx[162];
extern const u16 sMellaPal[16];

extern const struct FrameData sMellaOam_Idle[9];
extern const struct FrameData sMellowOAM_Moving[9];

#ifdef __cplusplus
}
#endif

#endif /* MELLA_DATA_H */
