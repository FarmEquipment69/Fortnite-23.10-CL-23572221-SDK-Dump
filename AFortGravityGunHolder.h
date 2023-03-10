// Class /Script/FortniteGame.FortGravityGunHolder
// Size: 0xfd0
class AFortGravityGunHolder : public ABuildingGameplayActor
{
	class AActor* OwningPlayer; // 0x9d8 (0x8)
	class AActor* HeldObject; // 0x9e0 (0x8)
	class UClass* HeldObjectProjectileClass; // 0x9e8 (0x8)
	class UFortLayeredAudioComponent* CachedLayeredAudioComponent; // 0x9f0 (0x8)
	struct FGravityGunVelocityAudioMapRangeClamped VelocityAudioRangeClamped; // 0x9f8 (0x20)
	class USceneComponent* PivotComponent; // 0xa18 (0x8)
	class USceneComponent* RingPivotComponent; // 0xa20 (0x8)
	class UStaticMeshComponent* RingSMComponent; // 0xa28 (0x8)
	class UStaticMeshComponent* Ring1SMComponent; // 0xa30 (0x8)
	class UStaticMeshComponent* Ring2SMComponent; // 0xa38 (0x8)
	class UStaticMeshComponent* Ring3SMComponent; // 0xa40 (0x8)
	enum EGravityGunHolderState CurrentState; // 0xa48 (0x1)
	enum EGravityGunHolderObjectType ObjectTypeHeld; // 0xa49 (0x1)
	bool bAimingDownSights; // 0xa4a (0x1)
	unsigned char unreflected_a4b[0x5]; // 0xa4b (0x5) 
	struct FScalableFloat HoldForwardDistance; // 0xa50 (0x28)
	struct FScalableFloat HoldUpDistance; // 0xa78 (0x28)
	struct FScalableFloat HoldUpDistanceWhileADS; // 0xaa0 (0x28)
	float MaxAxisLength; // 0xac8 (0x4)
	unsigned char unreflected_acc[0x4]; // 0xacc (0x4) 
	struct FScalableFloat MaxAxisLengthPercent; // 0xad0 (0x28)
	float CurrentRingSizeInUnits; // 0xaf8 (0x4)
	unsigned char unreflected_afc[0x4]; // 0xafc (0x4) 
	struct FScalableFloat MoveSpeed; // 0xb00 (0x28)
	struct FScalableFloat MoveSpeedWhileADS; // 0xb28 (0x28)
	struct FScalableFloat MaxMoveSpeedToGoal; // 0xb50 (0x28)
	struct FScalableFloat StabilizationCoefficient; // 0xb78 (0x28)
	struct FScalableFloat StabilizationCoefficientWhileADS; // 0xba0 (0x28)
	struct FScalableFloat RingRightDistanceScalar; // 0xbc8 (0x28)
	struct FScalableFloat FollowSpeedMultiplier; // 0xbf0 (0x28)
	struct FScalableFloat VehicleFollowSpeedMultiplier; // 0xc18 (0x28)
	struct FScalableFloat VehicleBroadcastImpactAtLocationRadius; // 0xc40 (0x28)
	struct FScalableFloat MaxDistanceBeforeDetach; // 0xc68 (0x28)
	float TimeWhenStartedHolding; // 0xc90 (0x4)
	unsigned char unreflected_c94[0x4]; // 0xc94 (0x4) 
	struct FScalableFloat MaxHoldTimeForDetach; // 0xc98 (0x28)
	struct FScalableFloat RingRotationSpeed; // 0xcc0 (0x28)
	struct FScalableFloat RingRotationSpeedWhileADS; // 0xce8 (0x28)
	struct FScalableFloat ThrowSpeed; // 0xd10 (0x28)
	float LaunchSpeedMultiplier; // 0xd38 (0x4)
	float VehicleLaunchSpeedMultiplier; // 0xd3c (0x4)
	bool bUseCameraRightAsReference; // 0xd40 (0x1)
	bool bAllowRotation; // 0xd41 (0x1)
	enum EGravityGunHolderRotationAxis CurrentRotationAxisIndex; // 0xd42 (0x1)
	unsigned char unreflected_d43[0x5]; // 0xd43 (0x5) 
	struct FScalableFloat TargetRotationTorqueStiffness; // 0xd48 (0x28)
	struct FScalableFloat TargetRotationTorqueDampening; // 0xd70 (0x28)
	struct FScalableFloat TargetRotationTorqueMaxAccel; // 0xd98 (0x28)
	struct FScalableFloat TargetRotationTorqueDeltaTimeScalar; // 0xdc0 (0x28)
	class AFortProjectileTrajectory* TrajectorIndicator; // 0xde8 (0x8)
	struct FScalableFloat TrajectorySplineFriction; // 0xdf0 (0x28)
	struct FScalableFloat TrajectorySplineBounciness; // 0xe18 (0x28)
	struct FScalableFloat TrajectorySplineTimeStep; // 0xe40 (0x28)
	struct FScalableFloat TrajectorySplineTraceExtent; // 0xe68 (0x28)
	struct TEnumAsByte<ECollisionChannel> TrajectorySplineTraceChannel; // 0xe90 (0x1)
	unsigned char unreflected_e91[0x7]; // 0xe91 (0x7) 
	struct TArray<class AActor*> TrajectorySplineExtraIgnoreActors; // 0xe98 (0x10)
	struct FScalableFloat TrajectorySplineMaxBounces; // 0xea8 (0x28)
	struct FScalableFloat TrajectorySplineMaxSteps; // 0xed0 (0x28)
	struct FScalableFloat TrajectorySplineMaxDistanceBetweenSplinePoints; // 0xef8 (0x28)
	struct FScalableFloat TrajectorySplineInitialDistance; // 0xf20 (0x28)
	float CachedHoldForwardDistance; // 0xf48 (0x4)
	float CachedHoldUpDistance; // 0xf4c (0x4)
	float CachedHoldUpDistanceWhileADS; // 0xf50 (0x4)
	unsigned char unreflected_f54[0x4c]; // 0xf54 (0x4c) 
	float CachedTargetRotationTorqueDeltaTimeScalar; // 0xfa0 (0x4)
	unsigned char padding_fa4[0x2c]; // 0xfa4 (0x2c)

