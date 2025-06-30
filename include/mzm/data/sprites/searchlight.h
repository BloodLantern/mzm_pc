#ifndef SEARCHLIGHT_DATA_H
#define SEARCHLIGHT_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "oam.h"

extern const u32 sSearchlightGfx[172];
extern const u16 sSearchlightPal[16];

extern const struct FrameData sSearchlightOam_Moving[7];
extern const struct FrameData sSearchlightOam_Unused[5];

#ifdef __cplusplus
}
#endif

#endif /* SEARCHLIGHT_DATA_H */
