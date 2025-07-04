#ifndef STATUS_SCREEN_CONSTANTS_H
#define STATUS_SCREEN_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

#define ITEM_TOGGLE_CHECKING 0
#define ITEM_TOGGLE_TOGGLING 1
#define ITEM_TOGGLE_CHECKING2 2

#define BOMB_ACTIVATION_COLLECTED          (1 << 0)
#define BOMB_ACTIVATION_ACTIVATED          (1 << 1)
#define BOMB_ACTIVATION_HAS_AMMO_REMAINING (1 << 2)
#define BOMB_ACTIVATION_MORPH_ACTIVATED    (1 << 3)

#define MISSILE_ACTIVATION_COLLECTED          (1 << 0)
#define MISSILE_ACTIVATION_HAS_AMMO_REMAINING (1 << 1)

#ifdef DEBUG
#define PAUSE_DEBUG_EVENTS_PER_SCREEN 20
#endif // DEBUG

enum AbilityGroup {
    ABILITY_GROUP_BEAMS,
    ABILITY_GROUP_BOMBS,
    ABILITY_GROUP_SUITS,
    ABILITY_GROUP_MISC,

    ABILITY_GROUP_STATUS_GROUPS_END,

    ABILITY_GROUP_MISSILES = ABILITY_GROUP_STATUS_GROUPS_END,
    ABILITY_GROUP_CURRENT_ENERGY,
    ABILITY_GROUP_MAX_ENERGY,
    ABILITY_GROUP_CURRENT_MISSILES,
    ABILITY_GROUP_MAX_MISSILES,
    ABILITY_GROUP_CURRENT_SUPER_MISSILES,
    ABILITY_GROUP_MAX_SUPER_MISSILES,
    ABILITY_GROUP_CURRENT_POWER_BOMBS,
    ABILITY_GROUP_MAX_POWER_BOMBS,

    ABILITY_GROUP_END
};

enum FullyPoweredItems {
    FULLY_POWERED_ITEMS_CHECK_ENABLE_SUIT,
    FULLY_POWERED_ITEMS_DELAY,
    FULLY_POWERED_ITEMS_CHECK_NEXT_SLOT,
    FULLY_POWERED_ITEMS_ACTIVATE_NORMAL_SLOT,
    FULLY_POWERED_ITEMS_SEARCH_FOR_UNKNOWN_ITEM,
    FULLY_POWERED_ITEMS_ENABLE_UNKNOWN_ITEM_INIT,
    FULLY_POWERED_ITEMS_UNKNOWN_ITEM_ACTIVATING_ANIMATION_PART1,
    FULLY_POWERED_ITEMS_UNKNOWN_ITEM_ACTIVATING_ANIMATION_PART2,
    FULLY_POWERED_ITEMS_ENABLE_UNKNOWN_ITEM,
    FULLY_POWERED_ITEMS_UNKNOWN_ITEM_DESCRIPTION,
    FULLY_POWERED_ITEMS_FINISH,
    FULLY_POWERED_ITEMS_END,
};

enum StatusSlots {
    STATUS_SLOT_0, // TODO: is this none or energy?

    STATUS_SLOT_BEAM,

    STATUS_SLOT_LONG_BEAM = STATUS_SLOT_BEAM,
    STATUS_SLOT_CHARGE_BEAM,
    STATUS_SLOT_ICE_BEAM,
    STATUS_SLOT_WAVE_BEAM,
    STATUS_SLOT_PLASMA_BEAM,

    STATUS_SLOT_MISSILE,

    STATUS_SLOT_NORMAL_MISSILE = STATUS_SLOT_MISSILE,
    STATUS_SLOT_SUPER_MISSILE,

    STATUS_SLOT_BOMB,

    STATUS_SLOT_NORMAL_BOMB = STATUS_SLOT_BOMB,
    STATUS_SLOT_POWER_BOMB,

    STATUS_SLOT_SUIT,

    STATUS_SLOT_VARIA = STATUS_SLOT_SUIT,
    STATUS_SLOT_GRAVITY,

    STATUS_SLOT_MISC,

