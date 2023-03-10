// Class /Script/UMG.Border
// Size: 0x2d0
class UBorder : public UContentWidget
{
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x160 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x161 (0x1)
	unsigned char bShowEffectWhenDisabled; // 0x162 (0x1)
	unsigned char unreflected_163[0x1]; // 0x163 (0x1) 
	struct FLinearColor ContentColorAndOpacity; // 0x164 (0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x174 (0xc)
	struct Fmargin Padding; // 0x180 (0x10)
	struct FSlateBrush Background; // 0x190 (0xc0)
	struct FDelegate BackgroundDelegate; // 0x250 (0xc)
	struct FLinearColor BrushColor; // 0x25c (0x10)
	struct FDelegate BrushColorDelegate; // 0x26c (0xc)
	struct FVector2D DesiredSizeScale; // 0x278 (0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	struct FDelegate OnMouseButtonDownEvent; // 0x28c (0xc)
	struct FDelegate OnMouseButtonUpEvent; // 0x298 (0xc)
	struct FDelegate OnMouseMoveEvent; // 0x2a4 (0xc)
	struct FDelegate OnMouseDoubleClickEvent; // 0x2b0 (0xc)
	unsigned char padding_2bc[0x14]; // 0x2bc (0x14)

	/* Functions */

	// Function /Script/UMG.Border.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x293484c)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetShowEffectWhenDisabled (Underlying native function: SetShowEffectWhenDisabled 0x9920868)
	void SetShowEffectWhenDisabled(bool& bInShowEffectWhenDisabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetPadding (Underlying native function: SetPadding 0x15a6964)
	void SetPadding(struct Fmargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x991f908)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetDesiredSizeScale (Underlying native function: SetDesiredSizeScale 0x991f3b0)
	void SetDesiredSizeScale(struct FVector2D& InScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Border.SetContentColorAndOpacity (Underlying native function: SetContentColorAndOpacity 0x2792e14)
	void SetContentColorAndOpacity(struct FLinearColor& InContentColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Border.SetBrushFromTexture (Underlying native function: SetBrushFromTexture 0x991efc8)
	void SetBrushFromTexture(class UTexture2D*& Texture); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetBrushFromMaterial (Underlying native function: SetBrushFromMaterial 0x22b6d04)
	void SetBrushFromMaterial(class UMaterialInterface*& Material); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetBrushFromAsset (Underlying native function: SetBrushFromAsset 0x991ef48)
	void SetBrushFromAsset(class USlateBrushAsset*& Asset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Border.SetBrushColor (Underlying native function: SetBrushColor 0x1217e74)
	void SetBrushColor(struct FLinearColor& InBrushColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Border.SetBrush (Underlying native function: SetBrush 0x21bfb10)
	void SetBrush(struct FSlateBrush& InBrush); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.Border.GetDynamicMaterial (Underlying native function: GetDynamicMaterial 0x1ed7994)
	class UMaterialInstanceDynamic* GetDynamicMaterial(); // (Final | Native | Public | BlueprintCallable)
};

