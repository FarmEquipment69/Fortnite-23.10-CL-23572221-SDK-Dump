// Class /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary
// Size: 0x28
class UFortCosmeticMaterialBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.SetScalarParameterValueOnOverlayMaterial (Underlying native function: SetScalarParameterValueOnOverlayMaterial 0x84fbf18)
	static void SetScalarParameterValueOnOverlayMaterial(class UMeshComponent*& MeshComponent, struct FName& ParameterName, float& ParameterValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.ResetScalarParameterOnOverlayMaterial (Underlying native function: ResetScalarParameterOnOverlayMaterial 0x84fb170)
	static void ResetScalarParameterOnOverlayMaterial(class UMeshComponent*& MeshComponent, struct FName& ParameterName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.ResetScalarParameterOnMaterials (Underlying native function: ResetScalarParameterOnMaterials 0x84fb014)
	static void ResetScalarParameterOnMaterials(class UMeshComponent*& MeshComponent, struct FName& ParameterName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticMaterialBlueprintLibrary.GetOrCreateDynamicOverlayMaterial (Underlying native function: GetOrCreateDynamicOverlayMaterial 0x84f93fc)
	static class UMaterialInstanceDynamic* GetOrCreateDynamicOverlayMaterial(class UMeshComponent*& MeshComponent, struct FName& MaterialName); // (Final | Native | Static | Public | BlueprintCallable)
};

