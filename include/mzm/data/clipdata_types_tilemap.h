#ifndef CLIPDATA_TYPES_TILEMAP_H
#define CLIPDATA_TYPES_TILEMAP_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/constants/clipdata.h"

extern const u16 sClipdataBehaviorTypes_Tilemap[CLIPDATA_TILEMAP_END];
extern const u8 sClipdataCollisionTypes_Tilemap[CLIPDATA_TILEMAP_END];

extern const u16 sCommonTilemap[832];
extern const u8 sClipdataCollisionTypes_Test[CLIPDATA_TEST_END];
extern const u16 sClipdataBehaviorTypes_Test[CLIPDATA_TEST_END];

#ifdef __cplusplus
}
#endif

#endif /* CLIPDATA_TYPES_TILEMAP_H */
