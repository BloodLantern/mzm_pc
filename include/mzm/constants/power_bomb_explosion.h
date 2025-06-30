#ifndef POWER_BOMB_EXPLOSION_CONSTANTS_H
#define POWER_BOMB_EXPLOSION_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

enum PowerBombState {
    PB_STATE_NONE,
    PB_STATE_UNK_1,
    PB_STATE_UNK_2,
    PB_STATE_EXPLODING,
    PB_STATE_IMPLODING,
    PB_STATE_ENDING
};

#ifdef __cplusplus
}
#endif

#endif /* POWER_BOMB_EXPLOSION_CONSTANTS_H */
