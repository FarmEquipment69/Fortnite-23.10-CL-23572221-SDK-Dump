// Class /Script/FortniteGame.FortCreativePersistenceComponent
// Size: 0x130
class UFortCreativePersistenceComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnPlayerDataLoaded; // 0xa0 (0x10)
	struct FFortInventory_SaveEntrySettings SaveEntrySettings; // 0xb0 (0x38)
	struct FSaveRestrictions SaveRestrictions; // 0xe8 (0x30)
	struct TArray<struct TWeakObjectPtr<class UClass>> ConfigurableItemClassesNotToSave; // 0x118 (0x10)
	unsigned char padding_128[0x8]; // 0x128 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.StorePlayerRelatedData (Underlying native function: StorePlayerRelatedData 0x8522b50)
	bool StorePlayerRelatedData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame, bool& bPostGameSave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.StoreAllMinigamePlayersData (Underlying native function: StoreAllMinigamePlayersData 0x85229b4)
	void StoreAllMinigamePlayersData(class AFortMinigame*& Minigame, bool& bPostGameSave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.RemovePendingToApplyData (Underlying native function: RemovePendingToApplyData 0x85203b0)
	void RemovePendingToApplyData(class AFortPlayerState*& FortPlayerState, bool& bShowsLog); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.OnPlayerPawnFinishedTeleported (Underlying native function: OnPlayerPawnFinishedTeleported 0x851fd50)
	void OnPlayerPawnFinishedTeleported(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x851fc5c)
	void OnMinigameEnded(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayersDataNeededBeforeSpawn (Underlying native function: LoadPlayersDataNeededBeforeSpawn 0x851f3a0)
	void LoadPlayersDataNeededBeforeSpawn(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayersDataNeededAfterSpawn (Underlying native function: LoadPlayersDataNeededAfterSpawn 0x851f330)
	void LoadPlayersDataNeededAfterSpawn(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayerRelatedData (Underlying native function: LoadPlayerRelatedData 0x851f0bc)
	void LoadPlayerRelatedData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayerDataNeededBeforeSpawn (Underlying native function: LoadPlayerDataNeededBeforeSpawn 0x6d23ca0)
	void LoadPlayerDataNeededBeforeSpawn(class AFortPlayerState*& FortPlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayerDataNeededAfterSpawn (Underlying native function: LoadPlayerDataNeededAfterSpawn 0x6d23ca0)
	void LoadPlayerDataNeededAfterSpawn(class AFortPlayerState*& FortPlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.GetPersistentStatFilterList (Underlying native function: GetPersistentStatFilterList 0x6f661c0)
	struct TArray<class UFortMinigameStatFilter*> GetPersistentStatFilterList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.GetAutoSaveInterval (Underlying native function: GetAutoSaveInterval 0x851c80c)
	static float GetAutoSaveInterval(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.EnableAutoSave (Underlying native function: EnableAutoSave 0x851c4d8)
	void EnableAutoSave(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.DisableAutoSave (Underlying native function: DisableAutoSave 0x851c3b4)
	void DisableAutoSave(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.ClearPlayerSpecificData (Underlying native function: ClearPlayerSpecificData 0x851bf04)
	void ClearPlayerSpecificData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.ClearPlayerRelatedData (Underlying native function: ClearPlayerRelatedData 0x851be40)
	void ClearPlayerRelatedData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.ClearAllPlayersSpecificData (Underlying native function: ClearAllPlayersSpecificData 0x851bb88)
	void ClearAllPlayersSpecificData(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)
};

