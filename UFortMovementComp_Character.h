// Class /Script/FortniteGame.FortMovementComp_Character
// Size: 0x4d70
class UFortMovementComp_Character : public UCharacterMovementComponent
{
	unsigned char unreflected_ee0[0x40]; // 0xee0 (0x40) 
	float LandHardSoundFallSpeedThreshold; // 0xf20 (0x4)
	float LandSoundFallSpeedThreshold; // 0xf24 (0x4)
	class UClass* PushBumpedPawnClass; // 0xf28 (0x8)
	unsigned char unreflected_f30[0x14]; // 0xf30 (0x14) 
	float NetworkSmoothingVisibilityThreshold; // 0xf44 (0x4)
	int NetworkSmoothingThrottleProxyUpdateForPawnLOD; // 0xf48 (0x4)
	float NetworkSmoothingViewAngleThreshold; // 0xf4c (0x4)
	unsigned char unreflected_f50[0x4]; // 0xf50 (0x4) 
	float NetworkSmoothingViewAngleThresholdSmall; // 0xf54 (0x4)
	unsigned char unreflected_f58[0x4]; // 0xf58 (0x4) 
	float NetworkSmoothingNoThrottleWithinDistanceInMeters; // 0xf5c (0x4)
	int PlayerLodRequiredForFloorCheckWhenRendered; // 0xf60 (0x4)
	enum EFortAILODLevel AILodRequiredForFloorCheckWhenRendered; // 0xf64 (0x1)
	bool bIsRidden; // 0xf65 (0x1)
	unsigned char unreflected_f66[0x7a]; // 0xf66 (0x7a) 
	struct TWeakObjectPtr<class UFortSurfaceTrackingComponent> SurfaceTrackingComponent; // 0xfe0 (0x8)
	class UCurveFloat* VelocityBasedStrafeCurve; // 0xfe8 (0x8)
	class UCurveFloat* VelocityBasedTurnCurve; // 0xff0 (0x8)
	class UCurveFloat* VelocityBasedBackupCurve; // 0xff8 (0x8)
	bool bWasUsingVelocityBasedTurnCurve; // 0x1000 (0x1)
	unsigned char unreflected_1001[0x3]; // 0x1001 (0x3) 
	float RotationYawRateToRestore; // 0x1004 (0x4)
	struct FScalableFloat FallingSlopeSafeSlideAngleScalable; // 0x1008 (0x28)
	struct FScalableFloat FallingSlopeSafeSlideMaxSpeedScalable; // 0x1030 (0x28)
	struct FScalableFloat FallingSlopeDamageScalarMinScalable; // 0x1058 (0x28)
	unsigned char unreflected_1080[0x8]; // 0x1080 (0x8) 
	bool bWantsToSlide; // 0x1088 (0x1)
	bool bSlideInputJustTurnedOff; // 0x1089 (0x1)
	bool bJumpSlideAvailable; // 0x108a (0x1)
	bool bSlideCommandBuffered; // 0x108b (0x1)
	bool bWantsToSwing; // 0x108c (0x1)
	bool bSwingAttached; // 0x108d (0x1)
	bool bSwingAttachedVehicle; // 0x108e (0x1)
	bool bSwingInstantVelocity; // 0x108f (0x1)
	struct FVector_NetQuantize100 SwingAttachLocation; // 0x1090 (0x18)
	struct FVector_NetQuantize100 SwingLaunch; // 0x10a8 (0x18)
	bool bInitialAttach; // 0x10c0 (0x1)
	bool bSwingFromMovingBase; // 0x10c1 (0x1)
	unsigned char unreflected_10c2[0x2]; // 0x10c2 (0x2) 
	float SwingingDistanceToGround; // 0x10c4 (0x4)
	float SwingDetachTime; // 0x10c8 (0x4)
	float SwingingVerticalDistThreshold; // 0x10cc (0x4)
	float FallingSlopeSafeSlideAngleCached; // 0x10d0 (0x4)
	float FallingSlopeSafeSlideNormalZ; // 0x10d4 (0x4)
	struct FRidableControlParams RidableControlParams; // 0x10d8 (0x1e0)
	struct FRidableControlRuntimeData RidableRuntimeData; // 0x12b8 (0x40)
	struct FFlyingRidableControlParams FlyingRidableControlParams; // 0x12f8 (0x1c0)
	float MaxHalfAimingAngle; // 0x14b8 (0x4)
	unsigned char unreflected_14bc[0x4]; // 0x14bc (0x4) 
	struct FAirControlParams SkydivingControlParamsPassive; // 0x14c0 (0x140)
	struct FAirControlParams SkydivingControlParamsActive; // 0x1600 (0x140)
	struct FAirControlParams ParachuteControlParamsSkydive; // 0x1740 (0x140)
	struct FAirControlParams ParachuteControlParamsJump; // 0x1880 (0x140)
	struct FAirControlParams ParachuteControlParamsGliderRedeploy; // 0x19c0 (0x140)
	struct FAirControlParams GoopAirControlParams; // 0x1b00 (0x140)
	struct FGoopControlParams GoopControlParams; // 0x1c40 (0xa0)
	struct FSwingingControlParams SwingingControlParams; // 0x1ce0 (0x6e8)
	struct FAirControlParams BalloonControlParams; // 0x23c8 (0x140)
	struct FAirControlParams FloatingControlParams; // 0x2508 (0x140)
	struct FAirControlParams VortexSkydivingControlParamsPassive; // 0x2648 (0x140)
	struct FAirControlParams VortexSkydivingControlParamsActive; // 0x2788 (0x140)
	struct FAirControlParams VortexSkydivingControlParamsActiveUpward; // 0x28c8 (0x140)
	struct FAirControlParams VortexParachuteControlParams; // 0x2a08 (0x140)
	struct FAirControlParams VortexVolumeSkydivingControlParams; // 0x2b48 (0x140)
	struct FAirControlParams SpinningVortexSkydivingControlParamsPassive; // 0x2c88 (0x140)
	struct FAirControlParams SpinningVortexSkydivingControlParamsActive; // 0x2dc8 (0x140)
	struct FAirControlParams SpinningVortexSkydivingControlParamsActiveUpward; // 0x2f08 (0x140)
	struct FAirControlParams SpinningVortexParachuteControlParams; // 0x3048 (0x140)
	struct FAirControlParams SkyTubeSkydivingControlParamsPassive; // 0x3188 (0x140)
	struct FAirControlParams SkyTubeSkydivingControlParamsActive; // 0x32c8 (0x140)
	struct FAirControlParams SkyTubeSkydivingControlParamsActiveUpward; // 0x3408 (0x140)
	struct FScalableFloat SkyTubeUpwardAccelerationScalar; // 0x3548 (0x28)
	struct FScalableFloat SkyTubeDownwardAccelerationScalar; // 0x3570 (0x28)
	struct FWaterControlParams SurfaceSwimmingWaterControlParams; // 0x3598 (0x690)
	struct FWaterJumpParams WaterJumpParams; // 0x3c28 (0xa0)
	struct FWaterJumpParams WaterJumpParamsSprint; // 0x3cc8 (0xa0)
	bool bComputeWaterSplineDataOnSimulatedMovement; // 0x3d68 (0x1)
	unsigned char unreflected_3d69[0x7]; // 0x3d69 (0x7) 
	struct FWaterSprintBoostParams WaterSprintBoostParams; // 0x3d70 (0xf0)
	struct FSlidingControlParams SlidingControlParams; // 0x3e60 (0x640)
	struct FQuat CachedInitialFacingRotationForSliding; // 0x44a0 (0x20)
	bool bInFallingGracePeriod; // 0x44c0 (0x1)
	unsigned char unreflected_44c1[0x3]; // 0x44c1 (0x3) 
	struct FSynchedActionInfo SynchedActionInfo; // 0x44c4 (0x30)
	unsigned char unreflected_44f4[0x1c]; // 0x44f4 (0x1c) 
	float SkydivingMaxSmoothUpdateDistanceScale; // 0x4510 (0x4)
	float SlideTimeUntilReset; // 0x4514 (0x4)
	float SlideIfVelocityLessThanZ; // 0x4518 (0x4)
	int GravityCeilingRelation; // 0x451c (0x4)
	unsigned char unreflected_4520[0xb0]; // 0x4520 (0xb0) 
	float CurrentZiplineVelocityDirection; // 0x45d0 (0x4)
	float GracePeriodToConnectToZipline; // 0x45d4 (0x4)
	float FallingStartedZ; // 0x45d8 (0x4)
	unsigned char unreflected_45dc[0x1dc]; // 0x45dc (0x1dc) 
	struct FVector CustomFallingAcceleration; // 0x47b8 (0x18)
	unsigned char unreflected_47d0[0x38]; // 0x47d0 (0x38) 
	struct FVector ReplicatedAcceleration; // 0x4808 (0x18)
	unsigned char unreflected_4820[0x448]; // 0x4820 (0x448) 
	unsigned char bTriggeredFallingFeedbackSinceLanded; // 0x4c68 (0x1)
	unsigned char unreflected_4c69[0x7]; // 0x4c69 (0x7) 
	struct TArray<struct FName> UseHighToleranceIds; // 0x4c70 (0x10)
	unsigned char bUpdatesFloorWhenNotInFullSimulation; // 0x4c80 (0x1)
	unsigned char bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate; // 0x4c80 (0x1)
	unsigned char bAvoidOvershootingDuringPathfollowing; // 0x4c80 (0x1)
	unsigned char bIgnoreAccelerationWhenAvoidingOvershoot; // 0x4c80 (0x1)
	unsigned char unreflected_4c81[0x67]; // 0x4c81 (0x67) 
	bool bAllowVerticalPawnRotation; // 0x4ce8 (0x1)
	unsigned char unreflected_4ce9[0x3f]; // 0x4ce9 (0x3f) 
	struct TScriptInterface<class IFortAthenaAILODSettings> CachedLODSettingsManager; // 0x4d28 (0x10)
	float CustomMeshHeightAdjust; // 0x4d38 (0x4)
	float CustomMeshHeightAdjustLerpTarget; // 0x4d3c (0x4)
	float CustomMeshHeightAdjustLerpSpeed; // 0x4d40 (0x4)
	float CustomMeshHeightAdjustTotalApplied; // 0x4d44 (0x4)
	unsigned char unreflected_4d48[0x1]; // 0x4d48 (0x1) 
	bool bWantsToSkate; // 0x4d49 (0x1)
	unsigned char padding_4d4a[0x26]; // 0x4d4a (0x26)

