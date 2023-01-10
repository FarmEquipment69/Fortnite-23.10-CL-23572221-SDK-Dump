// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
// Size: 0x170
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{
	struct FScalableFloat Enabled; // 0xa0 (0x28)
	class AFortPlayerControllerAthena* PlayerController; // 0xc8 (0x8)
	class UFortCollectionDataPlayerAugment* CollectionData; // 0xd0 (0x8)
	struct FPlayerAugmentsPersistenceData LivePlayerAugmentsPersistenceData; // 0xd8 (0x18)
	struct TSet<class UFortPlayerAugmentItemDefinition*> AugmentsCollectedThisMatch; // 0xf0 (0x50)
	struct TArray<struct FReplicatedSharedPlayerAugment> ReplicatedSharedPlayerAugments; // 0x140 (0x10)
	unsigned char padding_150[0x20]; // 0x150 (0x20)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x6eea568)
	void HandleMcpProfilesInitialized(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded (Underlying native function: HandleCollectionDataTableLoaded 0x52b5df0)
	void HandleCollectionDataTableLoaded(struct TWeakObjectPtr<class UFortCollectionsDataTable>& CollectionsDataTableSoftPtr); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded (Underlying native function: HandleCollectionDataLoaded 0x52b5d20)
	void HandleCollectionDataLoaded(struct TWeakObjectPtr<class UFortCollectionData>& BaseCollectionDataSoftPtr); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleAthenaGamePhaseChanged (Underlying native function: HandleAthenaGamePhaseChanged 0x6eea358)
	void HandleAthenaGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock (Underlying native function: GetRollCountSinceLastRandomUnlock 0x6eea340)
	int GetRollCountSinceLastRandomUnlock(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll (Underlying native function: GetLockStatusForAll 0x6eea05c)
	void GetLockStatusForAll(struct TArray<struct FPlayerAugmentLockStatus>& OutLockStatusArray); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus (Underlying native function: GetLockStatus 0x6ee9fbc)
	struct FPlayerAugmentLockStatus GetLockStatus(class UFortPlayerAugmentItemDefinition*& PlayerAugmentItemDefinition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList (Underlying native function: GetLockedList 0x6eea1b8)
	void GetLockedList(struct TArray<struct FPlayerAugmentLockStatus>& OutLockedList); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments (Underlying native function: GetCarryOverPlayerAugments 0x6ee9e60)
	void GetCarryOverPlayerAugments(struct TArray<struct FCarryOverPlayerAugment>& OutCarryOverPlayerAugments); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment (Underlying native function: AuthorityUnlockPlayerAugment 0x6ee9220)
	void AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition*& PlayerAugmentToUnlock); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock (Underlying native function: AuthoritySetRollCountSinceLastRandomUnlock 0x6ee90f4)
	void AuthoritySetRollCountSinceLastRandomUnlock(int& NewRollCount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments (Underlying native function: AuthoritySetCarryOverPlayerAugments 0x6ee8f60)
	void AuthoritySetCarryOverPlayerAugments(struct TArray<struct FCarryOverPlayerAugment>& NewCarryOverPlayerAugments); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

