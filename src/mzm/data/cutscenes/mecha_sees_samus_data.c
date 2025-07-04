#include "mzm/data/cutscenes/mecha_sees_samus_data.h"
#include "mzm/cutscenes/mecha_sees_samus.h"
#include "mzm/gba.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const struct CutscenePageData sMechaRidleySeesSamusPagesData[1] = {
    [0] = {
        .graphicsPage = 2,
        .tiletablePage = 0x1F,
        .priority = 0,
        .bg = DCNT_BG0,
        .screenSize = 0
    }
};

const struct OamArray sMechaSeesSamusCutsceneOam[5] = {
    [0] = {
        .pOam = sMechaSeesSamusOAM_FocusingEye,
        .preAction = OAM_ARRAY_PRE_ACTION_NONE
    },
    [1] = {
        .pOam = sMechaSeesSamusOAM_OpeningEye,
        .preAction = OAM_ARRAY_PRE_ACTION_RESET_FRAME
    },
    [2] = {
        .pOam = sMechaSeesSamusOAM_OpeningEye,
        .preAction = OAM_ARRAY_PRE_ACTION_KILL_AFTER_END
    },
    [3] = {
        .pOam = sMechaSeesSamusOAM_FocusingEye,
        .preAction = OAM_ARRAY_PRE_ACTION_RESET_FRAME
    },
    [4] = {
        .pOam = sMechaSeesSamusOAM_FocusingEye,
        .preAction = OAM_ARRAY_PRE_ACTION_LOOP_ON_LAST_FRAME
    },
};

const u16 sMechaSeesSamusOAM_FocusingEye_Frame0[OAM_DATA_SIZE(36)] = {
    0x24,
    0xb8, OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0x5,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0xd,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x8d,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x105,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x109,
    0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x10d,
    0xb8, OBJ_X_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0x5,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0xd,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x8d,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x105,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x109,
    0xf8, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x10d,
    0x8, OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0x5,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0xd,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x8d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x105,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x109,
    0x0, OBJ_Y_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x10d,
    0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0x5,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0xd,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x8d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x105,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x109,
    0x0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x0, OBJ_SPRITE_OAM | 0x10d,
    0x8, OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0x5,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0xd,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x8d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x105,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x109,
    0x0, OBJ_Y_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x10d,
    0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0x5,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0xd,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x8d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x105,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x109,
    0x0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x0, OBJ_SPRITE_OAM | 0x10d
};

const u16 sMechaSeesSamusOAM_FocusingEye_Frame1[OAM_DATA_SIZE(36)] = {
    0x24,
    0xb8, OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0xe,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x16,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x96,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x10e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x112,
    0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x116,
    0xb8, OBJ_X_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0xe,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x16,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x96,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x10e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x112,
    0xf8, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x116,
    0x8, OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0xe,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x16,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x96,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x10e,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x112,
    0x0, OBJ_Y_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x116,
    0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0xe,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x16,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x96,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x10e,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x112,
    0x0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x0, OBJ_SPRITE_OAM | 0x116,
    0x8, OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0xe,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x16,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x96,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x10e,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x112,
    0x0, OBJ_Y_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x116,
    0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0xe,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x16,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x96,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x10e,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x112,
    0x0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x0, OBJ_SPRITE_OAM | 0x116
};

const u16 sMechaSeesSamusOAM_FocusingEye_Frame2[OAM_DATA_SIZE(24)] = {
    0x18,
    0xb8, OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0x17,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x1f,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x9f,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x117,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x11b,
    0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x11f,
    0xb8, OBJ_X_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0x17,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x1f,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x9f,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x117,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x11b,
    0xf8, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x11f,
    0x8, OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x1b8, OBJ_SPRITE_OAM | 0x17,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x1f,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x1f8, OBJ_SPRITE_OAM | 0x9f,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x117,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x11b,
    0x0, OBJ_Y_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x11f,
    0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_64x64 | 0x8, OBJ_SPRITE_OAM | 0x17,
    OBJ_SHAPE_VERTICAL | 0x28, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x1f,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_8x32 | 0x0, OBJ_SPRITE_OAM | 0x9f,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x117,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x8, OBJ_SPRITE_OAM | 0x11b,
    0x0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x0, OBJ_SPRITE_OAM | 0x11f
};

