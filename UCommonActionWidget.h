// Class /Script/CommonUI.CommonActionWidget
// Size: 0x420
class UCommonActionWidget : public UWidget
{
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x148 (0x10)
	unsigned char unreflected_158[0x8]; // 0x158 (0x8) 
	struct FSlateBrush ProgressMaterialBrush; // 0x160 (0xc0)
	struct FName ProgressMaterialParam; // 0x220 (0x4)
	unsigned char unreflected_224[0xc]; // 0x224 (0xc) 
	struct FSlateBrush IconRimBrush; // 0x230 (0xc0)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x2f0 (0x10)
	unsigned char unreflected_300[0x8]; // 0x300 (0x8) 
	class UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x308 (0x8)
	unsigned char padding_310[0x110]; // 0x310 (0x110)

	/* Functions */

	// Function /Script/CommonUI.CommonActionWidget.SetInputActions (Underlying native function: SetInputActions 0x662f268)
	void SetInputActions(struct TArray<struct FDataTableRowHandle>& NewInputActions); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActionWidget.SetInputAction (Underlying native function: SetInputAction 0x29c2fdc)
	void SetInputAction(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush (Underlying native function: SetIconRimBrush 0x28d721c)
	void SetIconRimBrush(struct FSlateBrush& InIconRimBrush); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature (Has no native function)
	void OnInputMethodChangedDelegateSignature(bool& bUsingGamepad); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction (Underlying native function: IsHeldAction 0x662ded4)
	bool IsHeldAction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonActionWidget.GetIcon (Underlying native function: GetIcon 0x662cd58)
	struct FSlateBrush GetIcon(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText (Underlying native function: GetDisplayText 0x15aceac)
	struct FText GetDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

