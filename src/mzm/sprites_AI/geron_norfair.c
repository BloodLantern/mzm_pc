#include "mzm/sprites_AI/geron_norfair.h"
#include "mzm/sprites_AI/geron.h"
#include "mzm/macros.h"

#include "mzm/data/sprites/geron_norfair.h"

#include "mzm/constants/sprite.h"
#include "mzm/constants/event.h"
#include "mzm/constants/clipdata.h"

#include "mzm/structs/sprite.h"
#include "mzm/structs/clipdata.h"

#include "mzm_include.h"

/**
 * 40178 | b8 | Geron Norfair AI
 *
 */
void GeronNorfair(void)
{
    u8 caa;
    u16 yPosition;
    u16 xPosition;

    gCurrentSprite.ignoreSamusCollisionTimer = DELTA_TIME;

    if (gCurrentSprite.pose == SPRITE_POSE_UNINITIALIZED)
    {
        if (EventFunction(EVENT_ACTION_CHECKING, EVENT_POWER_GRIP_OBTAINED))
        {
            gCurrentSprite.status = 0;
            return;
        }

        gCurrentSprite.drawDistanceTop = SUB_PIXEL_TO_PIXEL(BLOCK_SIZE * 3);
        gCurrentSprite.drawDistanceBottom = SUB_PIXEL_TO_PIXEL(0);
        gCurrentSprite.drawDistanceHorizontal = SUB_PIXEL_TO_PIXEL(BLOCK_SIZE + QUARTER_BLOCK_SIZE);

        gCurrentSprite.hitboxTop = -(BLOCK_SIZE * 3);
        gCurrentSprite.hitboxBottom = 0;
        gCurrentSprite.hitboxLeft = -(THREE_QUARTER_BLOCK_SIZE);
        gCurrentSprite.hitboxRight = THREE_QUARTER_BLOCK_SIZE;

        gCurrentSprite.drawOrder = 5;

        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.samusCollision = SSC_NONE;

        gCurrentSprite.pose = GERON_POSE_IDLE;
        gCurrentSprite.health = 1;
        gCurrentSprite.pOam = sGeronNorfairOAM_Idle;

        yPosition = gCurrentSprite.yPosition - HALF_BLOCK_SIZE;
        xPosition = gCurrentSprite.xPosition;

        caa = CAA_MAKE_NON_POWER_GRIP;

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition, xPosition);

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition - BLOCK_SIZE, xPosition);

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition - BLOCK_SIZE * 2, xPosition);
    }
}