const u16 sMechaSeesSamusOAM_OpeningEye_Frame0[OAM_DATA_SIZE(23)] = {
    0x17,
    0xb8, OBJ_SIZE_64x64 | 0x1d8, OBJ_SPRITE_OAM | 0x11c4,
    0xf8, OBJ_SIZE_64x64 | 0x1d8, OBJ_SPRITE_OAM | 0x12c4,
    OBJ_SHAPE_HORIZONTAL | 0x38, OBJ_SIZE_32x16 | 0x1d8, OBJ_SPRITE_OAM | 0x13c4,
    OBJ_SHAPE_HORIZONTAL | 0x38, OBJ_SIZE_32x16 | 0x1f8, OBJ_SPRITE_OAM | 0x13c8,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_32x64 | 0x1b8, OBJ_SPRITE_OAM | 0x1240,
    0x18, OBJ_SIZE_32x32 | 0x1b8, OBJ_SPRITE_OAM | 0x1340,
    OBJ_SHAPE_HORIZONTAL | 0x38, OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x13c0,
    OBJ_SHAPE_HORIZONTAL | 0xd0, 0x1c0, OBJ_SPRITE_OAM | 0x1221,
    0xd0, 0x1d0, OBJ_SPRITE_OAM | 0x1223,
    OBJ_SHAPE_HORIZONTAL | 0xc8, 0x1c8, OBJ_SPRITE_OAM | 0x1202,
    0xc0, 0x1d0, OBJ_SPRITE_OAM | 0x11e3,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_16x32 | 0x18, OBJ_SPRITE_OAM | 0x11cc,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x18, OBJ_SPRITE_OAM | 0x124c,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_SIZE_16x32 | 0x18, OBJ_SPRITE_OAM | 0x12cc,
    OBJ_SHAPE_VERTICAL | 0x18, OBJ_SIZE_16x32 | 0x18, OBJ_SPRITE_OAM | 0x134c,
    0x38, OBJ_SIZE_16x16 | 0x18, OBJ_SPRITE_OAM | 0x13cc,
    OBJ_SHAPE_VERTICAL | 0xc0, OBJ_SIZE_16x32 | 0x28, OBJ_SPRITE_OAM | 0x11ee,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x28, OBJ_SPRITE_OAM | 0x126e,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_SIZE_16x32 | 0x28, OBJ_SPRITE_OAM | 0x12ee,
    OBJ_SHAPE_VERTICAL | 0x20, OBJ_SIZE_16x32 | 0x28, OBJ_SPRITE_OAM | 0x136e,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x38, OBJ_SPRITE_OAM | 0x1230,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_16x32 | 0x38, OBJ_SPRITE_OAM | 0x12b0,
    OBJ_SHAPE_VERTICAL | 0x10, OBJ_SIZE_16x32 | 0x38, OBJ_SPRITE_OAM | 0x1330
};

