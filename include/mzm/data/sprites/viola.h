#ifndef VIOLA_DATA_H
#define VIOLA_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sViolaBlueGfx[302];
extern const u16 sViolaBluePal[16];
extern const u32 sViolaOrangeGfx[305];
extern const u16 sViolaOrangePal[16];

extern const struct FrameData sViolaOam_Moving[17];
extern const struct FrameData sViolaOam_MovingOffsetUp[17];
extern const struct FrameData sViolaOam_MovingOffsetRight[17];
extern const struct FrameData sViolaOam_MovingOffsetDown[17];

#ifdef __cplusplus
}
#endif

#endif /* VIOLA_DATA_H */
