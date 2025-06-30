#include "mzm/update_input.h"
#include "mzm/gba.h"
#include "mzm/structs/game_state.h"
#include "mzm/types.h"

#include "mzm_include.h"

/**
 * @brief 968 | 38 | Updates the input
 *
 */
void UpdateInput(void)
{
    u16 keys;

    keys = KEY_MASK & ~read16(REG_KEY_INPUT);
    gChangedInput = keys & ~gPreviousButtonInput;
    gButtonInput = keys;
    gPreviousButtonInput = keys;
}
