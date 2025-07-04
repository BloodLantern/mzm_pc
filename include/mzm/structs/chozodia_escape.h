#ifndef CHOZODIA_ESCAPE_STRUCT_H
#define CHOZODIA_ESCAPE_STRUCT_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

#define CHOZODIA_ESCAPE_DATA sNonGameplayRamPointer->chozodiaEscape

#define CHOZODIA_ESCAPE_MAX_OBJECTS 5

#define CHOZODIA_ESCAPE_OAM_BLUE_SHIP 0
#define CHOZODIA_ESCAPE_OAM_MOTHER_SHIP_DOOR 1
#define CHOZODIA_ESCAPE_OAM_SHIP_EXTERIOR 2
#define CHOZODIA_ESCAPE_OAM_MISSION_ACCOMPLISHED 4

#define CHOZODIA_ESCAPE_OAM_TYPE_NONE 0
#define CHOZODIA_ESCAPE_OAM_TYPE_NORMAL 1
#define CHOZODIA_ESCAPE_OAM_TYPE_SCALING 2

struct ChozodiaEscapeData {
    u8 stage;
    u8 unk_1;
    u8 unk_2;
    u16 timer;

    u8 oamTypes[CHOZODIA_ESCAPE_MAX_OBJECTS];
    const u16* oamPointers[CHOZODIA_ESCAPE_MAX_OBJECTS];
    u8 oamFrames[CHOZODIA_ESCAPE_MAX_OBJECTS];
    u8 oamTimers[CHOZODIA_ESCAPE_MAX_OBJECTS];
    u16 oamXPositions[CHOZODIA_ESCAPE_MAX_OBJECTS];
    u16 oamYPositions[CHOZODIA_ESCAPE_MAX_OBJECTS];
    u8 unk_3E[CHOZODIA_ESCAPE_MAX_OBJECTS];

    s16 oamXOffset;
    u8 padding_46[8];
    s16 oamYOffset;

    u8 padding_51[18];
    u16 scaling;
    u8 padding_64[8];

    u8 hblankCode[128];
    u16 explosionHazeValues[2][160];
    u16 explosionSemiMinorAxis;
    u8 hazeBufferWritingId;
    u8 hazeBufferReadingId;

    u16 dispcnt;
    u16 bldcnt;
    u16 monochromePalette[16 * 16];
};

#ifdef __cplusplus
}
#endif

#endif /* CHOZODIA_ESCAPE_STRUCT_H */
