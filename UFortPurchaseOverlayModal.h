// Class /Script/FortniteUI.FortPurchaseOverlayModal
// Size: 0x808
class UFortPurchaseOverlayModal : public UFortStoreFrontOfferDetailsWidgetBase
{
	unsigned char unreflected_7d8[0x20]; // 0x7d8 (0x20) 
	class UHorizontalBox* HBoxSuccessfullyPurchased; // 0x7f8 (0x8)
	class UHorizontalBox* HBoxSuccessfullyRefunded; // 0x800 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.ShouldShowAsRefund (Underlying native function: ShouldShowAsRefund 0xa7f6898)
	bool ShouldShowAsRefund(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.IsLastItem (Underlying native function: IsLastItem 0xa7f2760)
	bool IsLastItem(int& ItemIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.InitBundleLayout (Has no native function)
	void InitBundleLayout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.HasMultipleItems (Underlying native function: HasMultipleItems 0xa7f1bc8)
	bool HasMultipleItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.GetQuantityPurchased (Underlying native function: GetQuantityPurchased 0xa7ef3ec)
	int GetQuantityPurchased(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.GetPurchasedItems (Underlying native function: GetPurchasedItems 0xa7ef3d0)
	struct TArray<struct FPurchasedItemInfo> GetPurchasedItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.Dismiss (Underlying native function: Dismiss 0xa3cba04)
	void Dismiss(); // (Final | Native | Protected | BlueprintCallable)
};

