// Class /Script/FortniteGame.FortVehicleInterface
// Size: 0x28
class IFortVehicleInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleInterface.WakeUp (Underlying native function: WakeUp 0x66b6494)
	void WakeUp(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.VehicleIsInSkyTube (Underlying native function: VehicleIsInSkyTube 0x8795ee8)
	bool VehicleIsInSkyTube(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.VehicleIsInAir (Underlying native function: VehicleIsInAir 0x13ede58)
	bool VehicleIsInAir(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.VehicleGameplayCue_Damage (Underlying native function: VehicleGameplayCue_Damage 0x8795dec)
	void VehicleGameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.UsesVehicleFuelSystem (Underlying native function: UsesVehicleFuelSystem 0x8795dc4)
	bool UsesVehicleFuelSystem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.TryConstructWithModServer (Underlying native function: TryConstructWithModServer 0x8795c50)
	void TryConstructWithModServer(struct FGameplayTagContainer& ForceMods); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ShowVehicleHealthBarOnPlayerHUD (Underlying native function: ShowVehicleHealthBarOnPlayerHUD 0x2eae3cc)
	bool ShowVehicleHealthBarOnPlayerHUD(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.SetVehicleFxMaterial (Underlying native function: SetVehicleFxMaterial 0x8795aa4)
	void SetVehicleFxMaterial(struct FGameplayTag& FxTag, class UMaterialInterface*& FxMaterial); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetVehicleFx (Underlying native function: SetVehicleFx 0x87959dc)
	void SetVehicleFx(struct FGameplayTag& FxTag, class UFXSystemAsset*& FxSystem); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetShootingCone (Underlying native function: SetShootingCone 0x8795900)
	void SetShootingCone(int& SeatIndex, struct FAthenaVehicleShootingCone*& InCone); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetIgnoreNextFallingDamage (Underlying native function: SetIgnoreNextFallingDamage 0x879587c)
	void SetIgnoreNextFallingDamage(bool& bInIgnoreNextFallingDamage); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetIgnoreAllFallingDamage (Underlying native function: SetIgnoreAllFallingDamage 0x87957f8)
	void SetIgnoreAllFallingDamage(bool& InIgnoreAllFallingDamage); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetHealthPercent (Underlying native function: SetHealthPercent 0x8795770)
	void SetHealthPercent(float& Percent); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetFuel (Underlying native function: SetFuel 0x7362494)
	void SetFuel(float& NewFuel); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetForcedToAlwaysSpawn (Underlying native function: SetForcedToAlwaysSpawn 0x87956ec)
	void SetForcedToAlwaysSpawn(bool& bSetTo); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetDestroyOnLastExit (Underlying native function: SetDestroyOnLastExit 0x8795668)
	void SetDestroyOnLastExit(bool& bSetTo); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetCurrentFocusedSocketLocation (Underlying native function: SetCurrentFocusedSocketLocation 0x87955e4)
	void SetCurrentFocusedSocketLocation(int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetAttachedWheelDataMaterialInstance (Underlying native function: SetAttachedWheelDataMaterialInstance 0x879551c)
	void SetAttachedWheelDataMaterialInstance(int& TireIndex, class UMaterialInstanceDynamic*& NewValue); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetActorBase (Underlying native function: SetActorBase 0x8795454)
	void SetActorBase(class AActor*& InActorBase, int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SeatIsTurret (Underlying native function: SeatIsTurret 0x87953c0)
	bool SeatIsTurret(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ResetTrick (Underlying native function: ResetTrick 0x87953a8)
	void ResetTrick(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.PlayerIsTryingToMoveForward (Underlying native function: PlayerIsTryingToMoveForward 0x28bfbfc)
	bool PlayerIsTryingToMoveForward(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.OverrideCurrentWrap (Underlying native function: OverrideCurrentWrap 0x8795324)
	void OverrideCurrentWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.NotifyAudioComponentVehicleTriggered (Underlying native function: NotifyAudioComponentVehicleTriggered 0x8795234)
	void NotifyAudioComponentVehicleTriggered(class UAudioComponent*& AudioComponent, int& Priority); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.MakeInoperable (Underlying native function: MakeInoperable 0x879521c)
	void MakeInoperable(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.IsVehicleFuelLow (Underlying native function: IsVehicleFuelLow 0x87951f4)
	bool IsVehicleFuelLow(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsVehicleFuelEmpty (Underlying native function: IsVehicleFuelEmpty 0x2aa7320)
	bool IsVehicleFuelEmpty(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsVehicleAcceleratingWithSpeedThreshold (Underlying native function: IsVehicleAcceleratingWithSpeedThreshold 0x8795128)
	bool IsVehicleAcceleratingWithSpeedThreshold(float& MinSpeed, float& MaxSpeed); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsTouchingGround (Underlying native function: IsTouchingGround 0x8795100)
	bool IsTouchingGround(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsTeamRestricted (Underlying native function: IsTeamRestricted 0x879506c)
	bool IsTeamRestricted(class AFortPlayerPawnAthena*& InteractingPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsPawnInSeatRequiringTargetingForShooting (Underlying native function: IsPawnInSeatRequiringTargetingForShooting 0x8794fd8)
	bool IsPawnInSeatRequiringTargetingForShooting(class AFortPlayerPawn*& PawnToCheck); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnSnow (Underlying native function: IsOnSnow 0x59b1020)
	bool IsOnSnow(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnRoad (Underlying native function: IsOnRoad 0x8794fb0)
	bool IsOnRoad(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnIce (Underlying native function: IsOnIce 0x8794f88)
	bool IsOnIce(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnGrass (Underlying native function: IsOnGrass 0x83551e4)
	bool IsOnGrass(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnDirt (Underlying native function: IsOnDirt 0x8794f60)
	bool IsOnDirt(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOffroad (Underlying native function: IsOffroad 0x8794f38)
	bool IsOffroad(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsInWater (Underlying native function: IsInWater 0x23afa94)
	bool IsInWater(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsInoperable (Underlying native function: IsInoperable 0x8794f10)
	bool IsInoperable(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsIdling (Underlying native function: IsIdling 0x803e990)
	bool IsIdling(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsDriverMinigameClassRestricted (Underlying native function: IsDriverMinigameClassRestricted 0x8794e7c)
	bool IsDriverMinigameClassRestricted(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsDestructible (Underlying native function: IsDestructible 0x8794e58)
	bool IsDestructible(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsBoosting (Underlying native function: IsBoosting 0x8794e30)
	bool IsBoosting(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsAsleep (Underlying native function: IsAsleep 0x8794e08)
	bool IsAsleep(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasVehicleModApplied (Underlying native function: HasVehicleModApplied 0x8794d68)
	bool HasVehicleModApplied(struct FGameplayTag& ModTag); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasTireMod (Underlying native function: HasTireMod 0x26960c8)
	bool HasTireMod(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasSeatCollision (Underlying native function: HasSeatCollision 0x8794cd4)
	bool HasSeatCollision(int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.HasPermissionToAlterBuildings (Underlying native function: HasPermissionToAlterBuildings 0x8794cac)
	bool HasPermissionToAlterBuildings(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasInfiniteFuel (Underlying native function: HasInfiniteFuel 0x71e7964)
	bool HasInfiniteFuel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasEverContainedPlayers (Underlying native function: HasEverContainedPlayers 0x8794c84)
	bool HasEverContainedPlayers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasDriver (Underlying native function: HasDriver 0x8794c5c)
	bool HasDriver(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetWaterDepth (Underlying native function: GetWaterDepth 0x8794c1c)
	float GetWaterDepth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleVelocity (Underlying native function: GetVehicleVelocity 0x8794be0)
	struct FVector GetVehicleVelocity(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleTags (Underlying native function: GetVehicleTags 0x8794bb4)
	struct FGameplayTagContainer GetVehicleTags(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleSecondaryFireActionName (Underlying native function: GetVehicleSecondaryFireActionName 0x8794b84)
	struct FName GetVehicleSecondaryFireActionName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleSeatComponentPtr (Underlying native function: GetVehicleSeatComponentPtr 0x8794b5c)
	class UFortVehicleSeatComponent* GetVehicleSeatComponentPtr(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleSeatChoiceDisplayText (Underlying native function: GetVehicleSeatChoiceDisplayText 0x8794a7c)
	struct FText GetVehicleSeatChoiceDisplayText(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleRotation (Underlying native function: GetVehicleRotation 0x8794a40)
	struct FRotator GetVehicleRotation(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleRightVector (Underlying native function: GetVehicleRightVector 0x1834368)
	struct FVector GetVehicleRightVector(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePrimaryFireActionName (Underlying native function: GetVehiclePrimaryFireActionName 0x8794a10)
	struct FName GetVehiclePrimaryFireActionName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePrimaryFireAbility (Underlying native function: GetVehiclePrimaryFireAbility 0x87949e0)
	class UClass* GetVehiclePrimaryFireAbility(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePontoonsComponent (Underlying native function: GetVehiclePontoonsComponent 0x87949b8)
	class UFortVehiclePontoonsComponent* GetVehiclePontoonsComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePlayerState (Underlying native function: GetVehiclePlayerState 0x8794924)
	class AFortPlayerStateZone* GetVehiclePlayerState(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleFuelPercent (Underlying native function: GetVehicleFuelPercent 0x1835724)
	float GetVehicleFuelPercent(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleFuelComponent (Underlying native function: GetVehicleFuelComponent 0x879481c)
	class UFortVehicleFuelComponent* GetVehicleFuelComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleForwardVector (Underlying native function: GetVehicleForwardVector 0x18341b0)
	struct FVector GetVehicleForwardVector(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleExitActionName (Underlying native function: GetVehicleExitActionName 0x8794790)
	struct FName GetVehicleExitActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleController (Underlying native function: GetVehicleController 0x8794640)
	class AFortPlayerControllerZone* GetVehicleController(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleConfigs (Underlying native function: GetVehicleConfigs 0x8794618)
	class UFortVehicleConfigs* GetVehicleConfigs(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleChangeSeatActionName (Underlying native function: GetVehicleChangeSeatActionName 0x879458c)
	struct FName GetVehicleChangeSeatActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleActorPtrConst (Underlying native function: GetVehicleActorPtrConst 0x8794564)
	class AActor* GetVehicleActorPtrConst(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleActorPtr (Underlying native function: GetVehicleActorPtr 0x879453c)
	class AActor* GetVehicleActorPtr(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleAbilitySystemComponent (Underlying native function: GetVehicleAbilitySystemComponent 0x13e8f80)
	class UAbilitySystemComponent* GetVehicleAbilitySystemComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetStandingFiringOffsetForSeat (Underlying native function: GetStandingFiringOffsetForSeat 0x8794404)
	struct FVector GetStandingFiringOffsetForSeat(int& SeatIndex); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetSkeletalMeshComponent (Underlying native function: GetSkeletalMeshComponent 0x2fd2a14)
	class USkeletalMeshComponent* GetSkeletalMeshComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetShootingCone (Underlying native function: GetShootingCone 0x8794260)
	bool GetShootingCone(int& SeatIndex, struct FTransform& OutConeTM, struct FAthenaVehicleShootingCone*& OutCone); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetSeatWeaponComponent (Underlying native function: GetSeatWeaponComponent 0x87941cc)
	class UFortVehicleSeatWeaponComponent* GetSeatWeaponComponent(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetSeatSwitchCooldown (Underlying native function: GetSeatSwitchCooldown 0x8794138)
	float GetSeatSwitchCooldown(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetPreviousForwardSpeedKmh (Underlying native function: GetPreviousForwardSpeedKmh 0x879410c)
	float GetPreviousForwardSpeedKmh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetPlayerFacingName (Underlying native function: GetPlayerFacingName 0x8794094)
	struct FString GetPlayerFacingName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetPawnAtSeat (Underlying native function: GetPawnAtSeat 0x8794000)
	class AFortPlayerPawn* GetPawnAtSeat(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetOwnerLocation (Underlying native function: GetOwnerLocation 0x8793fc4)
	struct FVector GetOwnerLocation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetMaxHealth (Underlying native function: GetMaxHealth 0x8793f98)
	float GetMaxHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetIndicatorRelativeOffset (Underlying native function: GetIndicatorRelativeOffset 0x8793f5c)
	struct FVector GetIndicatorRelativeOffset(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetHUDTopSpeed (Underlying native function: GetHUDTopSpeed 0x24c92b0)
	float GetHUDTopSpeed(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetHealth (Underlying native function: GetHealth 0x8793f30)
	float GetHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetGameplayTags (Underlying native function: GetGameplayTags 0x8793edc)
	struct FGameplayTagContainer GetGameplayTags(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetFuelCapacity (Underlying native function: GetFuelCapacity 0x8793eb0)
	float GetFuelCapacity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetFuel (Underlying native function: GetFuel 0x2d78c4c)
	float GetFuel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetForwardSpeedKmh (Underlying native function: GetForwardSpeedKmh 0x24b725c)
	float GetForwardSpeedKmh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetForcedToAlwaysSpawn (Underlying native function: GetForcedToAlwaysSpawn 0x27888f4)
	bool GetForcedToAlwaysSpawn(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetExitSocketTransform (Underlying native function: GetExitSocketTransform 0x8793d8c)
	struct FTransform GetExitSocketTransform(int& SeatIndex, int& SocketIndex); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetDriver (Underlying native function: GetDriver 0x8793d64)
	class AFortPlayerPawn* GetDriver(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetDisplayName (Underlying native function: GetDisplayName 0x8793cec)
	struct FString GetDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetCrouchingFiringOffsetForSeat (Underlying native function: GetCrouchingFiringOffsetForSeat 0x8793c44)
	struct FVector GetCrouchingFiringOffsetForSeat(int& SeatIndex); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetChildActorByClass (Underlying native function: GetChildActorByClass 0x8793bb0)
	class AActor* GetChildActorByClass(class UClass*& ActorClass); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetAllNonDriverPassengers (Underlying native function: GetAllNonDriverPassengers 0x8793b38)
	struct TArray<class AFortPlayerPawn*> GetAllNonDriverPassengers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GasPedalIsDown (Underlying native function: GasPedalIsDown 0x8793b10)
	bool GasPedalIsDown(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ForceDestroyVehicle (Underlying native function: ForceDestroyVehicle 0x8793a8c)
	void ForceDestroyVehicle(bool& bInPlayInstantDeathEffects); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.FindSeatIndex (Underlying native function: FindSeatIndex 0x87939f8)
	int FindSeatIndex(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ExitReleasedFromSeat (Underlying native function: ExitReleasedFromSeat 0x8793974)
	void ExitReleasedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.ExitPressedFromSeat (Underlying native function: ExitPressedFromSeat 0x87938f0)
	void ExitPressedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.ExitActivatedFromSeat (Underlying native function: ExitActivatedFromSeat 0x879386c)
	void ExitActivatedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.EjectSeat (Underlying native function: EjectSeat 0x87937d8)
	bool EjectSeat(int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.EjectPlayerPawn (Underlying native function: EjectPlayerPawn 0x8793744)
	bool EjectPlayerPawn(class AFortPlayerPawn*& InPlayerPawn); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.EjectAllPlayers (Underlying native function: EjectAllPlayers 0x7fbbf50)
	void EjectAllPlayers(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.DoesVehicleDamageOwnVehicle (Underlying native function: DoesVehicleDamageOwnVehicle 0x879371c)
	bool DoesVehicleDamageOwnVehicle(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.DoesVehicleDamageOtherVehicles (Underlying native function: DoesVehicleDamageOtherVehicles 0x87936f4)
	bool DoesVehicleDamageOtherVehicles(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.DoesVehicleDamageFriendlyVehicles (Underlying native function: DoesVehicleDamageFriendlyVehicles 0x87936cc)
	bool DoesVehicleDamageFriendlyVehicles(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.DisableTrickCredit (Underlying native function: DisableTrickCredit 0x8793644)
	void DisableTrickCredit(float& Duration); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.DestroyVehicle (Underlying native function: DestroyVehicle 0x6e8e008)
	void DestroyVehicle(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ContainsPlayers (Underlying native function: ContainsPlayers 0x8793608)
	bool ContainsPlayers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ClientIsDriver (Underlying native function: ClientIsDriver 0x237db90)
	bool ClientIsDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ChangeSeatFromIndex (Underlying native function: ChangeSeatFromIndex 0x8793584)
	void ChangeSeatFromIndex(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.ChangeSeat (Underlying native function: ChangeSeat 0x1598c88)
	void ChangeSeat(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.CanTeleport (Underlying native function: CanTeleport 0x879355c)
	bool CanTeleport(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CanShootFromSeat (Underlying native function: CanShootFromSeat 0x87934c8)
	bool CanShootFromSeat(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CanContainPlayers (Underlying native function: CanContainPlayers 0x87934a0)
	bool CanContainPlayers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CanApplyMod (Underlying native function: CanApplyMod 0x8793400)
	bool CanApplyMod(struct FGameplayTag& InTag); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CallWeaponFired (Underlying native function: CallWeaponFired 0x8793334)
	void CallWeaponFired(class UFortVehicleSeatWeaponComponent*& WeaponComponent, float& Overheat); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.CallGunOverheat (Underlying native function: CallGunOverheat 0x87932b0)
	void CallGunOverheat(class UFortVehicleSeatWeaponComponent*& WeaponComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.BP_GetAllPassengers (Underlying native function: BP_GetAllPassengers 0x2254374)
	struct TArray<class AFortPlayerPawn*> BPGetAllPassengers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.BlocksBuilding (Underlying native function: BlocksBuilding 0x8793288)
	bool BlocksBuilding(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.AreAnyTiresPopped (Underlying native function: AreAnyTiresPopped 0x8793260)
	bool AreAnyTiresPopped(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ApplyVehicleMod (Underlying native function: ApplyVehicleMod 0x879318c)
	void ApplyVehicleMod(struct FGameplayTag& ModTag, class AFortPlayerController*& EventInstigator); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ApplyTireMod (Underlying native function: ApplyTireMod 0x87930b8)
	void ApplyTireMod(struct FGameplayTag& NewTireModTag, class AFortPlayerController*& EventInstigator); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ApplyMaterialAndUseWrapIfPossible (Underlying native function: ApplyMaterialAndUseWrapIfPossible 0x8792f3c)
	class UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(class UMaterialInterface*& MaterialToUse, int& SlotIndex, bool& bAlwaysCreateMID); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.AllowsDamageFromOtherVehicle (Underlying native function: AllowsDamageFromOtherVehicle 0x8792e44)
	bool AllowsDamageFromOtherVehicle(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.AddVehicleActionNamesAndLabels (Underlying native function: AddVehicleActionNamesAndLabels 0x8792cfc)
	void AddVehicleActionNamesAndLabels(class AFortPlayerPawn*& FortPlayerPawn, struct TArray<struct FName>& SeatActionNames, struct TArray<struct FText>& SeatActionLabels); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

