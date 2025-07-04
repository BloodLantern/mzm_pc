#ifndef SPRITE_UTIL_CONSTANTS_H
#define SPRITE_UTIL_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

#define NSLR_OUT_OF_RANGE 0x0
#define NSLR_LEFT 0x4
#define NSLR_RIGHT 0x8

#define NSAB_OUT_OF_RANGE 0x0
#define NSAB_ABOVE 0x1
#define NSAB_BELOW 0x2

#define NSFB_OUT_OF_RANGE 0x0
#define NSFB_IN_FRONT 0x3
#define NSFB_BEHIND 0xC

enum DamageContactType {
    DCT_NONE,
    DCT_SHINESPARK,
    DCT_SPEEDBOOSTER,
    DCT_SCREW_ATTACK,
    DCT_SUDO_SCREW,

    DCT_END
};

enum SpriteDeathType {
    DEATH_NORMAL,
    DEATH_RESPAWNING,
    DEATH_NO_DEATH_OR_RESPAWNING_ALREADY_HAS_DROP
};

enum SplashSize {
    SPLASH_NONE,
    SPLASH_SMALL,
    SPLASH_BIG,
    SPLASH_HUGE,
};

#define SPRITE_COLLISION_FLAG_NONE      0
#define SPRITE_COLLISION_FLAG_ON_TOP    (1 << 0)
#define SPRITE_COLLISION_FLAG_ON_BOTTOM (1 << 1)
#define SPRITE_COLLISION_FLAG_ON_LEFT   (1 << 2)
#define SPRITE_COLLISION_FLAG_ON_RIGHT  (1 << 3)

#ifdef __cplusplus
}
#endif

#endif
