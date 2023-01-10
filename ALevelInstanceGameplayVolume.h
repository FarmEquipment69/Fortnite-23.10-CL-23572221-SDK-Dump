// Class /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
// Size: 0x498
class ALevelInstanceGameplayVolume : public AGameplayVolume
{
	unsigned char unreflected_310[0x8]; // 0x310 (0x8) 
	struct FMulticastInlineDelegate OnLevelInstanceResolved; // 0x318 (0x10)
	unsigned char unreflected_328[0x30]; // 0x328 (0x30) 
	struct FMulticastInlineDelegate OnDisabledStateChanged; // 0x358 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceGuidChanged; // 0x368 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceNameChanged; // 0x378 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceSizeChanged; // 0x388 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceContentCollectionChanged; // 0x398 (0x10)
	unsigned char unreflected_3a8[0x1]; // 0x3a8 (0x1) 
	bool bEditMode; // 0x3a9 (0x1)
	bool bDisabled; // 0x3aa (0x1)
	enum ESpatialLoadingState LoadingState; // 0x3ab (0x1)
	unsigned char unreflected_3ac[0x4]; // 0x3ac (0x4) 
	struct FString LevelInstanceName; // 0x3b0 (0x10)
	bool bInstanceLoaded; // 0x3c0 (0x1)
	bool bWantsLevelLoaded; // 0x3c1 (0x1)
	unsigned char unreflected_3c2[0x1]; // 0x3c2 (0x1) 
	bool bConvertStructuresToProps; // 0x3c3 (0x1)
	unsigned char unreflected_3c4[0x4]; // 0x3c4 (0x4) 
	class AFortMinigame* CachedMinigame; // 0x3c8 (0x8)
	class UFortMutatorListComponent* MutatorListComponent; // 0x3d0 (0x8)
	class UFortClassTrackerComponent* ClassFilterComponent; // 0x3d8 (0x8)
	struct TArray<> BlacklistedClasses; // 0x3e0 (0x10)
	unsigned char unreflected_3f0[0x50]; // 0x3f0 (0x50) 
	struct FGuid LevelInstanceSaveActorGuid; // 0x440 (0x10)
	class AFortLevelInstanceSaveActor* LevelInstanceSaveActor; // 0x450 (0x8)
	unsigned char padding_458[0x40]; // 0x458 (0x40)

	/* Functions */

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded (Underlying native function: SetWantsLevelLoaded 0x6fc5ea0)
	void SetWantsLevelLoaded(bool& bInWantsLevelLoaded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation (Underlying native function: SetReadyForInstantiation 0x6fc5e20)
	void SetReadyForInstantiation(bool& bReady); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName (Underlying native function: SetLevelInstanceName 0x6fc5ccc)
	void SetLevelInstanceName(struct FString& InName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection (Underlying native function: SetLevelInstanceContentCollection 0x6fc5ba4)
	void SetLevelInstanceContentCollection(struct TWeakObjectPtr<class UFortCreativeActorCollection>& ContentCollection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid (Underlying native function: SetLevelInstanceActorGuid 0x6fc5b14)
	void SetLevelInstanceActorGuid(struct FGuid& InLevelInstanceActorGuid); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode (Underlying native function: SetEditMode 0x6fc5a5c)
	void SetEditMode(bool& bInEditMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay (Underlying native function: RemoveActorWhenEndPlay 0x6fc5998)
	void RemoveActorWhenEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied (Underlying native function: RemoveActorWhenDied 0x6fc5614)
	void RemoveActorWhenDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged (Has no native function)
	void OnVolumeChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled (Underlying native function: OnRep_IsDisabled 0x6fc5600)
	void OnRepIsDisabled(); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded (Underlying native function: OnRep_InstanceLoaded 0x6fc5600)
	void OnRepInstanceLoaded(); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode (Underlying native function: OnRep_EditMode 0x6fc5600)
	void OnRepEditMode(); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0x6fc553c)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged (Underlying native function: LevelInstanceSizeChanged 0x6fc54bc)
	void LevelInstanceSizeChanged(class AActor*& InstigatorActor); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged (Underlying native function: LevelInstanceNameChanged 0x6fc5368)
	void LevelInstanceNameChanged(struct FString& Name); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged (Underlying native function: LevelInstanceContentCollectionChanged 0x6fc520c)
	void LevelInstanceContentCollectionChanged(class AActor*& InstigatorActor, struct TWeakObjectPtr<class UFortCreativeActorCollection>& ContentCollection); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged (Underlying native function: LevelInstanceContentChanged 0x6fc518c)
	void LevelInstanceContentChanged(class AActor*& InstigatorActor); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed (Underlying native function: LevelInstanceBeingDestroyed 0x6fc5178)
	void LevelInstanceBeingDestroyed(); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor (Underlying native function: IsPreviewActor 0x6fc5154)
	bool IsPreviewActor(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode (Underlying native function: IsInEditMode 0x6fc513c)
	bool IsInEditMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled (Underlying native function: IsDisabled 0x6fc5124)
	bool IsDisabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor (Underlying native function: InstantiateFromLevelInstanceSaveActor 0x6fc5110)
	void InstantiateFromLevelInstanceSaveActor(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged (Underlying native function: HandleActorHealthChanged 0x6fc5054)
	void HandleActorHealthChanged(class AActor*& Actor, float& NewHealth); // (Final | Native | Protected)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName (Underlying native function: GetLevelInstanceName 0x6fc4fe0)
	struct FString GetLevelInstanceName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor (Underlying native function: CreateLevelInstanceSaveActor 0x6fc4fbc)
	class AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes (Underlying native function: CheckForOverlappingVolumes 0x6fc4fa8)
	void CheckForOverlappingVolumes(); // (Final | Native | Protected | BlueprintCallable)
};

