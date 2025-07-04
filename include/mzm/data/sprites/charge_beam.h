#ifndef CHARGE_BEAM_DATA_H
#define CHARGE_BEAM_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const s16 sChargeBeamIdleYMovement[66];

extern const u32 sChargeBeamGfx[243];
extern const u16 sChargeBeamPal[16];

extern const struct FrameData sChargeBeamOam_Visible[5];

extern const struct FrameData sChargeBeamOam_Spawning[13];

extern const struct FrameData sChargeBeamGlowOam_Idle[15];

#ifdef __cplusplus
}
#endif

#endif
