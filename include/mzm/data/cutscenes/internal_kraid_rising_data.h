#ifndef INTERNAL_KRAID_RISING_DATA_H
#define INTERNAL_KRAID_RISING_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/structs/cutscene.h"
#include "mzm/cutscenes/kraid_rising.h"

// 75fe5c

extern const u16 sKraidRisingPuffData[KRAID_RISING_PUFF_AMOUNT][4];

extern const u16 sKraidRisingDebrisSpawnXPosition[KRAID_RISING_DEBRIS_AMOUNT];

extern const struct CutsceneSubroutineData sKraidRisingSubroutineData[4];

// 75fee0

#ifdef __cplusplus
}
#endif

#endif /* INTERNAL_KRAID_RISING_DATA_H */
