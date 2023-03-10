// Class /Script/SaveTheWorldUI.FortCollectionBookSlotButton
// Size: 0x1470
class UFortCollectionBookSlotButton : public UCommonButtonLegacy
{
	class UFortCollectionBookSlotWidget* CollectionBookSlotWidget; // 0x1430 (0x8)
	class UMenuAnchor* PopupMenuAnchor; // 0x1438 (0x8)
	unsigned char padding_1440[0x30]; // 0x1440 (0x30)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction (Underlying native function: PopupMenuClosedWithAction 0x71e9784)
	void PopupMenuClosedWithAction(enum EFortCollectionBookPopupButtonType& Selection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated (Underlying native function: OnSlottedItemUpdated 0x71e9468)
	void OnSlottedItemUpdated(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu (Underlying native function: GetPopupMenu 0x71e67f8)
	class UUserWidget* GetPopupMenu(); // (Final | Native | Private)
};

