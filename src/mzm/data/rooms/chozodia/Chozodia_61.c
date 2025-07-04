#include "mzm/data/rooms/chozodia_rooms_data.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const u8 sChozodia_61_Clipdata[81] = INCBIN_U8("data/rooms/chozodia/Chozodia_61_Clipdata.gfx");

const u8 sChozodia_61_Bg1[173] = INCBIN_U8("data/rooms/chozodia/Chozodia_61_Bg1.gfx");

const u8 sChozodia_61_Spriteset0[ENEMY_ROOM_DATA_ARRAY_SIZE(2)] = {
	10, 9, SPRITESET_IDX(0),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sChozodia_61_Bg0[44] = INCBIN_U8("data/rooms/chozodia/Chozodia_61_Bg0.gfx");
