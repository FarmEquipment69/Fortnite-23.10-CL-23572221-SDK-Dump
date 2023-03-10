// Class /Script/FortniteGame.FortAnimInstance
// Size: 0x530
class UFortAnimInstance : public UFortBaseAnimInstance
{
	bool bUpdateAllPawnProperties; // 0x430 (0x1)
	unsigned char unreflected_431[0x3]; // 0x431 (0x3) 
	float VelocityLerpAlpha; // 0x434 (0x4)
	struct FVector PawnVelocity; // 0x438 (0x18)
	float MinSpeed2DThreshold; // 0x450 (0x4)
	float PawnSpeed2D; // 0x454 (0x4)
	float PawnVelocityZ; // 0x458 (0x4)
	float PawnMovementDirectionAzimuth; // 0x45c (0x4)
	struct FRotator PawnRotationRate; // 0x460 (0x18)
	struct FRotator PawnDeltaRotation; // 0x478 (0x18)
	struct FRotator PawnLastRotation; // 0x490 (0x18)
	struct FVector PawnLastLocation; // 0x4a8 (0x18)
	bool bIsJumping; // 0x4c0 (0x1)
	bool bIsFalling; // 0x4c1 (0x1)
	bool bSwingingLayerLinked; // 0x4c2 (0x1)
	bool bShouldPredictLanding; // 0x4c3 (0x1)
	bool bLandingPredicted; // 0x4c4 (0x1)
	unsigned char unreflected_4c5[0x3]; // 0x4c5 (0x3) 
	float PredictedFallTimeLeft; // 0x4c8 (0x4)
	float FallLookAheadSubStepping; // 0x4cc (0x4)
	int FallLookAheadMaxIterations; // 0x4d0 (0x4)
	bool bDebugLandPrediction; // 0x4d4 (0x1)
	bool bRecordJumpPositions; // 0x4d5 (0x1)
	bool bIsRecordingJump; // 0x4d6 (0x1)
	unsigned char unreflected_4d7[0x1]; // 0x4d7 (0x1) 
	int RecordJumpFrameCount; // 0x4d8 (0x4)
	unsigned char unreflected_4dc[0x4]; // 0x4dc (0x4) 
	struct FVector RecordJumpInitialJumpLocation; // 0x4e0 (0x18)
	float AimPitch; // 0x4f8 (0x4)
	float AimYaw; // 0x4fc (0x4)
	float TimeForRecentlyFired; // 0x500 (0x4)
	float TimeToReachRelaxedLevel1; // 0x504 (0x4)
	float TimeToReachRelaxedLevel2; // 0x508 (0x4)
	float MinTimeAfterFiredBeforeWallRelaxed; // 0x50c (0x4)
	bool bRecentlyFired; // 0x510 (0x1)
	bool bIsRelaxedLevel1; // 0x511 (0x1)
	bool bIsRelaxedLevel2; // 0x512 (0x1)
	bool bIsWeaponLoweredNearWall; // 0x513 (0x1)
	bool bExitedRelaxedThisUpdate; // 0x514 (0x1)
	bool bLowerWeaponNearWallDuringTargeting; // 0x515 (0x1)
	unsigned char unreflected_516[0x2]; // 0x516 (0x2) 
	float RelaxedLevelTimeCounter; // 0x518 (0x4)
	float SavedWeaponLastFireTime; // 0x51c (0x4)
	unsigned char unreflected_520[0x8]; // 0x520 (0x8) 
	enum EAnimRelaxedState RequestedRelaxedState; // 0x528 (0x1)
	unsigned char bClothEnabled; // 0x529 (0x1)
	unsigned char bAnimDynamicsEnabled; // 0x529 (0x1)
	unsigned char bRigidBodyEnabled; // 0x529 (0x1)
	bool bIsInGoop; // 0x52a (0x1)
	bool bIsBeingRidden; // 0x52b (0x1)
	bool bIsSliding; // 0x52c (0x1)
	bool bIsKneeSliding; // 0x52d (0x1)
	bool bIsBaseballSliding; // 0x52e (0x1)
	unsigned char padding_52f[0x1]; // 0x52f (0x1)

	/* Functions */

	// Function /Script/FortniteGame.FortAnimInstance.TryGetFortAIPawn (Underlying native function: TryGetFortAIPawn 0x7f41f20)
	class AFortAIPawn* TryGetFortAIPawn(); // (Final | 0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAnimInstance.StopMontageIncludingInactive (Underlying native function: StopMontageIncludingInactive 0x7f41d68)
	void StopMontageIncludingInactive(float& InBlendOutTime, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimInstance.GetPreviousFrameAimPitchAndYaw (Underlying native function: GetPreviousFrameAimPitchAndYaw 0x7f402f0)
	void GetPreviousFrameAimPitchAndYaw(float& OutPitch, float& OutYaw); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAnimInstance.GetCardinalDirectionFromAngle (Underlying native function: GetCardinalDirectionFromAngle 0x7f3fcf0)
	enum EFortCardinalDirection GetCardinalDirectionFromAngle(float& Angle, float& DeadZoneAngle); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAnimInstance.AnimNotify_RightFootStep (Underlying native function: AnimNotify_RightFootStep 0x2403ef0)
	void AnimNotifyRightFootStep(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAnimInstance.AnimNotify_LeftFootStep (Underlying native function: AnimNotify_LeftFootStep 0x24165e8)
	void AnimNotifyLeftFootStep(class UAnimNotify*& Notify); // (Final | Native | Public)
};

