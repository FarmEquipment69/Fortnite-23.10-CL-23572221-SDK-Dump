// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
// Size: 0x30
class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetLoadout (Underlying native function: GetLoadout 0xa1f68a8)
	void GetLoadout(struct FFortAthenaLoadout& OutLoadout); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetDances (Underlying native function: GetDances 0xa1f62c4)
	void GetDances(struct TArray<class UAthenaDanceItemDefinition*>& Dances, class AFortAthenaAIBotController*& BotController); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetCustomCharacterParts (Underlying native function: GetCustomCharacterParts 0xa1f6224)
	void GetCustomCharacterParts(struct TArray<class UCustomCharacterPart*>& OutCustomCharacterParts); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAnimBPOverride (Underlying native function: GetAnimBPOverride 0xa1f5ea0)
	void GetAnimBPOverride(class UClass*& OutAnimBPOverride, int& OutPriority); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAllLoadouts (Underlying native function: GetAllLoadouts 0xa1f5e04)
	void GetAllLoadouts(struct TArray<struct FFortAthenaLoadout>& OutLoadouts); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

