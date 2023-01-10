// Class /Script/FortniteGame.BuildingProp_AISpawner
// Size: 0xf40
class ABuildingProp_AISpawner : public ABuildingProp
{
	class UClass* CreativeRiftClass; // 0xef8 (0x8)
	class UFortCreativeCreatureManagerComponent* CreatureManagerComponent; // 0xf00 (0x8)
	class UFortMinigameProgressComponent* MinigameProgress; // 0xf08 (0x8)
	class AAthenaCreativeRift* CreativeRift; // 0xf10 (0x8)
	class USceneComponent* SpawnLocation; // 0xf18 (0x8)
	float ActivationRangeLevel; // 0xf20 (0x4)
	bool bCanAIDespawnWhenTooFar; // 0xf24 (0x1)
	bool bUseDistanceToAI; // 0xf25 (0x1)
	unsigned char unreflected_f26[0x2]; // 0xf26 (0x2) 
	float DespawnRangeOverride; // 0xf28 (0x4)
	unsigned char padding_f2c[0x14]; // 0xf2c (0x14)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_AISpawner.SpawnRift (Underlying native function: SpawnRift 0x273fd14)
	void SpawnRift(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.SetSpawnLocation (Underlying native function: SetSpawnLocation 0x8389130)
	void SetSpawnLocation(class USceneComponent*& SpawnLocation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.OnSpawnedRift (Has no native function)
	void OnSpawnedRift(class ABuildingRift*& SpawnedRift); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.MinigameEnded (Underlying native function: MinigameEnded 0x261306c)
	void MinigameEnded(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.DestroyRift (Underlying native function: DestroyRift 0x8333bb8)
	void DestroyRift(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.BP_NotifyAIPawnSpawned (Has no native function)
	void BPNotifyAIPawnSpawned(class AFortAIPawn*& SpawnedAI, struct FVector& SpawnSlotLocation); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.BP_NotifyAIPawnKilled (Has no native function)
	void BPNotifyAIPawnKilled(class AFortAIPawn*& KilledAI, class AController*& KillingInstigator); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.AdjustCollision (Underlying native function: AdjustCollision 0x83821d8)
	void AdjustCollision(bool& bIgnore, class UPrimitiveComponent*& Collision); // (Final | Native | Public | BlueprintCallable)
};

