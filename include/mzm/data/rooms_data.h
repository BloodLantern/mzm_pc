#ifndef DOORS_DATA_H
#define DOORS_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/structs/connection.h"
#include "mzm/structs/room.h"

extern const u8 sEnemyRoomData_Empty[3];

extern const struct TilesetEntry sTilesetEntries[79];

extern const struct Door sBrinstarDoors[99];

extern const struct Door sKraidDoors[107];

extern const struct Door sNorfairDoors[133];

extern const struct Door sRidleyDoors[77];

extern const struct Door sTourianDoors[44];

extern const struct Door sCrateriaDoors[53];

extern const struct Door sChozodiaDoors[246];

extern const struct Door sTest123Doors[24];

extern const struct Door sTestDoors[2];

extern const struct RoomEntryROM sBrinstarRoomEntries[42];

extern const struct RoomEntryROM sKraidRoomEntries[42];

extern const struct RoomEntryROM sNorfairRoomEntries[57];

extern const struct RoomEntryROM sRidleyRoomEntries[33];

extern const struct RoomEntryROM sTourianRoomEntries[20];

extern const struct RoomEntryROM sCrateriaRoomEntries[22];

extern const struct RoomEntryROM sChozodiaRoomEntries[99];

extern const struct RoomEntryROM sTest1RoomEntries[5];

extern const struct RoomEntryROM sTest2RoomEntries[5];

extern const struct RoomEntryROM sTest3RoomEntries[5];

extern const struct RoomEntryROM sTestRoomEntries[1];

#ifdef __cplusplus
}
#endif

#endif /* DOORS_DATA_H */
