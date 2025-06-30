#ifndef POWER_BOMB_EXPLOSION_H
#define POWER_BOMB_EXPLOSION_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

void PowerBombExplosionProcess(void);
void PowerBombExplosionStart(u16 xPosition, u16 yPosition, u8 owner);

#ifdef __cplusplus
}
#endif

#endif /* POWER_BOMB_EXPLOSION_H */
