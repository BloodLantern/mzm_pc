#ifndef RINKA_DATA_H
#define RINKA_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sRinkaOrangeGfx[242];
extern const u16 sRinkaOrangePal[16];
extern const u32 sRinkaGreenGfx[242];
extern const u16 sRinkaGreenPal[16];

extern const struct FrameData sRinkaOrangeOam_Spawning[16];
extern const struct FrameData sRinkaOrangeOam_Moving[5];

extern const struct FrameData sRinkaGreenOam_Spawning[16];
extern const struct FrameData sRinkaGreenOam_Moving[5];

#ifdef __cplusplus
}
#endif

#endif /* RINKA_DATA_H */