const u16 sMechaSeesSamusOAM_OpeningEye_Frame1[OAM_DATA_SIZE(30)] = {
    0x1e,
    0xb8, OBJ_SIZE_64x64 | 0x1c8, OBJ_SPRITE_OAM | 0x11d4,
    0xf8, OBJ_SIZE_64x64 | 0x1c8, OBJ_SPRITE_OAM | 0x12d4,
    OBJ_SHAPE_HORIZONTAL | 0x38, OBJ_SIZE_32x16 | 0x1d0, OBJ_SPRITE_OAM | 0x13d5,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1b8, OBJ_SPRITE_OAM | 0x1212,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x1b8, OBJ_SPRITE_OAM | 0x1292,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_SIZE_16x32 | 0x1b8, OBJ_SPRITE_OAM | 0x1312,
    OBJ_SHAPE_HORIZONTAL | 0x28, 0x1b8, OBJ_SPRITE_OAM | 0x1392,
    0x38, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x13d9,
    OBJ_SHAPE_VERTICAL | 0x38, 0x0, OBJ_SPRITE_OAM | 0x13db,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_16x32 | 0x8, OBJ_SPRITE_OAM | 0x11dc,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x8, OBJ_SPRITE_OAM | 0x125c,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_16x32 | 0x18, OBJ_SPRITE_OAM | 0x11de,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x28, OBJ_SPRITE_OAM | 0x1180,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x20, OBJ_SPRITE_OAM | 0x125e,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_SIZE_16x32 | 0x20, OBJ_SPRITE_OAM | 0x12de,
    OBJ_SHAPE_VERTICAL | 0x18, OBJ_SIZE_16x32 | 0x20, OBJ_SPRITE_OAM | 0x135e,
    0x38, OBJ_SIZE_16x16 | 0x20, OBJ_SPRITE_OAM | 0x13de,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x10, OBJ_SPRITE_OAM | 0x129c,
    0x8, OBJ_SIZE_16x16 | 0x10, OBJ_SPRITE_OAM | 0x131c,
    OBJ_SHAPE_VERTICAL | 0x18, OBJ_SIZE_16x32 | 0x10, OBJ_SPRITE_OAM | 0x135c,
    0x38, OBJ_SIZE_16x16 | 0x10, OBJ_SPRITE_OAM | 0x13dc,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x30, OBJ_SPRITE_OAM | 0x112e,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x40, OBJ_SPRITE_OAM | 0x1130,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x30, OBJ_SPRITE_OAM | 0x11ae,
    0xf8, 0x40, OBJ_SPRITE_OAM | 0x11b0,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_SIZE_16x32 | 0x30, OBJ_SPRITE_OAM | 0x1131,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_SIZE_8x32 | 0x40, OBJ_SPRITE_OAM | 0x1133,
    OBJ_SHAPE_HORIZONTAL | 0x20, 0x30, OBJ_SPRITE_OAM | 0x11b1,
    0x20, 0x40, OBJ_SPRITE_OAM | 0x11b3,
    0x28, OBJ_SIZE_16x16 | 0x30, OBJ_SPRITE_OAM | 0x1134
};

