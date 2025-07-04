#include "mzm/data/rooms/norfair_rooms_data.h"
#include "mzm/macros.h"

#include "mzm_include.h"

const u8 sNorfair_4_Clipdata[507] = INCBIN_U8("data/rooms/norfair/Norfair_4_Clipdata.gfx");

const u8 sNorfair_4_Spriteset2[ENEMY_ROOM_DATA_ARRAY_SIZE(17)] = {
	4, 43, SPRITESET_IDX(1),
	8, 49, SPRITESET_IDX(0),
	9, 29, SPRITESET_IDX(0),
	9, 54, SPRITESET_IDX(3),
	10, 36, SPRITESET_IDX(1),
	11, 53, SPRITESET_IDX(1),
	12, 39, SPRITESET_IDX(0),
	12, 81, SPRITESET_IDX(1),
	14, 43, SPRITESET_IDX(0),
	14, 49, SPRITESET_IDX(1),
	15, 29, SPRITESET_IDX(0),
	17, 39, SPRITESET_IDX(1),
	18, 34, SPRITESET_IDX(3),
	18, 37, SPRITESET_IDX(1),
	18, 85, SPRITESET_IDX(2),
	22, 66, SPRITESET_IDX(4),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sNorfair_4_Bg2[63] = INCBIN_U8("data/rooms/norfair/Norfair_4_Bg2.gfx");

const u8 sNorfair_4_Spriteset1[ENEMY_ROOM_DATA_ARRAY_SIZE(14)] = {
	6, 41, SPRITESET_IDX(0),
	7, 37, SPRITESET_IDX(0),
	9, 54, SPRITESET_IDX(3),
	12, 39, SPRITESET_IDX(1),
	12, 47, SPRITESET_IDX(0),
	12, 81, SPRITESET_IDX(1),
	14, 50, SPRITESET_IDX(1),
	15, 30, SPRITESET_IDX(1),
	15, 44, SPRITESET_IDX(0),
	17, 39, SPRITESET_IDX(1),
	18, 34, SPRITESET_IDX(3),
	18, 85, SPRITESET_IDX(2),
	22, 66, SPRITESET_IDX(4),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sNorfair_4_Bg1[1198] = INCBIN_U8("data/rooms/norfair/Norfair_4_Bg1.gfx");

const u8 sNorfair_4_Spriteset0[ENEMY_ROOM_DATA_ARRAY_SIZE(7)] = {
	9, 54, SPRITESET_IDX(3),
	12, 81, SPRITESET_IDX(1),
	17, 40, SPRITESET_IDX(0),
	18, 34, SPRITESET_IDX(3),
	18, 85, SPRITESET_IDX(2),
	22, 66, SPRITESET_IDX(4),
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sNorfair_4_Bg0[402] = INCBIN_U8("data/rooms/norfair/Norfair_4_Bg0.gfx");
