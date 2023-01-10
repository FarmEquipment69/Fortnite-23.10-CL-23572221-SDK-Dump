// Class /Script/FortniteUI.FortItemListViewInterface
// Size: 0x28
class IFortItemListViewInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteUI.FortItemListViewInterface.ShowNullItemListEntry (Underlying native function: ShowNullItemListEntry 0xa6c89e4)
	void ShowNullItemListEntry(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetSorter (Underlying native function: SetSorter 0xa6c885c)
	void SetSorter(struct FFortItemSorterDefinition& Sorter); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetItemViewContext (Underlying native function: SetItemViewContext 0xa6c859c)
	void SetItemViewContext(struct TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetFilterAndSorter (Underlying native function: SetFilterAndSorter 0xa6c7bd8)
	void SetFilterAndSorter(struct FFortItemFilterDefinition& Filter, struct FFortItemSorterDefinition& Sorter); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetFilter (Underlying native function: SetFilter 0xa6c7af0)
	void SetFilter(struct FFortItemFilterDefinition& Filter); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetCustomItemList (Underlying native function: SetCustomItemList 0xa6c7a50)
	void SetCustomItemList(struct TArray<class UFortItem*>& ItemList); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetConfig (Underlying native function: SetConfig 0xa6c78a4)
	void SetConfig(struct FFortItemListViewConfig& Config); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.RefreshSort (Underlying native function: RefreshSort 0x6e8e008)
	void RefreshSort(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.RefreshFilterAndSort (Underlying native function: RefreshFilterAndSort 0x2576934)
	void RefreshFilterAndSort(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.HideNullItemListEntry (Underlying native function: HideNullItemListEntry 0xa6c7100)
	void HideNullItemListEntry(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRefundCompleted (Underlying native function: HandleItemRefundCompleted 0xa6c6abc)
	void HandleItemRefundCompleted(bool& bWasSuccessful, struct FString& OriginalItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantities); // (Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRefundBegun (Underlying native function: HandleItemRefundBegun 0xa6c6964)
	void HandleItemRefundBegun(struct FString& OriginalItemInstanceId); // (Native | Public)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRarityUpgradeCompleted (Underlying native function: HandleItemRarityUpgradeCompleted 0xa6c6764)
	void HandleItemRarityUpgradeCompleted(bool& bWasSuccessful, struct FString& OriginalItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantities); // (Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRarityUpgradeBegun (Underlying native function: HandleItemRarityUpgradeBegun 0xa6c660c)
	void HandleItemRarityUpgradeBegun(struct FString& OriginalItemInstanceId); // (Native | Public)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemEvolutionCompleted (Underlying native function: HandleItemEvolutionCompleted 0xa6c640c)
	void HandleItemEvolutionCompleted(bool& bWasSuccessful, struct FString& OriginalItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantities); // (Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemEvolutionBegun (Underlying native function: HandleItemEvolutionBegun 0xa6c62b4)
	void HandleItemEvolutionBegun(struct FString& OriginalItemInstanceId); // (Native | Public)

	// Function /Script/FortniteUI.FortItemListViewInterface.GetSorter (Underlying native function: GetSorter 0xa6c5d98)
	struct FFortItemSorterDefinition GetSorter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.GetFilter (Underlying native function: GetFilter 0xa6c57b0)
	struct FFortItemFilterDefinition GetFilter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.GetConfig (Underlying native function: GetConfig 0xa6c5700)
	struct FFortItemListViewConfig GetConfig(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.ContainsItem (Underlying native function: ContainsItem 0xa6c4e04)
	bool ContainsItem(class UFortItem*& Item); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.ClearCustomItemList (Underlying native function: ClearCustomItemList 0xa6c4c74)
	void ClearCustomItemList(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.CenterSelectedItemListEntryWidget (Underlying native function: CenterSelectedItemListEntryWidget 0x268d874)
	void CenterSelectedItemListEntryWidget(); // (Native | Public | BlueprintCallable)
};

