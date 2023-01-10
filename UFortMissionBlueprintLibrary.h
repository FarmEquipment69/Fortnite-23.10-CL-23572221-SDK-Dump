// Class /Script/FortniteGame.FortMissionBlueprintLibrary
// Size: 0x28
class UFortMissionBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortMissionBlueprintLibrary.SkydiveFromLocation (Underlying native function: SkydiveFromLocation 0x88ca594)
	static void SkydiveFromLocation(bool& bFromBus, class AFortPlayerPawn*& InPawn, struct FVector& FallLocation, class UAthenaGliderItemDefinition*& GliderOverride); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionBlueprintLibrary.Skydive (Underlying native function: Skydive 0x88ca434)
	static bool Skydive(bool& bFromBus, class AFortPlayerPawn*& InPawn, class UAthenaGliderItemDefinition*& GliderOverride); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionBlueprintLibrary.BindPlayerToObjective (Underlying native function: BindPlayerToObjective 0x88c2148)
	static void BindPlayerToObjective(class AFortPlayerController*& PlayerController, class UFortQuestItemDefinition*& QuestItemDefinition, struct FName& QuestObjectiveBackendName, struct FDelegate& OnObjectiveUpdatedDelegate); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

