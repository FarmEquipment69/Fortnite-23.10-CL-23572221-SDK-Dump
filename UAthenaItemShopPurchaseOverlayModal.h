// Class /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal
// Size: 0x4e0
class UAthenaItemShopPurchaseOverlayModal : public UAthenaItemShopOfferDetailsWidgetBase
{
	unsigned char unreflected_4b0[0x20]; // 0x4b0 (0x20) 
	class UHorizontalBox* HBoxSuccessfullyPurchased; // 0x4d0 (0x8)
	class UHorizontalBox* HBoxSuccessfullyRefunded; // 0x4d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.ShouldShowAsRefund (Underlying native function: ShouldShowAsRefund 0x7243e3c)
	bool ShouldShowAsRefund(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.IsLastItem (Underlying native function: IsLastItem 0xa3cd510)
	bool IsLastItem(int& ItemIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.InitBundleLayout (Has no native function)
	void InitBundleLayout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.HasMultipleItems (Underlying native function: HasMultipleItems 0xa3cd450)
	bool HasMultipleItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.GetQuantityPurchased (Underlying native function: GetQuantityPurchased 0xa3cbfb8)
	int GetQuantityPurchased(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.GetPurchasedItems (Underlying native function: GetPurchasedItems 0xa3cbf9c)
	struct TArray<struct FPurchasedItemInfo> GetPurchasedItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.Dismiss (Underlying native function: Dismiss 0xa3cba04)
	void Dismiss(); // (Final | Native | Protected | BlueprintCallable)
};

