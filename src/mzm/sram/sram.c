#include "mzm/sram/sram.h"

#include "mzm/gba.h"
#include "mzm/io.h"

#include "mzm_include.h"

static const char sSramVersion[] = "SRAM_V113";

static void SramWriteUncheckedInternal(u8 *src, u8 *dest, u32 size)
{
    while (size-- != 0) {
        *dest++ = *src++;
    }
}

void SramWriteUnchecked(u8 *src, u8 *dest, u32 size)
{
    SramWriteUncheckedInternal(src, dest, size);
}

void SramWrite(u8 *src, u8 *dest, u32 size)
{
    u16 w = read16(REG_WAITCNT) & ~WAIT_SRAM_CYCLES_MASK | WAIT_SRAM_8CYCLES;
    write16(REG_WAITCNT, w);

    while (size-- != 0) {
        *dest++ = *src++;
    }
}

static u8* SRAMCheckInternal(u8 *src, u8 *dest, u32 size)
{
    while (size-- != 0) {
        if (*dest++ != *src++) {
            return dest - 1;
        }
    }

    return NULL;
}

u8* SramCheck(u8 *src, u8 *dest, u32 size)
{
    return SRAMCheckInternal(src, dest, size);
}

u8* SramWriteChecked(u8 *src, u8 *dest, u32 size)
{
    u8 *diff = NULL;
    u8 i;

    for (i = 0; i < 3; ++i) {
        SramWrite(src, dest, size);
        diff = SramCheck(src, dest, size);
        if (!diff) {
            break;
        }
    }

    return diff;
}
