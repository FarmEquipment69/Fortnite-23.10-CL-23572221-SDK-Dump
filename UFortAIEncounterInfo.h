// Class /Script/FortniteAI.FortAIEncounterInfo
// Size: 0xd98
class UFortAIEncounterInfo : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class UFortAISpawnGroupProgressionInfo* SpawnGroupProgressionInfo; // 0x38 (0x8)
	struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence; // 0x40 (0x10)
	struct FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence; // 0x50 (0x10)
	float BurstSpawnPointsPercentage; // 0x60 (0x4)
	float SpawnPointsMultiplier; // 0x64 (0x4)
	bool bUseBreathers; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FCurveTableRowHandle LowPlayerPerformanceBreatherTimeSecondsCurve; // 0x70 (0x10)
	struct FCurveTableRowHandle NormalPlayerPerformanceBreatherTimeSecondsCurve; // 0x80 (0x10)
	struct FCurveTableRowHandle HighPlayerPerformanceBreatherTimeSecondsCurve; // 0x90 (0x10)
	float EncounterTimeSeconds; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct TArray<struct FUtilityTypeFloatPair*> LockedUtilityValues; // 0xa8 (0x10)
	int NumFreeUtilities; // 0xb8 (0x4)
	float UtilityAdjustmentPeriodSeconds; // 0xbc (0x4)
	float MinSpawnDistance; // 0xc0 (0x4)
	float MaxSpawnDistance; // 0xc4 (0x4)
	int NumDirections; // 0xc8 (0x4)
	bool bChangeDirectionsOnRest; // 0xcc (0x1)
	unsigned char unreflected_cd[0x3]; // 0xcd (0x3) 
	float SpawnPointsPercentageLimit; // 0xd0 (0x4)
	int PawnNumberLimit; // 0xd4 (0x4)
	struct FFortEncounterPawnNumberCaps PawnNumberCaps; // 0xd8 (0x18)
	float SpawningIntervalSeconds; // 0xf0 (0x4)
	float PreSpawnRequeryTime; // 0xf4 (0x4)
	struct FFortEncounterSettingsFixedPace EncounterSettingsFixed; // 0xf8 (0x14)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FMulticastInlineDelegate OnEncounterSpawnDirectionsChosen; // 0x110 (0x10)
	float NextRiftReplacementTime; // 0x120 (0x4)
	float NextSpawningTime; // 0x124 (0x4)
	struct FFortAIEncounterSpawnGroupCapsProfile EncounterSpawnGroupCapsProfile; // 0x128 (0x30)
	struct TArray<struct FFortAIEncounterSpawnGroupCapsCategory> AdditionalSpawnGroupCapsCategories; // 0x158 (0x10)
	struct FFortAIEncounterSpawnPointsProfile EncounterSpawnPointsProfile; // 0x168 (0x40)
	struct TArray<struct FFortAISpawnGroupUpgradeData> AvailableUpgrades; // 0x1a8 (0x10)
	struct TArray<struct FCurveTableRowHandle> PawnDifficultyLevelModifiers; // 0x1b8 (0x10)
	struct TArray<struct FFortAIBaseLootDropRow> BaseLootDropRows; // 0x1c8 (0x10)
	struct TArray<struct FFortAILootDropModifierRow> LootDropModifierRows; // 0x1d8 (0x10)
	bool bRequiresReinitializationFromProfile; // 0x1e8 (0x1)
	unsigned char unreflected_1e9[0x7]; // 0x1e9 (0x7) 
	struct FCurveTableRowHandle DesiredHostilityCurve; // 0x1f0 (0x10)
	class UFortIntensityCurveSequenceProgression* IntensitySequenceProgression; // 0x200 (0x8)
	unsigned char unreflected_208[0x70]; // 0x208 (0x70) 
	float AliveMultiplier; // 0x278 (0x4)
	struct TEnumAsByte<EFortEncounterSpawnLimitType> SpawnLimitType; // 0x27c (0x1)
	unsigned char unreflected_27d[0x3]; // 0x27d (0x3) 
	int SpawnLimit; // 0x280 (0x4)
	int PawnNumberLimitProgress; // 0x284 (0x4)
	int SpawnPointsLimitProgress; // 0x288 (0x4)
	bool bSpawnLimitReached; // 0x28c (0x1)
	bool bHasSpawnedAllBurstSpawnAI; // 0x28d (0x1)
	bool bOverrideAliveCounts; // 0x28e (0x1)
	unsigned char unreflected_28f[0x1]; // 0x28f (0x1) 
	int MinAliveOverride; // 0x290 (0x4)
	int MaxAliveOverride; // 0x294 (0x4)
	float HostilityThreshold; // 0x298 (0x4)
	float PeakTimeSeconds; // 0x29c (0x4)
	float BreatherTimeSeconds; // 0x2a0 (0x4)
	float MaxRampTimeSeconds; // 0x2a4 (0x4)
	float MinTimeBetweenBreathesSeconds; // 0x2a8 (0x4)
	float MaxFadeTimeSeconds; // 0x2ac (0x4)
	float FadeEndIntensity; // 0x2b0 (0x4)
	float FadeEndRemainingSpawnPointsPercentage; // 0x2b4 (0x4)
	float CompletionPercentageToDisableBreathers; // 0x2b8 (0x4)
	unsigned char unreflected_2bc[0x4]; // 0x2bc (0x4) 
	struct FMulticastInlineDelegate OnEncounterAllEnemiesKilled; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnEncounterEnemySpawned; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnEncounterEnemySpawnFailed; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnEncounterAllBurstEnemiesSpawned; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate OnEncounterCompleted; // 0x300 (0x10)
	struct FMulticastInlineDelegate OnEncounterPawnDied; // 0x310 (0x10)
	struct FMulticastInlineDelegate OnEncounterSpawnedFinalEnemy; // 0x320 (0x10)
	struct FMulticastInlineDelegate OnEncounterRiftSpawned; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnBuildingRiftBlockedShouldDie; // 0x340 (0x10)
	unsigned char unreflected_350[0x3]; // 0x350 (0x3) 
	bool bDisplayThreatVisuals; // 0x353 (0x1)
	float BaseDesiredUtilities[0x10]; // 0x354 (0x4) (ARRAY) 
	unsigned char unreflected_394[0x4]; // 0x394 (0x4) 
	struct FGameplayTagContainer UtilitiesRequiredTags[0x10]; // 0x398 (0x20) (ARRAY) 
	struct FGameplayTagContainer InjectedTagForUtilityCheck; // 0x598 (0x20)
	unsigned char unreflected_5b8[0x4]; // 0x5b8 (0x4) 
	float MaxLargeSpawnGroupDiscountInterval; // 0x5bc (0x4)
	float MaxSelectionToSpawningDelay; // 0x5c0 (0x4)
	unsigned char unreflected_5c4[0x54]; // 0x5c4 (0x54) 
	struct TArray<struct FUtilityTypeFloatPair*> CurrentDesiredUtilities; // 0x618 (0x10)
	float UtilityRecentSelectionPenalties[0x10]; // 0x628 (0x4) (ARRAY) 
	float UtilityEffectivenessMeasurements[0x10]; // 0x668 (0x4) (ARRAY) 
	struct FCurveTableRowHandle UtilityEffectivenessMultiplierCurve; // 0x6a8 (0x10)
	float UtilityEffectivenessInfluenceCap; // 0x6b8 (0x4)
	unsigned char unreflected_6bc[0x4]; // 0x6bc (0x4) 
	struct TArray<struct FUtilityTypeFloatPair*> CurrentTopUtilityPercentages; // 0x6c0 (0x10)
	struct TArray<struct TEnumAsByte<EFortAIUtility>> UsedTopUtilities; // 0x6d0 (0x10)
	struct TArray<struct TEnumAsByte<EFortAIUtility>> CurrentlySelectedFreeUtilities; // 0x6e0 (0x10)
	int NumUtilitiesConsidered; // 0x6f0 (0x4)
	float ReactivityPercentage; // 0x6f4 (0x4)
	bool bAdjustUtilitiesDuringRest; // 0x6f8 (0x1)
	bool bDespawnAIsDuringRest; // 0x6f9 (0x1)
	unsigned char unreflected_6fa[0x2]; // 0x6fa (0x2) 
	float LastPlayerCombatFactorUpdateTime; // 0x6fc (0x4)
	float LastUtilityAdjustTime; // 0x700 (0x4)
	float LastSpawnPointAdjustmentTime; // 0x704 (0x4)
	float LastLargeGroupSpawnTime; // 0x708 (0x4)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct TArray<struct FAIEncounterSpawnGroupWeights> EnemySpawnData; // 0x710 (0x10)
	struct FFortAIEncounterPIDController EncounterPIDController; // 0x720 (0x68)
	int CurrentSpawnPointsCap; // 0x788 (0x4)
	int CurrentSpawnPointsUsed; // 0x78c (0x4)
	unsigned char unreflected_790[0x8]; // 0x790 (0x8) 
	int FailSafeMinSpawnPoints; // 0x798 (0x4)
	unsigned char unreflected_79c[0x4]; // 0x79c (0x4) 
	struct TArray<struct FSpawnGroupInstanceInfo> ActiveSpawnGroups; // 0x7a0 (0x10)
	float EncounterEngagementDistance; // 0x7b0 (0x4)
	float MinRelevantBuildingDamagedDistance; // 0x7b4 (0x4)
	float MaxRelevantBuildingDamagedDistance; // 0x7b8 (0x4)
	unsigned char unreflected_7bc[0x14]; // 0x7bc (0x14) 
	class AActor* CurrentGroupSpawnPoint; // 0x7d0 (0x8)
	struct TEnumAsByte<EFortEncounterState> EncounterState; // 0x7d8 (0x1)
	struct TEnumAsByte<EFortEncounterPacingState> PacingState; // 0x7d9 (0x1)
	unsigned char unreflected_7da[0x2]; // 0x7da (0x2) 
	float LastPacingStateTransitionTime; // 0x7dc (0x4)
	struct FFortAIEncounterWaveProgressEstimation WaveProgressEstimate; // 0x7e0 (0x1c)
	float DesiredDifficultyLevel; // 0x7fc (0x4)
	float DifficultyLevelOverride; // 0x800 (0x4)
	unsigned char unreflected_804[0x4]; // 0x804 (0x4) 
	class AFortAIDirector* MyAIDirector; // 0x808 (0x8)
	struct TArray<struct FFortGoalActorEncounterDataManagerPair> DataManagers; // 0x810 (0x10)
	class AActor* TargetObjective; // 0x820 (0x8)
	bool bOnlyActiveAtNight; // 0x828 (0x1)
	unsigned char unreflected_829[0x3]; // 0x829 (0x3) 
	int NumRiftsToUse; // 0x82c (0x4)
	int MinRiftsToUse; // 0x830 (0x4)
	int NumRiftsUsed; // 0x834 (0x4)
	struct FFortEncounterSettings EncounterSettings; // 0x838 (0xc0)
	float EncounterStartTime; // 0x8f8 (0x4)
	float HostilityCurveStartTime; // 0x8fc (0x4)
	struct FEncounterEnvironmentQueryInfo DefaultEnvironmentQueryInfo; // 0x900 (0x28)
	struct FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x928 (0x28)
	struct FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x950 (0x28)
	struct FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x978 (0x28)
	bool bNukeWavesAtDaybreak; // 0x9a0 (0x1)
	bool bNukeWavesAtEncounterEnd; // 0x9a1 (0x1)
	bool bNukeWavesAtEncounterDeactivation; // 0x9a2 (0x1)
	unsigned char unreflected_9a3[0x1]; // 0x9a3 (0x1) 
	int ActiveEnemyCap; // 0x9a4 (0x4)
	unsigned char unreflected_9a8[0x8]; // 0x9a8 (0x8) 
	float CurrentHostilityLevel; // 0x9b0 (0x4)
	unsigned char unreflected_9b4[0x4]; // 0x9b4 (0x4) 
	struct FMulticastInlineDelegate OnEncounterRampStarted; // 0x9b8 (0x10)
	struct FMulticastInlineDelegate OnEncounterPeakStarted; // 0x9c8 (0x10)
	struct FMulticastInlineDelegate OnEncounterFadeStarted; // 0x9d8 (0x10)
	struct FMulticastInlineDelegate OnEncounterRestStarted; // 0x9e8 (0x10)
	struct FMulticastInlineDelegate OnEncounterCombatParticipation; // 0x9f8 (0x10)
	struct FMulticastInlineDelegate OnEncounterOptionsChanged; // 0xa08 (0x10)
	class UClass* RiftClassTemplate; // 0xa18 (0x8)
	unsigned char unreflected_a20[0x20]; // 0xa20 (0x20) 
	struct TMap<struct TWeakObjectPtr<class AActor>, struct FFortAISpawnerData> ExternalAISpawners; // 0xa40 (0x50)
	struct FFortAIEncounterQueryData EncounterQueryData; // 0xa90 (0x20)
	class UFortAIEncounterRiftManager* RiftManager; // 0xab0 (0x8)
	struct FString AssociatedMissionName; // 0xab8 (0x10)
	struct TEnumAsByte<EFortMissionType> AssociatedMissionType; // 0xac8 (0x1)
	unsigned char unreflected_ac9[0x3]; // 0xac9 (0x3) 
	unsigned char bCanBeActive; // 0xacc (0x1)
	unsigned char unreflected_acd[0x3]; // 0xacd (0x3) 
	struct TArray<class UFortAIAssignment*> EncounterAssignments; // 0xad0 (0x10)
	class UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings; // 0xae0 (0x8)
	unsigned char unreflected_ae8[0x30]; // 0xae8 (0x30) 
	int MaxActiveAlive; // 0xb18 (0x4)
	int MaxSpawnPointsUsed; // 0xb1c (0x4)
	class UCurveFloat* OverrideSpawnPointsCurve; // 0xb20 (0x8)
	unsigned char unreflected_b28[0x1f8]; // 0xb28 (0x1f8) 
	bool bSendFullAnalyticsReport; // 0xd20 (0x1)
	bool bUseAILifespans; // 0xd21 (0x1)
	bool bTrackCombatParticipation; // 0xd22 (0x1)
	unsigned char unreflected_d23[0x5]; // 0xd23 (0x5) 
	struct FGameplayTagContainer ModifierTags; // 0xd28 (0x20)
	struct TArray<struct FFortAIEncounterTimedModifierTags> TimedModifierTags; // 0xd48 (0x10)
	struct FGameplayTagContainer GameContextTags; // 0xd58 (0x20)
	class AFortGameplayMutator_AILevelVariance* AILevelMutator; // 0xd78 (0x8)
	struct TArray<class AFortGameplayMutator_AIEncounterModifierTags*> EncounterModifierTagsMutators; // 0xd80 (0x10)
	unsigned char padding_d90[0x8]; // 0xd90 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAIEncounterInfo.UnRegisterAISpawner (Underlying native function: UnRegisterAISpawner 0xa09fff0)
	void UnRegisterAISpawner(class AActor*& InAISpawner); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.SpawnTestAIGroup (Underlying native function: SpawnTestAIGroup 0xa09fa34)
	void SpawnTestAIGroup(class UFortAISpawnGroup*& SpawnGroupToSpawn, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, class AActor*& SpawnSource, struct TArray<class UFortAbilitySet*>& AbilitySetsToGrantOnSpawn, struct FFortAISpawnGroupUpgradeData& UpgradeData, bool& bAllowAssigningToExternalSpawners, float& SecondsBetweenSpawns); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.SpawnAIPawnReservedForEnemySpawner (Underlying native function: SpawnAIPawnReservedForEnemySpawner 0xa09f904)
	class AFortAIPawn* SpawnAIPawnReservedForEnemySpawner(class AActor*& EnemySpawner, struct FVector& SpawnLocation, struct FRotator& SpawnRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.SetPawnNumberLimit (Underlying native function: SetPawnNumberLimit 0xa09f648)
	void SetPawnNumberLimit(int& InPawnNumberLimit); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.SetNukeWavesAtEncounterEnd (Underlying native function: SetNukeWavesAtEncounterEnd 0xa09f4e4)
	void SetNukeWavesAtEncounterEnd(bool& bNuke); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.SetEncounterActivationState (Underlying native function: SetEncounterActivationState 0xa09f200)
	void SetEncounterActivationState(bool& bEncounterActivityState); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.RequestActivation (Underlying native function: RequestActivation 0xa09eea4)
	void RequestActivation(int& ActivationDelay); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.RegisterAISpawner (Underlying native function: RegisterAISpawner 0xa09ed94)
	void RegisterAISpawner(class AActor*& InAISpawner); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnRestStarted (Has no native function)
	void OnRestStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnRampStarted (Has no native function)
	void OnRampStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnPeakStarted (Has no native function)
	void OnPeakStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnGoalTakeDamage (Underlying native function: OnGoalTakeDamage 0xa09e490)
	void OnGoalTakeDamage(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnGameDifficultyChanged (Underlying native function: OnGameDifficultyChanged 0xa09e47c)
	void OnGameDifficultyChanged(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnFadeStarted (Has no native function)
	void OnFadeStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAIEncounterInfo.OnEncounterPawnDamaged (Underlying native function: OnEncounterPawnDamaged 0xa09e200)
	void OnEncounterPawnDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteAI.FortAIEncounterInfo.NotifyRiftDied (Underlying native function: NotifyRiftDied 0xa09ddec)
	void NotifyRiftDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GroupHasAIRemainingToSpawn (Underlying native function: GroupHasAIRemainingToSpawn 0xa09cf24)
	bool GroupHasAIRemainingToSpawn(struct FFortAISpawnerData& FortAISpawnerData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetPawnNumberLimit (Underlying native function: GetPawnNumberLimit 0xa09cc78)
	int GetPawnNumberLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetEncounterTimeSeconds (Underlying native function: GetEncounterTimeSeconds 0x2e42d74)
	float GetEncounterTimeSeconds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetEncounterRifts (Underlying native function: GetEncounterRifts 0xa09cb04)
	void GetEncounterRifts(struct TArray<class ABuildingRift*>& OutRifts); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetEncounterQueryActor (Underlying native function: GetEncounterQueryActor 0xa09ca80)
	class AActor* GetEncounterQueryActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetEncounterGameplayTags (Underlying native function: GetEncounterGameplayTags 0xa09c99c)
	void GetEncounterGameplayTags(struct FGameplayTagContainer& OutEncounterTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetEncounterDataManager (Underlying native function: GetEncounterDataManager 0xa09c8e0)
	class AFortAIDirectorDataManager* GetEncounterDataManager(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetEncounterAssignmentGoalActors (Underlying native function: GetEncounterAssignmentGoalActors 0xa09c844)
	void GetEncounterAssignmentGoalActors(struct TArray<class AActor*>& OutGoalActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.GetCurrentSpawnAreaDirections (Underlying native function: GetCurrentSpawnAreaDirections 0xa09c798)
	bool GetCurrentSpawnAreaDirections(struct TArray<struct TEnumAsByte<EFortEncounterDirection>>& OutDirections); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.EncounterHasReservedSpawnRequestForEnemySpawner (Underlying native function: EncounterHasReservedSpawnRequestForEnemySpawner 0xa09c50c)
	bool EncounterHasReservedSpawnRequestForEnemySpawner(class AActor*& EnemySpawner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterInfo.DespawnPendingAndCurrentAI (Underlying native function: DespawnPendingAndCurrentAI 0xa09c4d4)
	void DespawnPendingAndCurrentAI(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterInfo.CreateEncounterAssignment (Underlying native function: CreateEncounterAssignment 0xa09c410)
	class UFortAIAssignment* CreateEncounterAssignment(class UFortAIAssignmentSettings*& AssignmentSettings, class AActor*& GoalActor); // (Final | Native | Public | BlueprintCallable)
};

