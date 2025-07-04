#include "mzm/color_fading.h"

#include "mzm/constants/demo.h"
#include "mzm/constants/game_state.h"
#include "mzm/constants/color_fading.h"

#include "mzm/structs/demo.h"
#include "mzm/structs/game_state.h"
#include "mzm/structs/power_bomb_explosion.h"
#include "mzm/structs/samus.h"

#include "mzm_include.h"

/**
 * @brief 57c4c | b8 | Processes a pause button press
 *
 * @return u32 bool, doing something
 */
u32 ProcessPauseButtonPress(void)
{
    u32 doingSomething;
    u32 fade;

    doingSomething = TRUE;
    if (gPauseScreenFlag != PAUSE_SCREEN_NONE)
    {
        if (gCurrentPowerBomb.animationState | gCurrentPowerBomb.powerBombPlaced)
            doingSomething = FALSE;

        if (doingSomething == TRUE)
        {
            UpdateMusicWhenPausing();
            ColorFadingStart(COLOR_FADING_CANCEL);
            gSubGameModeStage = 0;
        }
    }
    else
    {
        if (gPreventMovementTimer || gDisablePause || gShipLandingFlag || gCurrentPowerBomb.animationState || gCurrentPowerBomb.powerBombPlaced)
            doingSomething = FALSE;

        if (doingSomething == TRUE)
        {
            gPauseScreenFlag = PAUSE_SCREEN_PAUSE_OR_CUTSCENE;
            if (gDemoState)
            {
                if (gButtonInput)
                    fade = COLOR_FADING_DEMO_ENDING_AUTO;
                else
                    fade = COLOR_FADING_DEMO_ENDING_WITH_INPUT;
            }
            else
            {
                UpdateMusicWhenPausing();
                fade = COLOR_FADING_CANCEL;
            }

            ColorFadingStart(fade);
            gSubGameModeStage = 0;
        }
    }

    return doingSomething;
}
