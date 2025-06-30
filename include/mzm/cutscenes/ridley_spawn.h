#ifndef RIDLEY_SPAWN_CUTSCENE
#define RIDLEY_SPAWN_CUTSCENE

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/structs/cutscene.h"

enum RidleySpawnOamId {
    RIDLEY_SPAWN_OAM_ID_RIDLEY_FLYING_REFLECTION = 1,
    RIDLEY_SPAWN_OAM_ID_RIDLEY_FLYING,
    RIDLEY_SPAWN_OAM_ID_RIDLEY_SCREAMING,
    RIDLEY_SPAWN_OAM_ID_SAMUS,

    RIDLEY_SPAWN_OAM_ID_END
};

u8 RidleySpawnRidleyFlyingIn(void);
void RidleySpawnUpdateRidley(struct CutsceneOamData* pOam);
u8 RidleySpawnHelmetReflection(void);
u8 RidleySpawnSamusLookingUp(void);
u8 RidleySpawnInit(void);
u8 RidleySpawnSubroutine(void);
void RidleySpawnProcessOAM(void);

#ifdef __cplusplus
}
#endif

#endif /* RIDLEY_SPAWN_CUTSCENE */
