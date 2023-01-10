// Class /Script/FortniteGame.FortMaterialStyleLibrary
// Size: 0x28
class UFortMaterialStyleLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortMaterialStyleLibrary.ResolveStyleFromName (Underlying native function: ResolveStyleFromName 0x88689a4)
	static class UFortMaterialStyle* ResolveStyleFromName(class UFortMaterialStyleSet*& StyleSet, class AActor*& TargetActor, struct FName& DesiredStyleName, struct FName& OptionalFallbackStyleName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMaterialStyleLibrary.ApplyStyleToMaterial (Underlying native function: ApplyStyleToMaterial 0x8867650)
	static bool ApplyStyleToMaterial(class UFortMaterialStyleSet*& StyleSet, class AActor*& TargetActor, class UMaterialInstanceDynamic*& MaterialInstanceDynamic, struct FName& DesiredStyleName, struct FName& OptionalFallbackStyleName); // (Final | Native | Static | Public | BlueprintCallable)
};