	/* Functions */

	// Function /Script/FortniteGame.FortMovementComp_Character.SetUseHighAccelerationTolerance (Underlying native function: SetUseHighAccelerationTolerance 0x890e698)
	void SetUseHighAccelerationTolerance(bool& bShouldUseHighTolerance, struct FName& UseHighToleranceId); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMovementComp_Character.SetHasReplicatedAcceleration (Underlying native function: SetHasReplicatedAcceleration 0x890e58c)
	void SetHasReplicatedAcceleration(bool& bInHasReplicatedAcceleration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsSwingingGround (Underlying native function: IsSwingingGround 0x890e560)
	bool IsSwingingGround(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsSwingingAir (Underlying native function: IsSwingingAir 0x890e534)
	bool IsSwingingAir(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsPassivelySkydiving (Underlying native function: IsPassivelySkydiving 0x890e510)
	bool IsPassivelySkydiving(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsPassivelyParachuting (Underlying native function: IsPassivelyParachuting 0x890e4c8)
	bool IsPassivelyParachuting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsActivelyStrafingInAir (Underlying native function: IsActivelyStrafingInAir 0x890e41c)
	bool IsActivelyStrafingInAir(bool& bCheckMovementMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsActivelySkydivingUpInVortex (Underlying native function: IsActivelySkydivingUpInVortex 0x890e3f8)
	bool IsActivelySkydivingUpInVortex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsActivelySkydiving (Underlying native function: IsActivelySkydiving 0x890e368)
	bool IsActivelySkydiving(bool& bCheckMovementMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.IsActivelyParachuting (Underlying native function: IsActivelyParachuting 0x890e344)
	bool IsActivelyParachuting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetWaterVelocity (Underlying native function: GetWaterVelocity 0x890e31c)
	struct FVector GetWaterVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetWaterSurfaceNormal (Underlying native function: GetWaterSurfaceNormal 0x890e2f4)
	struct FVector GetWaterSurfaceNormal(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetWaterSurfaceLocation (Underlying native function: GetWaterSurfaceLocation 0x890e2cc)
	struct FVector GetWaterSurfaceLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetWaterImmersionDepth (Underlying native function: GetWaterImmersionDepth 0x890e2b4)
	float GetWaterImmersionDepth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetSwingingDistanceToGround (Underlying native function: GetSwingingDistanceToGround 0x890e29c)
	float GetSwingingDistanceToGround(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetSwingAttachedVehicle (Underlying native function: GetSwingAttachedVehicle 0x890e284)
	bool GetSwingAttachedVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetSwingAttached (Underlying native function: GetSwingAttached 0x890e26c)
	bool GetSwingAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetPlayerRelativeVelocityToWater (Underlying native function: GetPlayerRelativeVelocityToWater 0x890e244)
	struct FVector GetPlayerRelativeVelocityToWater(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_Character.GetFallingStartedZ (Underlying native function: GetFallingStartedZ 0x890e22c)
	float GetFallingStartedZ(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

