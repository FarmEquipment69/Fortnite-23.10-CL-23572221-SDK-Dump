// Class /Script/FortniteUI.FortCreativeItemListMenu
// Size: 0x6e0
class UFortCreativeItemListMenu : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UClass* PanelDataClass; // 0x3b0 (0x8)
	class UDataTable* ItemListCategorySource; // 0x3b8 (0x8)
	class UFortCreativeItemListPanelData* ItemListPanelData; // 0x3c0 (0x8)
	class UClass* InventoryTabClass; // 0x3c8 (0x8)
	class UClass* LevelManagementTabClass; // 0x3d0 (0x8)
	class UClass* InventoryTabButton; // 0x3d8 (0x8)
	unsigned char unreflected_3e0[0x8]; // 0x3e0 (0x8) 
	struct FMulticastInlineDelegate BPOnItemSelected; // 0x3e8 (0x10)
	class UFortCreativeItemListTabPanel* ChestTabPanel; // 0x3f8 (0x8)
	class UFortCreativeLevelManagementTabPanel* LevelManagementTabPanel; // 0x400 (0x8)
	class UFortCreativeItemListTabPanel* SubItemsTabPanel; // 0x408 (0x8)
	struct FName TabNameID; // 0x410 (0x4)
	unsigned char unreflected_414[0xc]; // 0x414 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x420 (0xe0)
	bool bIsDefaultActiveTab; // 0x500 (0x1)
	bool bAddItemToInventoryOnEquip; // 0x501 (0x1)
	bool bLoadItemsOnInitialized; // 0x502 (0x1)
	unsigned char unreflected_503[0x1]; // 0x503 (0x1) 
	int LastUsedSlot; // 0x504 (0x4)
	struct FName LastSelectedTab; // 0x508 (0x4)
	unsigned char unreflected_50c[0x34]; // 0x50c (0x34) 
	struct TMap<struct FName, class UFortCreativeItemListTabPanel*> TabMap; // 0x540 (0x50)
	unsigned char unreflected_590[0xa0]; // 0x590 (0xa0) 
	class UFortTabListWidgetBase* TabListCategories; // 0x630 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherCategories; // 0x638 (0x8)
	class UWidgetSwitcher* SwitcherNoItemInChest; // 0x640 (0x8)
	class UWidgetSwitcher* SwitcherCommandBar; // 0x648 (0x8)
	class UFortCreativeMenuQuickbar* MenuQuickbarQuickBars; // 0x650 (0x8)
	class UCommonButtonLegacy* ButtonResetChest; // 0x658 (0x8)
	class UCommonButtonLegacy* ButtonCreateChest; // 0x660 (0x8)
	class UCommonButtonLegacy* ButtonAddToQuickBar; // 0x668 (0x8)
	class UCommonButtonLegacy* ButtonOpenItem; // 0x670 (0x8)
	class UCommonButtonLegacy* ButtonPlaceNow; // 0x678 (0x8)
	class UCommonButtonLegacy* ButtonEquip; // 0x680 (0x8)
	class UCommonButtonLegacy* ButtonAddToChest; // 0x688 (0x8)
	class UCommonButtonLegacy* ButtonDrop; // 0x690 (0x8)
	class UCommonButtonLegacy* ButtonCreateLlama; // 0x698 (0x8)
	class UCommonButtonLegacy* ButtonRemoveFromChest; // 0x6a0 (0x8)
	class UOverlay* OverlaySearchFilters; // 0x6a8 (0x8)
	class UContentBrowserFiltersPanel* FiltersPanel; // 0x6b0 (0x8)
	class UCommonVisibilitySwitcher* SwitcherSidePanels; // 0x6b8 (0x8)
	class UFortCreativeItemDetailsSidePanel* ItemDetailsSidePanelDefaultSidePanel; // 0x6c0 (0x8)
	class UWidgetSwitcher* SwitcherInventoryPermission; // 0x6c8 (0x8)
	class UWidgetSwitcher* SwitcherEditorConnected; // 0x6d0 (0x8)
	unsigned char padding_6d8[0x8]; // 0x6d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeItemListMenu.VerifyPermissionsToCreativeInventory (Underlying native function: VerifyPermissionsToCreativeInventory 0xa588c20)
	void VerifyPermissionsToCreativeInventory(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.UpdateDetailsPanel (Underlying native function: UpdateDetailsPanel 0xa5888e0)
	void UpdateDetailsPanel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.SwitchItemDetailsPanel (Underlying native function: SwitchItemDetailsPanel 0xa5885b0)
	void SwitchItemDetailsPanel(bool& bUseLegacy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.SpawnContainer (Underlying native function: SpawnContainer 0xa587f30)
	void SpawnContainer(class UClass*& SupplyDropClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.SetSubTabOpened (Underlying native function: SetSubTabOpened 0xa587bdc)
	void SetSubTabOpened(bool& bIsOpened); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.SetIsItemCommandsEnabled (Underlying native function: SetIsItemCommandsEnabled 0xa587528)
	void SetIsItemCommandsEnabled(bool& bInIsItemCommandEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.RefreshChestWidgetState (Underlying native function: RefreshChestWidgetState 0xa586c44)
	void RefreshChestWidgetState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.PlaceSelectionInMoveTool (Underlying native function: PlaceSelectionInMoveTool 0xa586a9c)
	bool PlaceSelectionInMoveTool(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OpenSelection (Underlying native function: OpenSelection 0xa586744)
	bool OpenSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnSelectionOpened (Has no native function)
	void OnSelectionOpened(struct FFortItemEntry& PreviousSelectedItem, struct FName& PreviousTab); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnSearchFiltersVisibilityChanged (Has no native function)
	void OnSearchFiltersVisibilityChanged(enum ESlateVisibility& NewVisibility); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnItemsLoaded (Has no native function)
	void OnItemsLoaded(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnItemEquipped (Has no native function)
	void OnItemEquipped(struct FFortItemEntry& EquippedItemEntry); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnExitSubTab (Has no native function)
	void OnExitSubTab(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnCursorModeChanged (Underlying native function: OnCursorModeChanged 0xa586160)
	void OnCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnCreativeQuickbarComponentLoaded (Underlying native function: OnCreativeQuickbarComponentLoaded 0xa58608c)
	void OnCreativeQuickbarComponentLoaded(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.OnContentRatingFilterChanged (Underlying native function: OnContentRatingFilterChanged 0xa586078)
	void OnContentRatingFilterChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.NativeOnItemsRefreshed (Underlying native function: NativeOnItemsRefreshed 0xa586064)
	void NativeOnItemsRefreshed(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.NativeOnItemsLoaded (Underlying native function: NativeOnItemsLoaded 0xa586050)
	void NativeOnItemsLoaded(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.LoadItems (Underlying native function: LoadItems 0xa58603c)
	void LoadItems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.IsSubTabOpened (Underlying native function: IsSubTabOpened 0xa586010)
	bool IsSubTabOpened(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.InitializeTabs (Underlying native function: InitializeTabs 0xa585ee4)
	void InitializeTabs(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleTabSelected (Underlying native function: HandleTabSelected 0xa585b24)
	void HandleTabSelected(struct FName& TabId); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleSelectionChanged (Underlying native function: HandleSelectionChanged 0xa585aa4)
	void HandleSelectionChanged(class UFortCreativeContentBrowserTabPanelBase*& Tab); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleQuickbarPanelIsFocused (Underlying native function: HandleQuickbarPanelIsFocused 0xa585948)
	void HandleQuickbarPanelIsFocused(bool& bIsFocused); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleItemDetailsInputAction (Underlying native function: HandleItemDetailsInputAction 0xa585600)
	void HandleItemDetailsInputAction(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleFilterPanelIsFocused (Underlying native function: HandleFilterPanelIsFocused 0xa585500)
	void HandleFilterPanelIsFocused(bool& bIsFocused); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleFilterChanged (Underlying native function: HandleFilterChanged 0xa5854ec)
	void HandleFilterChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleEquipItem (Underlying native function: HandleEquipItem 0xa585428)
	void HandleEquipItem(struct FFortItemEntry& ItemEntry); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleChestItemCountChanged (Underlying native function: HandleChestItemCountChanged 0xa58538c)
	void HandleChestItemCountChanged(int& Count); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.HandleAddSelectionToMoveToolComplete (Underlying native function: HandleAddSelectionToMoveToolComplete 0xa5851c4)
	void HandleAddSelectionToMoveToolComplete(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.GetLastSelectedTabName (Underlying native function: GetLastSelectedTabName 0xa584b18)
	struct FName GetLastSelectedTabName(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.GetCurrentTab (Underlying native function: GetCurrentTab 0xa5844a0)
	class UFortCreativeContentBrowserTabPanelBase* GetCurrentTab(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.GetCurrentSelection (Underlying native function: GetCurrentSelection 0xa58443c)
	struct FFortItemEntry GetCurrentSelection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.EquipSelection (Underlying native function: EquipSelection 0xa58398c)
	bool EquipSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.EquipItem (Underlying native function: EquipItem 0xa5838c4)
	bool EquipItem(struct FFortItemEntry& ItemEntry); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.DropItem (Underlying native function: DropItem 0xa5837bc)
	bool DropItem(struct FFortItemEntry& SelectedItem); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.CanEquip (Underlying native function: CanEquip 0xa583450)
	bool CanEquip(struct FFortItemEntry& SelectedItem); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.CanDropItem (Underlying native function: CanDropItem 0xa583388)
	bool CanDropItem(struct FFortItemEntry& SelectedItem); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.CanAddToChest (Underlying native function: CanAddToChest 0xa5832c0)
	bool CanAddToChest(struct FFortItemEntry& SelectedItem); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.BroadcastOnItemEquipped (Underlying native function: BroadcastOnItemEquipped 0xa5831ec)
	void BroadcastOnItemEquipped(struct FFortItemEntry& ItemToSpawn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.BroadcastOnCloseFromContentBrowser (Underlying native function: BroadcastOnCloseFromContentBrowser 0xa5831d0)
	void BroadcastOnCloseFromContentBrowser(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListMenu.AddSelectionToQuickBar (Underlying native function: AddSelectionToQuickBar 0xa5830b0)
	bool AddSelectionToQuickBar(); // (Final | Native | Public | BlueprintCallable)
};

