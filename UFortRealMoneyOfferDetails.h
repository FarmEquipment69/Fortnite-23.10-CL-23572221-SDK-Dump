// Class /Script/FortniteUI.FortRealMoneyOfferDetails
// Size: 0x888
class UFortRealMoneyOfferDetails : public UFortStoreFrontOfferDetailsWidgetBase
{
	struct FDataTableRowHandle UndoAction; // 0x7d8 (0x10)
	class UWidget* ContentPurchaseFocusWidget; // 0x7e8 (0x8)
	struct FDataTableRowHandle BackAction; // 0x7f0 (0x10)
	struct FDataTableRowHandle PurchaseAction; // 0x800 (0x10)
	struct FDataTableRowHandle VBuckAction; // 0x810 (0x10)
	struct FDataTableRowHandle ReloadMtxAction; // 0x820 (0x10)
	class UClass* ItemInspectScreenClass; // 0x830 (0x8)
	class UFortHoldableButton* ButtonPurchase; // 0x838 (0x8)
	class UFortHoldableButton* ButtonPurchaseSTW; // 0x840 (0x8)
	class UCommonButtonLegacy* ButtonSendGift; // 0x848 (0x8)
	class UCommonButtonLegacy* ButtonInspect; // 0x850 (0x8)
	class UCommonButtonLegacy* ButtonMobileClose; // 0x858 (0x8)
	class UCommonButtonLegacy* ButtonMTX; // 0x860 (0x8)
	class UWidget* ContainerSimpleMTXDisplay; // 0x868 (0x8)
	class UOverlay* OverlayMobileCloseButton; // 0x870 (0x8)
	class UScrollBox* ScrollBoxDetails; // 0x878 (0x8)
	unsigned char padding_880[0x8]; // 0x880 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.UpdatePurchaseBlocked (Has no native function)
	void UpdatePurchaseBlocked(bool& bIsBlocked, struct FText& PurchaseNotAllowedReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.ShowPurchasedOverlay (Has no native function)
	void ShowPurchasedOverlay(int& QuantityPurchased, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.ShowPurchaseConfirmation (Has no native function)
	void ShowPurchaseConfirmation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.ShowLegalTextInPopup (Underlying native function: ShowLegalTextInPopup 0xa3ce600)
	void ShowLegalTextInPopup(struct FText& ItemName, struct FText& LegalText); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.SetVBuckActionOnPurchaseButton (Underlying native function: SetVBuckActionOnPurchaseButton 0xa7f648c)
	void SetVBuckActionOnPurchaseButton(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.SetPurchaseActionOnPurchaseButton (Underlying native function: SetPurchaseActionOnPurchaseButton 0xa7f5cf0)
	void SetPurchaseActionOnPurchaseButton(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.SetCanPurchase (Underlying native function: SetCanPurchase 0xa7f4ea0)
	void SetCanPurchase(bool& bInCanPurchase); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.SendGift (Underlying native function: SendGift 0xa7f3c34)
	void SendGift(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.ResetPurchaseButtonText (Has no native function)
	void ResetPurchaseButtonText(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.RequestMtxPurchase (Underlying native function: RequestMtxPurchase 0xa7f37b4)
	void RequestMtxPurchase(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.OnSendGiftComplete (Has no native function)
	void OnSendGiftComplete(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.IsGiftable (Underlying native function: IsGiftable 0xa7f1f08)
	bool IsGiftable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.HandleUndoAction (Underlying native function: HandleUndoAction 0xa7f1924)
	void HandleUndoAction(bool& bPassThrough); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.HandleMtxPurchaseComplete (Underlying native function: HandleMtxPurchaseComplete 0xa7f1160)
	void HandleMtxPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.HandleItemPurchaseComplete (Underlying native function: HandleItemPurchaseComplete 0xa7f0e1c)
	void HandleItemPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.HandleBackAction (Underlying native function: HandleBackAction 0xa7f06ec)
	void HandleBackAction(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.GetSalePriceFromLastAppStore (Underlying native function: GetSalePriceFromLastAppStore 0xa7ef9c8)
	bool GetSalePriceFromLastAppStore(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.GetPurchaseButtonCurrent (Underlying native function: GetPurchaseButtonCurrent 0xa7ef3ac)
	class UFortHoldableButton* GetPurchaseButtonCurrent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.DeclineMtxPurchase (Underlying native function: DeclineMtxPurchase 0xa7ec1f4)
	void DeclineMtxPurchase(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortRealMoneyOfferDetails.ClearActionOnPurchaseButton (Underlying native function: ClearActionOnPurchaseButton 0xa7ebf48)
	void ClearActionOnPurchaseButton(); // (Final | Native | Private | BlueprintCallable)
};

