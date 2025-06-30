#ifndef INTERNAL_RIDLEY_IN_SPACE_DATA_H
#define INTERNAL_RIDLEY_IN_SPACE_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/structs/cutscene.h"
#include "mzm/cutscenes/ridley_in_space.h"

extern const struct Coordinates sRidleyInSpaceShipLeavingPosition;
extern const struct Coordinates sRidleyInSpaceShipsStartPosition[RIDLEY_INSPACE_SHIP_SLOT_END];

extern const s8 sRidleyInSpaceShipsYMovementOffsets[8];

extern const struct CutsceneSubroutineData sRidleyInSpaceSubroutineData[6];

#ifdef __cplusplus
}
#endif

#endif /* INTERNAL_RIDLEY_IN_SPACE_DATA_H */
