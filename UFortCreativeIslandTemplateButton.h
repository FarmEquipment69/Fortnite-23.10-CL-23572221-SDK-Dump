// Class /Script/FortniteUI.FortCreativeIslandTemplateButton
// Size: 0x16c0
class UFortCreativeIslandTemplateButton : public UAthenaCreativeItemTileButton
{
	struct FVector2D FeaturedIslandTemplateImageSize; // 0x15e8 (0x10)
	class UFortLazyImage* TemplateImage; // 0x15f8 (0x8)
	struct FSlateBrush DefaultFeaturedTemplateImage; // 0x1600 (0xc0)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandTemplateButton.GetPlotTemplateDefinition (Underlying native function: GetPlotTemplateDefinition 0xa584d64)
	class UFortCreativeRealEstatePlotItemDefinition* GetPlotTemplateDefinition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandTemplateButton.GetIslandLink (Underlying native function: GetIslandLink 0xa584acc)
	class UFortCreativeIslandLink* GetIslandLink(); // (Final | Native | Public | BlueprintCallable)
};

