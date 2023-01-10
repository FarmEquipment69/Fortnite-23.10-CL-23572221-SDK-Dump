// Class /Script/FortniteGame.FortAthenaMutatorUtilities
// Size: 0x28
class UFortAthenaMutatorUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.SphereTraceForParachuteLandingGeometry (Underlying native function: SphereTraceForParachuteLandingGeometry 0x81ac870)
	static bool SphereTraceForParachuteLandingGeometry(struct FHitResult& OutHit, class UObject*& WorldContextObject, struct FVector& InLocation, float& TraceStartZ, float& TraceEndZ, float& TraceSphereRadius); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.SetPlayerPortraitInMaterial (Underlying native function: SetPlayerPortraitInMaterial 0x81ac4f8)
	static void SetPlayerPortraitInMaterial(class AFortPlayerStateAthena*& Player, class UMaterialInstanceDynamic*& Material, struct FName& MaterialParam); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.RemoveDataRegistryOptionsForContextObject (Underlying native function: RemoveDataRegistryOptionsForContextObject 0x81abcd0)
	static void RemoveDataRegistryOptionsForContextObject(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.ApplyActorOptionsComponentToDataRegistry (Underlying native function: ApplyActorOptionsComponentToDataRegistry 0x81a8314)
	static void ApplyActorOptionsComponentToDataRegistry(class UObject*& WorldContextObject, class UFortActorOptionsComponent*& FortActorOptionsComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.AdjustRespawnLocationForGroundHeight (Underlying native function: AdjustRespawnLocationForGroundHeight 0x81a8204)
	static void AdjustRespawnLocationForGroundHeight(struct FVector& InOutRespawnLocation, float& MinRespawnHeightAboveGround, class AActor*& WorldContextActor); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

