// Class /Script/FortniteGame.FortAIPawn
// Size: 0x32e0
class AFortAIPawn : public AFortPawn
{
	unsigned char unreflected_1ad0[0x38]; // 0x1ad0 (0x38) 
	struct FGameplayCueParameters DeimosBatchedGameplayCueParameters; // 0x1b08 (0xd0)
	struct FFortAIAttributeReplicationProxy* AttributeReplicationProxy; // 0x1bd8 (0x8)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x1be0 (0x38)
	struct FGameplayAbilityRepSharedAnim RepSharedAnimInfo; // 0x1c18 (0x10)
	unsigned char unreflected_1c28[0x8]; // 0x1c28 (0x8) 
	struct FMinimalGameplayCueReplicationProxy SimulatedProxyGameplayCues; // 0x1c30 (0x2d0)
	unsigned char bAttacking; // 0x1f00 (0x1)
	unsigned char bDied; // 0x1f00 (0x1)
	unsigned char bHitReact; // 0x1f00 (0x1)
	unsigned char bFullBodyHitReact; // 0x1f00 (0x1)
	unsigned char bDancing; // 0x1f00 (0x1)
	unsigned char bRangedAttacking; // 0x1f00 (0x1)
	unsigned char bHasGoalActor; // 0x1f00 (0x1)
	unsigned char bFrozen; // 0x1f00 (0x1)
	unsigned char unreflected_1f01[0x3]; // 0x1f01 (0x3) 
	unsigned char bUseSharedAnimation; // 0x1f04 (0x1)
	unsigned char bAnimateOnServer; // 0x1f04 (0x1)
	unsigned char bShouldUseRootComponentForTargetSelectionOverlap; // 0x1f04 (0x1)
	unsigned char bNeedsDeathNotification; // 0x1f04 (0x1)
	unsigned char bKilledOrDowned; // 0x1f04 (0x1)
	unsigned char bDespawnedDueToInactivity; // 0x1f04 (0x1)
	unsigned char bNotifySpawnRift; // 0x1f04 (0x1)
	unsigned char bUsesDBNO; // 0x1f04 (0x1)
	unsigned char bHasInventory; // 0x1f05 (0x1)
	unsigned char bShouldTossInventoryOnDeath; // 0x1f05 (0x1)
	unsigned char bUseDefenderInventoryManagement; // 0x1f05 (0x1)
	unsigned char bHasInstantReload; // 0x1f05 (0x1)
	unsigned char bHasInfiniteAmmo; // 0x1f05 (0x1)
	unsigned char bAttemptLootDropOnDeath; // 0x1f05 (0x1)
	unsigned char bIgnoreDefender; // 0x1f05 (0x1)
	unsigned char bCanUseWeapon; // 0x1f05 (0x1)
	unsigned char bTrackNearbyPickups; // 0x1f06 (0x1)
	unsigned char bIsCharging; // 0x1f06 (0x1)
	unsigned char bIsCowering; // 0x1f06 (0x1)
	unsigned char bCanShowMinimapIndicator; // 0x1f06 (0x1)
	unsigned char bShowMinimapFarOffDirectionArrow; // 0x1f06 (0x1)
	unsigned char bHasEngaged; // 0x1f06 (0x1)
	unsigned char bIsAlwaysGameplayRelevant; // 0x1f06 (0x1)
	unsigned char bShowCustomCSVRelevantKey; // 0x1f06 (0x1)
	unsigned char bIsDebugSpawnedAI; // 0x1f07 (0x1)
	unsigned char bEncounterExpectedLifespanExpired; // 0x1f07 (0x1)
	unsigned char bEnableBlockingCollisionWithOtherAI; // 0x1f07 (0x1)
	unsigned char bSetMiniMapIconRotation; // 0x1f07 (0x1)
	unsigned char bHasDroppedLoot; // 0x1f07 (0x1)
	unsigned char bUseFastAbilityReplication; // 0x1f07 (0x1)
	unsigned char bUseFastPreReplicationStep; // 0x1f07 (0x1)
	unsigned char bUseAIGoalComponent; // 0x1f08 (0x1)
	unsigned char unreflected_1f09[0x7]; // 0x1f09 (0x7) 
	struct FMinimalReplicationTagCountMap FastReplicationMinimalReplicationTags; // 0x1f10 (0x60)
	struct FMinimalGameplayCueReplicationProxy FastReplicationMinimalGameplayCueProxy; // 0x1f70 (0x2d0)
	struct FMulticastInlineDelegate OnInventoryInitialized; // 0x2240 (0x10)
	struct FMulticastInlineDelegate OnInventoryUpdated; // 0x2250 (0x10)
	unsigned char unreflected_2260[0x30]; // 0x2260 (0x30) 
	float AIDifficultyLevel; // 0x2290 (0x4)
	enum EFortAILevelRatingDisplayType LevelRatingDisplayType; // 0x2294 (0x1)
	unsigned char unreflected_2295[0x3]; // 0x2295 (0x3) 
	class UFortAIEncounterInfo* EncounterInfo; // 0x2298 (0x8)
	int SpawnSetIndex; // 0x22a0 (0x4)
	struct FGuid SpawnGroupGuid; // 0x22a4 (0x10)
	int EnemyIndexInSpawnGroup; // 0x22b4 (0x4)
	float FinishEncounterSpawnFallbackTime; // 0x22b8 (0x4)
	float EncounterSpawnDisableRangedAttackingTime; // 0x22bc (0x4)
	float EncounterSpawnDisableMeleeAttackingTime; // 0x22c0 (0x4)
	unsigned char unreflected_22c4[0x4]; // 0x22c4 (0x4) 
	struct FTimerHandle* EncounterExpectedLifespanTimerHandle; // 0x22c8 (0x8)
	class AActor* SpawnRift; // 0x22d0 (0x8)
	struct FVector SpawnRiftLocation; // 0x22d8 (0x18)
	class AActor* SpawnSourceActor; // 0x22f0 (0x8)
	class UClass* AIGoalComponentClass; // 0x22f8 (0x8)
	float MaxTimeAllowedOutsideTether; // 0x2300 (0x4)
	unsigned char unreflected_2304[0x4]; // 0x2304 (0x4) 
	class UBehaviorTree* BehaviorTree; // 0x2308 (0x8)
	class UClass* DefaultNavFilter; // 0x2310 (0x8)
	class UClass* HuntingNavFilter; // 0x2318 (0x8)
	unsigned char unreflected_2320[0x8]; // 0x2320 (0x8) 
	float DBNOInteractionDuration; // 0x2328 (0x4)
	unsigned char unreflected_232c[0x4]; // 0x232c (0x4) 
	struct FMulticastInlineDelegate OnDowned; // 0x2330 (0x10)
	struct TEnumAsByte<TInteractionType> DBNOInteractionType; // 0x2340 (0x1)
	struct TEnumAsByte<EFortMovementStyle> MovementStyles[0x4]; // 0x2341 (0x1) (ARRAY) 
	unsigned char unreflected_2345[0x3]; // 0x2345 (0x3) 
	float UpdateNearbyPickupFrequency; // 0x2348 (0x4)
	struct FGameplayTag RequiredWeaponPickupTag; // 0x234c (0x4)
	struct FGameplayTagQuery RequiredWeaponPickupTagQuery; // 0x2350 (0x48)
	bool bUsePickupDirectionOverride; // 0x2398 (0x1)
	unsigned char unreflected_2399[0x7]; // 0x2399 (0x7) 
	struct FVector PickupDirectionOverride; // 0x23a0 (0x18)
	struct FName NoWeaponInCombatEventName; // 0x23b8 (0x4)
	struct FName NoWeaponOutOfCombatEventName; // 0x23bc (0x4)
	struct FVector CachedHitLocation; // 0x23c0 (0x18)
	struct FGameplayTagContainer TurnTransitionGameplayAbilityTag; // 0x23d8 (0x20)
	struct TWeakObjectPtr<class UParticleSystem> DeathParticles; // 0x23f8 (0x28)
	int NumRunVariations; // 0x2420 (0x4)
	int CurrentRunVariationIndex; // 0x2424 (0x4)
	float RunVariationRadius; // 0x2428 (0x4)
	float LocomotionPlayRateScale; // 0x242c (0x4)
	int EyeIndex; // 0x2430 (0x4)
	int SkinIndex; // 0x2434 (0x4)
	struct FLinearColor DefaultEyeColor; // 0x2438 (0x10)
	float DefaultEyeBrightness; // 0x2448 (0x4)
	struct FLinearColor DefaultSkinColor; // 0x244c (0x10)
	float DefaultSkinGlow; // 0x245c (0x4)
	struct FLinearColor MinimapDefaultIconColor; // 0x2460 (0x10)
	struct FLinearColor PlayerManagerMinimapColor; // 0x2470 (0x10)
	unsigned char unreflected_2480[0x10]; // 0x2480 (0x10) 
	struct FSlateBrush MiniMapIconBrush; // 0x2490 (0xc0)
	struct FSlateBrush MiniMapAboveBelowIconBrush; // 0x2550 (0xc0)
	struct TArray<struct FMinimapGoalByTagColorsData> MinimapGoalByTagColors; // 0x2610 (0x10)
	int8_t MinimapGoalByTagColorIndex; // 0x2620 (0x1)
	unsigned char unreflected_2621[0x3]; // 0x2621 (0x3) 
	struct FName AppearanceOverrideName; // 0x2624 (0x4)
	enum EFortAIPawnGender AppearanceOverrideGender; // 0x2628 (0x1)
	struct TEnumAsByte<EFortCombatEvents> FollowPlayerEvent; // 0x2629 (0x1)
	struct TEnumAsByte<EFortCombatEvents> InCombatNearPlayerEvent; // 0x262a (0x1)
	struct TEnumAsByte<TInteractionType> InteractionType; // 0x262b (0x1)
	float FollowPlayerRange; // 0x262c (0x4)
	float InteractionDuration; // 0x2630 (0x4)
	unsigned char unreflected_2634[0x4]; // 0x2634 (0x4) 
	struct FText InteractionText; // 0x2638 (0x18)
	unsigned char unreflected_2650[0x19]; // 0x2650 (0x19) 
	struct TEnumAsByte<TInteractionType> SecondInteractionType; // 0x2669 (0x1)
	unsigned char unreflected_266a[0x2]; // 0x266a (0x2) 
	float SecondInteractionDuration; // 0x266c (0x4)
	struct FText SecondInteractionText; // 0x2670 (0x18)
	struct FMulticastInlineDelegate OnInteraction; // 0x2688 (0x10)
	class USoundBase* InteractionSound; // 0x2698 (0x8)
	class ABuildingTrapDefender* DefenderTrap; // 0x26a0 (0x8)
	struct FMulticastInlineDelegate OnActorBeginCrowdOverlap; // 0x26a8 (0x10)
	bool bCollisionFreeBuildingOnlyAgainstPlayerBuilds; // 0x26b8 (0x1)
	unsigned char unreflected_26b9[0x3]; // 0x26b9 (0x3) 
	float DeepWaterImmersionDepth; // 0x26bc (0x4)
	unsigned char bDebugAI; // 0x26c0 (0x1)
	unsigned char bDebugAIAnim; // 0x26c0 (0x1)
	unsigned char bUseBuildingAttackingHotspots; // 0x26c0 (0x1)
	unsigned char bCanBeLaunched; // 0x26c0 (0x1)
	unsigned char bCanMoveThroughWalls; // 0x26c0 (0x1)
	unsigned char bCanUseNavWalking; // 0x26c0 (0x1)
	unsigned char bCanUseSimpleCollisions; // 0x26c0 (0x1)
	unsigned char bCanUseStepAside; // 0x26c1 (0x1)
	unsigned char bCanUseDoors; // 0x26c1 (0x1)
	unsigned char bCanUseOpenedDoors; // 0x26c1 (0x1)
	unsigned char bCanUseShootingHotspots; // 0x26c1 (0x1)
	unsigned char bCanSleep; // 0x26c1 (0x1)
	unsigned char bIsSleeping; // 0x26c1 (0x1)
	unsigned char bShouldStartSleeping; // 0x26c1 (0x1)
	unsigned char bCanLookAtGoal; // 0x26c1 (0x1)
	unsigned char bDespawnedDueToExpiration; // 0x26c2 (0x1)
	unsigned char bAllowServerCosmeticComponentOptimizations; // 0x26c2 (0x1)
	unsigned char bAllowCapsuleComponentsOnServer; // 0x26c2 (0x1)
	unsigned char bRootComponentIgnoreQueryPawnCapsule; // 0x26c2 (0x1)
	unsigned char bCanUseMeshPooling; // 0x26c2 (0x1)
	unsigned char bUseCrowdSimulation; // 0x26c2 (0x1)
	unsigned char bControlWalkingOffLedges; // 0x26c2 (0x1)
	unsigned char bCanBeBaseForOtherPawns; // 0x26c2 (0x1)
	unsigned char unreflected_26c3[0x1]; // 0x26c3 (0x1) 
	unsigned char bUseAppearanceOverride; // 0x26c4 (0x1)
	unsigned char bCanInteract; // 0x26c4 (0x1)
	unsigned char bHideHealthBar; // 0x26c4 (0x1)
	unsigned char bHasBuildingHitEffects; // 0x26c4 (0x1)
	unsigned char bReplicateGrantedTagsWithFastAbilityReplication; // 0x26c4 (0x1)
	unsigned char bReplicateGameplayCuesWithFastAbilityReplication; // 0x26c4 (0x1)
	unsigned char bOnlySkipAbilitySystemComponentWithFastAbilityReplication; // 0x26c4 (0x1)
	unsigned char bShouldIgnoreThisBaseRotation; // 0x26c5 (0x1)
	unsigned char unreflected_26c6[0x12]; // 0x26c6 (0x12) 
	struct TWeakObjectPtr<class AFortPlayerState> BeingControlledBy; // 0x26d8 (0x8)
	struct TEnumAsByte<EFortMovementUrgency> MovementUrgency; // 0x26e0 (0x1)
	enum EFortressAIType AIType; // 0x26e1 (0x1)
	unsigned char Team; // 0x26e2 (0x1)
	unsigned char unreflected_26e3[0x1]; // 0x26e3 (0x1) 
	struct FName SimpleCollisionsProfileName; // 0x26e4 (0x4)
	struct FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0x26e8 (0x70)
	unsigned char unreflected_2758[0x8]; // 0x2758 (0x8) 
	struct FSlateBrush CachedUpgradeUIDataUpgradeIconBrush; // 0x2760 (0xc0)
	float ScoreMultiplier; // 0x2820 (0x4)
	int OverriddenScore; // 0x2824 (0x4)
	enum EScoreDistributionType OverriddenScoreDistribution; // 0x2828 (0x1)
	unsigned char unreflected_2829[0x3]; // 0x2829 (0x3) 
	float LootDropConeHalfAngle; // 0x282c (0x4)
	float LootDropSpeed; // 0x2830 (0x4)
	float MinItemTossDist; // 0x2834 (0x4)
	float MaxItemTossDist; // 0x2838 (0x4)
	float ItemTossDirectionConeHalfAngle; // 0x283c (0x4)
	enum EFortHotSpotSlot HotspotType; // 0x2840 (0x1)
	enum EFortPartialPathUsage PartialPathUsage; // 0x2841 (0x1)
	unsigned char unreflected_2842[0x6]; // 0x2842 (0x6) 
	class AFortPlayerStateZone* PlayerManager; // 0x2848 (0x8)
	struct FString DefenderItemInstanceId; // 0x2850 (0x10)
	struct FName DefenderSquadId; // 0x2860 (0x4)
	float DefenderPlacedTime; // 0x2864 (0x4)
	float RecentlySeenInterval; // 0x2868 (0x4)
	unsigned char unreflected_286c[0x4]; // 0x286c (0x4) 
	struct FRotator CurrentAIRotationRate; // 0x2870 (0x18)
	float MoveSoundStimulusBroadcastInterval; // 0x2888 (0x4)
	float MoveSoundStimulusMaxRange; // 0x288c (0x4)
	bool bGenerateMoveSoundInAllMovementModes; // 0x2890 (0x1)
	unsigned char unreflected_2891[0xf]; // 0x2891 (0xf) 
	class UShapeComponent* WeaponCollisionComponent; // 0x28a0 (0x8)
	class AFortInventory* Inventory; // 0x28a8 (0x8)
	struct TArray<class AFortPickup*> NearbyPickups; // 0x28b0 (0x10)
	struct TMap<class AFortPickup*, float> UnreachablePickups; // 0x28c0 (0x50)
	unsigned char unreflected_2910[0x10]; // 0x2910 (0x10) 
	struct TArray<struct FFortAIAppearanceOverrideEntry> AppearanceOverrideEntries; // 0x2920 (0x10)
	int AppearanceOverrideEntryIndex; // 0x2930 (0x4)
	unsigned char unreflected_2934[0x4]; // 0x2934 (0x4) 
	struct FVector SpawnLocation; // 0x2938 (0x18)
	struct FRotator SpawnRotation; // 0x2950 (0x18)
	struct TWeakObjectPtr<class ABuildingActor> SleepingFloor; // 0x2968 (0x8)
	struct FName PelvisBoneName; // 0x2970 (0x4)
	struct FName HeadBoneName; // 0x2974 (0x4)
	unsigned char unreflected_2978[0xc]; // 0x2978 (0xc) 
	float MinimapIndicatorUpdateFrequency; // 0x2984 (0x4)
	unsigned char unreflected_2988[0x8]; // 0x2988 (0x8) 
	float MiniMapViewableDistance; // 0x2990 (0x4)
	float DistanceToPlayerManagerToShowHealthBar; // 0x2994 (0x4)
	float DistanceToOtherPlayersToShowHealthBar; // 0x2998 (0x4)
	unsigned char unreflected_299c[0xc]; // 0x299c (0xc) 
	class UFortAIAttributesSet* AttributesSet; // 0x29a8 (0x8)
	class UFortCharacterAttrSet* CharacterAttrSet; // 0x29b0 (0x8)
	class UFortWeaponAttrSet* WeaponAttrSet; // 0x29b8 (0x8)
	class USoundBase* ImpactPhysicalSurfaceSounds[0x1e]; // 0x29c0 (0x8) (ARRAY) 
	class UParticleSystem* ImpactPhysicalSurfaceEffects[0x1e]; // 0x2ab0 (0x8) (ARRAY) 
	struct FScalableFloat AthenaRVOWeightOverride; // 0x2ba0 (0x28)
	class UFortSimpleMiniMapIndicator* MinimapIndicator; // 0x2bc8 (0x8)
	struct FVector2D MiniMapScale; // 0x2bd0 (0x10)
	struct TArray<class UFortAbilitySet*> DefaultGameplayAbilitySets; // 0x2be0 (0x10)
	struct TArray<class UFortAbilitySet*> SpawnInheritedCharacterAbilitySets; // 0x2bf0 (0x10)
	struct TArray<class UFortGameplayModifierItemDefinition*> SpawnModifierDefinitions; // 0x2c00 (0x10)
	class UFortAbilitySystemComponent* AIPawnAbilitySystemComponent; // 0x2c10 (0x8)
	struct FGameplayTagContainer WallAttackGameplayAbilityTags; // 0x2c18 (0x20)
	struct FGameplayTagContainer WallRangedAttackGameplayAbilityTags; // 0x2c38 (0x20)
	struct FGameplayTagContainer CeilingAttackGameplayAbilityTags; // 0x2c58 (0x20)
	struct FGameplayTagContainer FloorAttackGameplayAbilityTags; // 0x2c78 (0x20)
	struct TArray<struct FGameplayTagContainer> FailedAbilityQueryTags; // 0x2c98 (0x10)
	class AActor* CurrentAimTarget; // 0x2ca8 (0x8)
	class UFortNavObstacleComponent* NavObstacleComponent; // 0x2cb0 (0x8)
	unsigned char unreflected_2cb8[0x10]; // 0x2cb8 (0x10) 
	float BuildingHitMaxDistanceToPlayer; // 0x2cc8 (0x4)
	float BuildingHitMaxDistanceToHitLocation; // 0x2ccc (0x4)
	float HeadHeightPercent; // 0x2cd0 (0x4)
	unsigned char unreflected_2cd4[0x4]; // 0x2cd4 (0x4) 
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0x2cd8 (0x98)
	bool bCanBeMarked; // 0x2d70 (0x1)
	unsigned char unreflected_2d71[0x7]; // 0x2d71 (0x7) 
	struct FScalableFloat IsBlockingBuilding; // 0x2d78 (0x28)
	unsigned char unreflected_2da0[0x28]; // 0x2da0 (0x28) 
	struct FScalableFloat NetUpdateFrequencyMin; // 0x2dc8 (0x28)
	struct FScalableFloat NetUpdateFrequencyDormant; // 0x2df0 (0x28)
	struct FScalableFloat NetUpdateFrequencyBelowLower; // 0x2e18 (0x28)
	struct FScalableFloat NetUpdateFrequencyLower; // 0x2e40 (0x28)
	struct FScalableFloat NetUpdateFrequencyAboveLower; // 0x2e68 (0x28)
	struct FScalableFloat NetUpdateFrequencyBelowNormal; // 0x2e90 (0x28)
	struct FScalableFloat NetUpdateFrequencyNormal; // 0x2eb8 (0x28)
	struct FScalableFloat NetUpdateFrequencyAboveNormal; // 0x2ee0 (0x28)
	unsigned char unreflected_2f08[0x120]; // 0x2f08 (0x120) 
	class UFortAccountItem* DefenderItem; // 0x3028 (0x8)
	unsigned char unreflected_3030[0xb8]; // 0x3030 (0xb8) 
	class AFortPawn* TetheredFollower; // 0x30e8 (0x8)
	unsigned char unreflected_30f0[0x10]; // 0x30f0 (0x10) 
	class UClass* TetheredCamera; // 0x3100 (0x8)
	class UClass* TetheredTargetingCamera; // 0x3108 (0x8)
	bool bIsTetheredBoosting; // 0x3110 (0x1)
	unsigned char unreflected_3111[0x3]; // 0x3111 (0x3) 
	float TetherBoostMultiplier; // 0x3114 (0x4)
	float TetherJumpServerCorrectionIgnoreTime; // 0x3118 (0x4)
	float TetherJumpLastTime; // 0x311c (0x4)
	class UClass* TetherBoundsXYSplineClass; // 0x3120 (0x8)
	class USplineComponent* TetherBoundsXYSplineComponent; // 0x3128 (0x8)
	struct FMulticastInlineDelegate OnUpdateFromVehicleInput; // 0x3130 (0x10)
	unsigned char unreflected_3140[0x8]; // 0x3140 (0x8) 
	class UFortAIPawnCustomizationDefinition* CustomizationsToLoad; // 0x3148 (0x8)
	bool bCanUnloadCustomization; // 0x3150 (0x1)
	unsigned char unreflected_3151[0x7]; // 0x3151 (0x7) 
	class UFortAIPawnCustomizationDefinition* UsedCustomization; // 0x3158 (0x8)
	struct FMulticastInlineDelegate OnCustomizationsLoadedEvent; // 0x3160 (0x10)
	struct FMulticastInlineDelegate OnCustomizationsUnloadedEvent; // 0x3170 (0x10)
	class UFortCharacterPartsComponent* CachedPartsComponent; // 0x3180 (0x8)
	class UFortAIAssetLoader* AIAssetLoader; // 0x3188 (0x8)
	unsigned char bReplicateInventory; // 0x3190 (0x1)
	unsigned char unreflected_3191[0x27]; // 0x3191 (0x27) 
	struct FHitResult LastDamageHitResult; // 0x31b8 (0xe0)
	struct FVector CustomBounceVelocityForPickup; // 0x3298 (0x18)
	struct FVector CustomBouncePawnOffsetForPickup; // 0x32b0 (0x18)
	bool bSupportsAdvancedMovementSet; // 0x32c8 (0x1)
	unsigned char padding_32c9[0x17]; // 0x32c9 (0x17)

