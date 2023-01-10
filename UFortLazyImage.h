// Class /Script/FortniteUI.FortLazyImage
// Size: 0x3b0
class UFortLazyImage : public UCommonLazyImage
{
	bool bApplyDropShadow; // 0x380 (0x1)
	unsigned char unreflected_381[0x3]; // 0x381 (0x3) 
	struct FLinearColor ShadowColorAndOpacity; // 0x384 (0x10)
	unsigned char padding_394[0x1c]; // 0x394 (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortLazyImage.SetShadowColorAndOpacity (Underlying native function: SetShadowColorAndOpacity 0xa4b42ac)
	void SetShadowColorAndOpacity(struct FLinearColor& InColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortLazyImage.SetFortBrushSize (Underlying native function: SetFortBrushSize 0xa4b3564)
	void SetFortBrushSize(struct TEnumAsByte<EFortBrushSize>& FortBrushSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLazyImage.SetBrushFromURL (Underlying native function: SetBrushFromURL 0xa4b3094)
	void SetBrushFromURL(struct FString& CMSImageURL, bool& bMatchSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLazyImage.SetBrushFromItemInstance (Underlying native function: SetBrushFromItemInstance 0xa4b3014)
	void SetBrushFromItemInstance(class UFortItem*& ItemInstance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLazyImage.SetBrushFromItemDefinition (Underlying native function: SetBrushFromItemDefinition 0x9a6de1c)
	void SetBrushFromItemDefinition(class UFortItemDefinition*& ItemDefinition); // (Native | Public | BlueprintCallable)
};

