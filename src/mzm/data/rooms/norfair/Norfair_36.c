#include "mzm/data/rooms/norfair_rooms_data.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const u8 sNorfair_36_Clipdata[93] = INCBIN_U8("data/rooms/norfair/Norfair_36_Clipdata.gfx");

const u8 sNorfair_36_Bg1[169] = INCBIN_U8("data/rooms/norfair/Norfair_36_Bg1.gfx");

const u8 sNorfair_36_Spriteset0[ENEMY_ROOM_DATA_ARRAY_SIZE(2)] = {
	10, 9, SPRITESET_IDX(0),
	ROOM_SPRITE_DATA_TERMINATOR
};
