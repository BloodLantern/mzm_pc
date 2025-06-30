#include "mzm/audio.h"
#include "mzm/macros.h"
#include "mzm/gba.h"
#include "mzm/syscalls.h"
#include "mzm/audio/track_internal.h"

#include "mzm/data/audio.h"

#include "mzm/constants/audio_engine.h"

#include "mzm_include.h"

/**
 * @brief 10c4 | 394 | To document
 *
 */
void UpdateMusic(void)
{
}

/**
 * @brief 1458 | 3f8 | To document
 *
 */
void UpdatePsgSounds(void)
{
}

/**
 * @brief 1850 | 3a0 | Updates a track data
 *
 * @param pTrack Track data pointer
 */
void UpdateTrack(struct TrackData* pTrack)
{
}

/**
 * @brief 1bf0 | 28 | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1bf0(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1c18 | 24 | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1c18(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1c3c | 90 | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1c3c(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1ccc | 90 | To document
 *
 * @param pVariables Track variables pointer
 * @param param_2 To document
 */
void unk_1ccc(struct TrackVariables* pVariables, s16 param_2)
{
}

/**
 * @brief 1d5c | 1c | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1d5c(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1d78 | 64 | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1d78(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1ddc | c | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1ddc(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1de8 | 44 | To document
 *
 * @param pVariables Track variables pointer
 */
void unk_1de8(struct TrackVariables* pVariables)
{
}

/**
 * @brief 1e2c | 110 | To document
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void unk_1e2c(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 1f3c | 54 | To document
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void unk_1f3c(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 1f90 | 50 | To document
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void unk_1f90(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 1fe0 | 50 | To document
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void unk_1fe0(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 2030 | 74 | To document
 *
 * @param pSound PSG sound pointer
 * @param pVariables Track variables pointer
 * @param param_3 To document
 */
void unk_2030(struct PSGSoundData* pSound, struct TrackVariables* pVariables, u32 param_3)
{
}

/**
 * @brief 20a4 | 30 | To document
 *
 * @param pChannel Sound channel pointer
 */
void unk_20a4(struct SoundChannel* pChannel)
{
}

/**
 * @brief 20d4 | 6c | Gets the delay for a note (probably)
 *
 * @param pVariables Track variables pointer
 * @param param_2 Note?
 * @param param_3 To document
 * @return u16 Delay
 */
u16 GetNoteDelay(struct TrackVariables* pVariables, u8 param_2, u8 param_3)
{
}

/**
 * @brief 2140 | 70 | Processes the audio command FINE
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void AudioCommand_Fine(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 21b0 | 7c | To document
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void unk_21b0(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 222c | 38 | Processes the audio command PEND
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_PatternEnd(struct TrackVariables* pVariables)
{
}

/**
 * @brief 2264 | 40 | Processes the audio command REPT
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_Repeat(struct TrackVariables* pVariables)
{
}

/**
 * @brief 22a4 | 10 | Processes the audio command PRIO
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_Priority(struct TrackVariables* pVariables)
{
}

/**
 * @brief 22b4 | 18 | Processes the audio command KEYSH
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_KeyShift(struct TrackVariables* pVariables)
{
}

/**
 * @brief 22cc | c0 | Processes the audio command VOICE
 *
 * @param pTrack Track data pointer
 * @param pVariables Track variables pointer
 */
void AudioCommand_Voice(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

/**
 * @brief 238c | 14 | Processes the audio command VOL
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_Volume(struct TrackVariables* pVariables)
{
}

/**
 * @brief 23a0 | 14 | Processes the audio command PAN
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_PanPot(struct TrackVariables* pVariables)
{
}

/**
 * @brief 23b4 | 18 | Processes the audio command BEND
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_PitchBend(struct TrackVariables* pVariables)
{
}

/**
 * @brief 23cc | 18 | Processes the audio command BENDR
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_BendRange(struct TrackVariables* pVariables)
{
}

/**
 * @brief 23e0 | 10 | Processes the audio command LFOS
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_LfoSpeed(struct TrackVariables* pVariables)
{
}

/**
 * @brief 23f0 | 10 | Processes the audio command LFODL
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_LfoDelay(struct TrackVariables* pVariables)
{
}

/**
 * @brief 2400 | c | Processes the audio command MOD
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_ModulationDepth(struct TrackVariables* pVariables)
{
}

/**
 * @brief 240c | c | Processes the audio command MODT
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_ModulationType(struct TrackVariables* pVariables)
{
}

/**
 * @brief 2418 | 18 | Processes the audio command TUNE
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_Tune(struct TrackVariables* pVariables)
{
}

/**
 * @brief 2430 | 30 | Processes the audio command XCMD
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_ExtendCommand(struct TrackVariables* pVariables)
{
}

/**
 * @brief 2460 | 5c | Processes the audio command EOT
 *
 * @param pVariables Track variables pointer
 */
void AudioCommand_EndOfTie(struct TrackVariables* pVariables)
{
}

/**
 * @brief 24bc | 4 | Empty function
 *
 * @param pVariables Track variables pointer
 */
void Music_EmptyCommand(struct TrackVariables* pVariables)
{
}

/**
 * @brief 24c0 | 5c | Clears the registers for a PSG sound
 *
 * @param pSound PSG sound pointer
 * @param channel Channel
 */
void ClearRegistersForPsg(struct PSGSoundData* pSound, u8 channel)
{
}

/**
 * @brief 251c | 48 | Clears the registers for a PSG sound, unused
 *
 * @param pSound PSG sound pointer
 * @param channel Channel
 */
void ClearRegistersForPsg_Unused(struct PSGSoundData* pSound, u8 channel)
{
}

// track_internal.c

u8 InitTrack(struct TrackData* pTrack, const u32* pHeader)
{
}

void StopMusicOrSound(struct TrackData* pTrack)
{
}

void ResetTrack(struct TrackData* pTrack)
{
}

u32 unk_4cfc(struct TrackData* pTrack)
{
}

void unk_4d1c(struct TrackData* pTrack, struct TrackVariables* pVariables)
{
}

void UpdateAudio(void)
{
}

void unk_4e10(struct TrackVariables* pVariables)
{
}

void unk_4eb4(struct TrackVariables* pVariables)
{
}

void unk_4f10(struct TrackVariables* pVariables)
{
}

void unk_4f8c(struct SoundChannel* pChannel, struct TrackVariables* pVariables, s32 param_3)
{
}

void AudioCommand_Goto(struct TrackVariables* pVariables)
{
}

void AudioCommand_PatternPlay(struct TrackVariables* pVariables)
{
}

void UploadSampleToWaveRAM(const u32* pSample)
{
}

void unk_5104(struct PSGSoundData* pSound)
{
}
