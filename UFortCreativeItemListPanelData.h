// Class /Script/FortniteUI.FortCreativeItemListPanelData
// Size: 0x60
class UFortCreativeItemListPanelData : public UObject
{
	struct TArray<class UFortItemDefinition*> AllItems; // 0x28 (0x10)
	struct TArray<struct FItemListCategoryArray> CategoryList; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnLoadItemsComplete; // 0x48 (0x10)
	unsigned char padding_58[0x8]; // 0x58 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeItemListPanelData.LoadItems (Underlying native function: LoadItems 0x6e496b0)
	void LoadItems(class UObject*& Target); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListPanelData.GetInteractionText (Underlying native function: GetInteractionText 0x99f9f64)
	struct FText GetInteractionText(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListPanelData.GetCreativeItemListPanelData (Underlying native function: GetCreativeItemListPanelData 0xa5840f0)
	static class UFortCreativeItemListPanelData* GetCreativeItemListPanelData(class UObject*& Target, class UClass*& PanelDataClass); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

