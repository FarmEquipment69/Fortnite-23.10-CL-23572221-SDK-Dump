// BlueprintGeneratedClass /Game/Athena/AI/Phoebe/BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C
// Size: 0x5ed4
class ABP_PlayerPawn_Athena_Phoebe_C : public APlayerPawn_Athena_C
{
	unsigned char unreflected_5ec1[0x7]; // 0x5ec1 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5ec8 (0x8)
	struct FName AIEvaluatorCharacterLaunchedKeyName; // 0x5ed0 (0x4)

	/* Functions */

	// Function /Game/Athena/AI/Phoebe/BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched (Has no native function)
	void OnLaunched(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Phoebe/BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe (Has no native function)
	void ExecuteUbergraphBPPlayerPawnAthenaPhoebe(int& EntryPoint, class AController*& CallFuncGetControllerReturnValue, struct FVector& K2NodeEventLaunchVelocity, bool& K2NodeEventbXYOverride, bool& K2NodeEventbZOverride, class AFortAthenaAIBotController*& K2NodeDynamicCastAsFortAthenaAIBotController, bool& K2NodeDynamicCastbSuccess, class UBlackboardComponent*& CallFuncGetBlackboardReturnValue); // (Final | 0x00008000)
};