    STATUS_SLOT_MORPH_BALL = STATUS_SLOT_MISC,
    STATUS_SLOT_POWER_GRIP,
    STATUS_SLOT_SPEED_BOOSTER,
    STATUS_SLOT_HIGH_JUMP,
    STATUS_SLOT_SCREW_ATTACK,
    STATUS_SLOT_SPACE_JUMP,

    STATUS_SLOT_END
};

enum StatusScreenBeamAbilityOffset {
    STATUS_SCREEN_BEAM_OFFSET_LONG,
    STATUS_SCREEN_BEAM_OFFSET_CHARGE,
    STATUS_SCREEN_BEAM_OFFSET_ICE,
    STATUS_SCREEN_BEAM_OFFSET_WAVE,
    STATUS_SCREEN_BEAM_OFFSET_PLASMA,

    STATUS_SCREEN_BEAM_OFFSET_END
};

enum StatusScreenMissileAbilityOffset {
    STATUS_SCREEN_MISSILE_OFFSET_NORMAL,
    STATUS_SCREEN_MISSILE_OFFSET_SUPER,

    STATUS_SCREEN_MISSILE_OFFSET_END
};

enum StatusScreenBombAbilityOffset {
    STATUS_SCREEN_BOMB_OFFSET_NORMAL,
    STATUS_SCREEN_BOMB_OFFSET_POWER,

    STATUS_SCREEN_BOMB_OFFSET_END
};

enum StatusScreenSuitAbilityOffset {
    STATUS_SCREEN_SUIT_OFFSET_VARIA,
    STATUS_SCREEN_SUIT_OFFSET_GRAVITY,

    STATUS_SCREEN_SUIT_OFFSET_END
};

enum StatusScreenMiscAbilityOffset {
    STATUS_SCREEN_MISC_OFFSET_MORPH_BALL,
    STATUS_SCREEN_MISC_OFFSET_POWER_GRIP,
    STATUS_SCREEN_MISC_OFFSET_SPEED_BOOSTER,
    STATUS_SCREEN_MISC_OFFSET_HIGH_JUMP,
    STATUS_SCREEN_MISC_OFFSET_SCREW_ATTACK,
    STATUS_SCREEN_MISC_OFFSET_SPACE_JUMP,

    STATUS_SCREEN_MISC_OFFSET_END
};

#ifdef DEBUG
enum PauseDebugGroup {
    PAUSE_DEBUG_GROUP_BEAM,
    PAUSE_DEBUG_GROUP_BOMB,
    PAUSE_DEBUG_GROUP_SUIT,
    PAUSE_DEBUG_GROUP_MISC,
    PAUSE_DEBUG_GROUP_CURRENT_ENERGY,
    PAUSE_DEBUG_GROUP_MAX_ENERGY,
    PAUSE_DEBUG_GROUP_CURRENT_MISSILES,
    PAUSE_DEBUG_GROUP_MAX_MISSILES,
    PAUSE_DEBUG_GROUP_CURRENT_SUPER_MISSILES,
    PAUSE_DEBUG_GROUP_MAX_SUPER_MISSILES,
    PAUSE_DEBUG_GROUP_CURRENT_POWER_BOMBS,
    PAUSE_DEBUG_GROUP_MAX_POWER_BOMBS,
    PAUSE_DEBUG_GROUP_GET_MAP,
    PAUSE_DEBUG_GROUP_S_EVENT,
    PAUSE_DEBUG_GROUP_EQUIP_TANK,
    PAUSE_DEBUG_GROUP_TIME,
    PAUSE_DEBUG_GROUP_SAVE,
    PAUSE_DEBUG_GROUP_DOOR_UNLOCK,
    PAUSE_DEBUG_GROUP_WRITE_DEMO_RAM,
    PAUSE_DEBUG_GROUP_LANGUAGE,
    PAUSE_DEBUG_GROUP_DIFFICULTY,
    PAUSE_DEBUG_GROUP_SUIT_TYPE,

    PAUSE_DEBUG_GROUP_END
};
#endif // DEBUG

#ifdef __cplusplus
}
#endif

#endif
