// Class /Script/MotorcycleRuntime.FortMotorcycleVehicle
// Size: 0x1eb0
class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle
{
	struct FMulticastInlineDelegate OnStartChargingJumpDelegate; // 0x1a38 (0x10)
	struct FMulticastInlineDelegate OnCancelChargingJumpDelegate; // 0x1a48 (0x10)
	struct FMulticastInlineDelegate OnJumpDelegate; // 0x1a58 (0x10)
	struct FMulticastInlineDelegate OnChargingJumpDelegate; // 0x1a68 (0x10)
	struct FMulticastInlineDelegate OnStartAirTrickDelegate; // 0x1a78 (0x10)
	struct FMulticastInlineDelegate OnFinishAirTrickDelegate; // 0x1a88 (0x10)
	struct FMulticastInlineDelegate OnStartWheelieDelegate; // 0x1a98 (0x10)
	struct FMulticastInlineDelegate OnReleaseWheelieDelegate; // 0x1aa8 (0x10)
	struct FMulticastInlineDelegate OnLandWheelieDelegate; // 0x1ab8 (0x10)
	struct FMulticastInlineDelegate OnFailWheelieDelegate; // 0x1ac8 (0x10)
	struct FMulticastInlineDelegate OnStartStoppieDelegate; // 0x1ad8 (0x10)
	struct FMulticastInlineDelegate OnReleaseStoppieDelegate; // 0x1ae8 (0x10)
	struct FMulticastInlineDelegate OnLandStoppieDelegate; // 0x1af8 (0x10)
	struct FMulticastInlineDelegate OnInventoryModeChangedDelegate; // 0x1b08 (0x10)
	class UClass* InventoryCameraModeClass; // 0x1b18 (0x8)
	class UClass* InventoryCameraModeClassADS; // 0x1b20 (0x8)
	class UClass* PassengerCameraModeClass; // 0x1b28 (0x8)
	class UClass* PassengerCameraModeClassADS; // 0x1b30 (0x8)
	class UFortMotorcycleVehicleConfigs* FortMotorcycleVehicleConfigs; // 0x1b38 (0x8)
	struct FName RearAxleSocket; // 0x1b40 (0x4)
	float SwingArmRotation; // 0x1b44 (0x4)
	unsigned char unreflected_1b48[0x78]; // 0x1b48 (0x78) 
	struct TArray<int> BoostShapeIndices; // 0x1bc0 (0x10)
	bool bIsBoostAttacking; // 0x1bd0 (0x1)
	unsigned char unreflected_1bd1[0xf]; // 0x1bd1 (0xf) 
	enum EFortMotorcycleAirTrickType CachedTrickType; // 0x1be0 (0x1)
	bool bHadPassengerAtTrickStart; // 0x1be1 (0x1)
	unsigned char unreflected_1be2[0x26]; // 0x1be2 (0x26) 
	struct TArray<struct FName> PassengerADSSockets; // 0x1c08 (0x10)
	struct TArray<struct FVector> PassengerADSRelativeOffsets; // 0x1c18 (0x10)
	class UNiagaraComponent* CachedNiagaraComponentRoadAndExhaust; // 0x1c28 (0x8)
	struct FString RoadAndExhaustNiagaraComponentName; // 0x1c30 (0x10)
	struct FString RoadAndExhaustVehicleSpeedName; // 0x1c40 (0x10)
	struct FString RoadAndExhaustSlideDirectionName; // 0x1c50 (0x10)
	float RoadAndExhaustMinSpeedForDust; // 0x1c60 (0x4)
	unsigned char unreflected_1c64[0x4]; // 0x1c64 (0x4) 
	struct FString RoadAndExhaustDustRearName; // 0x1c68 (0x10)
	struct FString RoadAndExhaustDustColorLerpName; // 0x1c78 (0x10)
	float RoadAndExhaustDustColorLerp; // 0x1c88 (0x4)
	unsigned char unreflected_1c8c[0x4]; // 0x1c8c (0x4) 
	struct FString RoadAndExhaustDustAlphaMultiplierName; // 0x1c90 (0x10)
	float RoadAndExhaustDustAlphaMultiplier; // 0x1ca0 (0x4)
	unsigned char unreflected_1ca4[0x4]; // 0x1ca4 (0x4) 
	struct FString RoadAndExhaustPeelOutColorIndexName; // 0x1ca8 (0x10)
	struct FString RoadAndExhaustPeelOutRearName; // 0x1cb8 (0x10)
	struct FString RoadAndExhaustIsPeelOutOnRoadName; // 0x1cc8 (0x10)
	struct FString RoadAndExhaustIsPeelOutOnRoadRewindName; // 0x1cd8 (0x10)
	struct FString RoadAndExhaustIsInAirName; // 0x1ce8 (0x10)
	struct FGameplayTag RoadAndExhaustCameraDirtGameplayCueTag; // 0x1cf8 (0x4)
	struct FGameplayTag RoadAndExhaustCameraWaterGameplayCueTag; // 0x1cfc (0x4)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> RoadAndExhaustSurfaceTypeArrayForFX; // 0x1d00 (0x10)
	class ULegacyCameraShake* DriverCameraShakeInstance; // 0x1d10 (0x8)
	class ULegacyCameraShake* AcceleratingCameraShakeInstance; // 0x1d18 (0x8)
	unsigned char unreflected_1d20[0x8]; // 0x1d20 (0x8) 
	struct FName RoadAndExhaustHeadlightsName; // 0x1d28 (0x4)
	struct FName RoadAndExhaustBrakelightsName; // 0x1d2c (0x4)
	struct FScalableFloat DoorBashMinSpeed; // 0x1d30 (0x28)
	struct FScalableFloat DoorBashMaxSpeed; // 0x1d58 (0x28)
	struct FScalableFloat DoorBashForwardDistanceMin; // 0x1d80 (0x28)
	struct FScalableFloat DoorBashForwardDistanceMax; // 0x1da8 (0x28)
	struct FGameplayTag DoorBashGameplayCueTag; // 0x1dd0 (0x4)
	unsigned char unreflected_1dd4[0x4]; // 0x1dd4 (0x4) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> DoorBashCollisionTypesForDoor; // 0x1dd8 (0x10)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> DoorBashCollisionTypesForPawn; // 0x1de8 (0x10)
	struct FScalableFloat DoorBashSphereRadiusForPawnLaunch; // 0x1df8 (0x28)
	struct FScalableFloat DoorBashScalarForPawnLaunch; // 0x1e20 (0x28)
	struct FGameplayTag DoorBashPawnLaunchGameplayCueTag; // 0x1e48 (0x4)
	unsigned char unreflected_1e4c[0x4]; // 0x1e4c (0x4) 
	struct FGameplayTagQuery InventoryModeTagQuery; // 0x1e50 (0x48)
	unsigned char padding_1e98[0x18]; // 0x1e98 (0x18)

