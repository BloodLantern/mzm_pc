#ifndef SOFT_RESET_H
#define SOFT_RESET_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"

u32 SoftResetSubroutine(void);
void SoftResetInit(void);
void SoftResetVBlank(void);
void SoftResetVBlank_Empty(void);

#ifdef __cplusplus
}
#endif

#endif /* SOFT_RESET_H */
