#include "mzm/init_helpers.h"
#include "mzm/dma.h"
#include "mzm/gba.h"
#include "mzm/globals.h"
#include "mzm/interrupts.h"
#include "mzm/dma.h"
#include "mzm/oam.h"
#include "mzm/types.h"

#include "mzm_include.h"

/**
 * @brief 9a0 | 48 | Clears all the graphics ram (VRAM, OAM, PALRAM)
 *
 */
void ClearGfxRam(void)
{
    // Clear VRAM
    BitFill(3, 0, VRAM_BASE, VRAM_SIZE, 16);

    // Clear OAM
    BitFill(3, UCHAR_MAX, OAM_BASE, OAM_SIZE, 32);

    // Clear PALRAM
    BitFill(3, 0, PALRAM_BASE, PALRAM_SIZE, 16);
}

/**
 * @brief 9e8 | 30 | Loads the interrupt code in RAM
 *
 */
void LoadInterruptCode(void)
{
}

/**
 * @brief a18 | 34 | Clears the oam buffer past the next oam slot
 *
 */
void ResetFreeOam(void)
{
    s32 i;
    u16* oam;

    // Start at the next oam slot
    oam = (u16*)&gOamData;
    oam += gNextOamSlot * sizeof(union OamData) / sizeof(*oam);

    // Write until the end of the
    for (i = gNextOamSlot; i < OAM_BUFFER_DATA_SIZE; oam++, i++)
    {
        // Part 1
        *oam++ = UCHAR_MAX;

        // Part 2
        *oam++ = UCHAR_MAX;

        // Part 3
        *oam++ = 0;
    }
}