	/* Functions */

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers (Underlying native function: ServerEjectAllPlayers 0x6df7ba8)
	void ServerEjectAllPlayers(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking (Underlying native function: OnRep_IsBoostAttacking 0x6fbd4e8)
	void OnRepIsBoostAttacking(); // (Final | Native | Protected)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged (Underlying native function: OnPlayerWeaponChanged 0x6fbd3bc)
	void OnPlayerWeaponChanged(class AFortPawn*& InPawn, class AFortWeapon*& InNewWeapon, class AFortWeapon*& InPlayerWeapon); // (Final | Native | Public)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnInventoryModeToggled (Has no native function)
	void OnInventoryModeToggled(bool& bIsInInventoryMode); // (Event | Public | BlueprintEvent)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature (Has no native function)
	void MotorcycleWheelieDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature (Has no native function)
	void MotorcycleStoppieDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature (Has no native function)
	void MotorcycleStartAirTrickDelegateSignature(enum EFortMotorcycleAirTrickType& TrickType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature (Has no native function)
	void MotorcycleJumpDelegateSignature(float& JumpChargeFactor); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature (Has no native function)
	void MotorcycleInventoryModeDelegateSignature(bool& IsInInventoryMode); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature (Has no native function)
	void MotorcycleChargingJumpDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature (Has no native function)
	void MotorcycleAirTrickDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding (Underlying native function: IsPowerSliding 0x6fbd370)
	bool IsPowerSliding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode (Underlying native function: IsInInventoryMode 0x6fbd34c)
	bool IsInInventoryMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn (Underlying native function: GetSurfaceTypeVehicleOn 0x6fbd228)
	struct TEnumAsByte<EPhysicalSurface> GetSurfaceTypeVehicleOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState (Underlying native function: ChangeBoostAttackState 0x6fbd0e8)
	void ChangeBoostAttackState(bool& bNewIsBoostAttacking); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie (Has no native function)
	void BPOnStartWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie (Has no native function)
	void BPOnStartStoppie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump (Has no native function)
	void BPOnStartChargingJump(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick (Has no native function)
	void BPOnStartAirTrick(enum EFortMotorcycleAirTrickType& TrickType); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie (Has no native function)
	void BPOnReleaseWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie (Has no native function)
	void BPOnReleaseStoppie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie (Has no native function)
	void BPOnLandWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie (Has no native function)
	void BPOnLandStoppie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump (Has no native function)
	void BPOnJump(float& JumpChargeFactor); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick (Has no native function)
	void BPOnFinishAirTrick(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie (Has no native function)
	void BPOnFailWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump (Has no native function)
	void BPOnChargingJump(float& JumpChargeFactor); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump (Has no native function)
	void BPOnCancelChargingJump(); // (Event | Public | BlueprintEvent)
};

