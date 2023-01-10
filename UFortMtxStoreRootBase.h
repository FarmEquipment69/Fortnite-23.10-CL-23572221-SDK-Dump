// Class /Script/FortniteUI.FortMtxStoreRootBase
// Size: 0x430
class UFortMtxStoreRootBase : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UFortMtxStoreSelectionPopup* MtxStoreSelectionWidget; // 0x3b0 (0x8)
	class UClass* MtxStoreSelectionClass; // 0x3b8 (0x8)
	unsigned char unreflected_3c0[0x10]; // 0x3c0 (0x10) 
	struct TArray<class UFortStoreFrontOfferInfo*> AcquisitionOfferData; // 0x3d0 (0x10)
	unsigned char unreflected_3e0[0x18]; // 0x3e0 (0x18) 
	struct TArray<struct FString> StorefrontNames; // 0x3f8 (0x10)
	unsigned char padding_408[0x28]; // 0x408 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortMtxStoreRootBase.SetStorefrontNames (Underlying native function: SetStorefrontNames 0xa761560)
	void SetStorefrontNames(struct TArray<struct FString>& InStorefrontNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.PushStoreSelection (Underlying native function: PushStoreSelection 0x273fd14)
	void PushStoreSelection(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.OnUpdateOtherPlatformMTXMessage (Has no native function)
	void OnUpdateOtherPlatformMTXMessage(bool& HasOtherPlatformCurrency, struct FText& CurrencyMessageLocText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.OnStartReadingOffers (Underlying native function: OnStartReadingOffers 0x662da60)
	void OnStartReadingOffers(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.OnPurchasingDisabled (Has no native function)
	void OnPurchasingDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.OnOffersGenerated (Has no native function)
	void OnOffersGenerated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.NoOffersAvailable (Has no native function)
	void NoOffersAvailable(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.GetStorefrontNames (Underlying native function: GetStorefrontNames 0xa7607ac)
	struct TArray<struct FString> GetStorefrontNames(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.GetMtxBreakdown (Underlying native function: GetMtxBreakdown 0xa760738)
	struct FMtxBreakdown GetMtxBreakdown(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.GenerateOfferWidget (Underlying native function: GenerateOfferWidget 0x88115d0)
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo*& OfferData); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.ClearOfferWidgets (Underlying native function: ClearOfferWidgets 0x280e53c)
	void ClearOfferWidgets(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase.AreOffersLoaded (Underlying native function: AreOffersLoaded 0x869ecc0)
	bool AreOffersLoaded(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

