// Class /Script/CommonUILegacy.CommonButtonLegacy
// Size: 0x1430
class UCommonButtonLegacy : public UCommonButtonBase
{
	struct FMulticastInlineDelegate OnSelectedChanged; // 0x13e0 (0x10)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x13f0 (0x10)
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0x1400 (0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x1410 (0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x1420 (0x10)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy (Underlying native function: SetTriggeredInputActionLegacy 0x6dd207c)
	void SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy*& OldPanel); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged (Underlying native function: HandleOnSelectedChanged 0x25a2990)
	void HandleOnSelectedChanged(class UCommonButtonBase*& Button, bool& InSelected); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered (Underlying native function: HandleOnButtonUnhovered 0x26bfeb0)
	void HandleOnButtonUnhovered(class UCommonButtonBase*& Button); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered (Underlying native function: HandleOnButtonHovered 0x26c8db8)
	void HandleOnButtonHovered(class UCommonButtonBase*& Button); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked (Underlying native function: HandleOnButtonDoubleClicked 0x6dd0cd0)
	void HandleOnButtonDoubleClicked(class UCommonButtonBase*& Button); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked (Underlying native function: HandleOnButtonClicked 0x27d4c0c)
	void HandleOnButtonClicked(class UCommonButtonBase*& Button); // (Final | Native | Private)
};

