#ifndef SAMUS_H
#define SAMUS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/structs/samus.h"

void SamusCheckScrewSpeedboosterAffectingEnvironment(struct SamusData* pData, struct SamusPhysics* pPhysics);
u8 SamusCheckCollisionAtPosition(u16 xPosition, u16 yPosition, u16* pXPosition, u16* pYPosition, u16* pSlope);
u8 unk_5604(struct SamusData* pData, struct SamusPhysics* pPhysics, u16 xPosition, u16* pPosition);
u8 SamusCheckTopSideCollisionMidAir(struct SamusData* pData, struct SamusPhysics* pPhysics, u16 xPosition, u16* pPosition);
u8 SamusCheckWalkingOnSlope(struct SamusData* pData, u16 xPosition);
u8 SamusCheckCollisionAbove(struct SamusData* pData, s32 hitbox);
u8 SamusCheckWalkingSidesCollision(struct SamusData* pData, struct SamusPhysics* pPhysics);
u8 unk_5AD8(struct SamusData* pData, struct SamusPhysics* pPhysics);
u8 SamusCheckStandingOnGroundCollision(struct SamusData* pData, struct SamusPhysics* pPhysics);
u8 SamusCheckLandingCollision(struct SamusData* pData, struct SamusPhysics* pPhysics);
u8 SamusCheckTopCollision(struct SamusData* pData, struct SamusPhysics* pPhysics);
void SamusCheckCollisions(struct SamusData* pData, struct SamusPhysics* pPhysics);
void SamusCheckSetEnvironmentalEffect(struct SamusData* pData, u32 defaultOffset, u32 request);
void SamusUpdateEnvironmentalEffect(struct SamusData* pData);
void SamusSetMidAir(struct SamusData* pData, struct SamusData* pCopy, struct WeaponInfo* pWeapon);
void SamusSetLandingPose(struct SamusData* pData, struct SamusData* pCopy, struct WeaponInfo* pWeapon);
void SamusChangeToHurtPose(struct SamusData* pData, struct SamusData* pCopy, struct WeaponInfo* pWeapon);
void SamusChangeToKnockbackPose(struct SamusData* pData, struct SamusData* pCopy, struct WeaponInfo* pWeapon);
void SamusCheckCarryFromCopy(struct SamusData* pData, struct SamusData* pCopy, struct WeaponInfo* pWeapon);
void SamusSetPose(u8 pose);
void SamusCopyData(struct SamusData* pData);
void SamusUpdatePhysics(struct SamusData* pData);
s16 SamusChangeVelocityOnSlope(struct SamusData* pData);
void SamusCopyPalette(const u16* src, s32 offset, s32 nbrColors);
void SamusUpdate(void);
void SamusUpdateHitboxMovingDirection(void);
void SamusCallGfxFunctions(void);
void SamusCallCheckLowHealth(void);
void SamusCallUpdateArmCannonPositionOffset(void);
void SamusBombBounce(u8 direction);
void SamusAimCannon(struct SamusData* pData);
u8 SamusCheckFireBeamMissile(struct SamusData* pData, struct WeaponInfo* pWeapon, struct Equipment* pEquipment);
u8 SamusCheckFirePistol(struct SamusData* pData, struct WeaponInfo* pWeapon);
void SamusCheckNewProjectile(struct SamusData* pData, struct WeaponInfo* pWeapon, struct Equipment* pEquipment);
u8 SamusCheckJumping(struct SamusData* pData);
void SamusSetHighlightedWeapon(struct SamusData* pData, struct WeaponInfo* pWeapon, struct Equipment* pEquipment);
void SamusSetSpinningPose(struct SamusData* pData, struct Equipment* pEquipment);
void SamusApplyXAcceleration(s32 acceleration, s32 velocity, struct SamusData* pData);
u8 SamusTakeHazardDamage(struct SamusData* pData, struct Equipment* pEquipment, struct HazardDamage* pHazard);
void SamusCheckShinesparking(struct SamusData* pData);
u8 SamusInactivity(struct SamusData* pData);
u8 SamusUpdateAnimation(struct SamusData* pData, u8 slowed);
u8 SamusRunning(struct SamusData* pData);
u8 SamusRunningGfx(struct SamusData* pData);
u8 SamusStanding(struct SamusData* pData);
u8 SamusStandingGfx(struct SamusData* pData);
u8 SamusTurningAround(struct SamusData* pData);
u8 SamusTurningAroundGfx(struct SamusData* pData);
u8 SamusShootingGfx(struct SamusData* pData);
u8 SamusCrouching(struct SamusData* pData);
u8 SamusTurningAroundAndCrouching(struct SamusData* pData);
u8 SamusTurningAroundAndCrouchingGfx(struct SamusData* pData);
u8 SamusShootingAndCrouchingGfx(struct SamusData* pData);
u8 SamusSkidding(struct SamusData* pData);
u8 SamusMidAir(struct SamusData* pData);
u8 SamusMidAirGfx(struct SamusData* pData);
u8 SamusTurningAroundMidAir(struct SamusData* pData);
u8 SamusTurningAroundMidAirGfx(struct SamusData* pData);
u8 SamusStartingSpinJumpGfx(struct SamusData* pData);
u8 SamusSpinning(struct SamusData* pData);
u8 SamusSpinningGfx(struct SamusData* pData);
u8 SamusStartingWallJump(struct SamusData* pData);
u8 SamusStartingWallJumpGfx(struct SamusData* pData);
u8 SamusSpaceJumpingGfx(struct SamusData* pData);
u8 SamusScrewAttackingGfx(struct SamusData* pData);
u8 SamusMorphing(struct SamusData* pData);
u8 SamusMorphingGfx(struct SamusData* pData);
u8 SamusMorphball(struct SamusData* pData);
u8 SamusRolling(struct SamusData* pData);
u8 SamusRollingGfx(struct SamusData* pData);
u8 SamusUnmorphing(struct SamusData* pData);
u8 SamusUnmorphingGfx(struct SamusData* pData);
u8 SamusMorphballMidAir(struct SamusData* pData);
u8 SamusHangingOnLedge(struct SamusData* pData);
u8 SamusHangingOnLedgeGfx(struct SamusData* pData);
u8 SamusTurningToAimWhileHanging(struct SamusData* pData);
u8 SamusTurningToAimWhileHangingGfx(struct SamusData* pData);
u8 SamusHidingArmCannonWhileHangingGfx(struct SamusData* pData);
u8 SamusAimingWhileHanging(struct SamusData* pData);
u8 SamusPullingSelfUp(struct SamusData* pData);
u8 SamusPullingSelfUpGfx(struct SamusData* pData);
u8 SamusPullingSelfForward(struct SamusData* pData);
u8 SamusPullingSelfForwardGfx(struct SamusData* pData);
u8 SamusPullingSelfIntoMorphballTunnelGfx(struct SamusData* pData);
u8 SamusUsingAnElevator(struct SamusData* pData);
u8 SamusUsingAnElevatorGfx(struct SamusData* pData);
u8 SamusFacingTheForeground(struct SamusData* pData);
u8 SamusTurningFromFacingForegroundGfx(struct SamusData* pData);
u8 SamusDelayBeforeShinesparkingGfx(struct SamusData* pData);
u8 SamusShinesparking(struct SamusData* pData);
u8 SamusShinesparkingGfx(struct SamusData* pData);
u8 SamusShinesparkCollisionGfx(struct SamusData* pData);
u8 SamusDelayAfterShinesparkingGfx(struct SamusData* pData);
u8 SamusDelayBeforeBallsparking(struct SamusData* pData);
u8 SamusDelayBeforeBallsparkingGfx(struct SamusData* pData);
u8 SamusBallsparkingGfx(struct SamusData* pData);
u8 SamusBallsparkCollisionGfx(struct SamusData* pData);
u8 SamusOnZipline(struct SamusData* pData);
u8 SamusShootingOnZiplineGfx(struct SamusData* pData);
u8 SamusMorphballOnZipline(struct SamusData* pData);
u8 SamusSavingLoadingGame(struct SamusData* pData);
u8 SamusTurningAroundToDownloadMapDataGfx(struct SamusData* pData);
u8 SamusGettingHurt(struct SamusData* pData);
u8 SamusGettingHurtGfx(struct SamusData* pData);
u8 SamusGettingKnockedBack(struct SamusData* pData);
u8 SamusDying(struct SamusData* pData);
u8 SamusCrouchingToCrawlGfx(struct SamusData* pData);
u8 SamusCrawlingStopped(struct SamusData* pData);
u8 SamusStartingToCrawlGfx(struct SamusData* pData);
u8 SamusCrawling(struct SamusData* pData);
u8 SamusCrawlingGfx(struct SamusData* pData);
u8 SamusTurningAroundWhileCrawling(struct SamusData* pData);
u8 SamusTurningAroundWhileCrawlingGfx(struct SamusData* pData);
u8 SamusGrabbingALedgeSuitlessGfx(struct SamusData* pData);
u8 SamusFacingTheBackground(struct SamusData* pData);
u8 SamusTurningFromFacingTheBackgroundGfx(struct SamusData* pData);
u8 SamusTurningToEnterEscapeShipGfx(struct SamusData* pData);
u8 SamusExecutePoseSubroutine(struct SamusData* pData);
void SamusUpdateVelocityPosition(struct SamusData* pData);
void SamusUpdateGraphicsOam(struct SamusData* pData, u8 direction);
void SamusUpdatePalette(struct SamusData* pData);
void SamusCheckPlayLowHealthSound(void);
void SamusUpdateDrawDistanceAndStandingStatus(struct SamusData* pData, struct SamusPhysics* pPhysics);
void SamusUpdateArmCannonPositionOffset(u8 direction);
void SamusInit(void);
void SamusDraw(void);


#ifdef __cplusplus
}
#endif

#endif /* SAMUS_H */
