#include "mzm/data/sprites/falling_chozo_pillar.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const u32 sFallingChozoPillarGfx[219] = INCBIN_U32("data/sprites/FallingChozoPillar.gfx.lz");
const u16 sFallingChozoPillarPal[16] = INCBIN_U16("data/sprites/FallingChozoPillar.pal");

const u16 sFallingChozoPillarOAM_Falling_Frame0[OAM_DATA_SIZE(8)] = {
    0x8,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1e0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x0, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1e0, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x0, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd0, OBJ_SIZE_32x16 | 0x1e0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xd0, OBJ_SIZE_32x16 | 0x0, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xc0, OBJ_SIZE_32x16 | 0x1e0, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xc0, OBJ_SIZE_32x16 | 0x0, OBJ_SPRITE_OAM | 0x204
};

const struct FrameData sFallingChozoPillarOAM_Falling[2] = {
    [0] = {
        .pFrame = sFallingChozoPillarOAM_Falling_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};
