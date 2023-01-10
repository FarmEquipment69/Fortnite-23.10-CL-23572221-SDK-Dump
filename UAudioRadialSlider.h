// Class /Script/AudioWidgets.AudioRadialSlider
// Size: 0x350
class UAudioRadialSlider : public UWidget
{
	float Value; // 0x148 (0x4)
	struct FDelegate ValueDelegate; // 0x14c (0xc)
	struct TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout; // 0x158 (0x1)
	unsigned char unreflected_159[0x3]; // 0x159 (0x3) 
	struct FLinearColor CenterBackgroundColor; // 0x15c (0x10)
	struct FLinearColor SliderProgressColor; // 0x16c (0x10)
	struct FLinearColor SliderBarColor; // 0x17c (0x10)
	unsigned char unreflected_18c[0x4]; // 0x18c (0x4) 
	struct FVector2D HandStartEndRatio; // 0x190 (0x10)
	struct FText UnitsText; // 0x1a0 (0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x1b8 (0x10)
	bool ShowLabelOnlyOnHover; // 0x1c8 (0x1)
	bool ShowUnitsText; // 0x1c9 (0x1)
	bool IsUnitsTextReadOnly; // 0x1ca (0x1)
	bool IsValueTextReadOnly; // 0x1cb (0x1)
	float SliderThickness; // 0x1cc (0x4)
	struct FVector2D OutputRange; // 0x1d0 (0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x1e0 (0x10)
	unsigned char padding_1f0[0x160]; // 0x1f0 (0x160)

	/* Functions */

	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout (Underlying native function: SetWidgetLayout 0x76f118c)
	void SetWidgetLayout(struct TEnumAsByte<EAudioRadialSliderLayout>& InLayout); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly (Underlying native function: SetValueTextReadOnly 0x76f0fd0)
	void SetValueTextReadOnly(bool& bIsReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly (Underlying native function: SetUnitsTextReadOnly 0x76f0eb8)
	void SetUnitsTextReadOnly(bool& bIsReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText (Underlying native function: SetUnitsText 0x76f0d4c)
	void SetUnitsText(struct FText& Units); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor (Underlying native function: SetTextLabelBackgroundColor 0x76f0c14)
	void SetTextLabelBackgroundColor(struct FSlateColor& InColor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness (Underlying native function: SetSliderThickness 0x76f0ae0)
	void SetSliderThickness(float& InThickness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor (Underlying native function: SetSliderProgressColor 0x76f0a44)
	void SetSliderProgressColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor (Underlying native function: SetSliderBarColor 0x76f090c)
	void SetSliderBarColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText (Underlying native function: SetShowUnitsText 0x76f0758)
	void SetShowUnitsText(bool& bShowUnitsText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover (Underlying native function: SetShowLabelOnlyOnHover 0x76f0638)
	void SetShowLabelOnlyOnHover(bool& bShowLabelOnlyOnHover); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange (Underlying native function: SetOutputRange 0x76f05a8)
	void SetOutputRange(struct FVector2D& InOutputRange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio (Underlying native function: SetHandStartEndRatio 0x76f00d8)
	void SetHandStartEndRatio(struct FVector2D& InHandStartEndRatio); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor (Underlying native function: SetCenterBackgroundColor 0x76f003c)
	void SetCenterBackgroundColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue (Underlying native function: GetSliderValue 0x76eff04)
	float GetSliderValue(float& OutputValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue (Underlying native function: GetOutputValue 0x76efdcc)
	float GetOutputValue(float& InSliderValue); // (Final | Native | Public | BlueprintCallable)
};

