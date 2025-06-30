#ifndef IMAGO_LARVA_AI_H
#define IMAGO_LARVA_AI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"
#include "structs/sprite.h"

enum ImagoLarvaPart {
    IMAGO_LARVA_PART_CLAWS,
    IMAGO_LARVA_PART_RIGHT_DOT,
    IMAGO_LARVA_PART_MIDDLE_DOT,
    IMAGO_LARVA_PART_LEFT_DOT,
    IMAGO_LARVA_PART_SHELL,
    IMAGO_LARVA_PART_LARVA,

    IMAGO_LARVA_PART_END
};

void ImagoLarva(void);
void ImagoLarvaPart(void);

#ifdef __cplusplus
}
#endif

#endif /* IMAGO_LARVA_AI_H */
