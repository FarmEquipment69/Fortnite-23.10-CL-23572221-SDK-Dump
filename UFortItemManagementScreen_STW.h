// Class /Script/SaveTheWorldUI.FortItemManagementScreen_STW
// Size: 0x500
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FMulticastInlineDelegate OnItemViewRefreshed; // 0x3b0 (0x10)
	unsigned char unreflected_3c0[0xc0]; // 0x3c0 (0xc0) 
	enum EFortItemManagementMode Mode; // 0x480 (0x1)
	enum EFortFrontendInventoryFilter FrontendInventoryFilter; // 0x481 (0x1)
	bool bReadOnlyModeWIFE; // 0x482 (0x1)
	bool ConsumeItemRequestInProgress; // 0x483 (0x1)
	unsigned char unreflected_484[0x4]; // 0x484 (0x4) 
	class UFortItemManagementInventoryPanel_STW* InventoryPanel; // 0x488 (0x8)
	class UFortItemManagementModeDetailsPanel_STW* ModeDetailsPanel; // 0x490 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x498 (0x8)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class UClass* MulchConfirmationModalClass; // 0x4a8 (0x8)
	class UClass* CustomFilterModalClass; // 0x4b0 (0x8)
	unsigned char unreflected_4b8[0x18]; // 0x4b8 (0x18) 
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x4d0 (0x8)
	class UFortItemManagementCustomFilterModalWidget_STW* CustomFilterModal; // 0x4d8 (0x8)
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	class UFortInventoryContext* InventoryContext; // 0x4e8 (0x8)
	unsigned char padding_4f0[0x10]; // 0x4f0 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem (Underlying native function: TransferItem 0x71d0b78)
	void TransferItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator (Underlying native function: ToggleShowRefundIndicator 0x71d0b4c)
	void ToggleShowRefundIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator (Underlying native function: ToggleShowCollectionBookIndicator 0x71d0b20)
	void ToggleShowCollectionBookIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE (Has no native function)
	void ShowWarningReadOnlyWIFE(bool& Force); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0x71d0970)
	void ShowMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal (Underlying native function: ShowCustomFilterModal 0x71d095c)
	void ShowCustomFilterModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter (Underlying native function: SetFrontendInventoryFilter 0x71d0718)
	void SetFrontendInventoryFilter(enum EFortFrontendInventoryFilter& FrontendInventoryFilter); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress (Underlying native function: SetConsumeItemRequestInProgress 0x71d0684)
	void SetConsumeItemRequestInProgress(bool& InProgress); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem (Underlying native function: RequestPopupMenuForSelectedItem 0x71d0518)
	void RequestPopupMenuForSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions (Underlying native function: OpenCraftingOptions 0x71d03fc)
	void OpenCraftingOptions(class UFortSchematicItem*& SchematicItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions (Underlying native function: OpenAutoMulchOptions 0x71d03b4)
	void OpenAutoMulchOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0x71d021c)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0x71d0200)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen (Underlying native function: MarkAllItemsAsSeen 0x71d01d8)
	void MarkAllItemsAsSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE (Underlying native function: IsScreenWIFE 0x71cfef4)
	bool IsScreenWIFE(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem (Underlying native function: InspectItem 0x71cfda4)
	void InspectItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0x71cfd88)
	void HideMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal (Underlying native function: HideCustomFilterModal 0x71cfd44)
	void HideCustomFilterModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen (Underlying native function: HasItemBeenSeen 0x71cfc30)
	bool HasItemBeenSeen(class UFortAccountItem*& AccountItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch (Underlying native function: HasDefaultItemsToMulch 0x71cfc04)
	bool HasDefaultItemsToMulch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP (Has no native function)
	void HandleTransferItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP (Has no native function)
	void HandleOpenCraftingOptionsBP(class UFortSchematicItem*& SchematicItem); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP (Has no native function)
	void HandleOpenAutoMulchOptionsBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection (Has no native function)
	void HandleMulchQuantitySelection(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged (Underlying native function: HandleItemToDetailChanged 0x71cf9c8)
	void HandleItemToDetailChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged (Underlying native function: HandleItemToCompareWithChanged 0x71cf8dc)
	void HandleItemToCompareWithChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP (Has no native function)
	void HandleInspectItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP (Has no native function)
	void HandleEquipItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP (Has no native function)
	void HandleDropItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP (Has no native function)
	void HandleCraftItemBP(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP (Has no native function)
	void HandleCraftAndSlotItemBP(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP (Has no native function)
	void HandleConsumeItemBP(class UFortConsumableAccountItem*& ConsumableItem); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE (Underlying native function: GuardActionForReadOnlyWIFE 0x71cf764)
	bool GuardActionForReadOnlyWIFE(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator (Underlying native function: GetShouldShowRefundIndicator 0x71cf460)
	bool GetShouldShowRefundIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator (Underlying native function: GetShouldShowCollectionBookIndicator 0x71cf448)
	bool GetShouldShowCollectionBookIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail (Underlying native function: GetItemToDetail 0x71cf1b4)
	class UFortItem* GetItemToDetail(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith (Underlying native function: GetItemToCompareDetailsWith 0x71cf148)
	class UFortItem* GetItemToCompareDetailsWith(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem (Underlying native function: EquipItem 0x71ceb4c)
	void EquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch (Underlying native function: EnterMulchModeForAutoMulch 0x71ceb38)
	void EnterMulchModeForAutoMulch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode (Underlying native function: EnterMulchMode 0x71ce9e0)
	void EnterMulchMode(class UFortItem*& ItemToMulch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode (Underlying native function: EnterDetailsMode 0x71ce960)
	void EnterDetailsMode(class UFortItem*& ItemToDetail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode (Underlying native function: EnterComparisonMode 0x71ce844)
	void EnterComparisonMode(class UFortItem*& ItemToCompareDetailsWith); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.DropItem (Underlying native function: DropItem 0x71ce7a0)
	void DropItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType (Underlying native function: CycleSortType 0x71ce670)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem (Underlying native function: CraftItem 0x71ce554)
	void CraftItem(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem (Underlying native function: CraftAndSlotItem 0x71ce438)
	void CraftAndSlotItem(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem (Underlying native function: ConsumeItem 0x71ce394)
	void ConsumeItem(class UFortConsumableAccountItem*& ConsumableItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem (Underlying native function: CanRequestPopupMenuForSelectedItem 0x71ce224)
	bool CanRequestPopupMenuForSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem (Underlying native function: CanEquipItem 0x71ce0c0)
	bool CanEquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh (Underlying native function: CancelInventoryPanelTileViewRefresh 0x71ce300)
	void CancelInventoryPanelTileViewRefresh(); // (Final | Native | Protected | BlueprintCallable)
};

