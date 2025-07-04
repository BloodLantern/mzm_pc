#ifndef CLIPDATA_DATA_H
#define CLIPDATA_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

#include "mzm/constants/connection.h"
#include "mzm/constants/room.h"

#include "mzm/structs/clipdata.h"
#include "mzm/structs/scroll.h"

extern const u16 sMovementClipdataValues[16];
extern const u16 sHazardsDefinitions[EFFECT_HAZARD_END][2];
extern const u16 sHazardClipdataValues[4];
extern const u8 sGroundEffectsClipdataValues[8];
extern const struct ElevatorPair sElevatorRoomPairs[ELEVATOR_ROUTE_COUNT];
extern const u8 sScroll_Empty[11];
extern const struct CameraScrollVelocityCaps sScrollVelocityCaps[SCROLL_VELOCITY_CAP_END];

#ifdef __cplusplus
}
#endif

#endif /* CLIPDATA_DATA_H */
