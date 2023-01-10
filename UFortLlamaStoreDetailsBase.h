// Class /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase
// Size: 0x2b0
class UFortLlamaStoreDetailsBase : public UCommonUserWidget
{
	class UFortStoreFrontOfferInfo* OfferInfo; // 0x290 (0x8)
	class UCommonTileView* ItemTileView; // 0x298 (0x8)
	unsigned char padding_2a0[0x10]; // 0x2a0 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver (Has no native function)
	void StartUpgradingToSilver(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold (Has no native function)
	void StartUpgradingToGold(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget (Underlying native function: SetScrollWidget 0x72618d4)
	void SetScrollWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged (Has no native function)
	void OnOfferInfoChanged(int& CurrentOfferRarity); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount (Underlying native function: GetNotInCollectionBookCount 0x2af7234)
	int GetNotInCollectionBookCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount (Underlying native function: GetNewItemCount 0x2d7adec)
	int GetNewItemCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount (Underlying native function: GetChoiceItemCount 0x72435a8)
	int GetChoiceItemCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

