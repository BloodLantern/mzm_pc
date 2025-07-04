#ifndef BLOCK_DATA_H
#define BLOCK_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

#include "mzm/constants/block.h"
#include "mzm/constants/clipdata.h"
#include "mzm/constants/connection.h"
#include "mzm/constants/game_state.h"

#include "mzm/structs/block.h"
#include "mzm/structs/connection.h"

extern const struct TankList sNumberOfTanksPerArea[MAX_AMOUNT_OF_AREAS];

extern const struct TankList sStartingHealthAmmo;

extern const struct TankList sTankIncreaseAmount[DIFF_END];

extern const u16 sClipdataAffectingActionDamageTypes[CAA_COUNT];

extern const struct BlockBehavior sBlockBehaviors[MAX_AMOUNT_OF_BLOCKS];

extern const u16 sBlockWeaknesses[BLOCK_TYPE_COUNT];

extern const u16 sReformingBlocksTilemapValue[BLOCK_TYPE_COUNT];

extern const u8 sBrokenBlocksTimers[BLOCK_TYPE_COUNT][13];

extern const struct BombChainReverseData sBombChainReverseData[8];

extern const struct TankBehavior sTankBehaviors[MAX_AMOUNT_OF_TANK_TYPES];

extern const u16 sHatchBehaviors[HATCH_COUNT][2];

extern const u16 sBldalphaValuesForClipdata[11];

extern const s8 sSubBombChainPositionOffset[4][4];

extern const u8 sBlockTouchOffsets[4][2];

extern const u16 sMotherBrainGlassBreakingBaseTilemapValues[5];

#ifdef __cplusplus
}
#endif

#endif
