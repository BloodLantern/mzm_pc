#ifndef MULTIBOOT_H
#define MULTIBOOT_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "structs/multiboot.h"

void MultiBootInit(struct MultiBootData* pMultiBoot);
u32 MultiBootMain(struct MultiBootData* pMultiBoot);
void MultiBootStartProbe(struct MultiBootData* pMultiBoot);
void MultiBootStartParent(struct MultiBootData* pMultiBoot, const u8* src, s32 length, u8 palette_color, s8 palette_speed);
u32 MultiBootCheckComplete(struct MultiBootData* pMultiBoot);

#ifdef __cplusplus
}
#endif

#endif /* MULTIBOOT_H */
