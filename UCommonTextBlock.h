// Class /Script/CommonUI.CommonTextBlock
// Size: 0x350
class UCommonTextBlock : public UTextBlock
{
	float MobileFontSizeMultiplier; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	class UClass* style; // 0x320 (0x8)
	class UClass* ScrollStyle; // 0x328 (0x8)
	class UCommonStyleSheet* StyleSheet; // 0x330 (0x8)
	bool bIsScrollingEnabled; // 0x338 (0x1)
	bool bDisplayAllCaps; // 0x339 (0x1)
	bool bAutoCollapseWithEmptyText; // 0x33a (0x1)
	unsigned char padding_33b[0x15]; // 0x33b (0x15)

	/* Functions */

	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth (Underlying native function: SetWrapTextWidth 0x66307b0)
	void SetWrapTextWidth(int& InWrapTextAt); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetTextCase (Underlying native function: SetTextCase 0x1c61dc8)
	void SetTextCase(bool& bUseAllCaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetStyle (Underlying native function: SetStyle 0x1e213a4)
	void SetStyle(class UClass*& InStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled (Underlying native function: SetScrollingEnabled 0x287f30c)
	void SetScrollingEnabled(bool& bInIsScrollingEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier (Underlying native function: SetMobileFontSizeMultiplier 0x520ec30)
	void SetMobileFontSizeMultiplier(float& InMobileFontSizeMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetMargin (Underlying native function: SetMargin 0x662fbe0)
	void SetMargin(struct Fmargin& InMargin); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage (Underlying native function: SetLineHeightPercentage 0x662f86c)
	void SetLineHeightPercentage(float& InLineHeightPercentage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState (Underlying native function: ResetScrollState 0x1f93138)
	void ResetScrollState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier (Underlying native function: GetMobileFontSizeMultiplier 0x520ec10)
	float GetMobileFontSizeMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextBlock.GetMargin (Underlying native function: GetMargin 0x662cef8)
	struct Fmargin GetMargin(); // (Final | Native | Public | BlueprintCallable)
};

