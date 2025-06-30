#ifndef AREA_BANNER_DATA_H
#define AREA_BANNER_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "oam.h"

extern const u32 sAreaBannerGfx[65];
extern const u16 sAreaBannerPal[16];
extern const u16 sAreaBannerLocationTextPal[16];

extern const struct FrameData sAreaBannerOam_StaticMiddle[2];

extern const struct FrameData sAreaBannerOam_SpawnMiddle[9];

extern const struct FrameData sAreaBannerOam_RemovingMiddle[9];

extern const struct FrameData sAreaBannerOam_StaticBottom[2];

extern const struct FrameData sAreaBannerOam_SpawnBottom[8];

extern const struct FrameData sAreaBannerOam_RemovingBottom[8];

#ifdef __cplusplus
}
#endif

#endif /* AREA_BANNER_DATA_H */
