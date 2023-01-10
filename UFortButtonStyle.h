// Class /Script/FortniteUI.FortButtonStyle
// Size: 0x2390
class UFortButtonStyle : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FFortStateStyle NormalBase; // 0x30 (0x4a0)
	struct FFortStateStyle NormalHovered; // 0x4d0 (0x4a0)
	struct FFortStateStyle NormalPressed; // 0x970 (0x4a0)
	struct FFortStateStyle SelectedBase; // 0xe10 (0x4a0)
	struct FFortStateStyle SelectedHovered; // 0x12b0 (0x4a0)
	struct FFortStateStyle SelectedPressed; // 0x1750 (0x4a0)
	struct FFortStateStyle Disabled; // 0x1bf0 (0x4a0)
	struct FFortMultiSizeMargin ButtonPadding; // 0x2090 (0x60)
	struct FFortMultiSizeFont Font; // 0x20f0 (0x210)
	struct FFortMultiSizeMargin CustomPadding; // 0x2300 (0x60)
	struct FSlateSound PressedSlateSound; // 0x2360 (0x18)
	struct FSlateSound HoveredSlateSound; // 0x2378 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortButtonStyle.GetMarginBySizeFromMultiSizeMargin (Underlying native function: GetMarginBySizeFromMultiSizeMargin 0xa55aa3c)
	static struct Fmargin GetMarginBySizeFromMultiSizeMargin(struct FFortMultiSizeMargin& MultiSizeMargin, struct TEnumAsByte<EFortBrushSize>& Size); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortButtonStyle.GetFontBySizeFromMultiSizeFont (Underlying native function: GetFontBySizeFromMultiSizeFont 0xa55a738)
	static struct FSlateFontInfo GetFontBySizeFromMultiSizeFont(struct FFortMultiSizeFont& MultiSizeFont, struct TEnumAsByte<EFortBrushSize>& Size); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortButtonStyle.GetFontBySize (Underlying native function: GetFontBySize 0xa55a660)
	struct FSlateFontInfo GetFontBySize(struct TEnumAsByte<EFortBrushSize>& Size); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortButtonStyle.GetCustomPaddingBySize (Underlying native function: GetCustomPaddingBySize 0xa55a4b4)
	struct Fmargin GetCustomPaddingBySize(struct TEnumAsByte<EFortBrushSize>& Size); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortButtonStyle.GetButtonPaddingBySize (Underlying native function: GetButtonPaddingBySize 0xa55a004)
	struct Fmargin GetButtonPaddingBySize(struct TEnumAsByte<EFortBrushSize>& Size); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortButtonStyle.GetBrushBySizeFromMultiSizeBrush (Underlying native function: GetBrushBySizeFromMultiSizeBrush 0xa559ea0)
	static struct FSlateBrush GetBrushBySizeFromMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush, struct TEnumAsByte<EFortBrushSize>& Size); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

