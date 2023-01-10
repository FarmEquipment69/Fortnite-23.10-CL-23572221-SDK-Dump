// Class /Script/UMG.ComboBoxKey
// Size: 0x1440
class UComboBoxKey : public UWidget
{
	struct TArray<struct FName> Options; // 0x148 (0x10)
	struct FName SelectedOption; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct FComboBoxStyle WidgetStyle; // 0x160 (0x600)
	struct FTableRowStyle ItemStyle; // 0x760 (0xc50)
	struct FSlateColor ForegroundColor; // 0x13b0 (0x14)
	struct Fmargin ContentPadding; // 0x13c4 (0x10)
	float MaxListHeight; // 0x13d4 (0x4)
	bool bHasDownArrow; // 0x13d8 (0x1)
	bool bEnableGamepadNavigationMode; // 0x13d9 (0x1)
	bool bIsFocusable; // 0x13da (0x1)
	unsigned char unreflected_13db[0x1]; // 0x13db (0x1) 
	struct FDelegate OnGenerateContentWidget; // 0x13dc (0xc)
	struct FDelegate OnGenerateItemWidget; // 0x13e8 (0xc)
	unsigned char unreflected_13f4[0x4]; // 0x13f4 (0x4) 
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x13f8 (0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1408 (0x10)
	unsigned char padding_1418[0x28]; // 0x1418 (0x28)

	/* Functions */

	// Function /Script/UMG.ComboBoxKey.SetSelectedOption (Underlying native function: SetSelectedOption 0x9920644)
	void SetSelectedOption(struct FName& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxKey.RemoveOption (Underlying native function: RemoveOption 0x991e740)
	bool RemoveOption(struct FName& Option); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature (Has no native function)
	void OnSelectionChangedEventDelegateSignature(struct FName& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature (Has no native function)
	void OnOpeningEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/UMG.ComboBoxKey.IsOpen (Underlying native function: IsOpen 0x991e1e8)
	bool IsOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxKey.GetSelectedOption (Underlying native function: GetSelectedOption 0x735bbd8)
	struct FName GetSelectedOption(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature (Has no native function)
	class UWidget* GenerateWidgetEventDelegateSignature(struct FName& Item); // (Public | Delegate)

	// Function /Script/UMG.ComboBoxKey.ClearSelection (Underlying native function: ClearSelection 0x991cf3c)
	void ClearSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxKey.ClearOptions (Underlying native function: ClearOptions 0x991ced8)
	void ClearOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxKey.AddOption (Underlying native function: AddOption 0x991c844)
	void AddOption(struct FName& Option); // (Final | Native | Public | BlueprintCallable)
};

