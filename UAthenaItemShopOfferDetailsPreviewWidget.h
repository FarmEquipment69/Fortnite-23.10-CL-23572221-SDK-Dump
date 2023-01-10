// Class /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget
// Size: 0x588
class UAthenaItemShopOfferDetailsPreviewWidget : public UAthenaItemShopOfferDetailsWidgetBase
{
	struct FDataTableRowHandle BackAction; // 0x4b0 (0x10)
	class UFortItemPreviewScreen* ItemPreviewWidget; // 0x4c0 (0x8)
	class UFortItemBaseWidget* ItemInfoHeader; // 0x4c8 (0x8)
	class UAthenaCosmeticUnlockingInfo* UnlockingInfo; // 0x4d0 (0x8)
	unsigned char unreflected_4d8[0x10]; // 0x4d8 (0x10) 
	float TimeBetweenVariantsRestart; // 0x4e8 (0x4)
	float TimeBetweenVariants; // 0x4ec (0x4)
	unsigned char unreflected_4f0[0x40]; // 0x4f0 (0x40) 
	class UFortItem* ItemToRepresent; // 0x530 (0x8)
	struct TArray<struct FFortCosmeticVariantPreview> CachedVariantPreviews; // 0x538 (0x10)
	struct FUnlockableVariantPreviewInfo VariantPreviewInfo; // 0x548 (0x28)
	class UAthenaItemShopOfferInspectionNavigator* OfferNavigatorArrowNavigation; // 0x570 (0x8)
	class UFortStoreSkinDetailsPopup* StorePopupDetails; // 0x578 (0x8)
	class UFortHoldableButton* ButtonGift; // 0x580 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.UpdateSwipeButtonsVisibility (Underlying native function: UpdateSwipeButtonsVisibility 0xa3ceb2c)
	void UpdateSwipeButtonsVisibility(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.UpdatePreviewFromOffer (Underlying native function: UpdatePreviewFromOffer 0xa3ceb18)
	void UpdatePreviewFromOffer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.TryDismiss (Underlying native function: TryDismiss 0xa3ceae0)
	void TryDismiss(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.TriggerPurchaseChoiceRequest (Underlying native function: TriggerPurchaseChoiceRequest 0xa3cea88)
	void TriggerPurchaseChoiceRequest(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.ShowItemFromItemReward (Underlying native function: ShowItemFromItemReward 0xa3ce4d4)
	void ShowItemFromItemReward(class UFortAthenaReward*& InItemReward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.ShouldDisplayOfferPurchasedOverlay (Underlying native function: ShouldDisplayOfferPurchasedOverlay 0xa3ce458)
	bool ShouldDisplayOfferPurchasedOverlay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa3ce20c)
	void SetItemToRepresent(class UFortItem*& InItemToRepresent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.SetIsPurchasing (Underlying native function: SetIsPurchasing 0xa3ce18c)
	void SetIsPurchasing(bool& bInIsPurchasing); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.RegisterItemRewardInteraction (Underlying native function: RegisterItemRewardInteraction 0xa3cdb3c)
	void RegisterItemRewardInteraction(class UFortAthenaReward*& InItemReward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.OnVariantPreviewInfoUpdated (Has no native function)
	void OnVariantPreviewInfoUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.OnUpdateItemRestrictionCallout (Has no native function)
	void OnUpdateItemRestrictionCallout(bool& bShouldShow, struct FText& RestrictionText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.IsMultiplePriceRealMoneyOffer (Underlying native function: IsMultiplePriceRealMoneyOffer 0xa3cd59c)
	bool IsMultiplePriceRealMoneyOffer(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.HandleItemShown (Underlying native function: HandleItemShown 0xa3ccbe0)
	void HandleItemShown(class UFortAccountItemDefinition*& AccountItemDef); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.HandleGetVBucksClicked (Underlying native function: HandleGetVBucksClicked 0xa3cc434)
	void HandleGetVBucksClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.HandleBackAction (Has no native function)
	void HandleBackAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.GetVariantPreviewInfo (Underlying native function: GetVariantPreviewInfo 0xa3cc278)
	struct FUnlockableVariantPreviewInfo GetVariantPreviewInfo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.GetSalePriceFromLastAppStore (Underlying native function: GetSalePriceFromLastAppStore 0xa3cc124)
	bool GetSalePriceFromLastAppStore(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.FocusOnWidget (Underlying native function: FocusOnWidget 0xa3cbb0c)
	void FocusOnWidget(class UWidget*& WidgetToFocus); // (Final | Native | Protected | BlueprintCallable)
};

