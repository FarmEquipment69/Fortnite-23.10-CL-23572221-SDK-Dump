// Class /Script/FortniteGame.FortWeap_BuildingTool
// Size: 0x1170
class AFortWeap_BuildingTool : public AFortWeap_BuildingToolBase
{
	class UMaterialInterface* BlueprintPaperMaterial; // 0x1058 (0x8)
	class UTexture2D* BlueprintDiffuseTextures[0x6]; // 0x1060 (0x8) (ARRAY) 
	class UTexture2D* BlueprintEmissiveMaskTextures[0x6]; // 0x1090 (0x8) (ARRAY) 
	class UCurveFloat* BlueprintPaperPulseCurve; // 0x10c0 (0x8)
	class UBuildingEditModeMetadata* DefaultMetadata; // 0x10c8 (0x8)
	class UMaterialInstanceDynamic* BlueprintPaperMID; // 0x10d0 (0x8)
	struct FTimeline BlueprintPaperPulseTimeline; // 0x10d8 (0x90)
	struct TEnumAsByte<EFortResourceType> LastResourceType; // 0x1168 (0x1)
	unsigned char padding_1169[0x7]; // 0x1169 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortWeap_BuildingTool.OnRep_DefaultMetadata (Underlying native function: OnRep_DefaultMetadata 0x8e5bb38)
	void OnRepDefaultMetadata(class UBuildingEditModeMetadata*& OldMetadata); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWeap_BuildingTool.OnBlueprintPaperPulseUpdate (Underlying native function: OnBlueprintPaperPulseUpdate 0x8e5b60c)
	void OnBlueprintPaperPulseUpdate(float& InCurveVal); // (Final | Native | Private)
};

