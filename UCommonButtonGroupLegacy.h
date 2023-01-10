// Class /Script/CommonUILegacy.CommonButtonGroupLegacy
// Size: 0x1b0
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{
	struct FMulticastInlineDelegate OnSelectedButtonChanged; // 0x110 (0x10)
	unsigned char unreflected_120[0x18]; // 0x120 (0x18) 
	struct FMulticastInlineDelegate OnHoveredButtonChanged; // 0x138 (0x10)
	unsigned char unreflected_148[0x18]; // 0x148 (0x18) 
	struct FMulticastInlineDelegate OnButtonClicked; // 0x160 (0x10)
	unsigned char unreflected_170[0x18]; // 0x170 (0x18) 
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0x188 (0x10)
	unsigned char padding_198[0x18]; // 0x198 (0x18)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged (Underlying native function: OnSelectionStateChanged 0x26adf68)
	void OnSelectionStateChanged(class UCommonButtonLegacy*& BaseButton, bool& bIsSelected); // (Native | Protected)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked (Underlying native function: OnHandleButtonDoubleClicked 0x6dd10b8)
	void OnHandleButtonDoubleClicked(class UCommonButtonLegacy*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked (Underlying native function: OnHandleButtonClicked 0x29ac734)
	void OnHandleButtonClicked(class UCommonButtonLegacy*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered (Underlying native function: OnButtonUnhovered 0x287f494)
	void OnButtonUnhovered(class UCommonButtonLegacy*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered (Underlying native function: OnButtonHovered 0x287f410)
	void OnButtonHovered(class UCommonButtonLegacy*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged (Underlying native function: HandleOnSelectedButtonChanged 0x270350c)
	void HandleOnSelectedButtonChanged(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged (Underlying native function: HandleOnHoveredButtonChanged 0x268127c)
	void HandleOnHoveredButtonChanged(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked (Underlying native function: HandleOnButtonDoubleClicked 0x6dd0c0c)
	void HandleOnButtonDoubleClicked(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked (Underlying native function: HandleOnButtonClicked 0x2846fbc)
	void HandleOnButtonClicked(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged (Underlying native function: HandleNativeOnSelectedButtonChanged 0x6dd0b48)
	void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged (Underlying native function: HandleNativeOnHoveredButtonChanged 0x6dd0a84)
	void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked (Underlying native function: HandleNativeOnButtonDoubleClicked 0x6dd09c0)
	void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked (Underlying native function: HandleNativeOnButtonClicked 0x6dd08fc)
	void HandleNativeOnButtonClicked(class UCommonButtonBase*& BaseButton, int& InSelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton (Underlying native function: GetSelectedButton 0x2c0b300)
	class UCommonButtonLegacy* GetSelectedButton(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex (Underlying native function: GetButtonAtIndex 0x6dd0524)
	class UCommonButtonLegacy* GetButtonAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup (Underlying native function: CreateButtonGroup 0x6dd02a8)
	static class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject*& ContextObject, bool& bInSelectionRequired); // (Final | Native | Static | Public | BlueprintCallable)
};

