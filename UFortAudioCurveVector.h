// Class /Script/FortniteGame.FortAudioCurveVector
// Size: 0x200
class UFortAudioCurveVector : public UCurveVector
{
	class UCurveFloat* ExternalCurves[0x3]; // 0x1b0 (0x8) (ARRAY) 
	struct TArray<struct FAudioCurveInfo> AudioCurves; // 0x1c8 (0x10)
	struct TArray<struct FAudioCurveInfo> OriginalAudioCurves; // 0x1d8 (0x10)
	struct TArray<struct FAudioCurveInfo> ModifiedAudioCurves; // 0x1e8 (0x10)
	unsigned char padding_1f8[0x8]; // 0x1f8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAudioCurveVector.SetActiveCurves (Underlying native function: SetActiveCurves 0x8c427e8)
	void SetActiveCurves(enum EVectorCurveType& CurveType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioCurveVector.InitializeAudioCurveVector (Underlying native function: InitializeAudioCurveVector 0x8c41d78)
	void InitializeAudioCurveVector(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioCurveVector.ImportFloatCurve (Underlying native function: ImportFloatCurve 0x8c41bdc)
	void ImportFloatCurve(enum EVectorCurveFloat& Element, class UCurveFloat*& Curve); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioCurveVector.ImportAttenuationCurve (Underlying native function: ImportAttenuationCurve 0x8c41a08)
	void ImportAttenuationCurve(enum EVectorCurveFloat& Element, struct FRuntimeFloatCurve& Curve, float& MaxDistance); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioCurveVector.GetLargestMaxDistance (Underlying native function: GetLargestMaxDistance 0x8c40d40)
	float GetLargestMaxDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAudioCurveVector.GetAudioCurveVectorValue (Underlying native function: GetAudioCurveVectorValue 0x8c406b8)
	struct FVector GetAudioCurveVectorValue(float& InTime); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAudioCurveVector.ExportCurves (Underlying native function: ExportCurves 0x8c4024c)
	void ExportCurves(enum EVectorCurveType& CurveType); // (Final | Native | Public | BlueprintCallable)
};

