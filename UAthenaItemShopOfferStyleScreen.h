// Class /Script/FortniteUI.AthenaItemShopOfferStyleScreen
// Size: 0x540
class UAthenaItemShopOfferStyleScreen : public UAthenaItemShopOfferDetailsWidgetBase
{
	struct FDataTableRowHandle BackAction; // 0x4b0 (0x10)
	class UFortItemPreviewScreen* ItemPreviewWidget; // 0x4c0 (0x8)
	class UFortItemBaseWidget* HeaderItemInfo; // 0x4c8 (0x8)
	class UCommonTextBlock* TextStyleDisclaimer; // 0x4d0 (0x8)
	class UFortVariantPicker* PickerVariantSelector; // 0x4d8 (0x8)
	class UCommonButtonLegacy* ButtonPrevious; // 0x4e0 (0x8)
	class UCommonButtonLegacy* ButtonNext; // 0x4e8 (0x8)
	class UAthenaCosmeticUnlockingInfo* InfoLockedNotification; // 0x4f0 (0x8)
	class UFortItemDefinition* TriggeringItemDefinition; // 0x4f8 (0x8)
	struct FDisplayManagerVariantData VariantData; // 0x500 (0x18)
	struct TArray<int> OfferIndicesWithVariants; // 0x518 (0x10)
	unsigned char padding_528[0x18]; // 0x528 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopOfferStyleScreen.SetTriggeringItemDefinition (Underlying native function: SetTriggeringItemDefinition 0xa3ce320)
	void SetTriggeringItemDefinition(class UFortItemDefinition*& TriggeringItemDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferStyleScreen.OnVariantIndicesPopulated (Has no native function)
	void OnVariantIndicesPopulated(bool& bMultipleVariants); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferStyleScreen.HandleBackAction (Has no native function)
	void HandleBackAction(); // (Event | Protected | BlueprintEvent)
};

