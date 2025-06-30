#ifndef CROCOMIRE_AI_H
#define CROCOMIRE_AI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "types.h"

enum CrocomirePart {
    CROCOMIRE_PART_RIGHT_ARM,
    CROCOMIRE_PART_HEAD,
    CROCOMIRE_PART_LEGS,
    CROCOMIRE_PART_BODY,
    CROCOMIRE_PART_TONGUE,
    CROCOMIRE_PART_LEFT_ARM,

    CROCOMIRE_PART_END
};

void Crocomire(void);
void CrocomirePart(void);

#ifdef __cplusplus
}
#endif

#endif /* CROCOMIRE_AI_H */
