#ifndef SIDEHOPPER_DATA_H
#define SIDEHOPPER_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const s16 sSidehopperHighJumpVelocity[10];

extern const s16 sSidehopperLowJumpVelocity[10];

extern const u32 sSidehopperGfx[303];
extern const u16 sSidehopperPal[16];

extern const struct FrameData sSidehopperOam_Idle[5];
extern const struct FrameData sSidehopperOam_ShakingHead[9];
extern const struct FrameData sSidehopperOam_JumpWarning[6];
extern const struct FrameData sSidehopperOam_Jumping[4];
extern const struct FrameData sSidehopperOam_Landing[7];

#ifdef __cplusplus
}
#endif

#endif /* SIDEHOPPER_DATA_H */
