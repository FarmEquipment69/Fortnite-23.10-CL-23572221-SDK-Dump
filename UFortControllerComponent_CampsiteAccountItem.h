// Class /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem
// Size: 0xe0
class UFortControllerComponent_CampsiteAccountItem : public UActorComponent
{
	class UFortCampsiteAccountItemDefinition* CampsiteAccountItemDefinition; // 0xa0 (0x8)
	struct FCampsiteAccountData CampsiteAccountData; // 0xa8 (0x28)
	struct TArray<struct FFortItemEntry> CurrentlyStashedItemEntries; // 0xd0 (0x10)

	/* Functions */

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItemFromEntry (Underlying native function: WriteStashedItemFromEntry 0x6efd4ec)
	void WriteStashedItemFromEntry(class AFortPlayerControllerAthena*& PlayerController, struct FFortItemEntry& ItemEntry, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItem (Underlying native function: WriteStashedItem 0x6efd408)
	void WriteStashedItem(class AFortPlayerControllerAthena*& PlayerController, class UFortWorldItem*& Item, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.SwapStashedItem (Underlying native function: SwapStashedItem 0x6efc7e8)
	bool SwapStashedItem(class AActor*& SourceActor, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.StashCurrentlyHeldItemAndRemoveFromInventory (Underlying native function: StashCurrentlyHeldItemAndRemoveFromInventory 0x6efcaac)
	bool StashCurrentlyHeldItemAndRemoveFromInventory(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.OnAthenaProfileInitialized (Underlying native function: OnAthenaProfileInitialized 0x273fd14)
	void OnAthenaProfileInitialized(); // (Final | Native | Private)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.HasCurrentlyStashedItem (Underlying native function: HasCurrentlyStashedItem 0x6efcaac)
	bool HasCurrentlyStashedItem(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.GetCurrentlyStashedItemAsItemEntry (Underlying native function: GetCurrentlyStashedItemAsItemEntry 0x6efc8a8)
	struct FFortItemEntry GetCurrentlyStashedItemAsItemEntry(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStoredCampsiteLocations (Underlying native function: ClearStoredCampsiteLocations 0x273fd14)
	void ClearStoredCampsiteLocations(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItemAndGiveToPlayer (Underlying native function: ClearStashedItemAndGiveToPlayer 0x6efc7e8)
	bool ClearStashedItemAndGiveToPlayer(class AActor*& SourceActor, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItem (Underlying native function: ClearStashedItem 0x6e8edb4)
	void ClearStashedItem(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.CacheAccountItemData (Underlying native function: CacheAccountItemData 0x273fd14)
	void CacheAccountItemData(); // (Final | Native | Private)
};

