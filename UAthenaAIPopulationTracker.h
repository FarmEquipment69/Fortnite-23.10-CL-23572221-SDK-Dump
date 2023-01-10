// Class /Script/FortniteAI.AthenaAIPopulationTracker
// Size: 0x160
class UAthenaAIPopulationTracker : public UAISubsystem
{
	struct FMulticastInlineDelegate OnAIPawnDied; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnAIPawnSpawned; // 0x48 (0x10)
	unsigned char unreflected_58[0x60]; // 0x58 (0x60) 
	struct TArray<class AController*> AIList; // 0xb8 (0x10)
	class AFortGameModeAthena* CachedGameMode; // 0xc8 (0x8)
	unsigned char padding_d0[0x90]; // 0xd0 (0x90)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnFortPawnDied (Underlying native function: OnFortPawnDied 0xa2325d0)
	void OnFortPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnAISpawned (Underlying native function: OnAISpawned 0xa23228c)
	void OnAISpawned(class APawn*& Pawn, int& RequestId); // (Final | Native | Private)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnAgentGameOver (Underlying native function: OnAgentGameOver 0xa2323b8)
	void OnAgentGameOver(class AFortAthenaAIBotController*& AIBotController, class AFortPawn*& Pawn, class AController*& Instigator); // (Final | Native | Private)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumTotalBots (Underlying native function: GetNumTotalBots 0xa231664)
	int GetNumTotalBots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumPlayerBots (Underlying native function: GetNumPlayerBots 0x9a9a900)
	int GetNumPlayerBots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumNonAthenaParticipantBots (Underlying native function: GetNumNonAthenaParticipantBots 0xa231650)
	int GetNumNonAthenaParticipantBots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumAIPawn (Underlying native function: GetNumAIPawn 0xa23163c)
	int GetNumAIPawn(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetAIPopulationTrackerCount (Underlying native function: GetAIPopulationTrackerCount 0xa2314f0)
	struct FAIPopulationCountSnapshot GetAIPopulationTrackerCount(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetAIMatchingQuery (Underlying native function: GetAIMatchingQuery 0xa2313ac)
	struct TArray<class AController*> GetAIMatchingQuery(struct FGameplayTagQuery& TagQuery); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

