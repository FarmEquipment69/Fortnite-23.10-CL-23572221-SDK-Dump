// Class /Script/FortniteGame.FortAthenaJackalVehicle
// Size: 0x1b30
class AFortAthenaJackalVehicle : public AFortAthenaSKVehicle
{
	class UFortAthenaJackalVehicleConfigs* FortJackalVehicleConfigs; // 0x19c0 (0x8)
	int NumBoostTimers; // 0x19c8 (0x4)
	unsigned char unreflected_19cc[0x4]; // 0x19cc (0x4) 
	struct TArray<struct FFortRechargingActionTimer> BoostTimers; // 0x19d0 (0x10)
	struct FGameplayTagContainer AbortSprintPlayerTags; // 0x19e0 (0x20)
	struct FGameplayTagContainer PreventBoostPlayerTags; // 0x1a00 (0x20)
	unsigned char unreflected_1a20[0x18]; // 0x1a20 (0x18) 
	class UClass* SprintCameraModeClass; // 0x1a38 (0x8)
	class UClass* BoostCameraModeClass; // 0x1a40 (0x8)
	float JumpCharge; // 0x1a48 (0x4)
	float JumpCooldownRemaining; // 0x1a4c (0x4)
	unsigned char unreflected_1a50[0x8]; // 0x1a50 (0x8) 
	float PendingJumpCharge; // 0x1a58 (0x4)
	unsigned char unreflected_1a5c[0x4]; // 0x1a5c (0x4) 
	class UParticleSystemComponent* CacheBoostFX; // 0x1a60 (0x8)
	class UParticleSystemComponent* CacheLoopingFX; // 0x1a68 (0x8)
	class UMaterialInstanceDynamic* BoostMID; // 0x1a70 (0x8)
	class UFortVehicleAudioVoice* CacheAudioMovement; // 0x1a78 (0x8)
	class UFortVehicleAudioVoice* CacheAudioBoost; // 0x1a80 (0x8)
	class UFortVehicleAudioVoice* CacheAudioWind; // 0x1a88 (0x8)
	struct FVector FrontSpringFXOffset; // 0x1a90 (0x18)
	struct FVector RearSpringFXOffset; // 0x1aa8 (0x18)
	struct FVector FXBoostEnd; // 0x1ac0 (0x18)
	bool bShouldCorrectYaw; // 0x1ad8 (0x1)
	unsigned char unreflected_1ad9[0x3f]; // 0x1ad9 (0x3f) 
	class UClass* BoostingAnimClass; // 0x1b18 (0x8)
	unsigned char padding_1b20[0x10]; // 0x1b20 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnWeaponUnholstered (Underlying native function: OnWeaponUnholstered 0x801f1d8)
	void OnWeaponUnholstered(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnJumped (Has no native function)
	void OnJumped(float& Charge); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnJumpChargeEnd (Has no native function)
	void OnJumpChargeEnd(float& Charge); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnJumpChargeBegin (Has no native function)
	void OnJumpChargeBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnHeldObjectPickedUp (Underlying native function: OnHeldObjectPickedUp 0x801eca0)
	void OnHeldObjectPickedUp(class AActor*& HeldObject); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnHeldObjectDropped (Underlying native function: OnHeldObjectDropped 0x801ec20)
	void OnHeldObjectDropped(class AActor*& HeldObject); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnDriveModeChanged (Has no native function)
	void OnDriveModeChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnBoostEnd (Has no native function)
	void OnBoostEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.OnBoostBegin (Has no native function)
	void OnBoostBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.NativeOnBoostEnd (Underlying native function: NativeOnBoostEnd 0x801eb88)
	void NativeOnBoostEnd(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.NativeOnBoostBegin (Underlying native function: NativeOnBoostBegin 0x801eb38)
	void NativeOnBoostBegin(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.IsDriveModeOnly (Underlying native function: IsDriveModeOnly 0x801e7b4)
	bool IsDriveModeOnly(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.GetSpringHitLocation (Underlying native function: GetSpringHitLocation 0x801e4b4)
	bool GetSpringHitLocation(int& SpringIndex, struct FVector& HitLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.GetCurrentBoostTimer (Underlying native function: GetCurrentBoostTimer 0x801deb8)
	struct FFortRechargingActionTimer GetCurrentBoostTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.GetBoostCandidateIndex (Underlying native function: GetBoostCandidateIndex 0x801dd8c)
	int GetBoostCandidateIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CheckWater (Underlying native function: CheckWater 0x801d7a0)
	void CheckWater(float& WaterLocationZ, class UParticleSystemComponent*& WaterFX, class UAudioComponent*& WaterAudio); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CanJump (Underlying native function: CanJump 0x801d77c)
	bool CanJump(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CanChargeJump (Underlying native function: CanChargeJump 0x801d77c)
	bool CanChargeJump(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CanBoost (Underlying native function: CanBoost 0x801d754)
	bool CanBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CanActivateBoost (Underlying native function: CanActivateBoost 0x801d730)
	bool CanActivateBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CacheFX (Underlying native function: CacheFX 0x801d0c4)
	void CacheFX(class UParticleSystemComponent*& InBoostFX, class UParticleSystemComponent*& InLoopingFX); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaJackalVehicle.CacheAudioPointers (Underlying native function: CacheAudioPointers 0x801cde0)
	void CacheAudioPointers(class UFortVehicleAudioVoice*& InAudioMovement, class UFortVehicleAudioVoice*& InAudioBoost, class UFortVehicleAudioVoice*& InAudioWind); // (Final | Native | Public | BlueprintCallable)
};

