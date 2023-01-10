// Class /Script/FortniteGame.FortPickup
// Size: 0x730
class AFortPickup : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	bool bUsePickupWidget; // 0x2a0 (0x1)
	bool bSuppressInteractionWidget; // 0x2a1 (0x1)
	bool bWeaponsCanBeAutoPickups; // 0x2a2 (0x1)
	bool bAutoUpgradeWeapons; // 0x2a3 (0x1)
	bool bDoServerHandlePickupTrace; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	float SimulatingTooLongLength; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	struct FMulticastInlineDelegate OnPickup; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnPickupAttempted; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnPickupDespawned; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnPickupDestroyed; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnPickupCombined; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate OnSetPawnWhoDroppedPickup; // 0x300 (0x10)
	unsigned char unreflected_310[0x8]; // 0x310 (0x8) 
	struct FFortItemEntry PrimaryPickupItemEntry; // 0x318 (0x1a0)
	struct TArray<struct FFortItemEntry> MultiItemPickupEntries; // 0x4b8 (0x10)
	struct FFortPickupLocationData PickupLocationData; // 0x4c8 (0x98)
	enum EFortPickupSourceTypeFlag PickupSourceTypeFlags; // 0x560 (0x1)
	enum EFortPickupSpawnSource PickupSpawnSource; // 0x561 (0x1)
	unsigned char unreflected_562[0x2]; // 0x562 (0x2) 
	struct TWeakObjectPtr<class AActor> OwnerInstigator; // 0x564 (0x8)
	int16_t OptionalOwnerID; // 0x56c (0x2)
	int16_t DropperID; // 0x56e (0x2)
	struct FGuid OptionalMissionGuid; // 0x570 (0x10)
	class UFortItem* PrimaryPickupDummyItem; // 0x580 (0x8)
	struct TWeakObjectPtr<class AFortPickupEffect> PickupEffectBlueprint; // 0x588 (0x8)
	class UCapsuleComponent* TouchCapsule; // 0x590 (0x8)
	class UFortProjectileMovementComponent* MovementComponent; // 0x598 (0x8)
	class UFortWaterInteractionComponent* WaterInteractionComponent; // 0x5a0 (0x8)
	class UFortLinkToActorComponent* LinkToActorComponent; // 0x5a8 (0x8)
	bool bPickedUp; // 0x5b0 (0x1)
	bool bSplitOnPickup; // 0x5b1 (0x1)
	bool bTossedFromContainer; // 0x5b2 (0x1)
	bool bForceHideMinimapIndicator; // 0x5b3 (0x1)
	bool bCombinePickupsWhenTossCompletes; // 0x5b4 (0x1)
	bool bServerStoppedSimulation; // 0x5b5 (0x1)
	bool bClientUseInterpolationOnly; // 0x5b6 (0x1)
	unsigned char ServerImpactSoundFlash; // 0x5b7 (0x1)
	float LastLandedSoundPlayTime; // 0x5b8 (0x4)
	float OverrideInteractAimRadius; // 0x5bc (0x4)
	float LandSoundZForceThreshold; // 0x5c0 (0x4)
	float DefaultFlyTime; // 0x5c4 (0x4)
	bool bForceDefaultFlyTime; // 0x5c8 (0x1)
	unsigned char unreflected_5c9[0x7]; // 0x5c9 (0x7) 
	struct TArray<class UAudioComponent*> DroppedLoopingSoundComps; // 0x5d0 (0x10)
	class USoundBase* LandedSoundOverride; // 0x5e0 (0x8)
	struct TWeakObjectPtr<class AFortPawn> PawnWhoDroppedPickup; // 0x5e8 (0x8)
	int CachedSpecialActorIdx; // 0x5f0 (0x4)
	struct FName SpecialActorID; // 0x5f4 (0x4)
	class UFortSimpleMiniMapIndicator* MinimapIndicator; // 0x5f8 (0x8)
	class UFortSlateHUDIndicator* HUDLabel; // 0x600 (0x8)
	unsigned char unreflected_608[0xd4]; // 0x608 (0xd4) 
	bool bRandomRotation; // 0x6dc (0x1)
	unsigned char unreflected_6dd[0x3]; // 0x6dd (0x3) 
	class AActor* VolumeAtSpawn; // 0x6e0 (0x8)
	unsigned char unreflected_6e8[0x18]; // 0x6e8 (0x18) 
	float DespawnTime; // 0x700 (0x4)
	float StormDespawnTime; // 0x704 (0x4)
	float StartSimulatingTime; // 0x708 (0x4)
	unsigned char padding_70c[0x24]; // 0x70c (0x24)

	/* Functions */

	// Function /Script/FortniteGame.FortPickup.TossPickup (Underlying native function: TossPickup 0x882adc4)
	void TossPickup(struct FVector& FinalLocation, class AFortPawn*& ItemOwner, int& OverrideMaxStackCount, bool& bToss, bool& bShouldCombinePickupsWhenTossCompletes, enum EFortPickupSourceTypeFlag& InPickupSourceTypeFlags, enum EFortPickupSpawnSource& InPickupSpawnSource); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetPickedUp (Underlying native function: SetPickedUp 0x882a3e8)
	void SetPickedUp(bool& bInPickedUp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetOverrideInteractRadius (Underlying native function: SetOverrideInteractRadius 0x882a350)
	void SetOverrideInteractRadius(float& NewRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetDropper (Underlying native function: SetDropper 0x882a1d0)
	void SetDropper(class AFortPlayerController*& Dropper); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetDespawnTime (Underlying native function: SetDespawnTime 0x882a134)
	void SetDespawnTime(float& InDespawnTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetCombinePickupsWhenTossCompletes (Underlying native function: SetCombinePickupsWhenTossCompletes 0x882a0ac)
	void SetCombinePickupsWhenTossCompletes(bool& CombinePickupsWhenTossCompletes); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.PickedUp (Underlying native function: PickedUp 0x882a094)
	bool PickedUp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.OnServerStopCallback (Underlying native function: OnServerStopCallback 0x8829ff8)
	void OnServerStopCallback(struct FHitResult& Hit); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPickup.OnServerBounceCallback (Underlying native function: OnServerBounceCallback 0x8829f00)
	void OnServerBounceCallback(struct FHitResult& Hit, struct FVector& OldVelocity); // (0x00000002 | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPickup.OnRep_TossedFromContainer (Underlying native function: OnRep_TossedFromContainer 0x237fc80)
	void OnRepTossedFromContainer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_ServerStoppedSimulation (Underlying native function: OnRep_ServerStoppedSimulation 0x23b27f4)
	void OnRepServerStoppedSimulation(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_ServerImpactSoundFlash (Underlying native function: OnRep_ServerImpactSoundFlash 0x150911c)
	void OnRepServerImpactSoundFlash(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_PrimaryPickupItemEntry (Underlying native function: OnRep_PrimaryPickupItemEntry 0x150163c)
	void OnRepPrimaryPickupItemEntry(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_PickupOwnerData (Underlying native function: OnRep_PickupOwnerData 0x8829e28)
	void OnRepPickupOwnerData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_PickupLocationData (Underlying native function: OnRep_PickupLocationData 0x16001ac)
	void OnRepPickupLocationData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_ForceHideMinimapIndicator (Underlying native function: OnRep_ForceHideMinimapIndicator 0x167a010)
	void OnRepForceHideMinimapIndicator(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_bPickedUp (Underlying native function: OnRep_bPickedUp 0x2480778)
	void OnRepbPickedUp(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnOwnerEndPlay (Underlying native function: OnOwnerEndPlay 0x1b78434)
	void OnOwnerEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.NotifyQuestManager (Underlying native function: NotifyQuestManager 0x8829d28)
	void NotifyQuestManager(enum EFortQuestObjectiveStatEvent& StatEvent, struct FGameplayTagContainer& EventTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.IsSkeletalMeshComponent (Underlying native function: IsSkeletalMeshComponent 0x8829b5c)
	bool IsSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.HandleMoveIgnoredActorEndPlay (Underlying native function: HandleMoveIgnoredActorEndPlay 0x276c124)
	void HandleMoveIgnoredActorEndPlay(class AActor*& EndPlayActor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPickup.HandleGiveItemSpawnedPickup (Underlying native function: HandleGiveItemSpawnedPickup 0x8829a5c)
	void HandleGiveItemSpawnedPickup(class AFortPlayerController*& PlayerController, class AFortPickup*& PickUp); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.HandleConnectedPhysicsActorWake (Underlying native function: HandleConnectedPhysicsActorWake 0x88299e0)
	void HandleConnectedPhysicsActorWake(class AActor*& PhysicsActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPickup.HandleConnectedActorDestroyed (Underlying native function: HandleConnectedActorDestroyed 0x88299e0)
	void HandleConnectedActorDestroyed(class AActor*& DamageCauser); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPickup.GetTrackerGuid (Underlying native function: GetTrackerGuid 0x8829838)
	struct FGuid GetTrackerGuid(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPrimaryItemEntry (Underlying native function: GetPrimaryItemEntry 0x882981c)
	struct FFortItemEntry GetPrimaryItemEntry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPrimaryItemDefinition (Underlying native function: GetPrimaryItemDefinition 0x66b6cf0)
	class UFortItemDefinition* GetPrimaryItemDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPickupStaticMeshComponent (Underlying native function: GetPickupStaticMeshComponent 0x8829768)
	class UStaticMeshComponent* GetPickupStaticMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPickupSkeletalMeshComponent (Underlying native function: GetPickupSkeletalMeshComponent 0x8829744)
	class USkeletalMeshComponent* GetPickupSkeletalMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPickupEffectBlueprint (Underlying native function: GetPickupEffectBlueprint 0x88296d8)
	class AFortPickupEffect* GetPickupEffectBlueprint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPawnWhoDroppedPickup (Underlying native function: GetPawnWhoDroppedPickup 0x882964c)
	class AFortPawn* GetPawnWhoDroppedPickup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetOwnerPlayerController (Underlying native function: GetOwnerPlayerController 0x8829628)
	class AFortPlayerController* GetOwnerPlayerController(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPickup.GetMovementCapsuleRadius (Underlying native function: GetMovementCapsuleRadius 0x8829610)
	static float GetMovementCapsuleRadius(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPickup.GetMovementCapsuleHalfHeight (Underlying native function: GetMovementCapsuleHalfHeight 0x25055e4)
	static float GetMovementCapsuleHalfHeight(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPickup.GetItemEntryNum (Underlying native function: GetItemEntryNum 0x88295ec)
	int GetItemEntryNum(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetItemEntry (Underlying native function: GetItemEntry 0x26be13c)
	struct FFortItemEntry GetItemEntry(int& ItemIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetInteractText (Underlying native function: GetInteractText 0x882951c)
	bool GetInteractText(struct FText& InteractText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.GetInteractErrorText (Underlying native function: GetInteractErrorText 0x882944c)
	bool GetInteractErrorText(struct FText& InteractErrorText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.GetDisplayName (Underlying native function: GetDisplayName 0x8829288)
	struct FText GetDisplayName(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.BlueprintSetPickupTarget (Underlying native function: BlueprintSetPickupTarget 0x8828c9c)
	void BlueprintSetPickupTarget(class AFortPawn*& PickupTarget, bool& bPlayPickupSound); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.BlueprintGetInteractErrorText (Underlying native function: BlueprintGetInteractErrorText 0x8828bcc)
	bool BlueprintGetInteractErrorText(struct FText& OverrideInteractErrorText); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickup.BlueprintCanInteract (Underlying native function: BlueprintCanInteract 0x25a53e0)
	bool BlueprintCanInteract(class AFortPlayerPawn*& FortPawn, bool& bCanInteractOverride); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickup.AllowLongRangeAutoPickup (Underlying native function: AllowLongRangeAutoPickup 0x88283c8)
	bool AllowLongRangeAutoPickup(class AFortPlayerPawn*& FortPawn); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickup.AddSpawnSourceTags (Underlying native function: AddSpawnSourceTags 0x8827e34)
	void AddSpawnSourceTags(struct FGameplayTagContainer& AdditionalTagsToAdd); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

