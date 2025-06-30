#ifndef ZEB_DATA_H
#define ZEB_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sZebPinkGfx[162];
extern const u16 sZebPinkPal[16];
extern const u32 sZebBlueGfx[162];
extern const u16 sZebBluePal[16];

extern const struct FrameData sZebOam_Idle[5];
extern const struct FrameData sZebOam_Moving[5];

#ifdef __cplusplus
}
#endif

#endif /* ZEB_DATA_H */
