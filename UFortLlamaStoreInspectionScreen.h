// Class /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen
// Size: 0x7e8
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase
{
	class UCommonTileView* GrantedItemTileView; // 0x7d8 (0x8)
	bool bIsInChoiceViewMode; // 0x7e0 (0x1)
	unsigned char padding_7e1[0x7]; // 0x7e1 (0x7)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack (Underlying native function: IsItemChoicePack 0x7260d20)
	bool IsItemChoicePack(class UObject*& ItemToCheck); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack (Underlying native function: GetSelectedCardPack 0x72603d4)
	class UFortCardPackItem* GetSelectedCardPack(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState (Underlying native function: GetInspectChoiceInputState 0x726007c)
	enum EInputActionState GetInspectChoiceInputState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

