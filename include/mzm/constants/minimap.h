#ifndef MINIMAP_CONSTANTS_H
#define MINIMAP_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

enum MinimapUpdate {
    MINIMAP_UPDATE_FLAG_NONE,
    MINIMAP_UPDATE_FLAG_UPPER_LINE,
    MINIMAP_UPDATE_FLAG_MIDDLE_LINE,
    MINIMAP_UPDATE_FLAG_LOWER_LINE,

    MINIMAP_UPDATE_FLAG_END
};

#define MINIMAP_TILE_BACKGROUND 0x140

#ifdef __cplusplus
}
#endif

#endif
