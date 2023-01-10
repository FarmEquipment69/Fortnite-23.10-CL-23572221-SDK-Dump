// ScriptStruct /Script/FortniteGame.FortEncounterSettings
// Size: 0xc0
struct FFortEncounterSettings
{
	struct TArray<struct TEnumAsByte<EFortEncounterDirection>> ForbiddenSpawnDirections; // 0x0 (0x10)
	bool bDestroyAllBuildings; // 0x10 (0x1)
	bool bDestroyPlayerBuildings; // 0x11 (0x1)
	bool bValidateIfPlayerIsAtSpawnLocation; // 0x12 (0x1)
	bool bMustFindSpawnPoints; // 0x13 (0x1)
	bool bStopIfCantFindSpawnPoint; // 0x14 (0x1)
	bool bIgnoreCollisionWhenSpawningAI; // 0x15 (0x1)
	bool bTrackCombatParticipation; // 0x16 (0x1)
	bool bDisplayThreatVisuals; // 0x17 (0x1)
	bool bCanDespawnExpiredPawns; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float BurstSpawnThreatVisualsEndDelayOverride; // 0x1c (0x4)
	int NumRiftsToUseOverride; // 0x20 (0x4)
	unsigned char bUseEQSQueryToFindAISpawnLocations; // 0x24 (0x1)
	unsigned char bRelevantForTotalAICap; // 0x24 (0x1)
	unsigned char bEnableRecreateRift; // 0x24 (0x1)
	unsigned char bRespawnRiftWhenRiftDead; // 0x24 (0x1)
	unsigned char bRandomiseQueryRiftLocations; // 0x24 (0x1)
	unsigned char bAvoidRepeatingRiftLocations; // 0x24 (0x1)
	unsigned char bOverrideEqsFallback; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	struct FEncounterEnvironmentQueryInfo EqsFallbackOverride; // 0x28 (0x28)
	float PreSpawnRequeryTime; // 0x50 (0x4)
	float SpawnAIIntervalTime; // 0x54 (0x4)
	float SpawnRiftIntervalTime; // 0x58 (0x4)
	bool bSpawnFirstRiftNoDelay; // 0x5c (0x1)
	unsigned char unreflected_5d[0x3]; // 0x5d (0x3) 
	class UEnvQuery* RiftSelectionQuery; // 0x60 (0x8)
	class UEnvQuery* RiftSlotsEQSQueryOverride; // 0x68 (0x8)
	struct TArray<class AActor*> ScriptedSpawnPoints; // 0x70 (0x10)
	class UClass* RiftClassOverride; // 0x80 (0x8)
	struct TArray<class AActor*> WorkingScriptedSpawnPoints; // 0x88 (0x10)
	int EncounterGroupID; // 0x98 (0x4)
	int ZoneIndex; // 0x9c (0x4)
	int DifficultyIndex; // 0xa0 (0x4)
	float AIDespawnDistanceOverride; // 0xa4 (0x4)
	bool bAIDespawnWhenTooFar; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct TArray<class UFortDifficultyOptionCategoryEncounter*> InjectedOverrideCategories; // 0xb0 (0x10)
};
