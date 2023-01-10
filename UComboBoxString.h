// Class /Script/UMG.ComboBoxString
// Size: 0x14d0
class UComboBoxString : public UWidget
{
	struct TArray<struct FString> DefaultOptions; // 0x148 (0x10)
	struct FString SelectedOption; // 0x158 (0x10)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FComboBoxStyle WidgetStyle; // 0x170 (0x600)
	struct FTableRowStyle ItemStyle; // 0x770 (0xc50)
	struct Fmargin ContentPadding; // 0x13c0 (0x10)
	float MaxListHeight; // 0x13d0 (0x4)
	bool HasDownArrow; // 0x13d4 (0x1)
	bool EnableGamepadNavigationMode; // 0x13d5 (0x1)
	unsigned char unreflected_13d6[0x2]; // 0x13d6 (0x2) 
	struct FSlateFontInfo Font; // 0x13d8 (0x58)
	struct FSlateColor ForegroundColor; // 0x1430 (0x14)
	bool bIsFocusable; // 0x1444 (0x1)
	unsigned char unreflected_1445[0x3]; // 0x1445 (0x3) 
	struct FDelegate OnGenerateWidgetEvent; // 0x1448 (0xc)
	unsigned char unreflected_1454[0x4]; // 0x1454 (0x4) 
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1458 (0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1468 (0x10)
	unsigned char padding_1478[0x58]; // 0x1478 (0x58)

	/* Functions */

	// Function /Script/UMG.ComboBoxString.SetSelectedOption (Underlying native function: SetSelectedOption 0x99206ec)
	void SetSelectedOption(struct FString& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.SetSelectedIndex (Underlying native function: SetSelectedIndex 0x99205c4)
	void SetSelectedIndex(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.RemoveOption (Underlying native function: RemoveOption 0x991e808)
	bool RemoveOption(struct FString& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.RefreshOptions (Underlying native function: RefreshOptions 0x991e410)
	void RefreshOptions(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature (Has no native function)
	void OnSelectionChangedEventDelegateSignature(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature (Has no native function)
	void OnOpeningEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/UMG.ComboBoxString.IsOpen (Underlying native function: IsOpen 0x991e220)
	bool IsOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetSelectedOption (Underlying native function: GetSelectedOption 0x281ee44)
	struct FString GetSelectedOption(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetSelectedIndex (Underlying native function: GetSelectedIndex 0x991dc10)
	int GetSelectedIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetOptionCount (Underlying native function: GetOptionCount 0x991db38)
	int GetOptionCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex (Underlying native function: GetOptionAtIndex 0x991d978)
	struct FString GetOptionAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.FindOptionIndex (Underlying native function: FindOptionIndex 0x991d574)
	int FindOptionIndex(struct FString& Option); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.ClearSelection (Underlying native function: ClearSelection 0x991cf50)
	void ClearSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.ClearOptions (Underlying native function: ClearOptions 0x991cf28)
	void ClearOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.AddOption (Underlying native function: AddOption 0x991c8c4)
	void AddOption(struct FString& Option); // (Final | Native | Public | BlueprintCallable)
};

