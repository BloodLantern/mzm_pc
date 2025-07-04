#include "mzm/types.h"
#include "mzm/macros.h"

#include "mzm/audio.h"
#include "mzm/audio/track_internal.h"

#include "mzm_include.h"

const struct TrackGroupROMData sMusicTrackDataRom[9] = {
    [0] = {
        .pTrack = &gTrackData0,
        .pVariables = gTrack0Variables,
        .maxAmountOfTracks = 12,
        .unk_A = 1
    },
    [1] = {
        .pTrack = &gTrackData1,
        .pVariables = gTrack1Variables,
        .maxAmountOfTracks = 10,
        .unk_A = 1
    },
    [2] = {
        .pTrack = &gTrackData2,
        .pVariables = gTrack2Variables,
        .maxAmountOfTracks = 2,
        .unk_A = 1
    },
    [3] = {
        .pTrack = &gTrackData3,
        .pVariables = gTrack3Variables,
        .maxAmountOfTracks = 2,
        .unk_A = 0
    },
    [4] = {
        .pTrack = &gTrackData4,
        .pVariables = gTrack4Variables,
        .maxAmountOfTracks = 2,
        .unk_A = 1
    },
    [5] = {
        .pTrack = &gTrackData5,
        .pVariables = gTrack5Variables,
        .maxAmountOfTracks = 2,
        .unk_A = 1
    },
    [6] = {
        .pTrack = &gTrackData6,
        .pVariables = gTrack6Variables,
        .maxAmountOfTracks = 3,
        .unk_A = 0
    },
    [7] = {
        .pTrack = &gTrackData7,
        .pVariables = gTrack7Variables,
        .maxAmountOfTracks = 1,
        .unk_A = 1
    },
    [8] = {
        .pTrack = &gTrackData8,
        .pVariables = gTrack8Variables,
        .maxAmountOfTracks = 6,
        .unk_A = 1
    }
};
