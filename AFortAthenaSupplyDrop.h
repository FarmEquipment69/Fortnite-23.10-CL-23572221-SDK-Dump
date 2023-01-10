// Class /Script/FortniteGame.FortAthenaSupplyDrop
// Size: 0xb48
class AFortAthenaSupplyDrop : public ABuildingGameplayActor
{
	struct FCollisionProfileName GroundCollsionProfile; // 0x9d8 (0x4)
	unsigned char unreflected_9dc[0x4]; // 0x9dc (0x4) 
	class USoundCue* WaveSpawnSoundCue; // 0x9e0 (0x8)
	struct FName LootTableNameOverride; // 0x9e8 (0x4)
	unsigned char unreflected_9ec[0x4]; // 0x9ec (0x4) 
	struct FHitResult LastGroundLocationHitResult; // 0x9f0 (0xe0)
	float SpawnOffsetZ; // 0xad0 (0x4)
	unsigned char unreflected_ad4[0x4]; // 0xad4 (0x4) 
	class USoundCue* SearchingSoundCueLoop; // 0xad8 (0x8)
	bool bReplicateLongUseNotifies; // 0xae0 (0x1)
	bool bDisableAbilitySystemReplication; // 0xae1 (0x1)
	unsigned char unreflected_ae2[0x2]; // 0xae2 (0x2) 
	int CachedSpecialActorIdx; // 0xae4 (0x4)
	struct FName SpecialActorID; // 0xae8 (0x4)
	unsigned char unreflected_aec[0x4]; // 0xaec (0x4) 
	struct FScalableFloat InStormDespawnTimeInSeconds; // 0xaf0 (0x28)
	float CachedInStormDespawnTimeInSeconds; // 0xb18 (0x4)
	unsigned char unreflected_b1c[0x4]; // 0xb1c (0x4) 
	class UAudioComponent* LongInteractAudioComponent; // 0xb20 (0x8)
	unsigned char unreflected_b28[0x10]; // 0xb28 (0x10) 
	class UFortSpectateClickableMapIcon* SpectatorMapIcon; // 0xb38 (0x8)
	int NumPlayersInteracting; // 0xb40 (0x4)
	bool bVisualizePlayerInteractionChanges; // 0xb44 (0x1)
	unsigned char padding_b45[0x3]; // 0xb45 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.SpawnPickupFromItemEntry (Underlying native function: SpawnPickupFromItemEntry 0x80415d8)
	class AFortPickup* SpawnPickupFromItemEntry(class UFortWorldItemDefinition*& ItemDefinition, struct FFortItemEntry& InItemEntry, int& NumberToSpawn, class AFortPawn*& TriggeringPawn, struct FVector& Position, struct FVector& Direction); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.SpawnPickup (Underlying native function: SpawnPickup 0x804147c)
	class AFortPickup* SpawnPickup(class UFortWorldItemDefinition*& ItemDefinition, int& NumberToSpawn, class AFortPawn*& TriggeringPawn, struct FVector& Position, struct FVector& Direction); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.SpawningLootOnDestruction (Underlying native function: SpawningLootOnDestruction 0x80417bc)
	void SpawningLootOnDestruction(class AController*& EventInstigator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.SpawnGameModePickup (Underlying native function: SpawnGameModePickup 0x80412b8)
	class AFortGameModePickup* SpawnGameModePickup(class UFortWorldItemDefinition*& ItemDefinition, class UClass*& PickupClass, int& NumberToSpawn, class AFortPawn*& TriggeringPawn, struct FVector& Position, struct FVector& Direction); // (Final | BlueprintAuthorityOnly | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.SetLootTableNameOverride (Underlying native function: SetLootTableNameOverride 0x8040a78)
	void SetLootTableNameOverride(struct FName& TableNameToUse); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.SendSpawnLootAnalytics (Underlying native function: SendSpawnLootAnalytics 0x803fe48)
	void SendSpawnLootAnalytics(class AFortPlayerController*& FortPC, struct TArray<struct FFortItemEntry>& ItemsToSpawn); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.OnTouchedFillFloor (Has no native function)
	void OnTouchedFillFloor(class AAthenaFillFloor*& FillFloorActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.OnRep_NumPlayersInteracting (Underlying native function: OnRep_NumPlayersInteracting 0x803f69c)
	void OnRepNumPlayersInteracting(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.OnLootSpawned (Underlying native function: OnLootSpawned 0x803f36c)
	void OnLootSpawned(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.OnDespawnDueToStorm (Underlying native function: OnDespawnDueToStorm 0x803efbc)
	void OnDespawnDueToStorm(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.OnCheckForBeingInStorm (Underlying native function: OnCheckForBeingInStorm 0x803efa8)
	void OnCheckForBeingInStorm(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.IsPlayingAReplay (Underlying native function: IsPlayingAReplay 0x803ebec)
	bool IsPlayingAReplay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.GroundTrace (Underlying native function: GroundTrace 0x27bb424)
	bool GroundTrace(struct FVector& TraceStart, struct FVector& TraceEnd, struct FHitResult& OutHit); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.GetSupplyDropSpeedData (Underlying native function: GetSupplyDropSpeedData 0x2913c38)
	void GetSupplyDropSpeedData(float& MinSpeed, float& MaxSpeed); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.GetSupplyDropSpawnData (Underlying native function: GetSupplyDropSpawnData 0x2860614)
	void GetSupplyDropSpawnData(float& MinSpawnHeight, float& MaxSpawnHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSupplyDrop.FindGroundLocationAt (Underlying native function: FindGroundLocationAt 0x803d8c4)
	struct FVector FindGroundLocationAt(struct FVector& InLocation); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

