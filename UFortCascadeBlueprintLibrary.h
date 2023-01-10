// Class /Script/FortniteGame.FortCascadeBlueprintLibrary
// Size: 0x28
class UFortCascadeBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCascadeBlueprintLibrary.SpawnEmitterAttached (Underlying native function: SpawnEmitterAttached 0x85ebe70)
	static class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem*& EmitterTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate, bool& bDebounce, float& DebounceTime); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCascadeBlueprintLibrary.SpawnEmitterAtLocation (Underlying native function: SpawnEmitterAtLocation 0x85eb998)
	static class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject*& WorldContextObject, class UParticleSystem*& EmitterTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivateSystem, bool& bDebounce, float& DebounceTime); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCascadeBlueprintLibrary.IsCascadeSystemBlockedBySoftPtr (Underlying native function: IsCascadeSystemBlockedBySoftPtr 0x85e79c4)
	static bool IsCascadeSystemBlockedBySoftPtr(struct TWeakObjectPtr<class UParticleSystem>& EmitterTemplate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCascadeBlueprintLibrary.IsCascadeSystemBlockedByPath (Underlying native function: IsCascadeSystemBlockedByPath 0x85e7870)
	static bool IsCascadeSystemBlockedByPath(struct FString& AssetPath); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCascadeBlueprintLibrary.IsCascadeSystemBlocked (Underlying native function: IsCascadeSystemBlocked 0x85e76e0)
	static bool IsCascadeSystemBlocked(class UParticleSystem*& EmitterTemplate); // (Final | Native | Static | Public | BlueprintCallable)
};

