#ifndef IN_GAME_CUTSCENE_CONSTANTS_H
#define IN_GAME_CUTSCENE_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

enum InGameCutsceneScene {
    IGC_CLOSE_UP = 4,
    IGC_LONG_BEAM_HINT = 7,
    IGC_GETTING_VARIA = 9,
    IGC_GETTING_FULLY_POWERED,

    IGC_END = 32
};

#define IGC_STARTED_FLAG 0x80
#define IGC_NO_STARTED_FLAG 0x7F

enum BackgroundFlash {
    BG_FLASH_SLIGHT_YELLOW,
    BG_FLASH_CHOZO_LONG_TRANSPARENCY,
    BG_FLASH_HEAVY_YELLOW,
    BG_FLASH_QUICK_YELLOW,
};

#ifdef __cplusplus
}
#endif

#endif
