#ifndef PISTON_DATA_H
#define PISTON_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sPistonGfx[179];
extern const u16 sPistonPal[16];

extern const struct FrameData sPistonOam_Idle[5];

extern const struct FrameData sPistonOam_Opening[9];

extern const struct FrameData sPistonOam_Opened[2];

#ifdef __cplusplus
}
#endif

#endif /* PISTON_DATA_H */
