#ifndef SHORTCUT_POINTERS_H
#define SHORTCUT_POINTERS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/temp_globals.h"
#include "mzm/structs/save_file.h"

extern union EwramData* const sEwramPointer;
extern u16* const sBgPalramPointer;
extern u16* const sObjPalramPointer;
extern u32* const sVisitedMinimapTilesPointer;
extern union NonGameplayRAM* const sNonGameplayRamPointer;
extern struct Sram* const sSramEwramPointer;
extern struct Sram* const sSramFlashPointer;

#ifdef __cplusplus
}
#endif

#endif /* SHORTCUT_POINTERS_H */
