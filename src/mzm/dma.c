#include "mzm/dma.h"
#include "mzm/gba.h"

#include <memory.h>

#include "mzm_include.h"

struct DMA {
    const void* pSrc;
    void* pDst;
    u32 control;
};

/**
 * @brief 31e4 | d0 | Peform DMA transfer
 *
 * @param channel The DMA channel to perform the transfer on
 * @param src The pointer to the source
 * @param dst The pointer to the destination
 * @param len The number of bytes to transfer
 * @param bitSize The number of bits per transfer, either 16 or 32
 */
void DmaTransfer(u8 channel, void *src, void *dst, u32 len, u8 bitSize)
{
    memcpy(dst, src, len);
}

void DmaSet(u8 channel, const void* src, void* dst, u32 cnt)
{
    u32 len = cnt & 0xFFFF;
    u8 bitSize = cnt & DMA_32BIT >> 16 ? 32 : 16;

    if (bitSize == 16)
        len *= 2;
    else if (bitSize == 32)
        len *= 4;

    if (cnt >> 16 & DMA_SRC_FIXED)
        BitFill(channel, *(u32*)src, dst, len, bitSize);
    else
        DmaTransfer(channel, src, dst, len, bitSize);
}

void BitFill(int dma_channel, u32 value, void *dst, u32 len, u8 bit_size)
{
    memset(dst, value, len);
}
