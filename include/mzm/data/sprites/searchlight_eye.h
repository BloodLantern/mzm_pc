#ifndef SEARCHLIGHT_EYE_DATA_H
#define SEARCHLIGHT_EYE_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "oam.h"

extern const u32 sSearchlightEyeGfx[177];
extern const u16 sSearchlightEyePal[16];

extern const struct FrameData sSearchlightEyeOam_Idle[13];
extern const struct FrameData sSearchlightEyeBeamOAM_Idle[5];
extern const struct FrameData sSearchlightEyeBeamOAM_Unused[2];
extern const struct FrameData sSearchlightEyeProjectileOAM_Moving[9];
extern const struct FrameData sSearchlightEyeOam_Shooting[4];

#ifdef __cplusplus
}
#endif

#endif /* SEARCHLIGHT_EYE_DATA_H */
