// Class /Script/FortniteGame.BuildingTimeOfDayLights
// Size: 0xe10
class ABuildingTimeOfDayLights : public ABuildingAutoNav
{
	struct TArray<struct FTimeOfDayControlledLightData> TimeOfDayControlledLightDataArray; // 0xde8 (0x10)
	class UMaterial* FourLayerMaterial; // 0xdf8 (0x8)
	struct TArray<struct FNativeBuildingPropFourLayerMaterial> FourLayerColorInfo; // 0xe00 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.UseNativeLightAnimation (Underlying native function: UseNativeLightAnimation 0x83adfe8)
	bool UseNativeLightAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.SetMidValuesForLights (Underlying native function: SetMidValuesForLights 0x83ad940)
	void SetMidValuesForLights(struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay, struct TArray<float>& LightConeOpacities, float& DayPhaseTransitionLength, struct TArray<struct FLinearColor>& EmissiveMultipliers); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.SetLightIntensityByDayPhase (Underlying native function: SetLightIntensityByDayPhase 0x83ad7e4)
	void SetLightIntensityByDayPhase(class ULightComponent*& LightComponent, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.InitializeLightValuesAndStoreMaterials (Underlying native function: InitializeLightValuesAndStoreMaterials 0x83ab6ac)
	void InitializeLightValuesAndStoreMaterials(struct TArray<struct FLinearColor>& EmissiveMultipliers, struct TArray<float>& LightConeOpacities, struct TArray<struct FTimeOfDayControlledLightData>& LightData, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay, float& DayPhaseTransitionLength, struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.HandleBaseSimpleFourLayerMaterials (Underlying native function: HandleBaseSimpleFourLayerMaterials 0x83ab44c)
	void HandleBaseSimpleFourLayerMaterials(float& Duration, float& Start, float& End); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.GetTimeOfDayBlueprintDefaultVariables (Underlying native function: GetTimeOfDayBlueprintDefaultVariables 0x2608b14)
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.FindScalarValueAcrossTimeOfDayPhaseFloats (Underlying native function: FindScalarValueAcrossTimeOfDayPhaseFloats 0x83aacd4)
	float FindScalarValueAcrossTimeOfDayPhaseFloats(struct FNativeDayPhaseFloats& DayPhaseFloats, float& Alpha); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.DoDayPhaseChangedLightAnimation (Underlying native function: DoDayPhaseChangedLightAnimation 0x83aaa1c)
	void DoDayPhaseChangedLightAnimation(bool& bIsAtCreation, struct TArray<struct FLinearColor>& EmissiveMultipliers, struct TArray<float>& LightConeOpacities, struct TArray<struct FTimeOfDayControlledLightData>& LightData, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay, float& DayPhaseTransitionLength, struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.AnimateMidValuesForLightsFourLayer (Underlying native function: AnimateMidValuesForLightsFourLayer 0x83aa3f8)
	void AnimateMidValuesForLightsFourLayer(struct FNativeDayPhaseFloats& EmissiveIntensityByTimeOfDay, float& DayPhaseTransitionLength); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTimeOfDayLights.AnimateLightParameters (Underlying native function: AnimateLightParameters 0x83aa2ac)
	void AnimateLightParameters(struct TArray<struct FTimeOfDayControlledLightData>& LightData, struct FNativeDayPhaseFloats& LightIntensityByTimeOfDay, float& DayPhaseTransitionLength); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

