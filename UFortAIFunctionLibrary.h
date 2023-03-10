// Class /Script/FortniteAI.FortAIFunctionLibrary
// Size: 0x28
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteAI.FortAIFunctionLibrary.TeleportAIPawn (Underlying native function: TeleportAIPawn 0xa0dd610)
	static bool TeleportAIPawn(class AFortAIPawn*& AIPawn, struct FVector& DestLocation, struct FRotator& DestRotation, bool& bIgnoreCollision); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.SetHearingRange (Underlying native function: SetHearingRange 0x8895524)
	static void SetHearingRange(class AActor*& AIAgent, float& Range); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.RequestNavUpdateForBuilding (Underlying native function: RequestNavUpdateForBuilding 0xa0dc604)
	static void RequestNavUpdateForBuilding(class ABuildingActor*& BuildingActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.MakeNoiseEventAtLocation (Underlying native function: MakeNoiseEventAtLocation 0xa0d9fdc)
	static void MakeNoiseEventAtLocation(class AActor*& NoiseMaker, float& MaxRange, struct FVector& NoiseLocation, struct FName& NoiseTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.MakeNoiseEvent (Underlying native function: MakeNoiseEvent 0xa0d9cdc)
	static void MakeNoiseEvent(class AActor*& NoiseMaker, float& MaxRange, struct FName& NoiseTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.IsConcealedByPerceptionModifiers (Underlying native function: IsConcealedByPerceptionModifiers 0xa0d8f20)
	static bool IsConcealedByPerceptionModifiers(class UObject*& WorldContextObject, struct FVector& ObserverLocation, struct FVector& TargetLocation, float& OutConcealment); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.GetOrCreateAIRuntimeParameters (Underlying native function: GetOrCreateAIRuntimeParameters 0xa0d8d9c)
	static class UFortAthenaAIRuntimeParameters* GetOrCreateAIRuntimeParameters(class AAIController*& AIController, class UClass*& ParametersClass); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.GetAISpawner (Underlying native function: GetAISpawner 0xa0d8bb0)
	static class UAthenaAISpawner* GetAISpawner(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

