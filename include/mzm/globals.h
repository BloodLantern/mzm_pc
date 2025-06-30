#ifndef GLOBALS_H
#define GLOBALS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

extern u16 gInterruptCode[0x100];

extern void *sp_sys;
extern void *sp_irq;
extern Func_T intr_vector[13];
extern u16 (*gIntrCodePointer)[0x100];

extern u16 gInterruptCheckFlag;

#ifdef __cplusplus
}
#endif

#endif /* GLOBALS_H */
