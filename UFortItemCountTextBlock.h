// Class /Script/FortniteUI.FortItemCountTextBlock
// Size: 0x410
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
	class UFortItemDefinition* ItemDefinition; // 0x3f0 (0x8)
	enum EFortItemCountStyle CountStyle; // 0x3f8 (0x1)
	unsigned char unreflected_3f9[0x3]; // 0x3f9 (0x3) 
	float ItemCountMaxInterpolateDuration; // 0x3fc (0x4)
	float ItemCountMinInterpolateRate; // 0x400 (0x4)
	unsigned char padding_404[0xc]; // 0x404 (0xc)

	/* Functions */

	// Function /Script/FortniteUI.FortItemCountTextBlock.SetOverrideValue (Underlying native function: SetOverrideValue 0xa70b02c)
	void SetOverrideValue(int& InOverrideValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.SetItemDefinition (Underlying native function: SetItemDefinition 0xa709aac)
	void SetItemDefinition(class UFortItemDefinition*& InItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.SetCountStyle (Underlying native function: SetCountStyle 0xa7097e0)
	void SetCountStyle(enum EFortItemCountStyle& InCountStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.InterpolateOverrideToValue (Underlying native function: InterpolateOverrideToValue 0xa7091ec)
	void InterpolateOverrideToValue(int& TargetValue, float& MaximumInterpolationDuration, float& MinimumChangeRate, float& OutroOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.HandleItemCountChanged (Underlying native function: HandleItemCountChanged 0xa708abc)
	void HandleItemCountChanged(class UFortItemDefinition*& Definition, int& Delta); // (Final | Native | Private)
};

