// Class /Script/FortniteUI.FortInventoryContext
// Size: 0x308
class UFortInventoryContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnMcpWorldItemsChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnMcpOutpostItemsChanged; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnWorldItemListChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnOutpostItemListChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnItemPickedUp; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnQuickbarContentsChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnQuickbarRecordsChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnQuickbarSlotFocusChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnQuickbarSecondarySlotFocusChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnQuickbarForceFullUpdate; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnWorldItemsChanged; // 0xd0 (0x10)
	unsigned char unreflected_e0[0x20]; // 0xe0 (0x20) 
	struct FMulticastInlineDelegate OnCraftItemFailed; // 0x100 (0x10)
	unsigned char unreflected_110[0x10]; // 0x110 (0x10) 
	struct FMulticastInlineDelegate OnVaultItemLimitStateChangedEvent; // 0x120 (0x10)
	unsigned char unreflected_130[0x48]; // 0x130 (0x48) 
	struct TMap<class UFortSchematicItemDefinition*, bool> SchematicLockedStates; // 0x178 (0x50)
	unsigned char padding_1c8[0x140]; // 0x1c8 (0x140)

	/* Functions */

	// Function /Script/FortniteUI.FortInventoryContext.WouldExceedMaxStackSize (Underlying native function: WouldExceedMaxStackSize 0xa4d7da8)
	bool WouldExceedMaxStackSize(class UFortItemDefinition*& ItemDefinition, int& QuantityToTest); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.WillAllItemsSlotInCollectionBook (Underlying native function: WillAllItemsSlotInCollectionBook 0xa4d7cfc)
	bool WillAllItemsSlotInCollectionBook(struct TArray<class UFortItem*>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.UpdateLastSeenResearchPointCollectionNodes (Underlying native function: UpdateLastSeenResearchPointCollectionNodes 0xa4d7c9c)
	void UpdateLastSeenResearchPointCollectionNodes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.UpdateLastSeenHomebasePoints (Underlying native function: UpdateLastSeenHomebasePoints 0xa4d7c74)
	void UpdateLastSeenHomebasePoints(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.RemoveItemFromQuickBar (Underlying native function: RemoveItemFromQuickBar 0xa4d5dbc)
	bool RemoveItemFromQuickBar(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.MakeItemQuantityPair (Underlying native function: MakeItemQuantityPair 0xa4d5638)
	static struct FFortItemQuantityPair MakeItemQuantityPair(class UFortItemDefinition*& ItemDefinition, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.MakeItemInstanceQuantityPair (Underlying native function: MakeItemInstanceQuantityPair 0xa4d5538)
	static struct FFortItemInstanceQuantityPair MakeItemInstanceQuantityPair(class UFortItem*& Item, struct TEnumAsByte<EFortInventoryType>& InventoryType, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.IsTrapAvailableForBuilding (Underlying native function: IsTrapAvailableForBuilding 0xa4d52a4)
	bool IsTrapAvailableForBuilding(class ABuildingSMActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasUnseenResearchPointCollectionNodes (Underlying native function: HasUnseenResearchPointCollectionNodes 0xa4d4ce0)
	bool HasUnseenResearchPointCollectionNodes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasUnseenHomebasePoints (Underlying native function: HasUnseenHomebasePoints 0xa4d4ca8)
	bool HasUnseenHomebasePoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasUnavailableItemsInStorage (Underlying native function: HasUnavailableItemsInStorage 0xa4d4c3c)
	bool HasUnavailableItemsInStorage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasTrapReadyForBuilding (Underlying native function: HasTrapReadyForBuilding 0xa4d4b74)
	bool HasTrapReadyForBuilding(class ABuildingSMActor*& BuildingToAttachTo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasGameplayTagContainerExact (Underlying native function: HasGameplayTagContainerExact 0xa4d4aa8)
	bool HasGameplayTagContainerExact(struct FGameplayTagContainer& GameplayTagContainer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasGameplayTagContainer (Underlying native function: HasGameplayTagContainer 0xa4d49dc)
	bool HasGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x291be00)
	void HandleMcpProfilesInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortInventoryContext.GetVaultItemLimitStatus (Underlying native function: GetVaultItemLimitStatus 0xa4d4304)
	enum EVaultItemLimitStatus GetVaultItemLimitStatus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetVaultItemLimit (Underlying native function: GetVaultItemLimit 0xa4d42ec)
	int GetVaultItemLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetUserFriendlyTags (Underlying native function: GetUserFriendlyTags 0xa4d3ca4)
	static struct TArray<struct FText> GetUserFriendlyTags(class UFortItem*& Item, bool& bAddWeaponTier); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetUpgradeItemRarityRecipeFromItemDefintion (Underlying native function: GetUpgradeItemRarityRecipeFromItemDefintion 0xa4d3b9c)
	struct FRecipe GetUpgradeItemRarityRecipeFromItemDefintion(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetUnseenTransformKeys (Underlying native function: GetUnseenTransformKeys 0xa4d3a84)
	void GetUnseenTransformKeys(enum EConversionControlKeyRequest& RequestType, enum EInventoryContentSortType& SortType, struct TArray<class UFortAccountItem*>& TransformKeys); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetTrapAttachTypeName (Underlying native function: GetTrapAttachTypeName 0xa4d37d8)
	struct FText GetTrapAttachTypeName(class ABuildingSMActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetTransmogSacrificeDataFromItemDefintion (Underlying native function: GetTransmogSacrificeDataFromItemDefintion 0xa4d36c0)
	bool GetTransmogSacrificeDataFromItemDefintion(class UFortItemDefinition*& ItemDefinition, struct FTransmogSacrifice& OutTransmogData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetTransformKeys (Underlying native function: GetTransformKeys 0xa4d35a8)
	void GetTransformKeys(enum EConversionControlKeyRequest& RequestType, enum EInventoryContentSortType& SortType, struct TArray<class UFortAccountItem*>& TransformKeys); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetTotalItemQuantityByDefinition (Underlying native function: GetTotalItemQuantityByDefinition 0xa4d3518)
	int GetTotalItemQuantityByDefinition(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetTierText (Underlying native function: GetTierText 0xa4d3238)
	static struct FText GetTierText(enum EFortItemTier& Tier); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetStorageOverflowFromAddingItem (Underlying native function: GetStorageOverflowFromAddingItem 0xa4d2f6c)
	int GetStorageOverflowFromAddingItem(class UFortWorldItem*& Item, int& Count); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetStorageNumItems (Underlying native function: GetStorageNumItems 0xa4d2f24)
	int GetStorageNumItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetStorageCapacity (Underlying native function: GetStorageCapacity 0xa4d2f00)
	int GetStorageCapacity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetResourceItemDefinition (Underlying native function: GetResourceItemDefinition 0x86e22e4)
	class UFortResourceItemDefinition* GetResourceItemDefinition(struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetResourceCount (Underlying native function: GetResourceCount 0xa4d2cbc)
	int GetResourceCount(struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetRecyclingWarningText (Underlying native function: GetRecyclingWarningText 0xa4d2ba8)
	static struct FText GetRecyclingWarningText(enum EItemRecyclingWarning& Warning, bool& WereAnyItemsAnimate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetQuickBarSlottedItem (Underlying native function: GetQuickBarSlottedItem 0xa4d257c)
	class UFortItem* GetQuickBarSlottedItem(enum EFortQuickBars& InQuickBar, int& Slot); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetQuickbarFocus (Underlying native function: GetQuickbarFocus 0xa4d2640)
	void GetQuickbarFocus(enum EFortQuickBars& OutQuickBar, int& OutSlot, int& OutSecondarySlot, int& OutPreviousFocusedSlot); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetNumOfItemToMulch (Underlying native function: GetNumOfItemToMulch 0xa4d2098)
	int GetNumOfItemToMulch(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetNumItemsToMulch (Underlying native function: GetNumItemsToMulch 0xa4d2074)
	int GetNumItemsToMulch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetNumInInventory (Underlying native function: GetNumInInventory 0xa4d1fb0)
	int GetNumInInventory(class UFortItemDefinition*& ItemDefinition, bool& bIncludeReserved); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetLevelsPerItemPromotion (Underlying native function: GetLevelsPerItemPromotion 0xa4d1bf8)
	int GetLevelsPerItemPromotion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetItemsToMulchBP (Underlying native function: GetItemsToMulchBP 0xa4d1660)
	struct TArray<class UFortItem*> GetItemsToMulchBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetItemStackCount_Creative (Underlying native function: GetItemStackCount_Creative 0xa4d159c)
	static struct FText GetItemStackCountCreative(int& Quantity); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetItemInstancesByDefinition (Underlying native function: GetItemInstancesByDefinition 0xa4d1424)
	void GetItemInstancesByDefinition(class UFortItemDefinition*& ItemDefinition, struct TArray<class UFortItem*>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetEquippedWeapon (Underlying native function: GetEquippedWeapon 0x20eaedc)
	class AFortWeapon* GetEquippedWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetDeployableBaseOverflowFromAddingItem (Underlying native function: GetDeployableBaseOverflowFromAddingItem 0xa4d09c8)
	int GetDeployableBaseOverflowFromAddingItem(class UFortWorldItem*& Item, int& Count); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetDeployableBaseItemCounts (Underlying native function: GetDeployableBaseItemCounts 0xa4d0854)
	void GetDeployableBaseItemCounts(int& ItemsCount, int& MaxItemsCount, int& OverflowItemsCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition (Underlying native function: GetCurrentResourceItemDefinition 0xa4d07a4)
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCurrentResourceCount (Underlying native function: GetCurrentResourceCount 0xa4d0780)
	int GetCurrentResourceCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition (Underlying native function: GetCurrentAmmoItemDefinition 0xa4d0464)
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCountOfVaultLimitedItems (Underlying native function: GetCountOfVaultLimitedItems 0x86b05b4)
	int GetCountOfVaultLimitedItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetConversionRecipesFromItemDefintion (Underlying native function: GetConversionRecipesFromItemDefintion 0xa4cf814)
	struct TArray<struct FRecipe> GetConversionRecipesFromItemDefintion(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetBackpackOverflowFromAddingItem (Underlying native function: GetBackpackOverflowFromAddingItem 0xa4cf228)
	int GetBackpackOverflowFromAddingItem(class UFortWorldItem*& Item, int& Count); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetBackpackItemCounts (Underlying native function: GetBackpackItemCounts 0xa4cf100)
	void GetBackpackItemCounts(int& ItemsCount, int& MaxItemsCount, int& OverflowItemsCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetAccountItemsByType (Underlying native function: GetAccountItemsByType 0xa4ceb8c)
	void GetAccountItemsByType(enum EFortItemType& ItemType, struct TArray<class UFortAccountItem*>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetAccountItemsByFilterType (Underlying native function: GetAccountItemsByFilterType 0xa4ce940)
	void GetAccountItemsByFilterType(struct FString& SearchText, enum EInventoryContentSortType& SortType, enum EFortInventoryFilter& Subtype, struct TArray<class UFortAccountItem*>& OutItemList); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.ForceItemsChanged (Underlying native function: ForceItemsChanged 0xa4ce508)
	void ForceItemsChanged(struct TArray<enum EFortInventoryFilter>& InventoryFilters); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.EquipItem (Underlying native function: EquipItem 0xa4ce46c)
	void EquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.EnumerateRecyclingWarningsForItems (Underlying native function: EnumerateRecyclingWarningsForItems 0xa4ce1e4)
	void EnumerateRecyclingWarningsForItems(struct TArray<class UFortItem*>& Items, struct TArray<enum EItemRecyclingWarning>& OutWarnings); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.DropItemOnQuickBar (Underlying native function: DropItemOnQuickBar 0xa4cdfd8)
	bool DropItemOnQuickBar(class UFortItem*& Item, enum EFortQuickBars& TargetQuickbar, int& TargetSlot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.DropItem (Underlying native function: DropItem 0xa4cdf14)
	bool DropItem(class UFortWorldItem*& ItemBeingDropped, int& Quantity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.DropCreativeItemOnQuickBar (Underlying native function: DropCreativeItemOnQuickBar 0xa4cde18)
	bool DropCreativeItemOnQuickBar(class UFortItem*& Item, enum EFortQuickBars& TargetQuickbar, int& TargetSlot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.DestroyWorldItem (Underlying native function: DestroyWorldItem 0xa4cdbdc)
	void DestroyWorldItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CraftSchematic (Underlying native function: CraftSchematic 0xa4cda84)
	bool CraftSchematic(class UFortSchematicItem*& SchematicItem, enum EFortCraftFailCause& FailCause, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CraftAndSlotSchematic (Underlying native function: CraftAndSlotSchematic 0xa4cd8e8)
	bool CraftAndSlotSchematic(class UFortSchematicItem*& SchematicItem, int& PostCraftSlot, enum EFortCraftFailCause& FailCause, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CanUpgradeItemRarity (Underlying native function: CanUpgradeItemRarity 0xa4cd3cc)
	bool CanUpgradeItemRarity(class UFortItem*& Item, struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.CanSwapItem (Underlying native function: CanSwapItem 0xa4cd1c4)
	bool CanSwapItem(class UFortItem*& Item, enum EFortQuickBars& TargetQuickbar, int& TargetSlot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CanRecycle (Underlying native function: CanRecycle 0xa4ccf90)
	bool CanRecycle(class UFortItem*& Item, struct TArray<enum EItemRecyclingRestrictionReason>& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanItemBePromoted (Underlying native function: CanItemBePromoted 0xa4ccc68)
	bool CanItemBePromoted(class UFortItem*& Item, struct TArray<struct FFortItemQuantityPair>& Costs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanItemBeMulched (Underlying native function: CanItemBeMulched 0xa4ccb58)
	bool CanItemBeMulched(class UFortItem*& Item, struct FText& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanEvolve (Underlying native function: CanEvolve 0xa4cc9a8)
	bool CanEvolve(class UFortItem*& Item, struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanCraftSchematic (Underlying native function: CanCraftSchematic 0xa4cc758)
	bool CanCraftSchematic(class UFortSchematicItem*& SchematicItem, enum EFortCraftFailCause& FailCause, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.AreAnyItemsUnseenForInventoryFilter (Underlying native function: AreAnyItemsUnseenForInventoryFilter 0xa4cc500)
	bool AreAnyItemsUnseenForInventoryFilter(enum EFortFrontendInventoryFilter& InventoryFilter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.AreAnyItemsInanimate (Underlying native function: AreAnyItemsInanimate 0xa4cc41c)
	static bool AreAnyItemsInanimate(struct TArray<class UFortItem*>& Items); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.AreAnyItemsAnimate (Underlying native function: AreAnyItemsAnimate 0xa4cc338)
	static bool AreAnyItemsAnimate(struct TArray<class UFortItem*>& Items); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

