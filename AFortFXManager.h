// Class /Script/FortniteGame.FortFXManager
// Size: 0x440
class AFortFXManager : public AFortClientOnlyActor
{
	struct TArray<struct FFortSplineMeshAnimSet> SplineAnimSets; // 0x290 (0x10)
	struct TArray<struct FFortMIDAnimSet> MIDAnimSets; // 0x2a0 (0x10)
	struct TArray<struct FFortParticleAnimSet> ParticleAnimSets; // 0x2b0 (0x10)
	struct TArray<struct FFortLightAnimSet> LightAnimSets; // 0x2c0 (0x10)
	struct TArray<class AFortWeaponRanged*> PendingWeaponFX; // 0x2d0 (0x10)
	unsigned char padding_2e0[0x160]; // 0x2e0 (0x160)

	/* Functions */

	// Function /Script/FortniteGame.FortFXManager.SpawnPooledFXActor (Underlying native function: SpawnPooledFXActor 0x85ec558)
	static class AActor* SpawnPooledFXActor(class UObject*& WorldContextObject, class UClass*& FXActorClass, struct FTransform& SpawnTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.ReturnPickupStretchMIDToPool (Underlying native function: ReturnPickupStretchMIDToPool 0x85e911c)
	static void ReturnPickupStretchMIDToPool(class AFortPickupEffect*& PickupObject, class UPrimitiveComponent*& Component, int& ElementIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.ReturnFXActorToPool (Underlying native function: ReturnFXActorToPool 0x85e9068)
	static void ReturnFXActorToPool(class UObject*& WorldContextObject, class AActor*& FXActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveSplineMeshAnimations (Underlying native function: RemoveSplineMeshAnimations 0x85e8ea0)
	static void RemoveSplineMeshAnimations(class UObject*& WorldContextObject, class USplineMeshComponent*& SplineMesh); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveParticleAnimations (Underlying native function: RemoveParticleAnimations 0x85e8d9c)
	static void RemoveParticleAnimations(class UObject*& WorldContextObject, class UParticleSystemComponent*& ParticleSystemComp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveMIDAnimations (Underlying native function: RemoveMIDAnimations 0x85e8a80)
	static void RemoveMIDAnimations(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.RemoveLightAnimations (Underlying native function: RemoveLightAnimations 0x85e897c)
	static void RemoveLightAnimations(class UObject*& WorldContextObject, class ULightComponent*& LightComp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.OnPendingWeaponFXEndPlay (Underlying native function: OnPendingWeaponFXEndPlay 0x85e8150)
	void OnPendingWeaponFXEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortFXManager.GetPickupStretchMIDFromPool (Underlying native function: GetPickupStretchMIDFromPool 0x85e6848)
	static class UMaterialInstanceDynamic* GetPickupStretchMIDFromPool(class AFortPickupEffect*& PickupObject, class UMaterialInterface*& SourceMaterial, class UPrimitiveComponent*& Component, int& ElementIndex, bool& bNeedsToBeInitialized); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.GetPickupRarityMID (Underlying native function: GetPickupRarityMID 0x15fcba4)
	static class UMaterialInstanceDynamic* GetPickupRarityMID(class AFortPickupEffect*& PickupObject, class UPrimitiveComponent*& Component, int& ElementIndex, int& Rarity, bool& bNeedsToBeInitialized); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddSplineMeshSnapAnimation (Underlying native function: AddSplineMeshSnapAnimation 0x85e3e1c)
	static void AddSplineMeshSnapAnimation(class UObject*& WorldContextObject, struct TArray<class USplineMeshComponent*>& SplineMeshes, class USplineComponent*& TargetSpline, class UCurveFloat*& GrowthCurve, float& Duration, bool& bPlayGrowthReverse); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddSplineMeshScaleAnimation (Underlying native function: AddSplineMeshScaleAnimation 0x85e37a0)
	static void AddSplineMeshScaleAnimation(class UObject*& WorldContextObject, class USplineMeshComponent*& SplineMesh, float& StartScaleStart, float& StartScaleEnd, float& EndScaleStart, float& EndScaleEnd, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddParticleAnimationFloat (Underlying native function: AddParticleAnimationFloat 0x85e3150)
	static void AddParticleAnimationFloat(class UObject*& WorldContextObject, class UParticleSystemComponent*& ParticleSystemComp, struct FName& ParamName, float& StartValue, float& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddMIDAnimationFloat (Underlying native function: AddMIDAnimationFloat 0x85e2a00)
	static void AddMIDAnimationFloat(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, float& StartValue, float& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddMIDAnimationColorCurve (Underlying native function: AddMIDAnimationColorCurve 0x85e2838)
	static void AddMIDAnimationColorCurve(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, class UCurveLinearColor*& ColorCurve, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddMIDAnimationColor (Underlying native function: AddMIDAnimationColor 0x85e2060)
	static void AddMIDAnimationColor(class UObject*& WorldContextObject, class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, struct FLinearColor& StartValue, struct FLinearColor& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXManager.AddLightAnimationIntensity (Underlying native function: AddLightAnimationIntensity 0x85e1a9c)
	static void AddLightAnimationIntensity(class UObject*& WorldContextObject, class ULightComponent*& LightComp, float& StartValue, float& EndValue, class UCurveFloat*& LerpCurve, bool& bOneMinusLerpValue, float& Duration, bool& bPlayReverse); // (Final | Native | Static | Public | BlueprintCallable)
};

