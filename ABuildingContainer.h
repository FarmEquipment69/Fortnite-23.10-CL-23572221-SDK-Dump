// Class /Script/FortniteGame.BuildingContainer
// Size: 0x10e0
class ABuildingContainer : public ABuildingTimeOfDayLights
{
	unsigned char unreflected_e10[0x10]; // 0xe10 (0x10) 
	struct FMulticastInlineDelegate OnContainerSearchedStateChangedClient; // 0xe20 (0x10)
	struct FMulticastInlineDelegate OnContainerRandomUpgradeApplied; // 0xe30 (0x10)
	class USoundCue* SearchingSoundCueLoop; // 0xe40 (0x8)
	class USoundCue* LootRepeatSoundCue; // 0xe48 (0x8)
	class USoundCue* OnDamageSoundCue; // 0xe50 (0x8)
	class USoundCue* OnDeathSoundCue; // 0xe58 (0x8)
	class UStaticMesh* SearchedMesh; // 0xe60 (0x8)
	struct FGameplayTagContainer AdditionalPickupTags; // 0xe68 (0x20)
	enum EFortPickupSpawnSource SpawnSourceOverride; // 0xe88 (0x1)
	unsigned char unreflected_e89[0x7]; // 0xe89 (0x7) 
	struct TArray<class UMaterialInterface*> SearchedMaterialOverrides; // 0xe90 (0x10)
	struct TArray<struct FLootTierGroupTagOverride> LootTierGroupTagOverrideData; // 0xea0 (0x10)
	struct FName SearchLootTierGroup; // 0xeb0 (0x4)
	struct FName ContainerLootTierKey; // 0xeb4 (0x4)
	struct TArray<struct FRandomUpgradeData> PotentialRandomUpgrades; // 0xeb8 (0x10)
	struct FChosenQuotaInfo* SearchLootTierChosenQuotaInfo; // 0xec8 (0x8)
	int ReplicatedLootTier; // 0xed0 (0x4)
	int ChosenRandomUpgrade; // 0xed4 (0x4)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xed8 (0x98)
	struct FVector MarkerPositionOffset; // 0xf70 (0x18)
	struct FVector2D NumItemsToDropRange; // 0xf88 (0x10)
	float SearchBounceRadiusOverride; // 0xf98 (0x4)
	float LootNoiseRange; // 0xf9c (0x4)
	class UFortWorldItemDefinition* LootTestingData; // 0xfa0 (0x8)
	struct FVector LootSpawnLocation; // 0xfa8 (0x18)
	struct FVector LootFinalLocation; // 0xfc0 (0x18)
	struct FVector InstancedLootTossDirection; // 0xfd8 (0x18)
	float InstancedLootTossSpeed; // 0xff0 (0x4)
	float InstancedLootTossConeHalfAngle; // 0xff4 (0x4)
	struct FVector LootSpawnLocationAthena; // 0xff8 (0x18)
	struct FRotator LootTossDirectionAthena; // 0x1010 (0x18)
	float LootTossSpeedAthena; // 0x1028 (0x4)
	float LootTossConeHalfAngleAthena; // 0x102c (0x4)
	enum EFortRarity HighestRarity; // 0x1030 (0x1)
	unsigned char bSpawnedActor; // 0x1031 (0x1)
	unsigned char bCanBeMarked; // 0x1031 (0x1)
	unsigned char bBlockMarking; // 0x1031 (0x1)
	unsigned char bUseLootPropertiesAthena; // 0x1031 (0x1)
	unsigned char bAlwaysShowContainer; // 0x1031 (0x1)
	unsigned char bAlwaysMaintainLoot; // 0x1031 (0x1)
	unsigned char bDestroyContainerOnSearch; // 0x1031 (0x1)
	unsigned char bForceHidePickupMinimapIndicator; // 0x1031 (0x1)
	unsigned char bForceSpawnLootOnDestruction; // 0x1032 (0x1)
	unsigned char bForceTossLootOnSpawn; // 0x1032 (0x1)
	unsigned char bAlreadySearched; // 0x1032 (0x1)
	unsigned char bGivePickupsDirectlyToPlayer; // 0x1032 (0x1)
	unsigned char bDoNotDropLootOnDestruction; // 0x1032 (0x1)
	unsigned char bSkipRollForDestruction; // 0x1032 (0x1)
	unsigned char bBuriedTreasure; // 0x1033 (0x1)
	unsigned char bHasRaisedTreasure; // 0x1033 (0x1)
	unsigned char bStartAlreadySearchedAthena; // 0x1033 (0x1)
	unsigned char bRegenerateLoot; // 0x1033 (0x1)
	unsigned char bUseLocationForDrop; // 0x1033 (0x1)
	float LootedWeaponsDurabilityModifier; // 0x1034 (0x4)
	struct FFortSearchBounceData SearchBounceData; // 0x1038 (0x28)
	struct FCurveTableRowHandle SearchSpeed; // 0x1060 (0x10)
	struct FText SearchText; // 0x1070 (0x18)
	unsigned char unreflected_1088[0x20]; // 0x1088 (0x20) 
	class UCurveFloat* CurrentInteractBounceCurve; // 0x10a8 (0x8)
	class UCurveFloat* CurrentInteractBounceNormalCurve; // 0x10b0 (0x8)
	float SavedReservedRandomValueResult; // 0x10b8 (0x4)
	float TimeUntilLootRegenerates; // 0x10bc (0x4)
	unsigned char unreflected_10c0[0x18]; // 0x10c0 (0x18) 
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x10d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingContainer.StopAudiovisualIndicator (Underlying native function: StopAudiovisualIndicator 0x2805a14)
	void StopAudiovisualIndicator(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.StartAudiovisualIndicator (Underlying native function: StartAudiovisualIndicator 0x2770ba4)
	void StartAudiovisualIndicator(class UAudioComponent*& ForComponent, enum EFortSoundIndicatorTypes& Type, float& Interval); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.SetSearchLootTierGroup (Underlying native function: SetSearchLootTierGroup 0x833474c)
	void SetSearchLootTierGroup(struct FName& InSearchLootTierGroup, bool& bReRollForLootExistence, bool& bIgnorePotentialRandomUpgrades); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.RaiseTreasure (Underlying native function: RaiseTreasure 0x8333be8)
	void RaiseTreasure(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.OnSetSearched (Has no native function)
	void OnSetSearched(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnSearchInterrupted (Has no native function)
	void OnSearchInterrupted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnRep_LootTier (Underlying native function: OnRep_LootTier 0x261306c)
	void OnRepLootTier(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingContainer.OnRep_ChosenRandomUpgrade (Underlying native function: OnRep_ChosenRandomUpgrade 0x8333bb8)
	void OnRepChosenRandomUpgrade(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingContainer.OnRep_bAlreadySearched (Underlying native function: OnRep_bAlreadySearched 0x1a4687c)
	void OnRepbAlreadySearched(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingContainer.OnRaiseTreasure (Has no native function)
	void OnRaiseTreasure(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnLootReset (Has no native function)
	void OnLootReset(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnLootRepeat (Has no native function)
	void OnLootRepeat(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnLoot (Has no native function)
	void OnLoot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnBeginSearch (Has no native function)
	void OnBeginSearch(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnAuthorityRandomUpgradeApplied (Has no native function)
	void OnAuthorityRandomUpgradeApplied(struct FName& UpgradeTierGroup); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.GetSearchingPawn (Underlying native function: GetSearchingPawn 0x8333368)
	class AFortPlayerPawn* GetSearchingPawn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.GetOwningControllerForAnalytics (Has no native function)
	class AFortPlayerControllerAthena* GetOwningControllerForAnalytics(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingContainer.GetLootTier (Underlying native function: GetLootTier 0x8333288)
	int GetLootTier(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.GetChosenRandomUpgrade (Underlying native function: GetChosenRandomUpgrade 0x8332df8)
	int GetChosenRandomUpgrade(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingContainer.EnableBacchusHighlight (Has no native function)
	void EnableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.DisableBacchusHighlight (Has no native function)
	void DisableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.BP_SpawnLoot (Underlying native function: BP_SpawnLoot 0x833256c)
	bool BPSpawnLoot(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.BP_SetAlreadySearched (Underlying native function: BP_SetAlreadySearched 0x83324e8)
	void BPSetAlreadySearched(bool& bInAlreadySearched); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.BP_IsAlreadySearched (Underlying native function: BP_IsAlreadySearched 0x83324c0)
	bool BPIsAlreadySearched(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingContainer.BP_FinishSpawning (Underlying native function: BP_FinishSpawning 0x833230c)
	void BPFinishSpawning(struct FName& InSearchLootTierGroup, struct FGameplayTagContainer& InGameplayTagContainer, struct FTransform& InTransform); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.BounceContainer (Underlying native function: BounceContainer 0x1a4539c)
	void BounceContainer(); // (0x00000002 | Native | Public)
};

