#ifndef HIVE_DATA_H
#define HIVE_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const s16 sMellowIdleYVelocity[65];

extern const s16 sMellowIdleXVelocity[81];

extern const u32 sHiveGfx[1799];
extern const u16 sHivePal[96];

extern const u16 sMellowOam_Idle_Frame0[4];

extern const u16 sMellowOam_Idle_Frame1[4];

extern const u16 sMellowOam_Idle_Frame2[4];

extern const u16 sMellowOam_Idle_Frame3[4];

extern const u16 sHiveOam_Idle_Frame0[4];

extern const u16 sHiveOam_Idle_Frame1[4];

extern const u16 sHiveOam_Idle_Frame2[4];

extern const u16 sHiveOam_Idle_Frame3[4];

extern const u16 sHiveRootsOAM_Idle_Frame0[13];

extern const u16 sHiveRootsOAM_Idle_Frame1[13];

extern const u16 sHiveRootsOAM_Idle_Frame2[13];

extern const u16 sHiveOam_Phase2_Frame0[4];

extern const u16 sHiveOam_Phase2_Frame1[4];

extern const u16 sHiveOam_Phase2_Frame2[7];

extern const u16 sHiveOam_Phase2_Frame3[7];

extern const u16 sHiveOam_Phase3_Frame0[7];

extern const u16 sHiveOam_Phase3_Frame1[7];

extern const u16 sHiveOam_Phase3_Frame2[7];

extern const u16 sHiveOam_Dying_Frame8[22];

extern const u16 sHiveOam_Dying_Frame9[31];

extern const u16 sHiveOam_Dying_Frame10[16];

extern const u16 sHiveOam_Dying_Frame11[13];

extern const u16 sHiveOam_Dying_Frame12[4];

extern const u16 sHiveOam_Dying_Frame13[4];

extern const u16 sHiveOam_Dying_Frame14[4];

extern const u16 sHiveOam_Dying_Frame30[4];

extern const struct FrameData sMellowOam_Idle[6];

extern const struct FrameData sMellowOam_SamusDetected[6];

extern const struct FrameData sHiveOam_Idle[19];

extern const struct FrameData sHiveRootsOAM_Idle[4];

extern const struct FrameData sHiveOam_Phase2[12];

extern const struct FrameData sHiveOam_Phase3[13];

extern const struct FrameData sHiveOam_Dying[32];

#ifdef __cplusplus
}
#endif

#endif
