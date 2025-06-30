#ifndef CLIPDATA_TYPES_H
#define CLIPDATA_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "constants/clipdata.h"

extern const u8 sClipdataCollisionTypes[CLIPDATA_END];
extern const u16 sClipdataBehaviorTypes[CLIPDATA_END];

extern const u8 sCommonTilesGfx[4096];
extern const u8 sCommonTilesMothershipGfx[4096];

#ifdef __cplusplus
}
#endif

#endif /* CLIPDATA_TYPES_H */