	/* Functions */

	// Function /Script/FortniteGame.FortGravityGunHolder.UpdateFX (Has no native function)
	void UpdateFX(float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGravityGunHolder.UpdateAudio (Underlying native function: UpdateAudio 0x83570dc)
	void UpdateAudio(float& DeltaSeconds); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGravityGunHolder.SetHeldObject (Underlying native function: SetHeldObject 0x83d8b30)
	void SetHeldObject(class AActor*& InHeldObject); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortGravityGunHolder.LogHeldObjectDestroyed (Underlying native function: LogHeldObjectDestroyed 0x83d8094)
	void LogHeldObjectDestroyed(class AActor*& InHeldObjectDestroying); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGravityGunHolder.LogHeldBuildingObjectDestroyed (Underlying native function: LogHeldBuildingObjectDestroyed 0x83d7e18)
	void LogHeldBuildingObjectDestroyed(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortGravityGunHolder.HeldObjectHit (Underlying native function: HeldObjectHit 0x83d7b24)
	void HeldObjectHit(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortGravityGunHolder.HandleThrowHeldObject (Underlying native function: HandleThrowHeldObject 0x83d7a8c)
	void HandleThrowHeldObject(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortGravityGunHolder.DetachHeldObject (Has no native function)
	void DetachHeldObject(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGravityGunHolder.CalculateLaunchVelocity (Underlying native function: CalculateLaunchVelocity 0x83d5dc4)
	void CalculateLaunchVelocity(bool& bDropped, float& OutThrowSpeed, struct FVector& OutVelocity); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGravityGunHolder.AttemptCloneActorToHold (Underlying native function: AttemptCloneActorToHold 0x83d5d0c)
	class AActor* AttemptCloneActorToHold(class AActor*& InActor); // (Final | Native | Protected | BlueprintCallable | Const)
};

