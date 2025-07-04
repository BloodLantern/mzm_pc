#include "mzm/data/sprites/gekitai_machine.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const u32 sGekitaiMachineGfx[364] = INCBIN_U32("data/sprites/GekitaiMachine.gfx.lz");
const u16 sGekitaiMachinePal[80] = INCBIN_U16("data/sprites/GekitaiMachine.pal");

const s16 sGekitaiMachine_array_2f1c7c[96] = {
    4097, 4098, 4099, 4100, 4101, 4102, 4103, 4104, 4105, 4106,
    4107, 4108, 4109, 4110, 4111, 3856, 3600, 3344, 3088, 2832,
    2576, 2320, 2064, 1808, 1552, 1296, 1040, 784, 528, 272, 16,
    0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
    2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
    -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2,
    -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, SHORT_MAX
};

const s16 sGekitaiMachine_array_2f1d3c[82] = {
    0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7,
    7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2,
    1, 1, 0, 0, 0, 0, -1,-1, -2, -2, -3, -3, -4, -4, -4,
    -5, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -7, -6,
    -6, -6, -5, -5, -5, -4, -4, -4, -3, -3, -2, -2, -1,
    -1, 0, 0, SHORT_MAX
};
