#ifndef IN_GAME_CUTSCENE_STRUCT_H
#define IN_GAME_CUTSCENE_STRUCT_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

typedef u32 (*InGameCutsceneFunc_T)(u8, u8);

struct SuitFlashEffect {
    u8 left;
    u8 right;
    u8 top;
    u8 bottom;
    u8 timer; // Changed but never read
};

struct InGameCutscene {
    u16 timer;
    u8 stage;
    u8 cutsceneNumber;
    u8 queuedCutscene;
    u8 unknown;
    InGameCutsceneFunc_T pSubroutine;
};

struct InGameCutsceneData {
    u8 unk_0;
    u8 area;
    InGameCutsceneFunc_T pSubroutine;
};

extern struct InGameCutscene gInGameCutscene;
extern struct SuitFlashEffect gSuitFlashEffect;

extern u32 gInGameCutscenesTriggered[1];

#ifdef __cplusplus
}
#endif

#endif /* IN_GAME_CUTSCENE_STRUCT_H */
