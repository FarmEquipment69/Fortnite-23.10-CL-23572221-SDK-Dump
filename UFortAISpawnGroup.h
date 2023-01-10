// Class /Script/FortniteAI.FortAISpawnGroup
// Size: 0x190
class UFortAISpawnGroup : public UPrimaryDataAsset
{
	float EnemyUtilities[0x10]; // 0x30 (0x4) (ARRAY) 
	struct TArray<struct FSpawnGroupEnemy> EnemiesToSpawn; // 0x70 (0x10)
	bool bIsPrototype; // 0x80 (0x1)
	bool bIsValidForEnemySpawners; // 0x81 (0x1)
	bool bIsLargeSpawnGroup; // 0x82 (0x1)
	unsigned char unreflected_83[0x1]; // 0x83 (0x1) 
	float MaxDiscountRatio; // 0x84 (0x4)
	bool bUseWeightSystem; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	struct FScalableFloat Weight; // 0x90 (0x28)
	struct FScalableFloat MinNumber; // 0xb8 (0x28)
	struct FScalableFloat MaxNumber; // 0xe0 (0x28)
	struct FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve; // 0x108 (0x10)
	struct TArray<struct FFortSpawnGroupEncounterTypeData> EncounterTypeData; // 0x118 (0x10)
	struct FGameplayTagContainer SpawnGroupGameplayTags; // 0x128 (0x20)
	struct FGameplayTagQuery RequiredTagQuery; // 0x148 (0x48)

	/* Functions */

	// Function /Script/FortniteAI.FortAISpawnGroup.IsValidForEnemySpawners (Underlying native function: IsValidForEnemySpawners 0x2492068)
	bool IsValidForEnemySpawners(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAISpawnGroup.IsPrototype (Underlying native function: IsPrototype 0xa0d9244)
	bool IsPrototype(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAISpawnGroup.IsLargeSpawnGroup (Underlying native function: IsLargeSpawnGroup 0xa0d9210)
	bool IsLargeSpawnGroup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAISpawnGroup.GetNumberOfEnemies (Underlying native function: GetNumberOfEnemies 0x99e7b58)
	int GetNumberOfEnemies(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAISpawnGroup.GetEnemy (Underlying native function: GetEnemy 0xa0d8cfc)
	class UClass* GetEnemy(int& EnemyIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

