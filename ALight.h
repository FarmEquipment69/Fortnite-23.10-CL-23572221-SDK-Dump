// Class /Script/Engine.Light
// Size: 0x298
class ALight : public AActor
{
	class ULightComponent* LightComponent; // 0x288 (0x8)
	unsigned char bEnabled; // 0x290 (0x1)
	unsigned char padding_291[0x7]; // 0x291 (0x7)

	/* Functions */

	// Function /Script/Engine.Light.ToggleEnabled (Underlying native function: ToggleEnabled 0x9c834b0)
	void ToggleEnabled(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.SetLightFunctionScale (Underlying native function: SetLightFunctionScale 0x9c8331c)
	void SetLightFunctionScale(struct FVector& NewLightFunctionScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Light.SetLightFunctionMaterial (Underlying native function: SetLightFunctionMaterial 0x9c83298)
	void SetLightFunctionMaterial(class UMaterialInterface*& NewLightFunctionMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.SetLightFunctionFadeDistance (Underlying native function: SetLightFunctionFadeDistance 0x9c83210)
	void SetLightFunctionFadeDistance(float& NewLightFunctionFadeDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.SetLightColor (Underlying native function: SetLightColor 0x9c83188)
	void SetLightColor(struct FLinearColor& NewLightColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Light.SetEnabled (Underlying native function: SetEnabled 0x9c83004)
	void SetEnabled(bool& bSetEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.SetCastShadows (Underlying native function: SetCastShadows 0x9c82dd4)
	void SetCastShadows(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.SetBrightness (Underlying native function: SetBrightness 0x9c82d50)
	void SetBrightness(float& NewBrightness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.SetAffectTranslucentLighting (Underlying native function: SetAffectTranslucentLighting 0x9c82ccc)
	void SetAffectTranslucentLighting(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Light.OnRep_bEnabled (Underlying native function: OnRep_bEnabled 0x2466474)
	void OnRepbEnabled(); // (Native | Public)

	// Function /Script/Engine.Light.IsEnabled (Underlying native function: IsEnabled 0x9c82b94)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Light.GetLightColor (Underlying native function: GetLightColor 0x9c82b38)
	struct FLinearColor GetLightColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Light.GetBrightness (Underlying native function: GetBrightness 0x9c82ad0)
	float GetBrightness(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

