#ifndef SKREE_DATA_H
#define SKREE_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const s16 sSkreeFallingSpeed[8];

extern const u32 sSkreeGreenGfx[264];
extern const u16 sSkreeGreenPal[16];
extern const u32 sSkreeBlueGfx[264];
extern const u16 sSkreeBluePal[16];

extern const struct FrameData sSkreeOam_Idle[5];
extern const struct FrameData sSkreeOam_Spinning[6];
extern const struct FrameData sSkreeOam_GoingDown[5];
extern const struct FrameData sSkreeOam_Crashing[5];
extern const struct FrameData sSkreeOam_CrashingUnused[5];
extern const struct FrameData sSkreeOam_CrashingUnused2[6];
extern const struct FrameData sSkreeOam_CrashingUnused3[5];
extern const struct FrameData sSkreeOam_CrashingUnused4[5];

extern const struct FrameData sSkreeExplosionOAM_GoingDown[4];
extern const struct FrameData sSkreeExplosionOAM_GoingUp[4];

#ifdef __cplusplus
}
#endif

#endif /* SKREE_DATA_H */
