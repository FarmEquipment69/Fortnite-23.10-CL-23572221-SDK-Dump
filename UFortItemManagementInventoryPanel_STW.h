// Class /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
// Size: 0x468
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{
	unsigned char unreflected_290[0x50]; // 0x290 (0x50) 
	struct FName CurrentFilterName; // 0x2e0 (0x4)
	enum EInventoryContentSortType CurrentSortType; // 0x2e4 (0x1)
	unsigned char unreflected_2e5[0x3]; // 0x2e5 (0x3) 
	class UClass* FilterTabButtonType; // 0x2e8 (0x8)
	class UClass* FilterTabButtonStyle; // 0x2f0 (0x8)
	struct TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray; // 0x2f8 (0x10)
	class UFortTabListWidgetBase* FilterTabList; // 0x308 (0x8)
	class UCommonLoadGuard* TileViewLoadGuard; // 0x310 (0x8)
	class UFortItemTileView* TileView; // 0x318 (0x8)
	class UPanelWidget* CraftingPanel; // 0x320 (0x8)
	class UCommonLoadGuard* CraftingTileViewLoadGuard; // 0x328 (0x8)
	class UFortItemTileView* CraftingTileView; // 0x330 (0x8)
	class UPanelWidget* StoragePanel; // 0x338 (0x8)
	class UCommonLoadGuard* StorageTileViewLoadGuard; // 0x340 (0x8)
	class UFortItemTileView* StorageTileView; // 0x348 (0x8)
	class UCommonTextBlock* MulchRestrictionReasonText; // 0x350 (0x8)
	enum EFortItemCardSize SmallTileSize; // 0x358 (0x1)
	enum EFortItemCardSize LargeTileSize; // 0x359 (0x1)
	unsigned char unreflected_35a[0x2]; // 0x35a (0x2) 
	struct TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen; // 0x35c (0x8)
	bool bCanDragItems; // 0x364 (0x1)
	unsigned char unreflected_365[0x3]; // 0x365 (0x3) 
	struct TArray<struct FQuickbarEquipSlotIndicesConfig> DefaultQuickbarEquipSlotIndicesConfigs; // 0x368 (0x10)
	struct TMap<struct FName, int> QuickbarEquipSlotIndices; // 0x378 (0x50)
	unsigned char unreflected_3c8[0x90]; // 0x3c8 (0x90) 
	class UFortInventoryContext* InventoryContext; // 0x458 (0x8)
	class UWidget* WidgetToCenter; // 0x460 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles (Underlying native function: UpdateSchematicTiles 0x71cdf40)
	void UpdateSchematicTiles(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize (Underlying native function: ToggleTileSize 0x71cdf2c)
	void ToggleTileSize(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites (Underlying native function: TogglePrioritizeFavorites 0x71cded4)
	void TogglePrioritizeFavorites(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus (Underlying native function: SwitchPanelFocus 0x71cde40)
	void SwitchPanelFocus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType (Underlying native function: SetSortType 0x71cdd30)
	void SetSortType(enum EInventoryContentSortType& SortType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter (Underlying native function: SetFilter 0x71cd9f8)
	void SetFilter(struct FName& FilterName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots (Underlying native function: RequestFocusEquipSlots 0x71cd894)
	void RequestFocusEquipSlots(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort (Underlying native function: RefreshCraftingSort 0x71cd880)
	void RefreshCraftingSort(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown (Has no native function)
	void OnMulchRestrictionTextShown(bool& bShown); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen (Underlying native function: MarkAllItemsAsSeen 0x71cd86c)
	void MarkAllItemsAsSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable (Underlying native function: IsSwitchPanelAvailable 0x71cd7ec)
	bool IsSwitchPanelAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem (Underlying native function: IsSelectedItem 0x71cd75c)
	bool IsSelectedItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots (Underlying native function: HasUnlockedStorageSlots 0x71cd5f4)
	bool HasUnlockedStorageSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP (Has no native function)
	void HandleSetOfItemsToMulchChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP (Has no native function)
	void HandleQuickBarChangedBP(enum EFortQuickBars& QuickBarType); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag (Underlying native function: HandleItemBeginDrag 0x71cd484)
	void HandleItemBeginDrag(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent (Underlying native function: HandleInventoryUpdatedEvent 0x71cd470)
	void HandleInventoryUpdatedEvent(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP (Has no native function)
	void HandleFocusEquipSlotsBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected (Underlying native function: HandleFilterTabSelected 0x71cd3f0)
	void HandleFilterTabSelected(struct FName& TabNameID); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated (Underlying native function: HandleFilterTabButtonCreated 0x71cd330)
	void HandleFilterTabButtonCreated(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP (Has no native function)
	void HandleDifferentSortTypeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP (Has no native function)
	void HandleDifferentFrontendInventoryFilterSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP (Has no native function)
	void HandleDifferentFilterSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged (Underlying native function: HandleCustomInventoryFilterChanged 0x71cd31c)
	void HandleCustomInventoryFilterChanged(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP (Has no native function)
	void HandleCursorModeChangedBP(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0x71cd214)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted (Underlying native function: HandleCraftItemStarted 0x71cd1f0)
	void HandleCraftItemStarted(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory (Underlying native function: GetUpgradeItemDefinitionsForCurrentInventory 0x71cd17c)
	struct TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory (Underlying native function: GetSupportedSortTypesForCurrentInventory 0x71cd108)
	struct TArray<enum EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites (Underlying native function: GetShouldPrioritizeFavorites 0x71cd0ec)
	bool GetShouldPrioritizeFavorites(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName (Underlying native function: GetQualifiedFilterDisplayName 0x71cd070)
	struct FText GetQualifiedFilterDisplayName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType (Underlying native function: CycleSortType 0x71cceb0)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems (Underlying native function: CanDragItems 0x71cce5c)
	bool CanDragItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection (Underlying native function: AdvanceSelection 0x71cce34)
	void AdvanceSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch (Underlying native function: AddItemStackToMulch 0x71ccce0)
	void AddItemStackToMulch(class UFortItem*& Item, int& Count); // (Final | Native | Protected | BlueprintCallable)
};

