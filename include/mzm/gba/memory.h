#ifndef GBA_MEMORY_H
#define GBA_MEMORY_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

#define PAL_ROW (16)
#define PAL_ROW_SIZE (PAL_ROW * 2)
#define COLORS_IN_PAL (16 * PAL_ROW)
#define PAL_SIZE (COLORS_IN_PAL * 2)
#define PALRAM_SIZE (PAL_SIZE * 2)

#define VRAM_BG_SIZE (0x10000)
#define VRAM_OBJ_SIZE (0x8000)

#define EWRAM_SIZE (256 * 0x400)
extern u8 gEwramBuffer[EWRAM_SIZE];
#define EWRAM_BASE gEwramBuffer

#define IWRAM_SIZE (32 * 0x400)
extern u8 gIwramBuffer[IWRAM_SIZE];
#define IWRAM_BASE gIwramBuffer

extern u8 gRegBuffer[0x3FE];
#define REG_BASE gRegBuffer

extern u8 gPalramBuffer[PALRAM_SIZE];
#define PALRAM_BASE gPalramBuffer
#define PALRAM_OBJ (&gPalramBuffer[sizeof(gPalramBuffer) / 2])

#define VRAM_SIZE (96 * 0x400)
extern u8 gVramBuffer[VRAM_SIZE];
#define VRAM_BASE gVramBuffer
#define VRAM_OBJ (gVramBuffer + 0x10000)

#define OAM_SIZE 0x400
extern u8 gOamBuffer[OAM_SIZE];
#define OAM_BASE gOamBuffer

#define SRAM_SIZE (32 * 0x400)
extern u8 gSramBuffer[SRAM_SIZE];
#define SRAM_BASE gSramBuffer

#define ROM_BASE (void *)0x08000000
#define ROM_SIZE (32 * 0x100000)

#ifdef __cplusplus
}
#endif

#endif /* GBA_MEMORY_H */
