// Class /Script/Engine.DecalComponent
// Size: 0x2f0
class UDecalComponent : public USceneComponent
{
	class UMaterialInterface* DecalMaterial; // 0x2a0 (0x8)
	int SortOrder; // 0x2a8 (0x4)
	float FadeScreenSize; // 0x2ac (0x4)
	float FadeStartDelay; // 0x2b0 (0x4)
	float FadeDuration; // 0x2b4 (0x4)
	float FadeInDuration; // 0x2b8 (0x4)
	float FadeInStartDelay; // 0x2bc (0x4)
	unsigned char bDestroyOwnerAfterFade; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x7]; // 0x2c1 (0x7) 
	struct FVector DecalSize; // 0x2c8 (0x18)
	unsigned char padding_2e0[0x10]; // 0x2e0 (0x10)

	/* Functions */

	// Function /Script/Engine.DecalComponent.SetSortOrder (Underlying native function: SetSortOrder 0x9b3c4c0)
	void SetSortOrder(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DecalComponent.SetFadeScreenSize (Underlying native function: SetFadeScreenSize 0x9b3b218)
	void SetFadeScreenSize(float& NewFadeScreenSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DecalComponent.SetFadeOut (Underlying native function: SetFadeOut 0x1a3187c)
	void SetFadeOut(float& StartDelay, float& Duration, bool& DestroyOwnerAfterFade); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DecalComponent.SetFadeIn (Underlying native function: SetFadeIn 0x9b3b154)
	void SetFadeIn(float& StartDelay, float& Duaration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DecalComponent.SetDecalMaterial (Underlying native function: SetDecalMaterial 0x2d77d10)
	void SetDecalMaterial(class UMaterialInterface*& NewDecalMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DecalComponent.GetFadeStartDelay (Underlying native function: GetFadeStartDelay 0x2d7ae04)
	float GetFadeStartDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DecalComponent.GetFadeInStartDelay (Underlying native function: GetFadeInStartDelay 0x9b39674)
	float GetFadeInStartDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DecalComponent.GetFadeInDuration (Underlying native function: GetFadeInDuration 0x8c63c8c)
	float GetFadeInDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DecalComponent.GetFadeDuration (Underlying native function: GetFadeDuration 0x97961a8)
	float GetFadeDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DecalComponent.GetDecalMaterial (Underlying native function: GetDecalMaterial 0x284f760)
	class UMaterialInterface* GetDecalMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DecalComponent.CreateDynamicMaterialInstance (Underlying native function: CreateDynamicMaterialInstance 0x25f6ebc)
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // (Native | Public | BlueprintCallable)
};

