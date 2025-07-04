#include "mzm/data/rooms/ridley_rooms_data.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const u8 sRidley_5_Clipdata[112] = INCBIN_U8("data/rooms/ridley/Ridley_5_Clipdata.gfx");

const u8 sRidley_5_Spriteset2[ENEMY_ROOM_DATA_ARRAY_SIZE(11)] = {
	3, 11, SPRITESET_IDX(3),
	3, 16, SPRITESET_IDX(0),
	3, 17, SPRITESET_IDX(0),
	3, 22, SPRITESET_IDX(3),
	5, 15, SPRITESET_IDX(0),
	5, 18, SPRITESET_IDX(1),
	6, 15, SPRITESET_IDX(0),
	6, 18, SPRITESET_IDX(0),
	8, 16, SPRITESET_IDX(0),
	8, 17, SPRITESET_IDX(0),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sRidley_5_Bg2[80] = INCBIN_U8("data/rooms/ridley/Ridley_5_Bg2.gfx");

const u8 sRidley_5_Spriteset1[ENEMY_ROOM_DATA_ARRAY_SIZE(15)] = {
	3, 11, SPRITESET_IDX(3),
	3, 16, SPRITESET_IDX(1),
	3, 17, SPRITESET_IDX(1),
	3, 22, SPRITESET_IDX(3),
	4, 15, SPRITESET_IDX(1),
	4, 18, SPRITESET_IDX(1),
	5, 15, SPRITESET_IDX(1),
	5, 18, SPRITESET_IDX(1),
	6, 15, SPRITESET_IDX(1),
	6, 18, SPRITESET_IDX(1),
	7, 15, SPRITESET_IDX(1),
	7, 18, SPRITESET_IDX(1),
	8, 16, SPRITESET_IDX(1),
	8, 17, SPRITESET_IDX(1),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sRidley_5_Bg1[252] = INCBIN_U8("data/rooms/ridley/Ridley_5_Bg1.gfx");

const u8 sRidley_5_Spriteset0[ENEMY_ROOM_DATA_ARRAY_SIZE(15)] = {
	3, 11, SPRITESET_IDX(3),
	3, 16, SPRITESET_IDX(1),
	3, 17, SPRITESET_IDX(0),
	3, 22, SPRITESET_IDX(3),
	4, 15, SPRITESET_IDX(0),
	4, 18, SPRITESET_IDX(0),
	5, 15, SPRITESET_IDX(0),
	5, 18, SPRITESET_IDX(1),
	6, 15, SPRITESET_IDX(0),
	6, 18, SPRITESET_IDX(0),
	7, 15, SPRITESET_IDX(1),
	7, 18, SPRITESET_IDX(0),
	8, 16, SPRITESET_IDX(0),
	8, 17, SPRITESET_IDX(0),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sRidley_5_Bg0[113] = INCBIN_U8("data/rooms/ridley/Ridley_5_Bg0.gfx");
