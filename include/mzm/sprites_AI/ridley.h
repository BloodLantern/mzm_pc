#ifndef RIDLEY_AI_H
#define RIDLEY_AI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

enum RidleyPart {
    RIDLEY_PART_LEFT_WING,
    RIDLEY_PART_HEAD,
    RIDLEY_PART_BODY,
    RIDLEY_PART_CLAW,
    RIDLEY_PART_TAIL,
    RIDLEY_PART_RIGHT_WING,

    RIDLEY_PART_END
};

enum RidleyTailPart {
    RIDLEY_TAIL_PART_BODY_ATTACHMENT,
    RIDLEY_TAIL_PART_RIGHT_LEFT,
    RIDLEY_TAIL_PART_RIGHT_MIDDLE,
    RIDLEY_TAIL_PART_RIGHT_MOST,
    RIDLEY_TAIL_PART_LEFT_RIGHT,
    RIDLEY_TAIL_PART_LEFT_MIDDLE,
    RIDLEY_TAIL_PART_LEFT_MOST,
    RIDLEY_TAIL_PART_TIP,

    RIDLEY_TAIL_PART_END
};

void Ridley(void);
void RidleyTail(void);
void RidleyPart(void);
void RidleyFireball(void);

#ifdef __cplusplus
}
#endif

#endif /* RIDLEY_AI_H */
