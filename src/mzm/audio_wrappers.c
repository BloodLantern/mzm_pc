#include "mzm/audio_wrappers.h"
#include "mzm/data/audio.h"

#include "mzm/gba.h"
#include "mzm/macros.h"

#include "mzm_include.h"

/**
 * @brief 2564 | 294 | Initializes the audio
 *
 */
void InitializeAudio(void)
{
}

/**
 * @brief 27f8 | fc | Performs a sound action
 *
 * @param action Action
 */
void DoSoundAction(u32 action)
{
}

/**
 * @brief 28f4 | 124 | Sets up the DMA transfers to the fifo channels
 *
 */
void SetupSoundTransfer(void)
{
}

/**
 * @brief 2a18 | 10 | Plays a sound
 *
 * @param sound Sound ID
 */
void SoundPlay(u16 sound)
{
}

/**
 * @brief 2a28 | 10 | Stops a sound
 *
 * @param sound Sound ID
 */
void SoundStop(u16 sound)
{
}

/**
 * @brief 2a38 | 20 | To document
 *
 * @param pTrack Track data pointer
 */
void unk_2a38(struct TrackData* pTrack)
{
}

/**
 * @brief 2a58 | 34 | Stops every music/sound currently playing
 *
 */
void StopAllMusicAndSounds(void)
{
}

/**
 * @brief 2a8c | 40 | To document
 *
 */
void unk_2a8c(void)
{
}

/**
 * @brief 2acc | 54 | Fades every single sound
 *
 * @param timer Fading timer
 */
void FadeAllSounds(u16 timer)
{
}

/**
 * @brief 2b20 | 44 | Plays a sound only if it isn't already playing
 *
 * @param sound Sound ID
 */
void SoundPlayNotAlreadyPlaying(u16 sound)
{
}

/**
 * @brief 2b64 | 6e | To document
 *
 * @param sound Sound ID
 */
void unk_2b64(u16 sound)
{
}

/**
 * @brief 2bd4 | 3c | To document
 *
 * @param sound Sound ID
 */
void unk_2bd4(u16 sound)
{
}

/**
 * @brief 2c10 | 3c | To document
 *
 * @param pTrack Track data pointer
 */
void unk_2c10(struct TrackData* pTrack)
{
}

/**
 * @brief 2c4c | 34 | To document
 *
 */
void unk_2c4c(void)
{
}

/**
 * @brief 2c80 | 14 | Fades out a sound
 *
 * @param sound Sound ID
 * @param timer Fade timer
 */
void SoundFade(u16 sound, u16 timer)
{
}

/**
 * @brief 2c94 | 54 | Apply fading to music or sound
 *
 * @param pTrack Track data pointer
 * @param timer Fade timer
*/
void ApplyMusicSoundFading(struct TrackData* pTrack, u16 timer)
{
}

/**
 * @brief 2ce8 | 44 | Apply raw(?) fading to music or sound
 *
 * @param pTrack Track data pointer
 * @param timer Fade timer
*/
void ApplyRawMusicSoundFading(struct TrackData* pTrack, u16 timer)
{
}

/**
 * @brief 2d2c | bc | To document
 *
 * @param pTrack Track data pointer
 */
void unk_2d2c(struct TrackData* pTrack)
{
}

/**
 * @brief 2de8 | 14 | Plays a fading in sound
 *
 * @param sound Sound ID
 * @param timer Fading timer
 */
void PlayFadingSound(u16 sound, u16 timer)
{
}

/**
 * @brief 2dfc | 38 | Initializes a music that fades in
 *
 * @param pTrack Track data pointer
 * @param pHeader Sound header pointer
 * @param timer Fading timer
 */
void InitFadingMusic(struct TrackData* pTrack, const u8* pHeader, u16 timer)
{
}

/**
 * @brief 2e34 | 38 | To document
 *
 * @param pTrack Track data pointer
 * @param timer Fading timer
 */
void unk_2e34(struct TrackData* pTrack, u16 timer)
{
}

/**
 * @brief 2e6c | 94 | To document
 *
 * @param pTrack Track data pointer
 */
void unk_2e6c(struct TrackData* pTrack)
{
}

/**
 * @brief 2f00 | 128 | To document
 *
 * @param musicTrack1 First music track
 * @param musicTrack2 Second music track
 * @param timer Timer
 */
void unk_2f00(u16 musicTrack1, u16 musicTrack2, u16 timer)
{
}

/**
 * @brief 3028 | 30 | To document
 *
 * @param pTrack Track data pointer
 * @param param_2 Unknown
 */
void unk_3028(struct TrackData* pTrack, u16 param_2)
{
}

/**
 * @brief 3058 | 5c | To document
 *
 * @param pTrack Track data pointer
 * @param variablesMask Track data variables mask
 * @param param_3 Unknown
 */
void unk_3058(struct TrackData* pTrack, u16 variablesMask, u16 param_3)
{
}

/**
 * @brief 30b4 | 5c | To document
 *
 * @param pTrack Track data pointer
 * @param variablesMask Track data variables mask
 * @param param_3 Unknown
 */
void unk_30b4(struct TrackData* pTrack, u16 variablesMask, u16 param_3)
{
}

/**
 * @brief 3110 | 4c | To document
 *
 * @param pTrack Track data pointer
 * @param variablesMask Track data variables mask
 * @param param_3 Unknown
 */
void unk_3110(struct TrackData* pTrack, u16 variablesMask, u8 param_3)
{
}

/**
 * @brief 315c | 44 | To document
 *
 * @param pTrack Track data pointer
 * @param variablesMask Track data variables mask
 * @param param_3 Unknown
 */
void unk_315c(struct TrackData* pTrack, u16 variablesMask, u8 param_3)
{
}

/**
 * @brief 31a0 | 44 | To document
 *
 * @param pTrack Track data pointer
 * @param variablesMask Track data variables mask
 * @param param_3 Unknown
 */
void unk_31a0(struct TrackData* pTrack, u16 variablesMask, u8 param_3)
{
}
