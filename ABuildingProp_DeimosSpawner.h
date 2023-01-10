// Class /Script/FortniteGame.BuildingProp_DeimosSpawner
// Size: 0x10a8
class ABuildingProp_DeimosSpawner : public ABuildingProp_AISpawner
{
	struct TArray<class UClass*> DeimosSpawnerOptions; // 0xf40 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> PawnNumberCapOptions; // 0xf50 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> SpawnGroupOptions; // 0xf60 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> SpawnTimingOptions; // 0xf70 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> SpawnLimitOptions; // 0xf80 (0x10)
	struct TArray<struct TWeakObjectPtr<class UEnvQuery>> EQSQueryOptions; // 0xf90 (0x10)
	struct TWeakObjectPtr<class UClass> SelectedPawnNumberCap; // 0xfa0 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnGroup; // 0xfc8 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnTiming; // 0xff0 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnLimit; // 0x1018 (0x28)
	struct TWeakObjectPtr<class UEnvQuery> SelectedEQSQuery; // 0x1040 (0x28)
	bool bNoSpawnLimitEnabled; // 0x1068 (0x1)
	bool bDamageBuildingsOnSpawn; // 0x1069 (0x1)
	bool bInvulnerable; // 0x106a (0x1)
	bool bVisible; // 0x106b (0x1)
	bool bHideVFX; // 0x106c (0x1)
	unsigned char unreflected_106d[0x3]; // 0x106d (0x3) 
	float OverrideQueryRadius; // 0x1070 (0x4)
	bool bSortSlotsByBestScore; // 0x1074 (0x1)
	bool bEnabledOnMinigameStart; // 0x1075 (0x1)
	unsigned char unreflected_1076[0x2]; // 0x1076 (0x2) 
	class UFortGameplayReceiverMessageComponent* TurnOnReceiverComponent; // 0x1078 (0x8)
	class UFortGameplayReceiverMessageComponent* TurnOffReceiverComponent; // 0x1080 (0x8)
	class UFortGameplayReceiverMessageComponent* KillAllAIReceiverComponent; // 0x1088 (0x8)
	class UFortGameplayReceiverMessageComponent* KillSpawnerReceiverComponent; // 0x1090 (0x8)
	class UFortGameplayTriggerMessageComponent* OnKilledMessagerComponent; // 0x1098 (0x8)
	bool bEnableCreativeCreatureSpawners; // 0x10a0 (0x1)
	unsigned char padding_10a1[0x7]; // 0x10a1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnTurnOnReceived (Underlying native function: OnTurnOnReceived 0x8387db0)
	void OnTurnOnReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnTurnOffReceived (Underlying native function: OnTurnOffReceived 0x8387ca4)
	void OnTurnOffReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnKillRiftReceived (Underlying native function: OnKillRiftReceived 0x8387318)
	void OnKillRiftReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnKillAIReceived (Underlying native function: OnKillAIReceived 0x838729c)
	void OnKillAIReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.MinigameStarted (Underlying native function: MinigameStarted 0x8385cf8)
	void MinigameStarted(); // (Native | Event | Public | BlueprintEvent)
};

