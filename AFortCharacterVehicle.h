// Class /Script/FortniteGame.FortCharacterVehicle
// Size: 0x55b0
class AFortCharacterVehicle : public AFortPlayerPawnAthena
{
	bool bDestroyBuildingSMActorOnForceExit; // 0x5220 (0x1)
	bool bDestroyOnLastExit; // 0x5221 (0x1)
	unsigned char unreflected_5222[0x4]; // 0x5222 (0x4) 
	unsigned char VTDMode; // 0x5226 (0x1)
	unsigned char unreflected_5227[0x11]; // 0x5227 (0x11) 
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> SoftOverrideItemWrap; // 0x5238 (0x28)
	class UAthenaItemWrapDefinition* OverrideItemWrap; // 0x5260 (0x8)
	struct FVehicleCosmeticInfo VehicleCosmeticInfo; // 0x5268 (0x38)
	bool bForcedToAlwaysSpawn; // 0x52a0 (0x1)
	bool bAllowInteractBetweenFortVolumes; // 0x52a1 (0x1)
	unsigned char unreflected_52a2[0x6]; // 0x52a2 (0x6) 
	class USkeletalMeshComponent* EmoteMesh; // 0x52a8 (0x8)
	struct TArray<class UFortMontageItemDefinitionBase*> SpecialVehicleEmotes; // 0x52b0 (0x10)
	float SpawnPropOnEmoteScalar; // 0x52c0 (0x4)
	unsigned char unreflected_52c4[0x4]; // 0x52c4 (0x4) 
	class UFortSkeletalAudioComponent* EmoteFoleyAudioComponent; // 0x52c8 (0x8)
	float SeatSwitchCooldown; // 0x52d0 (0x4)
	unsigned char unreflected_52d4[0x4]; // 0x52d4 (0x4) 
	struct FMulticastInlineDelegate OnMountedWeaponFiredEvent; // 0x52d8 (0x10)
	class UFortVehicleSeatComponent* VehicleSeatComponent; // 0x52e8 (0x8)
	class UFortAbilitySystemComponent* OverrideAbilitySystemComponent; // 0x52f0 (0x8)
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x52f8 (0x8)
	class UClass* DriverAnimClass; // 0x5300 (0x8)
	class UClass* PassengerAnimClass; // 0x5308 (0x8)
	class UFortOstrichSet* OstrichSet; // 0x5310 (0x8)
	struct FGameplayTagContainer VehicleTags; // 0x5318 (0x20)
	class UFortAbilitySet* StartupAbilitySet; // 0x5338 (0x8)
	unsigned char unreflected_5340[0x8]; // 0x5340 (0x8) 
	struct FMulticastInlineDelegate OnHealthChanged; // 0x5348 (0x10)
	class UClass* CameraModeClass; // 0x5358 (0x8)
	class UClass* PassengerCameraModeClass; // 0x5360 (0x8)
	float MinBoostDuration; // 0x5368 (0x4)
	float MaxBoostDuration; // 0x536c (0x4)
	float FullyChargedJumpTime; // 0x5370 (0x4)
	float MinHoldDuration; // 0x5374 (0x4)
	float DriverExitLaunchScale; // 0x5378 (0x4)
	float PassengerExitLaunchScale; // 0x537c (0x4)
	float ExtraInteractTraceRange; // 0x5380 (0x4)
	float MinDistForInteract; // 0x5384 (0x4)
	float DashMovementLockDuration; // 0x5388 (0x4)
	float SeatTransitionDuration; // 0x538c (0x4)
	float ClearMoveIgnoreActorsDelay; // 0x5390 (0x4)
	float HealthIndicatorVerticalOffset; // 0x5394 (0x4)
	float SplashDamageMinPercent; // 0x5398 (0x4)
	float SplashDamageFalloffRange; // 0x539c (0x4)
	struct FGameplayTagContainer BlockEntry; // 0x53a0 (0x20)
	struct FGameplayTagContainer IgnoreDamage; // 0x53c0 (0x20)
	struct FGameplayTagContainer IgnoreRiderDamageFalloff; // 0x53e0 (0x20)
	float JumpPressTime; // 0x5400 (0x4)
	bool bDidChargeJump; // 0x5404 (0x1)
	unsigned char unreflected_5405[0x3]; // 0x5405 (0x3) 
	struct TWeakObjectPtr<class AFortPlayerController> LastController; // 0x5408 (0x8)
	unsigned char unreflected_5410[0x8]; // 0x5410 (0x8) 
	class UFortOstrichAnimInstance* OstrichAnimInstance; // 0x5418 (0x8)
	struct FMulticastInlineDelegate OnPawnEnteredVehicleAtSeat; // 0x5420 (0x10)
	struct FMulticastInlineDelegate OnPawnEnteredVehicleSeat; // 0x5430 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleSeat; // 0x5440 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleFromSeat; // 0x5450 (0x10)
	struct FMulticastInlineDelegate OnVehicleOwnerChanged; // 0x5460 (0x10)
	struct FMulticastInlineDelegate OnSleepStateChangedDelegate; // 0x5470 (0x10)
	unsigned char unreflected_5480[0x4]; // 0x5480 (0x4) 
	struct FGameplayTag SpecialActorTag; // 0x5484 (0x4)
	unsigned char unreflected_5488[0x8]; // 0x5488 (0x8) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x5490 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x5550 (0x10)
	struct FName SpecialActorID; // 0x5560 (0x4)
	unsigned char unreflected_5564[0x4]; // 0x5564 (0x4) 
	struct FScalableFloat ReregisterSpecialActorIconDelay; // 0x5568 (0x28)
	unsigned char unreflected_5590[0x8]; // 0x5590 (0x8) 
	bool bEnableCurieMaterial; // 0x5598 (0x1)
	unsigned char padding_5599[0x17]; // 0x5599 (0x17)

