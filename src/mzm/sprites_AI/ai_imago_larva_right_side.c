#include "mzm/sprites_AI/imago_larva_right_side.h"
#include "mzm/macros.h"

#include "mzm/data/sprites/imago_larva_right_side.h"

#include "mzm/constants/audio.h"
#include "mzm/constants/sprite.h"

#include "mzm/structs/sprite.h"

#include "mzm_include.h"

#define IMAGO_LARVA_RIGHT_SIDE_POSE_IDLE 0x9

/**
 * @brief 412a8 | 11c | Imago larva (right side) AI
 *
 */
void ImagoLarvaRightSide(void)
{
    gCurrentSprite.ignoreSamusCollisionTimer = DELTA_TIME;

    if (gCurrentSprite.pose == SPRITE_POSE_UNINITIALIZED)
    {
        gCurrentSprite.status |= SPRITE_STATUS_IGNORE_PROJECTILES;

        gCurrentSprite.hitboxTop = -PIXEL_SIZE;
        gCurrentSprite.hitboxBottom = PIXEL_SIZE;
        gCurrentSprite.hitboxLeft = -PIXEL_SIZE;
        gCurrentSprite.hitboxRight = PIXEL_SIZE;

        gCurrentSprite.drawDistanceTop = SUB_PIXEL_TO_PIXEL(BLOCK_SIZE * 3);
        gCurrentSprite.drawDistanceBottom = SUB_PIXEL_TO_PIXEL(HALF_BLOCK_SIZE);
        gCurrentSprite.drawDistanceHorizontal = SUB_PIXEL_TO_PIXEL(BLOCK_SIZE * 3);

        gCurrentSprite.samusCollision = SSC_NONE;

        gCurrentSprite.pOam = sImagoLarvaRightSideOam;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.animationDurationCounter = 0;

        gCurrentSprite.pose = IMAGO_LARVA_RIGHT_SIDE_POSE_IDLE;
    }

    if (gCurrentSprite.animationDurationCounter == 1)
    {
        switch (gCurrentSprite.currentAnimationFrame)
        {
            case 0:
                SoundPlay(SOUND_IMAGO_LARVA_RIGHT_SIDE_SHAKING);
                break;

            case 11:
            case 15:
            case 19:
            case 23:
            case 27:
            case 31:
                SoundPlay(SOUND_IMAGO_LARVA_RIGHT_SIDE_CORE_BEATING);
        }
    }
}
