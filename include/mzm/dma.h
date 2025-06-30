#ifndef DMA_H
#define DMA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

void DmaTransfer(u8 channel, const void *src, void *dst, u32 len, u8 bitSize);
void BitFill(int dma_channel, u32 value, void *dst, u32 len, u8 bit_size);

#ifdef __cplusplus
}
#endif

#endif /* DMA_H */