	/* Functions */

	// Function /Script/FortniteGame.FortAIPawn.TurnOnSleepingOptimizations (Underlying native function: TurnOnSleepingOptimizations 0x8ac6c08)
	void TurnOnSleepingOptimizations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.TriggerNoWeaponSpeech (Underlying native function: TriggerNoWeaponSpeech 0x8ac6bb8)
	void TriggerNoWeaponSpeech(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SpawnPickupInWorldWithLootTierAsync (Underlying native function: SpawnPickupInWorldWithLootTierAsync 0x8ac607c)
	void SpawnPickupInWorldWithLootTierAsync(struct FName& LootTierName, struct FVector& Position, int& OverrideMaxStackCount, bool& bToss, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.ShowMapMarker (Underlying native function: ShowMapMarker 0x2c8aea4)
	void ShowMapMarker(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.ShouldUseFiringCapsuleCollision (Underlying native function: ShouldUseFiringCapsuleCollision 0x8ac5c24)
	bool ShouldUseFiringCapsuleCollision(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.ShouldUpdateSkeletalMesh (Underlying native function: ShouldUpdateSkeletalMesh 0x8ac5bfc)
	bool ShouldUpdateSkeletalMesh(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.ShouldReplicateGrantedTagsWithFastAbilityReplication (Underlying native function: ShouldReplicateGrantedTagsWithFastAbilityReplication 0x8ac5bdc)
	bool ShouldReplicateGrantedTagsWithFastAbilityReplication(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.ShouldReplicateGameplayCuesWithFastAbilityReplication (Underlying native function: ShouldReplicateGameplayCuesWithFastAbilityReplication 0x8ac5bbc)
	bool ShouldReplicateGameplayCuesWithFastAbilityReplication(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.ShouldApplyBuildingHitEffect (Underlying native function: ShouldApplyBuildingHitEffect 0x8ac5914)
	bool ShouldApplyBuildingHitEffect(float& Damage, struct FVector& Location, struct FHitResult& HitInfo, bool& bPlayerPlaced); // (Final | BlueprintCosmetic | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.SetWeaponCollisionComponent (Underlying native function: SetWeaponCollisionComponent 0x1c56458)
	void SetWeaponCollisionComponent(class UShapeComponent*& InWeaponCollisionComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetUsesDBNO (Underlying native function: SetUsesDBNO 0x8ac57fc)
	void SetUsesDBNO(bool& bInUsesDBNO, struct TEnumAsByte<TInteractionType>& InDBNOInteractionType, float& InDBNOInteractionDuration); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetSkinColor (Underlying native function: SetSkinColor 0x8ac5624)
	void SetSkinColor(struct FLinearColor& NewSkinColor, float& NewSkinBrightness); // (BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetShouldStartSleeping (Underlying native function: SetShouldStartSleeping 0x8ac5510)
	void SetShouldStartSleeping(bool& bHintStartSleeping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetReplicateGrantedTagsWithFastAbilityReplication (Underlying native function: SetReplicateGrantedTagsWithFastAbilityReplication 0x8ac5400)
	void SetReplicateGrantedTagsWithFastAbilityReplication(bool& bReplicateGrantedTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetReplicateGameplayCuesWithFastAbilityReplication (Underlying native function: SetReplicateGameplayCuesWithFastAbilityReplication 0x8ac5374)
	void SetReplicateGameplayCuesWithFastAbilityReplication(bool& bReplicateGameplayCues); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetOverridenScoreDistribution (Underlying native function: SetOverridenScoreDistribution 0x8ac50d0)
	void SetOverridenScoreDistribution(enum EScoreDistributionType& InOverriddenScoreDistribution); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetOverridenScore (Underlying native function: SetOverridenScore 0x8ac5054)
	void SetOverridenScore(int& InOverriddenScore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetMovementUrgency (Underlying native function: SetMovementUrgency 0x8ac4fd0)
	void SetMovementUrgency(struct TEnumAsByte<EFortMovementUrgency>& Urgency); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetMinSignificanceForAnimationCurves (Underlying native function: SetMinSignificanceForAnimationCurves 0x8ac4dbc)
	void SetMinSignificanceForAnimationCurves(float& MinSignificance); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetMinimumAILOD (Underlying native function: SetMinimumAILOD 0x8ac4ecc)
	void SetMinimumAILOD(enum EFortAILODLevel& MinimumAILOD); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetMiniMapViewableDistance (Underlying native function: SetMiniMapViewableDistance 0x8ac4e40)
	void SetMiniMapViewableDistance(float& NewMinimapViewableDistance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetLocomotionPlayRateScale (Underlying native function: SetLocomotionPlayRateScale 0x8ac4b18)
	void SetLocomotionPlayRateScale(float& NewLocomotionPlayRateScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetIsCharging (Underlying native function: SetIsCharging 0x8ac48d8)
	void SetIsCharging(bool& bNewIsCharging); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetForceBossSignificance (Underlying native function: SetForceBossSignificance 0x8ac3cbc)
	void SetForceBossSignificance(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetEyeColor (Underlying native function: SetEyeColor 0x8ac395c)
	void SetEyeColor(struct FLinearColor& NewEyeColor, float& NewEyeBrightness); // (BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetEncounterInfo (Underlying native function: SetEncounterInfo 0x8ac38dc)
	void SetEncounterInfo(class UFortAIEncounterInfo*& InEncounterInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetDisplayName (Underlying native function: SetDisplayName 0x8ac3844)
	void SetDisplayName(struct FText& Name); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetDesiredCustomization (Underlying native function: SetDesiredCustomization 0x8ac37c4)
	void SetDesiredCustomization(class UFortAIPawnCustomizationDefinition*& InCustomizationsToLoad); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetDefenderTrap (Underlying native function: SetDefenderTrap 0x8ac3714)
	void SetDefenderTrap(class ABuildingTrapDefender*& InDefenderTrap); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetCurrentAimTarget (Underlying native function: SetCurrentAimTarget 0x8ac3610)
	void SetCurrentAimTarget(class AActor*& AimTarget); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetCollisionProfileName (Underlying native function: SetCollisionProfileName 0x8ac31f4)
	void SetCollisionProfileName(struct FName& InCollisionProfileName); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetCanSleep (Underlying native function: SetCanSleep 0x8ac3164)
	void SetCanSleep(bool& InCanSleep); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetCanInteract (Underlying native function: SetCanInteract 0x8ac30e0)
	void SetCanInteract(bool& CanInteract); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetCanBeBaseForOtherPawns (Underlying native function: SetCanBeBaseForOtherPawns 0x8ac3050)
	void SetCanBeBaseForOtherPawns(bool& bEnable); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetBlockCollisionWithOtherAI (Underlying native function: SetBlockCollisionWithOtherAI 0x8ac2ee0)
	void SetBlockCollisionWithOtherAI(bool& bInEnableBlockingCollisionWithOtherAI); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetAIType (Underlying native function: SetAIType 0x8ac2d58)
	void SetAIType(enum EFortressAIType& InAIType); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetAIRotationRate (Underlying native function: SetAIRotationRate 0x8ac2cb0)
	void SetAIRotationRate(struct FRotator& AIRotationRate); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.SetAIFocalPoint (Underlying native function: SetAIFocalPoint 0x8ac2ba4)
	void SetAIFocalPoint(class AActor*& FocusTarget, struct FVector& FocalPoint, bool& bUseAttackingPriority); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.ReviveFromDBNO (Underlying native function: ReviveFromDBNO 0x8ac2a28)
	void ReviveFromDBNO(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.RestoreInteractionType (Underlying native function: RestoreInteractionType 0x8ac2a10)
	void RestoreInteractionType(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.RestoreInteractionText (Underlying native function: RestoreInteractionText 0x8ac29f8)
	void RestoreInteractionText(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.ResetAIRotationRateToDefault (Underlying native function: ResetAIRotationRateToDefault 0x8ac2980)
	void ResetAIRotationRateToDefault(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.PlayAdditiveHitReactsNative (Underlying native function: PlayAdditiveHitReactsNative 0x1aff8bc)
	void PlayAdditiveHitReactsNative(struct FVector& HitDirection, class UAnimMontage*& NewAnimMontage); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.OverrideInteractionType (Underlying native function: OverrideInteractionType 0x293746c)
	void OverrideInteractionType(struct TEnumAsByte<TInteractionType>& NewInteractionType); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.OverrideInteractionText (Underlying native function: OverrideInteractionText 0x26756b8)
	void OverrideInteractionText(struct FText& NewInteractionText); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.OnWaterNavMeshExit (Has no native function)
	void OnWaterNavMeshExit(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnWaterNavMeshEnter (Has no native function)
	void OnWaterNavMeshEnter(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnWaterDeepNavMeshEnter (Has no native function)
	void OnWaterDeepNavMeshEnter(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnUpdateTetheredFollower (Has no native function)
	void OnUpdateTetheredFollower(class AFortPawn*& InTetheredFollower); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnUpdateFromVehicleInputEvent (Has no native function)
	void OnUpdateFromVehicleInputEvent(float& DeltaSeconds, struct FFortAthenaVehicleInputState& VehicleInputState); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnTetherRequestJump (Has no native function)
	void OnTetherRequestJump(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnTeamChanged (Has no native function)
	void OnTeamChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnStartedEncounterSpawn (Has no native function)
	void OnStartedEncounterSpawn(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnSleepingAIsFloorBuildingActorDied (Underlying native function: OnSleepingAIsFloorBuildingActorDied 0x8ac1bdc)
	void OnSleepingAIsFloorBuildingActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_UpgradeUIData (Underlying native function: OnRep_UpgradeUIData 0x8ac1bb4)
	void OnRepUpgradeUIData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_TetheredFollower (Underlying native function: OnRep_TetheredFollower 0x8ac1b60)
	void OnRepTetheredFollower(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_SharedAnim (Underlying native function: OnRep_SharedAnim 0x8ac1af0)
	void OnRepSharedAnim(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_ReplicatedAnimMontage (Underlying native function: OnRep_ReplicatedAnimMontage 0x267c394)
	void OnRepReplicatedAnimMontage(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_MinimapViewableDistance (Underlying native function: OnRep_MinimapViewableDistance 0x8ac1a60)
	void OnRepMinimapViewableDistance(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_Inventory (Underlying native function: OnRep_Inventory 0x8ac19d0)
	void OnRepInventory(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_EnableBlockingCollisionWithOtherAI (Underlying native function: OnRep_EnableBlockingCollisionWithOtherAI 0x8ac19bc)
	void OnRepEnableBlockingCollisionWithOtherAI(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_CustomizationsToLoad (Underlying native function: OnRep_CustomizationsToLoad 0x8ac1994)
	void OnRepCustomizationsToLoad(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_CurrentAIRotationRate (Underlying native function: OnRep_CurrentAIRotationRate 0x8ac1980)
	void OnRepCurrentAIRotationRate(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_CanInteract (Underlying native function: OnRep_CanInteract 0x26d0230)
	void OnRepCanInteract(bool& bOldCanInteract); // (Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_bIsSleeping (Underlying native function: OnRep_bIsSleeping 0x8ac1bc8)
	void OnRepbIsSleeping(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_BeingControlled (Underlying native function: OnRep_BeingControlled 0x2a5c458)
	void OnRepBeingControlled(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_AttributeProxy (Underlying native function: OnRep_AttributeProxy 0x210be48)
	void OnRepAttributeProxy(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnRep_AppearanceOverrideEntryIndex (Underlying native function: OnRep_AppearanceOverrideEntryIndex 0x8ac196c)
	void OnRepAppearanceOverrideEntryIndex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAIPawn.OnReceiveReplicatedMovement (Has no native function)
	void OnReceiveReplicatedMovement(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnPawnStoppedUsingMeAsWalkableBase (Has no native function)
	void OnPawnStoppedUsingMeAsWalkableBase(class APawn*& PawnUsingThisAsBase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnPawnStartedUsingOtherWalkableBase (Has no native function)
	void OnPawnStartedUsingOtherWalkableBase(class APawn*& PawnUsedThisAsBase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnPawnStartedUsingMeAsWalkableBase (Has no native function)
	void OnPawnStartedUsingMeAsWalkableBase(class APawn*& PawnUsingThisAsBase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnOutsideOfTetherBeyondMaxTimeAllowed (Has no native function)
	bool OnOutsideOfTetherBeyondMaxTimeAllowed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnLaunchCharacter (Underlying native function: OnLaunchCharacter 0x8ac182c)
	struct FVector OnLaunchCharacter(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride); // (Native | Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnForceLeaveVehicle (Underlying native function: OnForceLeaveVehicle 0x8ac1814)
	void OnForceLeaveVehicle(); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnForceEnterVehicle (Underlying native function: OnForceEnterVehicle 0x154e4f8)
	void OnForceEnterVehicle(); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnFinishedEncounterSpawn (Has no native function)
	void OnFinishedEncounterSpawn(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnEndSleepEffects (Has no native function)
	void OnEndSleepEffects(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnEndDeepWaterInteraction (Has no native function)
	void OnEndDeepWaterInteraction(struct FVector& PreviousWaterSurfaceLocation, float& WaterDepth); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnEncounterSpawnEnableRangedAttacking (Underlying native function: OnEncounterSpawnEnableRangedAttacking 0x8ac17f4)
	void OnEncounterSpawnEnableRangedAttacking(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnEncounterSpawnEnableMeleeAttacking (Underlying native function: OnEncounterSpawnEnableMeleeAttacking 0x8ac17d4)
	void OnEncounterSpawnEnableMeleeAttacking(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.OnDefenderTrapSet (Has no native function)
	void OnDefenderTrapSet(class ABuildingTrapDefender*& OldDefenderTrap); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnCustomizationsUnloaded_BP (Has no native function)
	void OnCustomizationsUnloadedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnCustomizationsLoaded_BP (Has no native function)
	void OnCustomizationsLoadedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnCheatUpdateSpecialEventGE (Has no native function)
	void OnCheatUpdateSpecialEventGE(bool& bShouldUseSpecialEventGE); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnBeingControlledChanged (Has no native function)
	void OnBeingControlledChanged(bool& bControlled); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnBeginSleepEffects (Has no native function)
	void OnBeginSleepEffects(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnBeginDeepWaterInteraction (Has no native function)
	void OnBeginDeepWaterInteraction(struct FVector& WaterSurfaceLocation, float& WaterDepth); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnApplyEffectOptimization (Has no native function)
	void OnApplyEffectOptimization(int& NewBudgetValue); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.OnAppearanceOverridden (Has no native function)
	void OnAppearanceOverridden(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.NetMulticast_OnTurn (Underlying native function: NetMulticast_OnTurn 0x14266d4)
	void NetMulticastOnTurn(float& TurnAngle, float& TurnRate); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.NetMulticast_BatchedDamageCues (Underlying native function: NetMulticast_BatchedDamageCues 0x19b2ed0)
	void NetMulticastBatchedDamageCues(struct FFortAIBatchedDamageCues& Data); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAIPawn.K2_GetDefenderItem (Underlying native function: K2_GetDefenderItem 0x8ac0b10)
	class UFortAccountItem* K2GetDefenderItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.K2_FindExistingItemForDefinition (Underlying native function: K2_FindExistingItemForDefinition 0x8ac0930)
	class UFortItem* K2FindExistingItemForDefinition(class UFortItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, bool& bInStorageVault); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.IsUsedAsBaseByPawn (Underlying native function: IsUsedAsBaseByPawn 0x8ac08d8)
	bool IsUsedAsBaseByPawn(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.IsInsideTetherBounds (Underlying native function: IsInsideTetherBounds 0x8ac07c8)
	bool IsInsideTetherBounds(bool& bUseRelaxedTetherBounds); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.IsInCombat (Underlying native function: IsInCombat 0x8ac06c0)
	bool IsInCombat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.IsDefender (Underlying native function: IsDefender 0x8ac05e4)
	bool IsDefender(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.HideMapMarker (Underlying native function: HideMapMarker 0x2e42d8c)
	void HideMapMarker(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.HasTether (Underlying native function: HasTether 0x8ac03d4)
	bool HasTether(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GrabPickupCustomized (Underlying native function: GrabPickupCustomized 0x8ac022c)
	void GrabPickupCustomized(class AFortPickup*& PickUp, float& FlyTime); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.GrabPickup (Underlying native function: GrabPickup 0x8ac00f8)
	void GrabPickup(class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.GiveAmmo (Underlying native function: GiveAmmo 0x6e8edb4)
	void GiveAmmo(int& AmmoQuantity); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.GetUsesDBNO (Underlying native function: GetUsesDBNO 0x8ac00bc)
	bool GetUsesDBNO(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetSpawnRotation (Underlying native function: GetSpawnRotation 0x8abfdf4)
	struct FRotator GetSpawnRotation(); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetSpawnPointValue (Underlying native function: GetSpawnPointValue 0x8abfdd0)
	int GetSpawnPointValue(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetSpawnLocation (Underlying native function: GetSpawnLocation 0x8abfda8)
	struct FVector GetSpawnLocation(); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetSkeletalMeshForPartType (Underlying native function: GetSkeletalMeshForPartType 0x2bb4978)
	class USkeletalMeshComponent* GetSkeletalMeshForPartType(struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetSkeletalMeshForPartTag (Underlying native function: GetSkeletalMeshForPartTag 0x8abfb8c)
	class USkeletalMeshComponent* GetSkeletalMeshForPartTag(struct FGameplayTag& PartTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetSkeletalMeshesForAllParts (Underlying native function: GetSkeletalMeshesForAllParts 0x8abfc28)
	struct TArray<class USkeletalMeshComponent*> GetSkeletalMeshesForAllParts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetScoreWithoutMutliplierValue (Underlying native function: GetScoreWithoutMutliplierValue 0x8abfae8)
	int GetScoreWithoutMutliplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetScoreValue (Underlying native function: GetScoreValue 0x8abfa7c)
	int GetScoreValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetScoreDistribution (Underlying native function: GetScoreDistribution 0x8abfa58)
	enum EScoreDistributionType GetScoreDistribution(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetMovementUrgency (Underlying native function: GetMovementUrgency 0x8abf854)
	static struct TEnumAsByte<EFortMovementUrgency> GetMovementUrgency(class AFortAIPawn*& FortAIPawn); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAIPawn.GetMovementStyle (Underlying native function: GetMovementStyle 0x8abf7d4)
	static struct TEnumAsByte<EFortMovementStyle> GetMovementStyle(class AFortAIPawn*& FortAIPawn); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAIPawn.GetLocomotionPlayRateScale (Underlying native function: GetLocomotionPlayRateScale 0x8abf5a0)
	float GetLocomotionPlayRateScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetInventoryItem (Underlying native function: GetInventoryItem 0x8abf43c)
	class UFortItem* GetInventoryItem(struct FGuid& ItemGuid); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetImpactPhysicalSurfaceSound (Underlying native function: GetImpactPhysicalSurfaceSound 0x8abf380)
	class USoundBase* GetImpactPhysicalSurfaceSound(struct FHitResult& Impact); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetGroundSpeedForUrgency (Underlying native function: GetGroundSpeedForUrgency 0x8abf25c)
	static float GetGroundSpeedForUrgency(class AFortAIPawn*& FortAIPawn, struct TEnumAsByte<EFortMovementUrgency>& Urgency); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAIPawn.GetDifficultyRating (Underlying native function: GetDifficultyRating 0x8abf084)
	float GetDifficultyRating(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetDifficultyLevel (Underlying native function: GetDifficultyLevel 0x8abf05c)
	float GetDifficultyLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetDefenderItemInstanceId (Underlying native function: GetDefenderItemInstanceId 0x8abef10)
	struct FString GetDefenderItemInstanceId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetDeathInfo (Underlying native function: GetDeathInfo 0x8abeda8)
	void GetDeathInfo(struct FAIDeathInfo& OutDeathInfo); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetCurrentAimTarget (Underlying native function: GetCurrentAimTarget 0x8abeca8)
	class AActor* GetCurrentAimTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetCharacterGender (Underlying native function: GetCharacterGender 0x8abec28)
	struct TEnumAsByte<EFortCustomGender> GetCharacterGender(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetBeingControlled (Underlying native function: GetBeingControlled 0x8abebbc)
	bool GetBeingControlled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.GetBackpackLocation (Underlying native function: GetBackpackLocation 0x8abeb80)
	struct FVector GetBackpackLocation(); // (Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.ForceKillNoDBNO (Underlying native function: ForceKillNoDBNO 0x8abea08)
	void ForceKillNoDBNO(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.FinishedEncounterSpawn (Underlying native function: FinishedEncounterSpawn 0x8abe8fc)
	void FinishedEncounterSpawn(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAIPawn.FindValidPawnsUsedOrUsingThisAsABase (Underlying native function: FindValidPawnsUsedOrUsingThisAsABase 0x8abe874)
	struct TArray<class APawn*> FindValidPawnsUsedOrUsingThisAsABase(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.FastSharedReplication (Underlying native function: FastSharedReplication 0x2094120)
	void FastSharedReplication(struct FFortAISharedRepMovement& SharedRepMovement); // (Final | Net | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortAIPawn.DropAllItems (Underlying native function: DropAllItems 0x6df775c)
	void DropAllItems(bool& bSpawnPickups); // (Final | BlueprintAuthorityOnly | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.DespawnAI (Underlying native function: DespawnAI 0x8abe168)
	void DespawnAI(bool& bDueToInactivity); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.ClearAIFocalPoint (Underlying native function: ClearAIFocalPoint 0x8abdfe4)
	void ClearAIFocalPoint(bool& bUseAttackingPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.CanTetherJump (Has no native function)
	bool CanTetherJump(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.CanHitTargetWithAbility (Underlying native function: CanHitTargetWithAbility 0x8abdc90)
	bool CanHitTargetWithAbility(struct FGameplayTagContainer& GameplayAbilityTag, class AActor*& CanHitTarget, bool& bUseIdealYawRotationToTarget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.BlueprintModifyIncomingDamage (Underlying native function: BlueprintModifyIncomingDamage 0x8abd950)
	float BlueprintModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIPawn.BlueprintGetPrimaryPhysicalSurface (Underlying native function: BlueprintGetPrimaryPhysicalSurface 0x8abd928)
	struct TEnumAsByte<EPhysicalSurface> BlueprintGetPrimaryPhysicalSurface(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAIPawn.BlueprintCanInteract (Underlying native function: BlueprintCanInteract 0x8abd85c)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.AreCustomizationsLoaded (Underlying native function: AreCustomizationsLoaded 0x8abd840)
	bool AreCustomizationsLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAIPawn.AddUnreachablePickup (Underlying native function: AddUnreachablePickup 0x8abd2f0)
	void AddUnreachablePickup(class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIPawn.AddFortAbilitySet (Underlying native function: AddFortAbilitySet 0x8abcd30)
	void AddFortAbilitySet(class UFortAbilitySet*& FortAbilitySet); // (Final | Native | Public | BlueprintCallable)
};

