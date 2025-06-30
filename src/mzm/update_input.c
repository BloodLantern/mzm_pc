#include "mzm/update_input.h"
#include "mzm/gba.h"
#include "mzm/structs/game_state.h"
#include "mzm/types.h"

#include "mzm_include.h"
#include "mzm_input.hpp"

/**
 * @brief 968 | 38 | Updates the input
 *
 */
void UpdateInput(void)
{
    u16 keys = 0;
    UpdateInputModern(&keys);

    gChangedInput = keys & ~gPreviousButtonInput;
    gButtonInput = keys;
    gPreviousButtonInput = keys;
}
