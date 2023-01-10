// Class /Script/FortniteGame.FortMinigameItemListComponent
// Size: 0x170
class UFortMinigameItemListComponent : public UFortMinigameItemContainerComponent
{
	unsigned char unreflected_128[0x18]; // 0x128 (0x18) 
	struct FPickupInstigatorData BaseInstigatorData; // 0x140 (0x18)
	bool bAllowItemTracking; // 0x158 (0x1)
	bool bAllowItemCustomization; // 0x159 (0x1)
	bool bAllowNewItemVariants; // 0x15a (0x1)
	bool bShouldRegisterNewItemVariants; // 0x15b (0x1)
	bool bEnableItemTemplates; // 0x15c (0x1)
	unsigned char unreflected_15d[0x3]; // 0x15d (0x3) 
	struct TArray<struct FMinigameItemData> ItemListData; // 0x160 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameItemListComponent.ShouldRegisterNewItemVariants (Underlying native function: ShouldRegisterNewItemVariants 0x88ca408)
	bool ShouldRegisterNewItemVariants(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.SetShouldRegisterNewItemVariants (Underlying native function: SetShouldRegisterNewItemVariants 0x88c9924)
	void SetShouldRegisterNewItemVariants(bool& bValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.SetPropertyOverridesForItem (Underlying native function: SetPropertyOverridesForItem 0x88c9604)
	bool SetPropertyOverridesForItem(struct TMap<struct FString, struct FString>& NewOptions, int& ItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.SetEnableItemTemplates (Underlying native function: SetEnableItemTemplates 0x88c90ec)
	void SetEnableItemTemplates(bool& bValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.SetBaseInstigatorData (Underlying native function: SetBaseInstigatorData 0x88c9068)
	bool SetBaseInstigatorData(struct FPickupInstigatorData& InstigatorData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.RequestItemTemplateUpdate (Underlying native function: RequestItemTemplateUpdate 0x88c88cc)
	void RequestItemTemplateUpdate(struct FDelegate& UpdateItemTemplateDelegate, int& ItemIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.RemoveItem (Underlying native function: RemoveItem 0x6efcaac)
	bool RemoveItem(int& ItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.OnRep_ItemListData (Underlying native function: OnRep_ItemListData 0x8551178)
	void OnRepItemListData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.MakeSpawnParamsList (Underlying native function: MakeSpawnParamsList 0x88c7138)
	struct TArray<struct FMinigameSpawnerSpawnParams> MakeSpawnParamsList(struct FTransform& SpawnTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.MakeSpawnParams (Underlying native function: MakeSpawnParams 0x88c6e0c)
	struct FMinigameSpawnerSpawnParams MakeSpawnParams(int& Index, struct FTransform& SpawnTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.K2_NotifyItemListChanged (Has no native function)
	void K2NotifyItemListChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.GetPropertyOverridesForItem (Underlying native function: GetPropertyOverridesForItem 0x88c4508)
	bool GetPropertyOverridesForItem(struct TMap<struct FString, struct FString>& CurrentOptions, int& ItemIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.GetNumItems (Underlying native function: GetNumItems 0x88c4038)
	int GetNumItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.GetContainedItemVariants (Underlying native function: GetContainedItemVariants 0x88c3818)
	struct TArray<struct FItemVariantHandle> GetContainedItemVariants(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.GetContainedItems (Underlying native function: GetContainedItems 0x88c3884)
	struct TArray<class UFortWorldItemDefinition*> GetContainedItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.ClearItems (Underlying native function: ClearItems 0x20eb1a0)
	void ClearItems(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.CanEditItemListComponent (Underlying native function: CanEditItemListComponent 0x88c23ac)
	bool CanEditItemListComponent(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.AddItemsFromSpawnParams (Underlying native function: AddItemsFromSpawnParams 0x88c1824)
	void AddItemsFromSpawnParams(struct TArray<struct FMinigameSpawnerSpawnParams>& ItemSpawnParams); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.AddItemEntry (Underlying native function: AddItemEntry 0x88c1778)
	bool AddItemEntry(struct FFortItemEntry& ItemEntry); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameItemListComponent.AddItem (Underlying native function: AddItem 0x88c16bc)
	int AddItem(class UFortWorldItemDefinition*& ItemDefinition, int& ItemQuantity); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