const u16 sMechaSeesSamusOAM_OpeningEye_Frame2[OAM_DATA_SIZE(31)] = {
    0x1f,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x30, OBJ_SPRITE_OAM | 0x1002,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_8x32 | 0x40, OBJ_SPRITE_OAM | 0x1004,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_SIZE_16x32 | 0x30, OBJ_SPRITE_OAM | 0x1082,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_SIZE_8x32 | 0x40, OBJ_SPRITE_OAM | 0x1084,
    0x28, OBJ_SIZE_16x16 | 0x30, OBJ_SPRITE_OAM | 0x1102,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_SIZE_16x32 | 0x20, OBJ_SPRITE_OAM | 0x1040,
    OBJ_SHAPE_VERTICAL | 0x18, OBJ_SIZE_16x32 | 0x20, OBJ_SPRITE_OAM | 0x10c0,
    0x38, OBJ_SIZE_16x16 | 0x20, OBJ_SPRITE_OAM | 0x1140,
    0x38, 0x18, OBJ_SPRITE_OAM | 0x1001,
    OBJ_SHAPE_HORIZONTAL | 0xb8, OBJ_SIZE_64x32 | 0x1c8, OBJ_SPRITE_OAM | 0x1123,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_16x32 | 0x8, OBJ_SPRITE_OAM | 0x112b,
    OBJ_SHAPE_VERTICAL | 0xb8, OBJ_SIZE_8x32 | 0x18, OBJ_SPRITE_OAM | 0x112d,
    OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x8 | 0x1c8, OBJ_SPRITE_OAM | 0x11a3,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1e8, OBJ_SPRITE_OAM | 0x11a7,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x8 | 0x1d0, OBJ_SPRITE_OAM | 0x11a9,
    0xc0, 0x20, OBJ_SPRITE_OAM | 0x11a1,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_16x32 | 0x1b8, OBJ_SPRITE_OAM | 0x1136,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_8x32 | 0x1c8, OBJ_SPRITE_OAM | 0x1138,
    OBJ_SHAPE_HORIZONTAL | 0x10, 0x1b8, OBJ_SPRITE_OAM | 0x11b6,
    0x10, 0x1c8, OBJ_SPRITE_OAM | 0x11b8,
    0x8, OBJ_SIZE_16x16 | 0x1d0, OBJ_SPRITE_OAM | 0x1199,
    OBJ_SHAPE_HORIZONTAL | 0x10, 0x1e0, OBJ_SPRITE_OAM | 0x11bb,
    0x20, OBJ_SIZE_32x32 | 0x1d8, OBJ_SPRITE_OAM | 0x113c,
    OBJ_SHAPE_HORIZONTAL | 0x40, OBJ_SIZE_32x8 | 0x1d8, OBJ_SPRITE_OAM | 0x11bc,
    0x20, OBJ_SIZE_16x16 | 0x1c8, OBJ_SPRITE_OAM | 0x113a,
    0x20, OBJ_SIZE_16x16 | 0x1b8, OBJ_SPRITE_OAM | 0x1138,
    0x30, OBJ_SIZE_16x16 | 0x1c8, OBJ_SPRITE_OAM | 0x117a,
    OBJ_SHAPE_HORIZONTAL | 0x18, 0x1d8, OBJ_SPRITE_OAM | 0x11f0,
    0x18, 0x1e8, OBJ_SPRITE_OAM | 0x11f2,
    OBJ_SHAPE_HORIZONTAL | 0x18, OBJ_SIZE_32x8 | 0x1b8, OBJ_SPRITE_OAM | 0x11ce,
    0x18, 0x1f0, OBJ_SPRITE_OAM | 0x11b5
};


const struct FrameData sMechaSeesSamusOAM_FocusingEye[4] = {
    [0] = {
        .pFrame = sMechaSeesSamusOAM_FocusingEye_Frame0,
        .timer = CONVERT_SECONDS(1.f / 6)
    },
    [1] = {
        .pFrame = sMechaSeesSamusOAM_FocusingEye_Frame1,
        .timer = CONVERT_SECONDS(2.f / 15)
    },
    [2] = {
        .pFrame = sMechaSeesSamusOAM_FocusingEye_Frame2,
        .timer = CONVERT_SECONDS(1.f / 6)
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sMechaSeesSamusOAM_OpeningEye[4] = {
    [0] = {
        .pFrame = sMechaSeesSamusOAM_OpeningEye_Frame0,
        .timer = CONVERT_SECONDS(1.f / 6)
    },
    [1] = {
        .pFrame = sMechaSeesSamusOAM_OpeningEye_Frame1,
        .timer = CONVERT_SECONDS(2.f / 15)
    },
    [2] = {
        .pFrame = sMechaSeesSamusOAM_OpeningEye_Frame2,
        .timer = CONVERT_SECONDS(1.f / 30)
    },
    [3] = FRAME_DATA_TERMINATOR
};

const u32 sMechaSeesSamusMetalGfx[2382] = INCBIN_U32("data/cutscenes/MechaSeesSamus/Metal.gfx.lz");
const u32 sMechaSeesSamusCoverEyeGfx[2671] = INCBIN_U32("data/cutscenes/MechaSeesSamus/EyeCover.gfx.lz");
const u16 sMechaSeesSamusPal[10 * 16] = INCBIN_U16("data/cutscenes/MechaSeesSamus/Palette.pal");
const u32 sMechaSeesSamusCoverMetalTileTable[368] = INCBIN_U32("data/cutscenes/MechaSeesSamus/Metal.tt");