	/* Functions */

	// Function /Script/FortniteGame.FortCharacterVehicle.WeaponFired (Has no native function)
	void WeaponFired(class UFortVehicleSeatWeaponComponent*& WeaponComponent, float& Overheat); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.StopEmoting (Underlying native function: StopEmoting 0x8068634)
	void StopEmoting(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle.SetAllowInteractionBetweenFortVolumes (Underlying native function: SetAllowInteractionBetweenFortVolumes 0x8067e40)
	void SetAllowInteractionBetweenFortVolumes(bool& bInteractBetweenVolumes); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnShutdown (Has no native function)
	void OnShutdown(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnRep_OverrideWrap (Underlying native function: OnRep_OverrideWrap 0x8067990)
	void OnRepOverrideWrap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnRep_OverrideAbilitySystemComponent (Underlying native function: OnRep_OverrideAbilitySystemComponent 0x806797c)
	void OnRepOverrideAbilitySystemComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnPawnExitVehicle (Underlying native function: OnPawnExitVehicle 0x80674a0)
	void OnPawnExitVehicle(class AFortPlayerPawn*& PlayerPawn, struct FName& ExitSocketName); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnPawnEnterVehicle (Has no native function)
	void OnPawnEnterVehicle(class AFortPlayerPawn*& PlayerPawn, int& SeatIdx); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnHoldExitStopped (Has no native function)
	void OnHoldExitStopped(class AFortPawn*& ExitingPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnHoldExitStarted (Has no native function)
	void OnHoldExitStarted(class AFortPawn*& ExitingPawn, float& ExitDuration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.K2_ApplyCosmeticWrap (Has no native function)
	void K2ApplyCosmeticWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.GunOverheat (Has no native function)
	void GunOverheat(class UFortVehicleSeatWeaponComponent*& WeaponComponent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetSkeletalMeshComponent (Underlying native function: GetSkeletalMeshComponent 0x8066d20)
	class USkeletalMeshComponent* GetSkeletalMeshComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetMechMesh (Underlying native function: GetMechMesh 0x8066d08)
	class USkeletalMeshComponent* GetMechMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetIsChargedJumpActive (Underlying native function: GetIsChargedJumpActive 0x8066c80)
	bool GetIsChargedJumpActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetHasGunner (Underlying native function: GetHasGunner 0x8066c5c)
	bool GetHasGunner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetEmoteMesh (Underlying native function: GetEmoteMesh 0x8066bcc)
	class USkeletalMeshComponent* GetEmoteMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetAbilitySystemComponent (Underlying native function: GetAbilitySystemComponent 0x806684c)
	class UAbilitySystemComponent* GetAbilitySystemComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.FormatActionLabelText (Has no native function)
	struct FText FormatActionLabelText(struct FName& ActionName, struct FText& InActionLabel); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.DoesDamageCauserPreventDamageFromBeingNulled (Underlying native function: DoesDamageCauserPreventDamageFromBeingNulled 0x80664cc)
	bool DoesDamageCauserPreventDamageFromBeingNulled(class AActor*& DamageCauser); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.BP_CanInteract (Underlying native function: BP_CanInteract 0x806636c)
	bool BPCanInteract(class AController*& InController); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.AllowInteractionBetweenFortVolume (Underlying native function: AllowInteractionBetweenFortVolume 0x8065f8c)
	bool AllowInteractionBetweenFortVolume(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

