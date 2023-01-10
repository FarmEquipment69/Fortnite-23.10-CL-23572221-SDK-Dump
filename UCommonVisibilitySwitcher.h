// Class /Script/CommonUI.CommonVisibilitySwitcher
// Size: 0x198
class UCommonVisibilitySwitcher : public UOverlay
{
	enum ESlateVisibility ShownVisibility; // 0x170 (0x1)
	unsigned char unreflected_171[0x3]; // 0x171 (0x3) 
	int ActiveWidgetIndex; // 0x174 (0x4)
	bool bAutoActivateSlot; // 0x178 (0x1)
	bool bActivateFirstSlotOnAdding; // 0x179 (0x1)
	unsigned char padding_17a[0x1e]; // 0x17a (0x1e)

	/* Functions */

	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex (Underlying native function: SetActiveWidgetIndex 0x1a5443c)
	void SetActiveWidgetIndex(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget (Underlying native function: SetActiveWidget 0x2d87dc8)
	void SetActiveWidget(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex (Underlying native function: IncrementActiveWidgetIndex 0x662dcfc)
	void IncrementActiveWidgetIndex(bool& bAllowWrapping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex (Underlying native function: GetActiveWidgetIndex 0x29aa4a0)
	int GetActiveWidgetIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget (Underlying native function: GetActiveWidget 0x662c678)
	class UWidget* GetActiveWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex (Underlying native function: DecrementActiveWidgetIndex 0x662c1cc)
	void DecrementActiveWidgetIndex(bool& bAllowWrapping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot (Underlying native function: DeactivateVisibleSlot 0x662c190)
	void DeactivateVisibleSlot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot (Underlying native function: ActivateVisibleSlot 0x662bc4c)
	void ActivateVisibleSlot(); // (Final | Native | Public | BlueprintCallable)
};

