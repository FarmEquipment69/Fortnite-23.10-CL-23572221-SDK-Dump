// Class /Script/FortniteGame.FortPlayerAnimInstance
// Size: 0x1aa0
class UFortPlayerAnimInstance : public UFortAnimInstance
{
	unsigned char unreflected_530[0x8]; // 0x530 (0x8) 
	struct FFortLinkedAnimGraphsData LinkedAnimGraphsData; // 0x538 (0x38)
	float DeltaTime; // 0x570 (0x4)
	unsigned char unreflected_574[0x4]; // 0x574 (0x4) 
	class AFortPlayerPawn* FortPlayerPawn; // 0x578 (0x8)
	enum EFortPlayerAnimBodyType AnimBodyType; // 0x580 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x581 (0x1)
	unsigned char unreflected_582[0x2]; // 0x582 (0x2) 
	float FallAnimDuration; // 0x584 (0x4)
	float FallPlayRate; // 0x588 (0x4)
	unsigned char unreflected_58c[0x4]; // 0x58c (0x4) 
	class AFortPlayerPawnAthena* FortPlayerPawnAthena; // 0x590 (0x8)
	float DefaultSprintingMaxPlayrate; // 0x598 (0x4)
	unsigned char unreflected_59c[0x4]; // 0x59c (0x4) 
	struct FFortAnimInput_SpeedWarping SpeedWarping; // 0x5a0 (0x30)
	float JogStartSpeedWarpingAlpha; // 0x5d0 (0x4)
	unsigned char unreflected_5d4[0x4]; // 0x5d4 (0x4) 
	struct FFortAnimInput_SpeedWarping JogStartSpeedWarping; // 0x5d8 (0x30)
	struct FFortAnimInput_Zipline ZiplineInput; // 0x608 (0x38)
	struct FFortAnimInput_CommonVehicle* CommonVehicleInput; // 0x640 (0x8)
	struct FFortAnimInput_CommonWeapon CommonWeaponInput; // 0x648 (0x2)
	unsigned char unreflected_64a[0x6]; // 0x64a (0x6) 
	struct FFortAnimInput_DBNOCarried DBNOCarriedInput; // 0x650 (0xf8)
	struct FFortAnimInput_RandomizeMontageSection RandomizeMontageSectionInput; // 0x748 (0x18)
	struct FFortAnimInput_SlopeInfo SlopeInfoInput; // 0x760 (0x60)
	struct FFortAnimInput_TransitionProperties TransitionPropertiesInput; // 0x7c0 (0x1)
	unsigned char unreflected_7c1[0x3]; // 0x7c1 (0x3) 
	float DBNOTurnPlayRate; // 0x7c4 (0x4)
	float DBNOTurnPlayRateAbs; // 0x7c8 (0x4)
	unsigned char unreflected_7cc[0x4]; // 0x7cc (0x4) 
	struct FFortAnimInput_TurnInPlace TurnInPlaceInput; // 0x7d0 (0x78)
	struct FVector EmoteAnimOffset; // 0x848 (0x18)
	struct FFortAnimInput_AdjustedAim AdjustedAimBase; // 0x860 (0x23c)
	struct FFortAnimInput_AdjustedAim AdjustedAimAthena; // 0xa9c (0x23c)
	struct FFortAnimInput_AdjustedAim AdjustedAim; // 0xcd8 (0x23c)
	unsigned char unreflected_f14[0x4]; // 0xf14 (0x4) 
	struct FFortAnimInput_SpringGlider SpringGlider; // 0xf18 (0xc0)
	struct FFortAnimInput_HandIK HandIKInput; // 0xfd8 (0x1c)
	float ADSToNonADSBlendTime; // 0xff4 (0x4)
	float NonADSToADSBlendTime; // 0xff8 (0x4)
	float BlendOutOfWallBlockTime; // 0xffc (0x4)
	float BlendOutOfWallBlockTimeRemaining; // 0x1000 (0x4)
	float HandIKRetargetingWeight; // 0x1004 (0x4)
	float RightHandIKAlpha; // 0x1008 (0x4)
	float LeftHandIKAlpha; // 0x100c (0x4)
	float LeftHandFKAlpha; // 0x1010 (0x4)
	bool bEnableHandIK; // 0x1014 (0x1)
	unsigned char unreflected_1015[0x3]; // 0x1015 (0x3) 
	float LegIKAlpha; // 0x1018 (0x4)
	float OneHandedTransitionHackAlpha; // 0x101c (0x4)
	struct FFortAnimInput_Skydiving Skydiving; // 0x1020 (0x78)
	float FreeFallAimPitch; // 0x1098 (0x4)
	bool bIsSlopeSliding; // 0x109c (0x1)
	unsigned char unreflected_109d[0x3]; // 0x109d (0x3) 
	float SlopeSlidingPitch; // 0x10a0 (0x4)
	float SlopeSlidingRoll; // 0x10a4 (0x4)
	float JumpAdditiveLayerAlpha; // 0x10a8 (0x4)
	struct FCachedAnimStateData JumpAdditiveLayerPassthrough; // 0x10ac (0x14)
	float JumpAdditiveLeanAlpha; // 0x10c0 (0x4)
	float DisableRightArmAdditiveCurveAlpha; // 0x10c4 (0x4)
	float DisableArmsHeadAdditiveCurveAlpha; // 0x10c8 (0x4)
	float DisableIKRootAdditiveCurveAlpha; // 0x10cc (0x4)
	float DisableUpperBodyAdditiveMeshSpaceCurveAlpha; // 0x10d0 (0x4)
	unsigned char unreflected_10d4[0x4]; // 0x10d4 (0x4) 
	struct FFortAnimInput_PlayerAnimAsset CurrentAnimSet; // 0x10d8 (0x200)
	struct FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet; // 0x12d8 (0x268)
	struct FFortAnimInput_WeaponAdditiveAnimAsset CurrentWeaponAdditiveAnimSet; // 0x1540 (0x30)
	struct FFortAnimInput_LocomotionAnimAsset CurrentLocomotionAnimSet; // 0x1570 (0xf8)
	struct TArray<struct FName> BonesHiddenByAnimSet; // 0x1668 (0x10)
	float AimPitchAdjustment; // 0x1678 (0x4)
	float AimYawAdjustment; // 0x167c (0x4)
	float PlayMeleeAttackAO; // 0x1680 (0x4)
	unsigned char unreflected_1684[0xc]; // 0x1684 (0xc) 
	struct FTransform LastFramePawnTransform; // 0x1690 (0x60)
	float MaxAimYawAdjustment; // 0x16f0 (0x4)
	float MaxPitch; // 0x16f4 (0x4)
	float MaxYaw; // 0x16f8 (0x4)
	float ReticleAimDistance; // 0x16fc (0x4)
	float AimAdjustmentInterpSpeed; // 0x1700 (0x4)
	float AimTwistCorrectionExponent; // 0x1704 (0x4)
	float AimDriverDownwardPitchCorrectionScale; // 0x1708 (0x4)
	float AimDriverUpwardPitchCorrectionScale; // 0x170c (0x4)
	float RecentlyFiredAbilityTime; // 0x1710 (0x4)
	unsigned char unreflected_1714[0x4]; // 0x1714 (0x4) 
	struct FVector SlopeWarpingFloorOffset; // 0x1718 (0x18)
	struct FRotator WeaponAimingFreezeInterpScale; // 0x1730 (0x18)
	struct FName WeaponAimingCurveName; // 0x1748 (0x4)
	struct FName WeaponAimingFreezeCurveName; // 0x174c (0x4)
	class UAnimSequence* ConsumableOffsetPose; // 0x1750 (0x8)
	class UAnimSequence* MissingCosmeticUpperBodyOverride; // 0x1758 (0x8)
	class UAnimSequence* MissingCosmeticLowerBodyOverride; // 0x1760 (0x8)
	class UAnimSequence* MissingCosmeticLowerBodyInMotionOverride; // 0x1768 (0x8)
	unsigned char bEnableMissingCosmeticOverride; // 0x1770 (0x1)
	unsigned char bAimWeaponTowardsReticle; // 0x1770 (0x1)
	unsigned char bDebugWeaponAiming; // 0x1770 (0x1)
	unsigned char bCachedPawnTransform; // 0x1770 (0x1)
	unsigned char bHasValidWeaponMuzzleSocket; // 0x1770 (0x1)
	unsigned char bShouldUseCrouchUpperBodySlot; // 0x1770 (0x1)
	unsigned char bShouldUseCrouchInPlaceAdditiveSlot; // 0x1770 (0x1)
	unsigned char bUseCustomFloorOffset; // 0x1770 (0x1)
	unsigned char bIsOnGround; // 0x1771 (0x1)
	unsigned char bIsTargeting; // 0x1771 (0x1)
	unsigned char bIsTargetingConsumableThrow; // 0x1771 (0x1)
	unsigned char bPlayUpperBodyTargeting; // 0x1771 (0x1)
	unsigned char bPlayingRootMotion; // 0x1771 (0x1)
	unsigned char bIsStunned; // 0x1771 (0x1)
	unsigned char bIsMontagePlaying; // 0x1771 (0x1)
	unsigned char bIsPlayingMeleeAnim; // 0x1771 (0x1)
	unsigned char bRecentlyFiredAbility; // 0x1772 (0x1)
	unsigned char bDisableUpperBodySlotOnLowerBodyInIdle; // 0x1772 (0x1)
	unsigned char bWasRelaxedLevel1; // 0x1772 (0x1)
	unsigned char bTempIsRelaxedLevel1; // 0x1772 (0x1)
	unsigned char bIsCrouching; // 0x1772 (0x1)
	unsigned char bIsCrouchMoving; // 0x1772 (0x1)
	unsigned char bIsCrouchSprinting; // 0x1772 (0x1)
	unsigned char bIsSurfaceSwimming; // 0x1772 (0x1)
	unsigned char bIsDiveJumping; // 0x1773 (0x1)
	unsigned char bSwimmingIsWaterLanding; // 0x1773 (0x1)
	unsigned char bSwimmingHasReachedJumpBottom; // 0x1773 (0x1)
	unsigned char bSwimmingHeadUnderWaterDuringWaterLand; // 0x1773 (0x1)
	unsigned char bSwimmingJumpInitiatedFromWater; // 0x1773 (0x1)
	unsigned char bIsSprinting; // 0x1773 (0x1)
	unsigned char bIsAccelerating2D; // 0x1773 (0x1)
	unsigned char bIsMoving2D; // 0x1773 (0x1)
	unsigned char bWasMoving2D; // 0x1774 (0x1)
	unsigned char bIsAboveMinimumLocomotionSpeed; // 0x1774 (0x1)
	unsigned char bIsBackpedaling; // 0x1774 (0x1)
	unsigned char bShouldWalkRightFootFwd; // 0x1774 (0x1)
	unsigned char bShouldPlayJogStartTransition; // 0x1774 (0x1)
	unsigned char bShouldPlayJogStopTransition; // 0x1774 (0x1)
	unsigned char bShouldPlayJogPivotTransition; // 0x1774 (0x1)
	unsigned char bStartTransitionActive; // 0x1774 (0x1)
	unsigned char bStopTransitionActive; // 0x1775 (0x1)
	unsigned char bPivotTransitionActive; // 0x1775 (0x1)
	unsigned char bShouldPlayPostPivotTransition; // 0x1775 (0x1)
	unsigned char bShouldEarlyOutStartState; // 0x1775 (0x1)
	unsigned char bShouldEarlyOutStopState; // 0x1775 (0x1)
	unsigned char bShouldEarlyOutPivotState; // 0x1775 (0x1)
	unsigned char bSkipJumpStart; // 0x1775 (0x1)
	unsigned char bExitLanding; // 0x1775 (0x1)
	unsigned char bIsDBNO; // 0x1776 (0x1)
	unsigned char bIsBeingInterrogated; // 0x1776 (0x1)
	unsigned char bIsUsingJetpack; // 0x1776 (0x1)
	bool bGoopJumpExecuted; // 0x1777 (0x1)
	unsigned char bIsUsingRemoteControlPawn; // 0x1778 (0x1)
	unsigned char bIsInVehicle; // 0x1778 (0x1)
	unsigned char bIsValetDriver; // 0x1778 (0x1)
	unsigned char bIsValetPassenger; // 0x1778 (0x1)
	unsigned char bIsInShoppingCart; // 0x1778 (0x1)
	unsigned char bIsInCannon; // 0x1778 (0x1)
	unsigned char bIsFiredFromCannon; // 0x1778 (0x1)
	unsigned char bIsDBNOCarrying; // 0x1778 (0x1)
	unsigned char bIsDBNOCarried; // 0x1779 (0x1)
	unsigned char bIsFemale; // 0x1779 (0x1)
	unsigned char bIsHidingInProp; // 0x1779 (0x1)
	unsigned char bStopJogDoOnceTriggered; // 0x1779 (0x1)
	unsigned char bStartJogDoOnceTriggered; // 0x1779 (0x1)
	unsigned char bPivotTransitionDoOnceTriggered; // 0x1779 (0x1)
	unsigned char bPostPivotTransitionDoOnceTriggered; // 0x1779 (0x1)
	unsigned char bIsBalloonInAir; // 0x1779 (0x1)
	unsigned char bHasBalloons; // 0x177a (0x1)
	unsigned char bIsGhost; // 0x177a (0x1)
	unsigned char bHasIcyFeet; // 0x177a (0x1)
	unsigned char bIsMovingAndInMotionEmote; // 0x177a (0x1)
	unsigned char bIsPlayingEmote; // 0x177a (0x1)
	unsigned char bIsGrappleRopeActive; // 0x177a (0x1)
	unsigned char bHasSourcePoseOverride; // 0x177a (0x1)
	unsigned char unreflected_177b[0x1]; // 0x177b (0x1) 
	float FullBodyInAirFallTimeThreshold; // 0x177c (0x4)
	float LocalYawNormalizationDeadzone; // 0x1780 (0x4)
	float FullBodyInAirLowerBodyWeight; // 0x1784 (0x4)
	float TargetingWeight; // 0x1788 (0x4)
	float MeleeTwistCurveValue; // 0x178c (0x4)
	float JumpUpperBodyBlendWeight; // 0x1790 (0x4)
	float RightArmMaskWeight; // 0x1794 (0x4)
	float LeftArmMaskWeight; // 0x1798 (0x4)
	float UpperBodyNoAdditivesMaskWeight; // 0x179c (0x4)
	float FullBodyAimOffsetAlpha; // 0x17a0 (0x4)
	float LocomotionAdditiveAlpha; // 0x17a4 (0x4)
	float BaseLocomotionAdditiveAlpha; // 0x17a8 (0x4)
	float LocalAccelYawAngle; // 0x17ac (0x4)
	float MaxSpeed; // 0x17b0 (0x4)
	float VelocityZ; // 0x17b4 (0x4)
	float Speed2D; // 0x17b8 (0x4)
	float RidingSpeed2D; // 0x17bc (0x4)
	float LocalVelocityYawAngle; // 0x17c0 (0x4)
	float LocalVelocityYawAngleMinusJogBlendSpaceRotation; // 0x17c4 (0x4)
	float LocalVelocityYawAngleMinusMeleeTwist; // 0x17c8 (0x4)
	float LocalAccelVelocityYawDelta; // 0x17cc (0x4)
	float SpeedAdjustedPlayrate; // 0x17d0 (0x4)
	float LeanAdditiveAlpha; // 0x17d4 (0x4)
	float LeanAngle; // 0x17d8 (0x4)
	float SprintYawAngle; // 0x17dc (0x4)
	float StartStateRotationMultiplier; // 0x17e0 (0x4)
	float StartAnimDeltaAngleNorth; // 0x17e4 (0x4)
	float StartAnimDeltaAngleEast; // 0x17e8 (0x4)
	float StartAnimDeltaAngleSouth; // 0x17ec (0x4)
	float StartAnimDeltaAngleWest; // 0x17f0 (0x4)
	float StopStateRotationMultiplier; // 0x17f4 (0x4)
	float StopAnimDeltaAngle; // 0x17f8 (0x4)
	float JogPrePivotTimer; // 0x17fc (0x4)
	float PrePivotAnimDeltaAngle; // 0x1800 (0x4)
	float PostPivotAnimDeltaAngle; // 0x1804 (0x4)
	float TransitionPlayRate; // 0x1808 (0x4)
	float YawDeltaCurrentTick; // 0x180c (0x4)
	float YawDeltaLastTick; // 0x1810 (0x4)
	float YawDeltaSmoothed; // 0x1814 (0x4)
	float AbsYawDeltaSmoothed; // 0x1818 (0x4)
	float PawnToVehicleDeltaYawAngleDegrees; // 0x181c (0x4)
	float SavedWeaponAbilityLastFireTime; // 0x1820 (0x4)
	float SwimmingImmersionDepth; // 0x1824 (0x4)
	struct FVector WorldAcceleration; // 0x1828 (0x18)
	struct FVector LocalAcceleration; // 0x1840 (0x18)
	struct FVector WorldVelocity; // 0x1858 (0x18)
	struct FVector LocalVelocity; // 0x1870 (0x18)
	struct FVector ActorSpaceVelocityDirPreTurn; // 0x1888 (0x18)
	struct FRotator ActorRotationLastTick; // 0x18a0 (0x18)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x18b8 (0x1)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnimForEmptyHands; // 0x18b9 (0x1)
	unsigned char unreflected_18ba[0x6]; // 0x18ba (0x6) 
	class UFortWeaponAnimSet* DefaultWeaponAnimSet; // 0x18c0 (0x8)
	struct FFortLocomotionAnimSets DefaultLocomotionAnimSets; // 0x18c8 (0x10)
	struct FFortLocomotionAnimSets HeavyWeaponLocomotionAnimSets; // 0x18d8 (0x10)
	class UFortWeaponAnimSet* WeaponAnimSet; // 0x18e8 (0x8)
	class UFortLocomotionAnimSet* LocomotionAnimSet; // 0x18f0 (0x8)
	class UFortWeaponAnimSet* WeaponOverrideAnimSet; // 0x18f8 (0x8)
	class UFortWeaponAdditiveAnimSet* WeaponAdditiveAnimSet; // 0x1900 (0x8)
	class UFortWeaponAnimSet* WeaponAnimSetForEmptyHands; // 0x1908 (0x8)
	struct TWeakObjectPtr<class UFortPlayerGliderAnimSet> CurrentGliderAnimSetDataAsset; // 0x1910 (0x8)
	enum EFortCardinalDirection PreviousFrameLocomotionCardinalDirection; // 0x1918 (0x1)
	enum EFortCardinalDirection LocomotionCardinalDirection; // 0x1919 (0x1)
	enum EFortCardinalDirection StartTransitionInitialDirection; // 0x191a (0x1)
	enum EFortCardinalDirection StopCardinalDirection; // 0x191b (0x1)
	enum EFortCardinalDirection PrePivotCardinalDirection; // 0x191c (0x1)
	enum EFortCardinalDirection PostPivotCardinalDirection; // 0x191d (0x1)
	unsigned char unreflected_191e[0x2]; // 0x191e (0x2) 
	float TargetingSpeed; // 0x1920 (0x4)
	float JumpUpperBodyBlendSpeed; // 0x1924 (0x4)
	float TargetingWeightInLocomotion; // 0x1928 (0x4)
	float MinimumLocomotionSpeed; // 0x192c (0x4)
	float BackpedalSpeedThresholdAngle; // 0x1930 (0x4)
	float SpeedAdjustedPlayratePivotSpeed; // 0x1934 (0x4)
	float AuthoredCrouchSprintSpeed; // 0x1938 (0x4)
	float AuthoredCrouchWalkSpeed; // 0x193c (0x4)
	float AuthoredCrouchJogSpeed; // 0x1940 (0x4)
	float AuthoredSprintSpeed; // 0x1944 (0x4)
	float AuthoredWalkSpeed; // 0x1948 (0x4)
	float AuthoredJogBwdSpeed; // 0x194c (0x4)
	float AuthoredJogFwdSpeed; // 0x1950 (0x4)
	float AuthoredJogStrafeSpeed; // 0x1954 (0x4)
	float LeanFadeInSpeed; // 0x1958 (0x4)
	float LeanFadeOutSpeed; // 0x195c (0x4)
	float LeanAngleMultiplier; // 0x1960 (0x4)
	float LeanAngleBackpedalMultiplier; // 0x1964 (0x4)
	float SprintYawAngleInterpSpeed; // 0x1968 (0x4)
	float SprintYawAngleFadeOutSpeed; // 0x196c (0x4)
	float LocomotionDeadZoneAngle; // 0x1970 (0x4)
	float StartStateRotationFadeInSpeed; // 0x1974 (0x4)
	float StopStateRotationFadeOutSpeed; // 0x1978 (0x4)
	float JogPivotTimeToPivot; // 0x197c (0x4)
	float PostPivotAnimInterpSpeed; // 0x1980 (0x4)
	float MaxAllowedPivotRotation; // 0x1984 (0x4)
	struct FName MeleeTwistCurveValueName; // 0x1988 (0x4)
	struct FName MeleeAnimCurveValueName; // 0x198c (0x4)
	struct FName AdditiveLayerCurveValueName; // 0x1990 (0x4)
	struct FName MaskRightArmCurveValueName; // 0x1994 (0x4)
	struct FName StartAnimCurveValueName; // 0x1998 (0x4)
	struct FName StopAnimCurveValueName; // 0x199c (0x4)
	struct FName PivotAnimCurveValueName; // 0x19a0 (0x4)
	unsigned char bIsShieldUp; // 0x19a4 (0x1)
	unsigned char bIsJumpBoosting; // 0x19a4 (0x1)
	unsigned char bEnableAimOffsets; // 0x19a4 (0x1)
	unsigned char bShouldProcessFullAnimUpdate; // 0x19a4 (0x1)
	unsigned char bIsInAir; // 0x19a4 (0x1)
	unsigned char bEnterLanding; // 0x19a4 (0x1)
	unsigned char bIsWaterJump; // 0x19a4 (0x1)
	unsigned char bPlayWeaponInspect; // 0x19a4 (0x1)
	unsigned char bInterruptWeaponInspect; // 0x19a5 (0x1)
	unsigned char bInterruptWeaponInspectNoBlend; // 0x19a5 (0x1)
	unsigned char bPlayRelaxedEntry; // 0x19a5 (0x1)
	unsigned char bIsGrapplerActive; // 0x19a5 (0x1)
	unsigned char bSwimmingIsWaterPaddlingToSurface; // 0x19a5 (0x1)
	unsigned char bIsRelaxedLevel1AndNotJumpingFromWater; // 0x19a5 (0x1)
	unsigned char bIsRelaxedLevel2AndNotJumpingFromWater; // 0x19a5 (0x1)
	unsigned char bSwimIdleNoiseBlendTrigger; // 0x19a5 (0x1)
	unsigned char bIsMeleeGuarding; // 0x19a6 (0x1)
	unsigned char bIsMeleeDeflecting; // 0x19a6 (0x1)
	unsigned char bUsingUncleBrolly; // 0x19a6 (0x1)
	unsigned char bIsPlayingForwardMotionAnim; // 0x19a6 (0x1)
	unsigned char bIsPatrolling; // 0x19a6 (0x1)
	unsigned char unreflected_19a7[0x1]; // 0x19a7 (0x1) 
	struct FName HeadTrackingReticleSocketName; // 0x19a8 (0x4)
	struct TEnumAsByte<EAxis> HeadTrackingReticleSocketLookAtAxis; // 0x19ac (0x1)
	unsigned char unreflected_19ad[0x3]; // 0x19ad (0x3) 
	float HeadTrackingReticleInterpSpeed; // 0x19b0 (0x4)
	unsigned char unreflected_19b4[0x4]; // 0x19b4 (0x4) 
	struct FRotator HeadTrackingReticleAdjustment; // 0x19b8 (0x18)
	float HeadTrackingReticlePitchAlpha; // 0x19d0 (0x4)
	float HeadTrackingReticleAimDistance; // 0x19d4 (0x4)
	float HeadTrackingReticleAimDistanceDownsights; // 0x19d8 (0x4)
	unsigned char unreflected_19dc[0x4]; // 0x19dc (0x4) 
	struct FGameplayTagAnimations GameplayTagAnimations; // 0x19e0 (0x10)
	struct FVector StandardIdlePelvisOffset; // 0x19f0 (0x18)
	struct FVector LargeFemaleIdlePelvisOffset; // 0x1a08 (0x18)
	struct FVector IdlePelvisOffset; // 0x1a20 (0x18)
	float IdlePelvisOffsetAlpha; // 0x1a38 (0x4)
	int PawnLOD; // 0x1a3c (0x4)
	float WeaponInspectDelayTimeRemaining; // 0x1a40 (0x4)
	float MinDelayBetweenWeaponInspects; // 0x1a44 (0x4)
	float DisabledFullBodySprintTimeRemaining; // 0x1a48 (0x4)
	unsigned char bIsFullBodySprintTransitionDisabled; // 0x1a4c (0x1)
	unsigned char bParaGlideOpenGlider; // 0x1a4c (0x1)
	unsigned char bIsTacticalSprint; // 0x1a4c (0x1)
	unsigned char bIsTacticalJump; // 0x1a4c (0x1)
	unsigned char bIsTacticalInAir; // 0x1a4c (0x1)
	unsigned char bIsNormalJump; // 0x1a4c (0x1)
	unsigned char bIsNormalFall; // 0x1a4c (0x1)
	unsigned char bIsDoorBashExit; // 0x1a4c (0x1)
	unsigned char bIsInWater; // 0x1a4d (0x1)
	unsigned char bIsHurdleFall; // 0x1a4d (0x1)
	unsigned char unreflected_1a4e[0x2]; // 0x1a4e (0x2) 
	int bPoseDebugIndex; // 0x1a50 (0x4)
	unsigned char bUsePoseDebug; // 0x1a54 (0x1)
	unsigned char bWantsGliderAnimAssetUpdate; // 0x1a54 (0x1)
	unsigned char bTransitionFullBodySprinting; // 0x1a54 (0x1)
	unsigned char bTransitionFullBodyTacticalSprint; // 0x1a54 (0x1)
	unsigned char bTransitionSwimmingFullBodySprinting; // 0x1a54 (0x1)
	unsigned char bTransitionNewFallAditiveNewFallLandAdditive; // 0x1a54 (0x1)
	unsigned char bTransitionFullBodyStunned; // 0x1a54 (0x1)
	unsigned char bTransitionFullBodyDBNOMove; // 0x1a54 (0x1)
	unsigned char bTransitionFullBodyDBNOTurn; // 0x1a55 (0x1)
	unsigned char bEarlyOutLowerbodyTurns; // 0x1a55 (0x1)
	unsigned char bTransitionLowerBodyShuffle; // 0x1a55 (0x1)
	unsigned char bTransitionLowerBodyMovement; // 0x1a55 (0x1)
	unsigned char bTransitionLocomotionAdditiveCrouchTurning; // 0x1a55 (0x1)
	unsigned char bLocomotionIdlestoTurns; // 0x1a55 (0x1)
	unsigned char bTransitionSprintingtoConduit; // 0x1a55 (0x1)
	unsigned char bTransitionDBNOSwimIdletoDBNOSwimTurn; // 0x1a55 (0x1)
	unsigned char bTransitionSwimJumpSurfaceLooptoSwimJumpSurfaceEnd; // 0x1a56 (0x1)
	unsigned char bTransitionSwimJumpSurfaceLooptoIdleAdditive; // 0x1a56 (0x1)
	unsigned char bTransitionNewJumpLoopAdditivetoNewFallAdditive; // 0x1a56 (0x1)
	unsigned char bIsUmbrellaFailing; // 0x1a56 (0x1)
	unsigned char bEnableEmptyHands; // 0x1a56 (0x1)
	unsigned char bHideWeaponForEmptyHands; // 0x1a56 (0x1)
	unsigned char bSupressJogStartAdditiveForLiveEvent; // 0x1a56 (0x1)
	unsigned char bUseFullBodyJumpAdditivesLinkedGraph; // 0x1a56 (0x1)
	unsigned char bUseFullBodyStateLinkedGraph; // 0x1a57 (0x1)
	unsigned char bIsWalking; // 0x1a57 (0x1)
	unsigned char bIsRiding; // 0x1a57 (0x1)
	unsigned char bUseLocomotionPrototype; // 0x1a57 (0x1)
	unsigned char bUseFacialCurves; // 0x1a57 (0x1)
	unsigned char bLinkedDebugGraphActive; // 0x1a57 (0x1)
	unsigned char unreflected_1a58[0x38]; // 0x1a58 (0x38) 
	bool bWasFallingLastTick; // 0x1a90 (0x1)
	unsigned char padding_1a91[0xf]; // 0x1a91 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerAnimInstance.UpdateTacticalSprint (Underlying native function: UpdateTacticalSprint 0x7f76dd8)
	void UpdateTacticalSprint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.SetIsPatrolling (Underlying native function: SetIsPatrolling 0x7f76c54)
	void SetIsPatrolling(bool& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.OnPlayMontageFromGameplayTagQuery (Has no native function)
	void OnPlayMontageFromGameplayTagQuery(struct FGameplayTagQuery& MatchingQuery, class UAnimMontage*& MontagePlaying); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.HandleBeginSkydiving (Underlying native function: HandleBeginSkydiving 0x269016c)
	void HandleBeginSkydiving(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.GetRelativeAngle (Underlying native function: GetRelativeAngle 0x7f766b4)
	float GetRelativeAngle(float& MovementAngle, enum EFortCardinalDirection& Direction, bool& bMirrorBackside); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.FindEmoteToPlay (Underlying native function: FindEmoteToPlay 0x7f75ff4)
	class UAnimMontage* FindEmoteToPlay(class AFortPlayerController*& FortPlayerController, struct TEnumAsByte<EFortCustomBodyType>& InBodyType, struct TEnumAsByte<EFortCustomGender>& InGender); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_StopFireFX (Underlying native function: AnimNotify_StopFireFX 0x7f75c38)
	void AnimNotifyStopFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_SkydiveAdditiveEnd (Underlying native function: AnimNotify_SkydiveAdditiveEnd 0x7f75b90)
	void AnimNotifySkydiveAdditiveEnd(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_PlayWeaponInspect (Underlying native function: AnimNotify_PlayWeaponInspect 0x2df5690)
	void AnimNotifyPlayWeaponInspect(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_PlaySecondaryFireFX (Underlying native function: AnimNotify_PlaySecondaryFireFX 0x7f75ae4)
	void AnimNotifyPlaySecondaryFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_PlayFireFX (Underlying native function: AnimNotify_PlayFireFX 0x28a1d04)
	void AnimNotifyPlayFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)
};
