#include "mzm/data/internal_chozodia_escape_data.h"
#include "mzm/macros.h"
#include "mzm/chozodia_escape.h"

#include "mzm_include.h"

const ChozodiaEscapeFunc_T sChozodiaEscapeFunctionPointers[5] = {
    [0] = ChozodiaEscapeShipLeaving,
    [1] = ChozodiaEscapeShipHeatingUp,
    [2] = ChozodiaEscapeShipBlowingUp,
    [3] = ChozodiaEscapeShipLeavingPlanet,
    [4] = ChozodiaEscapeMissionAccomplished,
};
