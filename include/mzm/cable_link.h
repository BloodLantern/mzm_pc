#ifndef CABLE_LINK_H
#define CABLE_LINK_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"

u8 FusionGalleryConnectProcess(void);
void CableLinkDrawErrorStr(const u8* str, u16* dst, u8 palette);

#ifdef __cplusplus
}
#endif

#endif /* CABLE_LINK_H */
