#ifndef INTERNAL_BOOT_DEBUG_DATA_H
#define INTERNAL_BOOT_DEBUG_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/constants/cutscene.h"

#ifdef DEBUG

extern const u8* const sBootDebugCutsceneBTextPointers[CUTSCENE_END];
extern const u8* const sBootDebugCutsceneATextPointers[2];
extern const u8* const sBootDebugDemoStateTextPointers[5];

extern u8 sBootDebugTextToggleColors[2][2];

#endif /* DEBUG */

#ifdef __cplusplus
}
#endif

#endif /* INTERNAL_BOOT_DEBUG_DATA_H */
