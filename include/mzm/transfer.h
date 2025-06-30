#ifndef TRANSFER_H
#define TRANSFER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

u32 TransferProcessSend(u32 size, const u32* pData);
void TransferReloadTransfer(void);
void TransferExchangeData(void);

#ifdef __cplusplus
}
#endif

#endif /* TRANSFER_H */
