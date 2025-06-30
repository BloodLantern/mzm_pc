#ifndef INTERNAL_STATUS_SCREEN_DATA_H
#define INTERNAL_STATUS_SCREEN_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/constants/event.h"

#ifdef DEBUG
extern const u8* const sPauseDebugEventNamePointers[EVENT_COUNT];
#endif // DEBUG
extern const u8 sStatusScreenGroupsDimensions[6][3];
extern const u8 sPauseScreen_7603ea[6];

#ifdef __cplusplus
}
#endif

#endif /* INTERNAL_STATUS_SCREEN_DATA_H */
