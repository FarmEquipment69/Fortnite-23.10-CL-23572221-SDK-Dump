// Class /Script/FortniteUI.FortMultiSizeItemCard
// Size: 0x1b0
class UFortMultiSizeItemCard : public UFortItemWidget_NUI
{
	enum EFortItemCardSize BPItemCardSize; // 0x170 (0x1)
	bool ShouldDisplayItemAsReward; // 0x171 (0x1)
	unsigned char unreflected_172[0x2]; // 0x172 (0x2) 
	int QuantityOverride; // 0x174 (0x4)
	enum EFortRarity RarityOverride; // 0x178 (0x1)
	enum EFortItemType EmptyItemType; // 0x179 (0x1)
	bool ShouldSuppressItemTypeIcon; // 0x17a (0x1)
	bool ShouldSuppressTierMeter; // 0x17b (0x1)
	bool ShouldCollapseBorderPadding; // 0x17c (0x1)
	bool ShouldCollapseItem; // 0x17d (0x1)
	bool ShouldAutoHideDurability; // 0x17e (0x1)
	bool ShouldCollapseQuantity; // 0x17f (0x1)
	bool ShouldShowDurabilityRepairMode; // 0x180 (0x1)
	unsigned char padding_181[0x2f]; // 0x181 (0x2f)

	/* Functions */

	// Function /Script/FortniteUI.FortMultiSizeItemCard.ShouldUseNewItemCards (Underlying native function: ShouldUseNewItemCards 0xa7359d0)
	static bool ShouldUseNewItemCards(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetShouldSuppressItemTypeIcon (Underlying native function: SetShouldSuppressItemTypeIcon 0xa735400)
	void SetShouldSuppressItemTypeIcon(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetShouldShowDurabilityRepairMode (Underlying native function: SetShouldShowDurabilityRepairMode 0xa73535c)
	void SetShouldShowDurabilityRepairMode(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetShouldDisplayItemAsReward (Underlying native function: SetShouldDisplayItemAsReward 0xa7352dc)
	void SetShouldDisplayItemAsReward(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetShouldCollapseQuantity (Underlying native function: SetShouldCollapseQuantity 0xa735238)
	void SetShouldCollapseQuantity(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetShouldCollapseItem (Underlying native function: SetShouldCollapseItem 0xa73519c)
	void SetShouldCollapseItem(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetShouldCollapseBorderPadding (Underlying native function: SetShouldCollapseBorderPadding 0xa7350f0)
	void SetShouldCollapseBorderPadding(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetRarityOverride (Underlying native function: SetRarityOverride 0xa734f78)
	void SetRarityOverride(enum EFortRarity& RarityOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetQuantityOverride (Underlying native function: SetQuantityOverride 0xa734ef8)
	void SetQuantityOverride(int& QuantityOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetEmptyItemType (Underlying native function: SetEmptyItemType 0xa733a70)
	void SetEmptyItemType(enum EFortItemType& NewEmptyItemType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.SetCardSize (Underlying native function: SetCardSize 0xa73390c)
	void SetCardSize(enum EFortItemCardSize& CardSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeItemCard.GetCardSize (Underlying native function: GetCardSize 0x851eca0)
	enum EFortItemCardSize GetCardSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

