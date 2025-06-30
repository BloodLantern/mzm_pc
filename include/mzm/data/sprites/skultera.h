#ifndef SKULTERA_DATA_H
#define SKULTERA_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "oam.h"

extern const u32 sSkulteraGfx[285];
extern const u16 sSkulteraPal[16];

extern const struct FrameData sSkulteraOam_Idle[5];
extern const struct FrameData sSkulteraOam_TurningAround[9];
extern const struct FrameData sSkulteraOam_ChasingSamus[5];

#ifdef __cplusplus
}
#endif

#endif /* SKULTERA_DATA_H */
