#ifndef RIPPER2_DATA_H
#define RIPPER2_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sRipper2Gfx[212];
extern const u16 sRipper2Pal[16];

extern const u16 sRipper2Oam_Moving_Frame0[7];

extern const u16 sRipper2Oam_Moving_Frame1[7];

extern const u16 sRipper2Oam_Moving_Frame2[7];

extern const u16 sRipper2Oam_TurningAround_Frame0[7];

extern const u16 sRipper2Oam_TurningAround_Frame1[7];

extern const struct FrameData sRipper2Oam_Moving[5];

extern const struct FrameData sRipper2Oam_TurningAround[3];

extern const struct FrameData sRipper2Oam_TurningAroundPart2[3];

#ifdef __cplusplus
}
#endif

#endif
