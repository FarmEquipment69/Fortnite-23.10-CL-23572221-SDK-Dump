// Class /Script/VerseAIBase.VerseAISpawner
// Size: 0xf90
class AVerseAISpawner : public AFortCreativeDeviceProp
{
	struct TArray<class UClass*> VerseScriptComponents; // 0xf08 (0x10)
	class UClass* AISpawnerData; // 0xf18 (0x8)
	struct TArray<class AFortPawn*> SpawnedList; // 0xf20 (0x10)
	class UFortMinigameProgressComponent* MinigameProgress; // 0xf30 (0x8)
	class UFortAISpawnerUtilityComponent* AISpawnerUtilityComponent; // 0xf38 (0x8)
	class UFortActorOptionsComponent* OptionsComponent; // 0xf40 (0x8)
	struct TWeakObjectPtr<class UEnvQuery> SpawnEQSQuery; // 0xf48 (0x28)
	unsigned char padding_f70[0x20]; // 0xf70 (0x20)

	/* Functions */

	// Function /Script/VerseAIBase.VerseAISpawner.RequestSpawn (Underlying native function: RequestSpawn 0x6e68114)
	void RequestSpawn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VerseAIBase.VerseAISpawner.OnSpawned (Underlying native function: OnSpawned 0x6e68090)
	void OnSpawned(class AFortPawn*& Pawn); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/VerseAIBase.VerseAISpawner.OnPropertiesLoaded (Underlying native function: OnPropertiesLoaded 0x6e6807c)
	void OnPropertiesLoaded(); // (Final | Native | Private)

	// Function /Script/VerseAIBase.VerseAISpawner.OnPreSpawn (Underlying native function: OnPreSpawn 0x6e67ff8)
	void OnPreSpawn(class UFortAthenaAISpawnerDataComponentList*& ComponentList); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/VerseAIBase.VerseAISpawner.OnEQSFinished (Underlying native function: OnEQSFinished 0x6e67e88)
	void OnEQSFinished(struct TArray<struct FVector>& QueryResultLocations); // (Final | Native | Public | HasOutParms)

	// Function /Script/VerseAIBase.VerseAISpawner.KillAllBots (Underlying native function: KillAllBots 0x6e67d48)
	void KillAllBots(bool& bForceDoNotDropLoot); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/VerseAIBase.VerseAISpawner.InternalOnSpawned (Underlying native function: InternalOnSpawned 0x6e67c84)
	void InternalOnSpawned(class APawn*& Pawn, int& RequestId); // (Final | Native | Private)

	// Function /Script/VerseAIBase.VerseAISpawner.InternalOnAIDied (Underlying native function: InternalOnAIDied 0x6e67b08)
	void InternalOnAIDied(class AController*& KilledController, bool& bIsABot, class AFortPawn*& KilledAIPawn, class AFortPlayerPawn*& KilledPlayerPawn, class AController*& KillerController); // (Final | Native | Private)
};

