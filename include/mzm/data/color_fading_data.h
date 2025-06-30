#ifndef COLOR_FADING_DATA_H
#define COLOR_FADING_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/structs/color_effects.h"
#include "mzm/constants/color_fading.h"

// Temp
extern const u8 sDoorTransitionTilemap[184];

extern const struct ColorFadingData sColorFadingData[COLOR_FADING_END];

extern const struct ColorFadingColorInfo sColorFadingColorInfo[5];

#ifdef __cplusplus
}
#endif

#endif /* COLOR_FADING_DATA_H */
