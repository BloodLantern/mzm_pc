#ifndef ANIMATED_GFX_DATA_H
#define ANIMATED_GFX_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/structs/animated_graphics.h"
#include "mzm/constants/animated_graphics.h"

extern const struct AnimatedGraphicsData sAnimatedGraphicsEntries[ANIMATED_GFX_ID_END];
extern const u8 sAnimatedTilesetEntries[8][48];
extern const struct AnimatedPaletteTiming sAnimatedPaletteTiming_Empty;
extern const struct AnimatedPaletteData sAnimatedPaletteEntries[ANIMATED_PALETTE_ID_END];

extern const struct BackgroundEffectColorData sBackgroundEffectColorData[BACKGROUND_EFFECT_END];

extern const u16 sBackgroundEffectBehavior_Lightning[34][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];
extern const u16 sBackgroundEffectBehavior_QuickFlash[12][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];
extern const u16 sBackgroundEffectBehavior_SlightYellow[21][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];
extern const u16 sBackgroundEffectBehavior_HeavyYellow[20][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];
extern const u16 sBackgroundEffectBehavior_ExitZebes[30][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];
extern const u16 sBackgroundEffectBehavior_IntroText[30][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];
extern const u16 sBackgroundEffectBehavior_AllBlackWhite[39][BACKGROUND_EFFECT_BEHAVIOR_FIELD_END];

#ifdef __cplusplus
}
#endif

#endif /* ANIMATED_GFX_DATA_H */
