#ifndef ENTER_TOURIAN_DATA_H
#define ENTER_TOURIAN_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/structs/cutscene.h"

extern const struct CutscenePageData sEnterTourianPageData[2];
extern const struct OamArray sEnterTourianOam[7];

extern const u16 sEnterTourianOAM_SpacePirate_Frame0[16];

extern const struct FrameData sEnterTourianOAM_Empty[1];

extern const u16 sEnterTourianBackgroundPal[10 * 16];
extern const u16 sEnterTourianMetroidPal[6 * 16];
extern const u32 sEnterTourianBackgroundGfx[3110];
extern const u32 sEnterTourianForegroundGfx[2483];
extern const u32 sEnterTourianDeadSpacePirateGfx_1[55];
extern const u32 sEnterTourianDeadSpacePirateGfx_2[77];
extern const u32 sEnterTourianDeadSpacePirateGfx_3[32];
extern const u32 sEnterTourianBackgroundTileTable[385];
extern const u32 sEnterTourianForegroundTileTable[385];

#ifdef __cplusplus
}
#endif

#endif /* ENTER_TOURIAN_DATA_H */
