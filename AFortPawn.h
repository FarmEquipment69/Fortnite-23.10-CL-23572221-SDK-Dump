// Class /Script/FortniteGame.FortPawn
// Size: 0x1ad0
class AFortPawn : public AFGF_Character
{
	unsigned char unreflected_680[0x88]; // 0x680 (0x88) 
	unsigned char bUseBaseChanged; // 0x708 (0x1)
	unsigned char bIgnoreNextFallingDamage; // 0x708 (0x1)
	unsigned char bAllowDeathFromFallingDamage; // 0x708 (0x1)
	unsigned char bIsDying; // 0x708 (0x1)
	unsigned char bPlayedDying; // 0x708 (0x1)
	unsigned char bIsHiddenForDeath; // 0x708 (0x1)
	unsigned char bIsKnockedback; // 0x708 (0x1)
	unsigned char bIsStaggered; // 0x709 (0x1)
	unsigned char bCanCapsuleBeUsedForTargeting; // 0x709 (0x1)
	unsigned char bUseLineTestForDamageZoneBoneDetection; // 0x709 (0x1)
	unsigned char bMovingEmote; // 0x709 (0x1)
	unsigned char bMovingEmoteForwardOnly; // 0x709 (0x1)
	unsigned char bMovingEmoteFollowingOnly; // 0x709 (0x1)
	unsigned char bMovingEmoteSkipLandingFX; // 0x70a (0x1)
	unsigned char bIsInvulnerable; // 0x70a (0x1)
	unsigned char bSpotted; // 0x70a (0x1)
	unsigned char bRegisterWithAISight; // 0x70a (0x1)
	unsigned char bRegisterWithAimAssist; // 0x70a (0x1)
	unsigned char bPrimaryInputHeld; // 0x70a (0x1)
	unsigned char bSecondaryInputHeld; // 0x70a (0x1)
	unsigned char bPrimaryInputQueued; // 0x70a (0x1)
	unsigned char bWeaponActivated; // 0x70b (0x1)
	unsigned char bIsInGoop; // 0x70b (0x1)
	unsigned char bReplicatedIsInGoop; // 0x70b (0x1)
	unsigned char bIsSliding; // 0x70b (0x1)
	unsigned char bIsSkating; // 0x70b (0x1)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct FGameplayTagContainer AdditionalPickupTags; // 0x710 (0x20)
	enum EFortPickupSpawnSource SpawnSourceOverride; // 0x730 (0x1)
	unsigned char bIsSwinging; // 0x731 (0x1)
	unsigned char bIsSynchedAction; // 0x731 (0x1)
	unsigned char bSwingingAttached; // 0x731 (0x1)
	unsigned char unreflected_732[0x6]; // 0x732 (0x6) 
	struct FVector SwingAttachLocation; // 0x738 (0x18)
	float SwingAttachLocationUpdateDistanceThreshold; // 0x750 (0x4)
	unsigned char unreflected_754[0xc]; // 0x754 (0xc) 
	struct FSynchedActionWarpPointInfo_Replicated ReplicatedSynchedActionWarpPointInfo; // 0x760 (0x50)
	unsigned char unreflected_7b0[0x61]; // 0x7b0 (0x61) 
	unsigned char bSkipAnalogJump; // 0x811 (0x1)
	struct TEnumAsByte<ETraceTypeQuery> FootstepTraceTypeQuery; // 0x812 (0x1)
	struct TEnumAsByte<EFortFootstepSurfaceType> FootstepSurfaceType; // 0x813 (0x1)
	unsigned char unreflected_814[0x4]; // 0x814 (0x4) 
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x818 (0x8)
	unsigned char unreflected_820[0x10]; // 0x820 (0x10) 
	enum EUpdateRateShiftBucket UroShiftBucket; // 0x830 (0x1)
	unsigned char bUpdateMeshComponentUpdateFlagOnServer; // 0x831 (0x1)
	unsigned char bUROCanTieToLODs; // 0x831 (0x1)
	unsigned char bPostProcessNavLocation; // 0x831 (0x1)
	unsigned char bHealthSynced; // 0x831 (0x1)
	unsigned char bWeaponHolstered; // 0x831 (0x1)
	unsigned char bSkipReticleColorTrace; // 0x831 (0x1)
	unsigned char bPrioritizePawnCollisionsOnAbilityTargetSelectionVisibilityTest; // 0x831 (0x1)
	unsigned char bTreatAsPawnForHitMarkers; // 0x832 (0x1)
	unsigned char bDisplayPawnHitMarkersForChildActors; // 0x832 (0x1)
	unsigned char bUsesStats; // 0x832 (0x1)
	unsigned char bAllowBuildingActorTeleport; // 0x832 (0x1)
	unsigned char bIsDBNO; // 0x832 (0x1)
	unsigned char bWasDBNOOnDeath; // 0x832 (0x1)
	unsigned char bCachedIsInAthena; // 0x832 (0x1)
	unsigned char bShouldUseCharacterMovementIdleFastPath; // 0x832 (0x1)
	struct TEnumAsByte<EFortMovementStyle> CurrentMovementStyle; // 0x833 (0x1)
	enum EFortControlRecoveryBehavior ControlRecoveryBehavior; // 0x834 (0x1)
	unsigned char TeleportCounter; // 0x835 (0x1)
	unsigned char unreflected_836[0x2]; // 0x836 (0x2) 
	struct FDataTableRowHandle PawnStatHandle; // 0x838 (0x10)
	float SlidingFriction; // 0x848 (0x4)
	unsigned char bIsSlopeSliding; // 0x84c (0x1)
	unsigned char unreflected_84d[0x1]; // 0x84d (0x1) 
	uint16_t PackedReplicatedSlopeAngles; // 0x84e (0x2)
	float SlidingBrakingDeceleration; // 0x850 (0x4)
	unsigned char unreflected_854[0x4]; // 0x854 (0x4) 
	class UFortStormShieldComponent* StormShieldComponent; // 0x858 (0x8)
	struct FMulticastInlineDelegate OnStormShieldComponentCreated; // 0x860 (0x10)
	enum EFortPawnPushSize PushSize; // 0x870 (0x1)
	unsigned char unreflected_871[0xb]; // 0x871 (0xb) 
	float LastSurfaceTraceTime; // 0x87c (0x4)
	struct FVector LastSurfaceTraceLocation; // 0x880 (0x18)
	unsigned char unreflected_898[0x28]; // 0x898 (0x28) 
	struct FMulticastInlineDelegate OnPawnJumped; // 0x8c0 (0x10)
	unsigned char bIsJumping; // 0x8d0 (0x1)
	unsigned char unreflected_8d1[0x3]; // 0x8d1 (0x3) 
	int PawnUniqueID; // 0x8d4 (0x4)
	class AFortWeapon* CurrentWeapon; // 0x8d8 (0x8)
	class AFortWeapon* PreviousWeapon; // 0x8e0 (0x8)
	struct TArray<class AFortWeapon*> CurrentWeaponList; // 0x8e8 (0x10)
	struct FString PreviousAbilityWeaponNameForTelemetry; // 0x8f8 (0x10)
	unsigned char unreflected_908[0x60]; // 0x908 (0x60) 
	struct FName WeaponHandSocketName; // 0x968 (0x4)
	struct FName LeftHandWeaponHandSocketName; // 0x96c (0x4)
	class AActor* SpawnSpot; // 0x970 (0x8)
	struct FGameplayTagContainer DeathTags; // 0x978 (0x20)
	float SpawnImmunityTime; // 0x998 (0x4)
	unsigned char unreflected_99c[0x4]; // 0x99c (0x4) 
	class AFortWaterBodyActor* CurrentWaterBody; // 0x9a0 (0x8)
	bool bShouldSupportSurfaceSwimming; // 0x9a8 (0x1)
	unsigned char unreflected_9a9[0x7]; // 0x9a9 (0x7) 
	class AFortWaterBodyActor* ReplicatedWaterBody; // 0x9b0 (0x8)
	struct TArray<class AFortPickup*> IncomingPickups; // 0x9b8 (0x10)
	struct TArray<struct FFortPickupEntryData> PickupDirectionData; // 0x9c8 (0x10)
	bool bIsStunned; // 0x9d8 (0x1)
	unsigned char unreflected_9d9[0x7]; // 0x9d9 (0x7) 
	struct TArray<struct FWindVolumeData> WindVolumes; // 0x9e0 (0x10)
	struct FVortexParams VortexParams; // 0x9f0 (0x80)
	unsigned char bIsInVortex; // 0xa70 (0x1)
	unsigned char bReplicatedIsInVortex; // 0xa70 (0x1)
	unsigned char unreflected_a71[0x7]; // 0xa71 (0x7) 
	class AFortSkyTube* CurrentSkyTube; // 0xa78 (0x8)
	class AFortSkyTube* ReplicatedSkyTube; // 0xa80 (0x8)
	struct TArray<class AFortSkyTube*> OverlappedSkyTubes; // 0xa88 (0x10)
	struct FScalableFloat bPrioritizeEarlierTubes; // 0xa98 (0x28)
	struct FMulticastInlineDelegate OnSkyTubeChanged; // 0xac0 (0x10)
	struct FMulticastInlineDelegate OnSearchedContainer; // 0xad0 (0x10)
	int AdditiveCringeCount; // 0xae0 (0x4)
	float AdditiveCringeDuration; // 0xae4 (0x4)
	bool bSupportsDamageNumbersAtHitLocation; // 0xae8 (0x1)
	unsigned char unreflected_ae9[0x7]; // 0xae9 (0x7) 
	struct FVector_NetQuantize PushMomentum; // 0xaf0 (0x18)
	unsigned char unreflected_b08[0x4]; // 0xb08 (0x4) 
	float LocalSpin; // 0xb0c (0x4)
	unsigned char unreflected_b10[0x1]; // 0xb10 (0x1) 
	bool bTurnTransitionActiveAndControllingRotation; // 0xb11 (0x1)
	unsigned char unreflected_b12[0x5a]; // 0xb12 (0x5a) 
	struct FGameplayCueTag DeathCueTag; // 0xb6c (0x4)
	struct TArray<struct FFortStatManagerTag> DeathStatTags; // 0xb70 (0x10)
	class USkeletalMeshSocket* DeathHitSocket; // 0xb80 (0x8)
	struct FMulticastInlineDelegate OnPlayerStartDBNO; // 0xb88 (0x10)
	struct FMulticastInlineDelegate OnDBNOStateChanged; // 0xb98 (0x10)
	float DefaultLifespanAfterDeath; // 0xba8 (0x4)
	float TeamBeaconMaxDist; // 0xbac (0x4)
	struct FColor TeamBeaconTextColor; // 0xbb0 (0x4)
	float LastTakeHitTimeTimeout; // 0xbb4 (0x4)
	float LastDamagedTime; // 0xbb8 (0x4)
	unsigned char unreflected_bbc[0x4]; // 0xbbc (0x4) 
	class AFortWeapon* CurrentlyAttachedWeapon; // 0xbc0 (0x8)
	class UPrimitiveComponent* CachedNavFloor; // 0xbc8 (0x8)
	float MaxFootstepDistance; // 0xbd0 (0x4)
	unsigned char unreflected_bd4[0x4]; // 0xbd4 (0x4) 
	class USoundBase* DBNOLandingSound; // 0xbd8 (0x8)
	class USoundBase* DefaultFootstepSound; // 0xbe0 (0x8)
	class USoundBase* DefaultFastFootstepSound; // 0xbe8 (0x8)
	class USoundBase* DefaultLandingSound; // 0xbf0 (0x8)
	class USoundBase* DefaultHardLandingSound; // 0xbf8 (0x8)
	class USoundBase* DefaultJumpSound; // 0xc00 (0x8)
	class UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank; // 0xc08 (0x8)
	class UFortSwimmingAudioBank* DefaultSwimmingAudioBank; // 0xc10 (0x8)
	float LineTestForDamageZoneBoneDetectionRadius; // 0xc18 (0x4)
	unsigned char unreflected_c1c[0x4]; // 0xc1c (0x4) 
	struct FPawnDamageZones DamageZones[0x5]; // 0xc20 (0x18) (ARRAY) 
	unsigned char DamageZoneActiveBitMask; // 0xc98 (0x1)
	unsigned char unreflected_c99[0x3]; // 0xc99 (0x3) 
	float TargettingZOffset; // 0xc9c (0x4)
	unsigned char JumpFlashCountPacked; // 0xca0 (0x1)
	unsigned char LandingFlashCountPacked; // 0xca1 (0x1)
	unsigned char unreflected_ca2[0x6]; // 0xca2 (0x6) 
	struct TMap<struct FName, struct FEmoteAudioComponentData> EmoteAudioComps; // 0xca8 (0x50)
	class USoundAttenuation* FrontEndEmoteAudioAttenuation; // 0xcf8 (0x8)
	class USoundAttenuation* InGameEmoteAudioAttenuation; // 0xd00 (0x8)
	class USoundEffectSourcePresetChain* InGameEmoteSoundEffectSoundPresetChain; // 0xd08 (0x8)
	struct TMap<int, class UMeshComponent*> EmoteMeshComps; // 0xd10 (0x50)
	struct TMap<int, class AActor*> EmotePropActors; // 0xd60 (0x50)
	struct TMap<int, class UParticleSystemComponent*> EmoteParticleSystemComps; // 0xdb0 (0x50)
	int EmoteCount; // 0xe00 (0x4)
	float LastEmoteTime; // 0xe04 (0x4)
	float LastEmoteEndTime; // 0xe08 (0x4)
	unsigned char unreflected_e0c[0x4]; // 0xe0c (0x4) 
	class UFortItemDefinition* LastEmoteItemDef; // 0xe10 (0x8)
	class UFortItemDefinition* LastReplicatedEmoteExecuted; // 0xe18 (0x8)
	bool bFireBlockedByEmoteCooldown; // 0xe20 (0x1)
	unsigned char unreflected_e21[0x3]; // 0xe21 (0x3) 
	float EmoteToFireCooldownTime; // 0xe24 (0x4)
	float EmoteWalkSpeed; // 0xe28 (0x4)
	unsigned char unreflected_e2c[0x4]; // 0xe2c (0x4) 
	struct TArray<class UActorComponent*> DynamicComponents; // 0xe30 (0x10)
	struct TArray<class UFortGameplayModifierItemDefinition*> AdditionalModifierDefinitions; // 0xe40 (0x10)
	struct FMulticastInlineDelegate OnPawnTeleported; // 0xe50 (0x10)
	struct FMulticastInlineDelegate OnPawnLanded; // 0xe60 (0x10)
	struct FMulticastInlineDelegate OnPawnStartedEmote; // 0xe70 (0x10)
	struct FMulticastInlineDelegate OnPawnStoppedEmote; // 0xe80 (0x10)
	struct FMulticastInlineDelegate OnHitPawn; // 0xe90 (0x10)
	struct FMulticastInlineDelegate OnDied; // 0xea0 (0x10)
	struct FMulticastInlineDelegate OnDeathEffects; // 0xeb0 (0x10)
	unsigned char unreflected_ec0[0x30]; // 0xec0 (0x30) 
	struct FMulticastInlineDelegate OnDamaged; // 0xef0 (0x10)
	struct FMulticastInlineDelegate OnDidDamage; // 0xf00 (0x10)
	unsigned char unreflected_f10[0x10]; // 0xf10 (0x10) 
	class UFortEmoteComponent* EmoteComponent; // 0xf20 (0x8)
	class UFortFootstepAudioBank* FootstepBank; // 0xf28 (0x8)
	unsigned char unreflected_f30[0x20]; // 0xf30 (0x20) 
	struct FVector CachedStepSurfaceNormal; // 0xf50 (0x18)
	class UFortFoleyFootstepContext* FoleyFootstepContext; // 0xf68 (0x8)
	class UFortFoleyHitContext* FoleyHitContext; // 0xf70 (0x8)
	struct FMulticastInlineDelegate OnWeaponEquippedDelegate; // 0xf78 (0x10)
	struct FMulticastInlineDelegate OnWeaponUnEquippedDelegate; // 0xf88 (0x10)
	struct FMulticastInlineDelegate OnWeaponAttachmentChangedDelegate; // 0xf98 (0x10)
	class UClass* HealthRegenDelayGameplayEffect; // 0xfa8 (0x8)
	class UClass* HealthRegenGameplayEffect; // 0xfb0 (0x8)
	class UClass* ShieldRegenDelayGameplayEffect; // 0xfb8 (0x8)
	class UClass* ShieldRegenGameplayEffect; // 0xfc0 (0x8)
	class UClass* CurrentWeaponAnimLayerOverlayClass; // 0xfc8 (0x8)
	struct FMulticastInlineDelegate OnHolsteredEvent; // 0xfd0 (0x10)
	struct FMulticastInlineDelegate OnUnholsteredEvent; // 0xfe0 (0x10)
	unsigned char unreflected_ff0[0x18]; // 0xff0 (0x18) 
	int WeaponHolsterCounter; // 0x1008 (0x4)
	unsigned char unreflected_100c[0x4]; // 0x100c (0x4) 
	struct TArray<struct FName> WeaponHolsterIds; // 0x1010 (0x10)
	float StaySpottedTime; // 0x1020 (0x4)
	struct FName SpottedEvent; // 0x1024 (0x4)
	class UFortFeedbackBank* DefaultFeedback; // 0x1028 (0x8)
	struct TArray<class AFortEmitterCameraLensEffectDirectional*> ActiveSoundIndicators; // 0x1030 (0x10)
	class UClass* DefaultSoundTrackingVisual; // 0x1040 (0x8)
	struct FGameplayTagContainer SoundTrackingVisibilityTags; // 0x1048 (0x20)
	struct TMap<enum EFortSoundIndicatorTypes, float> PriorityModifiers; // 0x1068 (0x50)
	struct TArray<struct FFortPawnVocalChord> VocalChords; // 0x10b8 (0x10)
	unsigned char unreflected_10c8[0x58]; // 0x10c8 (0x58) 
	bool bIsDisconnectedPawn; // 0x1120 (0x1)
	unsigned char unreflected_1121[0x3]; // 0x1121 (0x3) 
	struct FActiveGameplayEffectHandle* MaxHealthApplicationHandle; // 0x1124 (0x8)
	unsigned char unreflected_112c[0x4]; // 0x112c (0x4) 
	class UClass* MaxHealthApplicationGameplayEffect; // 0x1130 (0x8)
	class UFortHealthSet* HealthSet; // 0x1138 (0x8)
	class UFortControlResistanceSet* ControlResistanceSet; // 0x1140 (0x8)
	class UFortDamageSet* DamageSet; // 0x1148 (0x8)
	class UFortMovementSet* MovementSet; // 0x1150 (0x8)
	class UFortAdvancedMovementSet* AdvancedMovementSet; // 0x1158 (0x8)
	unsigned char unreflected_1160[0x8]; // 0x1160 (0x8) 
	struct FMulticastInlineDelegate OnAbilityDecisionWindowStackUpdated; // 0x1168 (0x10)
	unsigned char unreflected_1178[0x30]; // 0x1178 (0x30) 
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x11a8 (0x8)
	struct TArray<struct FFortActiveMontageDecisionWindow> DecisionWindowStack; // 0x11b0 (0x10)
	struct FGameplayTagContainer GameplayTags; // 0x11c0 (0x20)
	struct FText DisplayName; // 0x11e0 (0x18)
	struct TArray<struct FDamagerInfo> Damagers; // 0x11f8 (0x10)
	struct TArray<struct FDamageDoneSourceInfo> TotalDamageDoneTrackers; // 0x1208 (0x10)
	struct TArray<struct FDamageDoneTargetInfo> TargetDamageDoneTrackers; // 0x1218 (0x10)
	struct TArray<struct FDamageDoneSourceInfo> TotalDamageTakenTrackers; // 0x1228 (0x10)
	struct TArray<struct FDamageDoneTargetInfo> TargetDamageTakenTrackers; // 0x1238 (0x10)
	float DamageDoneLastAtTime; // 0x1248 (0x4)
	float DamageTakenLastAtTime; // 0x124c (0x4)
	float LastHitTime; // 0x1250 (0x4)
	float TotalPlayerDamageDealt; // 0x1254 (0x4)
	class UFortHealthBarIndicator* HealthBarIndicator; // 0x1258 (0x8)
	struct FGameplayTag CurrentCalloutTag; // 0x1260 (0x4)
	unsigned char unreflected_1264[0x4]; // 0x1264 (0x4) 
	struct TArray<struct FCalloutEntry> CalloutEntries; // 0x1268 (0x10)
	float HealthBarWidth; // 0x1278 (0x4)
	float HealthBarHeightMultiplier; // 0x127c (0x4)
	unsigned char unreflected_1280[0x10]; // 0x1280 (0x10) 
	struct FSlateBrush SpottedBrush; // 0x1290 (0xc0)
	struct FVector SpottedIconOffset; // 0x1350 (0x18)
	int ClientNonRenderedAnimUpdateRate; // 0x1368 (0x4)
	int MaxEvalRateForInterpolation; // 0x136c (0x4)
	struct TArray<float> AnimUpdateRateVisibleMaxDistanceFactor; // 0x1370 (0x10)
	struct TMap<int, int> LODToFrameSkipMap; // 0x1380 (0x50)
	unsigned char unreflected_13d0[0x10]; // 0x13d0 (0x10) 
	struct FFortConversationSentence CurrentSentence; // 0x13e0 (0xc0)
	unsigned char unreflected_14a0[0x18]; // 0x14a0 (0x18) 
	struct FMulticastInlineDelegate OnPawnHealthChanged; // 0x14b8 (0x10)
	struct FMulticastInlineDelegate OnPawnMaxOvershieldChanged; // 0x14c8 (0x10)
	struct FAthenaBatchedDamageGameplayCues_Shared AccumulatedBatchDataShared; // 0x14d8 (0x78)
	struct FAthenaBatchedDamageGameplayCues_NonShared AccumulatedBatchDataNonShared; // 0x1550 (0x10)
	unsigned char unreflected_1560[0x8]; // 0x1560 (0x8) 
	struct FGameplayCueParameters BatchedGameplayCueParameters; // 0x1568 (0xd0)
	struct FGameplayTagContainer ReplayItemActions; // 0x1638 (0x20)
	unsigned char unreflected_1658[0x20]; // 0x1658 (0x20) 
	struct FGameplayTagContainer HidingVisibilityTags; // 0x1678 (0x20)
	struct FGameplayTagContainer HidingTransitionVisibilityTags; // 0x1698 (0x20)
	class UPegasusGameEventCollector* PegasusTimelineCollector; // 0x16b8 (0x8)
	class UFortAthenaAILODComponent* AILODComponent; // 0x16c0 (0x8)
	unsigned char unreflected_16c8[0x20]; // 0x16c8 (0x20) 
	struct FClientAILODSettings ClientAILODSettings; // 0x16e8 (0x2f0)
	struct FGameplayTag FallbackTag; // 0x19d8 (0x4)
	unsigned char unreflected_19dc[0x4]; // 0x19dc (0x4) 
	struct FString DebugType; // 0x19e0 (0x10)
	struct TMap<uint32_t, struct FRecordedGunshot> RecordedGunshots; // 0x19f0 (0x50)
	unsigned char unreflected_1a40[0x40]; // 0x1a40 (0x40) 
	struct FMulticastInlineDelegate OnPawnComponentAttachedEvent; // 0x1a80 (0x10)
	unsigned char unreflected_1a90[0x30]; // 0x1a90 (0x30) 
	struct TArray<class ABuildingActor*> OverlappingBuildings; // 0x1ac0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPawn.WillFallFromHeightCauseDamage (Underlying native function: WillFallFromHeightCauseDamage 0x8ac6cfc)
	bool WillFallFromHeightCauseDamage(float& FallDistance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.WasDBNOOnDeath (Underlying native function: WasDBNOOnDeath 0x286fc7c)
	bool WasDBNOOnDeath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.UnlinkAnimLayer (Underlying native function: UnlinkAnimLayer 0x8ac6c5c)
	void UnlinkAnimLayer(class UClass*& AnimLayer); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.TriggerFeedbackEvent (Underlying native function: TriggerFeedbackEvent 0x8ac6a74)
	void TriggerFeedbackEvent(struct FName& EventName, class AFortPawn*& InstigatorPawn, class AFortPawn*& Recipient, float& OverriddenDelay); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.TriggerAnimInputEvent (Underlying native function: TriggerAnimInputEvent 0x142682c)
	void TriggerAnimInputEvent(class UFortAnimInputEvent*& AnimInputEvent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.TimeFromJumpApex (Underlying native function: TimeFromJumpApex 0x8ac6a4c)
	float TimeFromJumpApex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.StopSpinning (Underlying native function: StopSpinning 0x8ac6a20)
	void StopSpinning(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.StopPushMomentum (Underlying native function: StopPushMomentum 0x8ac6a0c)
	void StopPushMomentum(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.StopBatchedLoopingWeaponActivation (Underlying native function: StopBatchedLoopingWeaponActivation 0x8ac69e4)
	void StopBatchedLoopingWeaponActivation(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.StartSpinning (Underlying native function: StartSpinning 0x8ac68d4)
	void StartSpinning(float& Value, bool& bFallingOnly, bool& bAdjustForInputYawScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.StartPushMomentum (Underlying native function: StartPushMomentum 0x8ac67f8)
	void StartPushMomentum(struct FVector& NewPushMomentum, float& Duration); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnSoundLensEffectDirectional (Underlying native function: SpawnSoundLensEffectDirectional 0x8ac6538)
	class AFortSoundCameraLensEffect* SpawnSoundLensEffectDirectional(class AActor*& TrackedActor, struct FVector& HitInfo, float& MaxAudibleDistance, enum EFortSoundIndicatorTypes& IndicatorType, class AActor*& InstigatingActor, struct FLinearColor& Tint, class UTexture*& OverrideIcon); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnPooledGenericCameraLensEffectDirectional (Underlying native function: SpawnPooledGenericCameraLensEffectDirectional 0x8ac63bc)
	struct TScriptInterface<class ICameraLensEffectInterface> SpawnPooledGenericCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bShouldActivate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnPooledCameraLensEffectDirectional (Underlying native function: SpawnPooledCameraLensEffectDirectional 0x8ac6210)
	class AFortEmitterCameraLensEffectDirectional* SpawnPooledCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bShouldActivate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnGenericCameraLensEffectDirectional (Underlying native function: SpawnGenericCameraLensEffectDirectional 0x8ac5f00)
	struct TScriptInterface<class ICameraLensEffectInterface> SpawnGenericCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bDeferSpawn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnGenericCameraLensEffect (Underlying native function: SpawnGenericCameraLensEffect 0x8ac5e68)
	struct TScriptInterface<class ICameraLensEffectInterface> SpawnGenericCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnCameraLensEffectDirectional (Underlying native function: SpawnCameraLensEffectDirectional 0x8ac5cf8)
	class AFortEmitterCameraLensEffectDirectional* SpawnCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bDeferSpawn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnCameraLensEffect (Underlying native function: SpawnCameraLensEffect 0x8ac5c4c)
	class AEmitterCameraLensEffectBase* SpawnCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ShouldDie (Underlying native function: ShouldDie 0x8ac5ab8)
	bool ShouldDie(float& Damage, class AController*& EventInstigator, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.SetTurnTransitionActiveAndControllingRotation (Underlying native function: SetTurnTransitionActiveAndControllingRotation 0x8ac577c)
	void SetTurnTransitionActiveAndControllingRotation(bool& bInControl); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetSpawnSpot (Underlying native function: SetSpawnSpot 0x8ac56f8)
	void SetSpawnSpot(class AActor*& InSpawnSpot); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetSignalInStorm (Underlying native function: SetSignalInStorm 0x8ac55a0)
	void SetSignalInStorm(float& NewSignalInStormValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetShield (Underlying native function: SetShield 0x8ac548c)
	void SetShield(float& NewShieldValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetPawnVisibilityControllerOnly (Underlying native function: SetPawnVisibilityControllerOnly 0x8ac52a8)
	void SetPawnVisibilityControllerOnly(bool& bNewHidden, bool& bPropagateToWeapon); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetPawnVisibility (Underlying native function: SetPawnVisibility 0x8ac51dc)
	void SetPawnVisibility(bool& bNewHidden, bool& bPropagateToWeapon); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetPawnAndControlRotation (Underlying native function: SetPawnAndControlRotation 0x8ac514c)
	void SetPawnAndControlRotation(struct FRotator& NewRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMovementSpeedMultiplier (Underlying native function: SetMovementSpeedMultiplier 0x8ac4f4c)
	void SetMovementSpeedMultiplier(float& NewMovementSpeedVal); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxSignalInStorm (Underlying native function: SetMaxSignalInStorm 0x8ac4d38)
	void SetMaxSignalInStorm(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxShield (Underlying native function: SetMaxShield 0x8ac4cb4)
	void SetMaxShield(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxOvershield (Underlying native function: SetMaxOvershield 0x8ac4c30)
	void SetMaxOvershield(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxHealth (Underlying native function: SetMaxHealth 0x8ac4bac)
	void SetMaxHealth(float& NewHealthVal); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetIsSkating (Underlying native function: SetIsSkating 0x8ac4a74)
	void SetIsSkating(bool& bNewIsSkating); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetIsKnockedBack (Underlying native function: SetIsKnockedBack 0x8ac49dc)
	void SetIsKnockedBack(bool& bKnockback); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetIsInGoop (Underlying native function: SetIsInGoop 0x8ac495c)
	void SetIsInGoop(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetInVortexWithSpin (Underlying native function: SetInVortexWithSpin 0x8ac4620)
	void SetInVortexWithSpin(bool& bNewValue, float& UpwardLaunchVelocity, float& GravityFloorAltitude, float& GravityFloorWidth, float& GravityFloorGravityScalar, float& GravityFloorTerminalVelocity, struct FVector& SpinCenter, float& SpinRadius, float& SpinVelocity); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetInVortexVolume (Underlying native function: SetInVortexVolume 0x8ac4344)
	void SetInVortexVolume(bool& bIsInVortexVolume, float& UpwardLaunchVelocity, struct FTransform& VolumeTransform, float& VolumeThickness, float& GravityScalar, float& VolumeEdgeTerminalVelocity, bool& bCanDeployGlider); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetInVortex (Underlying native function: SetInVortex 0x8ac412c)
	void SetInVortex(bool& bNewValue, float& UpwardLaunchVelocity, float& GravityFloorAltitude, float& GravityFloorWidth, float& GravityFloorGravityScalar, float& GravityFloorTerminalVelocity, bool& bCanDeployGlider); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetHolsterWeapon (Underlying native function: SetHolsterWeapon 0x8ac3fd4)
	void SetHolsterWeapon(bool& bHolster, bool& bPlayEquipAnim, struct FName& HolsterId, bool& bForce); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetHealth (Underlying native function: SetHealth 0x8ac3f50)
	void SetHealth(float& NewHealthVal); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetGravityMultiplier (Underlying native function: SetGravityMultiplier 0x8ac3ec8)
	void SetGravityMultiplier(float& NewGravityVal); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetGravityJumpMultipliers (Underlying native function: SetGravityJumpMultipliers 0x8ac3d3c)
	void SetGravityJumpMultipliers(float& NewGravityVal, float& NewVehicleGravityVal, float& NewJumpZ, float& NewJumpHorizontalAcceleration, float& NewJumpHorizontalVelocity); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetFNameBasedOnHitDirection (Underlying native function: SetFNameBasedOnHitDirection 0x8ac3a30)
	void SetFNameBasedOnHitDirection(struct FVector& HitDirection, struct FName& NameResult, struct FName& NameFront, struct FName& NameBack, struct FName& NameLeft, struct FName& NameRight); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetFallingHeight (Underlying native function: SetFallingHeight 0x8ac3c14)
	void SetFallingHeight(float& FromHeight); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetCurrentOvershield (Underlying native function: SetCurrentOvershield 0x8ac3690)
	void SetCurrentOvershield(float& NewShieldValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetControlRecoveryBehavior (Underlying native function: SetControlRecoveryBehavior 0x8ac3594)
	void SetControlRecoveryBehavior(enum EFortControlRecoveryBehavior& NewBehavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetCommonWaterFXParams (Underlying native function: SetCommonWaterFXParams 0x8ac3278)
	bool SetCommonWaterFXParams(class UFXSystemComponent*& FXComponent, bool& bUpdateWaveData, bool& bUpdatePlaneData, bool& bUpdateSurfaceData); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetCallout (Underlying native function: SetCallout 0x8ac2f80)
	void SetCallout(struct FGameplayTag& CalloutTagToSet, float& Duration); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetAimAssistTargetOverride (Underlying native function: SetAimAssistTargetOverride 0x8ac2dd8)
	void SetAimAssistTargetOverride(class USceneComponent*& InOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ServerTeleportNearLocation (Underlying native function: ServerTeleportNearLocation 0x8ac2adc)
	void ServerTeleportNearLocation(struct FVector& ActorLocation); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPawn.ServerInternalEquipWeapon (Underlying native function: ServerInternalEquipWeapon 0x8ac2a3c)
	void ServerInternalEquipWeapon(class AFortWeapon*& Weap); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPawn.SafeHolsterWeapon (Underlying native function: SafeHolsterWeapon 0x199f01c)
	void SafeHolsterWeapon(bool& bHolster, bool& bPlayEquipAnim, struct FName& HolsterId, bool& bForce); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ResetFallingHeight (Underlying native function: ResetFallingHeight 0x8ac29e4)
	void ResetFallingHeight(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveWeaponTraceIgnoreActor (Underlying native function: RemoveWeaponTraceIgnoreActor 0x8ac2874)
	void RemoveWeaponTraceIgnoreActor(class AActor*& ActorToRemove); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveProjectileIgnoreActor (Underlying native function: RemoveProjectileIgnoreActor 0x8ac26a4)
	void RemoveProjectileIgnoreActor(class AActor*& ActorToRemove); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveNonReplicatedTagToPawn (Underlying native function: RemoveNonReplicatedTagToPawn 0x8ac25e0)
	void RemoveNonReplicatedTagToPawn(struct FGameplayTag& tag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveCallout (Underlying native function: RemoveCallout 0x8ac23e4)
	void RemoveCallout(struct FGameplayTag& CalloutTagToRemove); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RegisterAdditionalGameplayModifiers (Underlying native function: RegisterAdditionalGameplayModifiers 0x8181cf4)
	void RegisterAdditionalGameplayModifiers(struct TArray<class UFortGameplayModifierItemDefinition*>& ModifierDefinitions); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PrototypeCharacterMovement (Underlying native function: PrototypeCharacterMovement 0x8ac2308)
	void PrototypeCharacterMovement(struct TEnumAsByte<EMovementMode>& MovementMode, struct FVector& LaunchVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PooledNiagaraCameraLensEffectCompleted (Underlying native function: PooledNiagaraCameraLensEffectCompleted 0x8ac2284)
	void PooledNiagaraCameraLensEffectCompleted(class UNiagaraComponent*& FinishedComponent); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.PooledCascadeCameraLensEffectCompleted (Underlying native function: PooledCascadeCameraLensEffectCompleted 0x8ac2160)
	void PooledCascadeCameraLensEffectCompleted(class UParticleSystemComponent*& FinishedComponent); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.PlaySwimmingSound (Underlying native function: PlaySwimmingSound 0x8ac20e0)
	void PlaySwimmingSound(struct TEnumAsByte<EFortSwimmingAudioType>& SoundType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PlaySound (Underlying native function: PlaySound 0x8ac1fe4)
	void PlaySound(class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPawn.PlayLocalAnimMontage (Underlying native function: PlayLocalAnimMontage 0x1affa54)
	float PlayLocalAnimMontage(class UAnimMontage*& NewAnimMontage, float& InPlayRate, struct FName& StartSectionName, bool& bNoBlend); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PlayFootStepSound (Underlying native function: PlayFootStepSound 0xf7a298)
	void PlayFootStepSound(int& FootDown); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PickUpActor (Underlying native function: PickUpActor 0x8ac1f18)
	bool PickUpActor(class AActor*& PickupTarget, class UFortDecoItemDefinition*& PlacementDecoItemDefinition); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PawnUniqueIDSet (Has no native function)
	void PawnUniqueIDSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.PawnStopFire (Underlying native function: PawnStopFire 0x8ac1e94)
	void PawnStopFire(unsigned char& FireModeNum); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PawnStartFire (Underlying native function: PawnStartFire 0x8ac1e10)
	void PawnStartFire(unsigned char& FireModeNum); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.OnWeaponEquipped (Has no native function)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnTeleported (Has no native function)
	void OnTeleported(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnStunned (Has no native function)
	void OnStunned(); // (BlueprintAuthorityOnly | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnSlidingStateChanged (Has no native function)
	void OnSlidingStateChanged(bool& bNewSlidingState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnRep_WeaponActivated (Underlying native function: OnRep_WeaponActivated 0x29cdd78)
	void OnRepWeaponActivated(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_VocalChords (Underlying native function: OnRep_VocalChords 0x23d873c)
	void OnRepVocalChords(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_TeleportCounter (Underlying native function: OnRep_TeleportCounter 0x2ab0d84)
	void OnRepTeleportCounter(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_SynchedActionWarpPointInfo (Underlying native function: OnRep_SynchedActionWarpPointInfo 0x27b897c)
	void OnRepSynchedActionWarpPointInfo(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_StormShieldComponent (Underlying native function: OnRep_StormShieldComponent 0x8ac1b04)
	void OnRepStormShieldComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_Sentence (Underlying native function: OnRep_Sentence 0x8ac1adc)
	void OnRepSentence(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedWaterBody (Underlying native function: OnRep_ReplicatedWaterBody 0x2755ad4)
	void OnRepReplicatedWaterBody(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedSkyTube (Underlying native function: OnRep_ReplicatedSkyTube 0x8ac1ac8)
	void OnRepReplicatedSkyTube(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedIsInVortex (Underlying native function: OnRep_ReplicatedIsInVortex 0x8ac1ab4)
	void OnRepReplicatedIsInVortex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedIsInGoop (Underlying native function: OnRep_ReplicatedIsInGoop 0x8ac1aa0)
	void OnRepReplicatedIsInGoop(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_PushMomentum (Underlying native function: OnRep_PushMomentum 0x8ac1a8c)
	void OnRepPushMomentum(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawn.OnRep_PawnUniqueID (Underlying native function: OnRep_PawnUniqueID 0x246a2b0)
	void OnRepPawnUniqueID(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_MovingEmoteFollowingOnly (Underlying native function: OnRep_MovingEmoteFollowingOnly 0x8ac1a74)
	void OnRepMovingEmoteFollowingOnly(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_MovingEmote (Underlying native function: OnRep_MovingEmote 0x2a7b1a4)
	void OnRepMovingEmote(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_LastReplicatedEmoteExecuted (Underlying native function: OnRep_LastReplicatedEmoteExecuted 0x1be8894)
	void OnRepLastReplicatedEmoteExecuted(class UFortItemDefinition*& PreviousValue); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_LandingFlashCount (Underlying native function: OnRep_LandingFlashCount 0x18dbfd0)
	void OnRepLandingFlashCount(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_JumpFlashCount (Underlying native function: OnRep_JumpFlashCount 0x18dbf68)
	void OnRepJumpFlashCount(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSynchedAction (Underlying native function: OnRep_IsSynchedAction 0x23a6530)
	void OnRepIsSynchedAction(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSwinging (Underlying native function: OnRep_IsSwinging 0x8ac1a48)
	void OnRepIsSwinging(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSlopeSliding (Underlying native function: OnRep_IsSlopeSliding 0x25dd0e4)
	void OnRepIsSlopeSliding(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSliding (Underlying native function: OnRep_IsSliding 0x24037b8)
	void OnRepIsSliding(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSkating (Underlying native function: OnRep_IsSkating 0x8ac1a30)
	void OnRepIsSkating(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsKnockedBack (Underlying native function: OnRep_IsKnockedBack 0x8ac1a18)
	void OnRepIsKnockedBack(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsJumping (Underlying native function: OnRep_IsJumping 0x250d080)
	void OnRepIsJumping(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsDBNO (Underlying native function: OnRep_IsDBNO 0x1603af4)
	void OnRepIsDBNO(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_EmoteWalkSpeed (Underlying native function: OnRep_EmoteWalkSpeed 0x2b13850)
	void OnRepEmoteWalkSpeed(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_DamageZoneActiveBitMask (Underlying native function: OnRep_DamageZoneActiveBitMask 0x8ac19a8)
	void OnRepDamageZoneActiveBitMask(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_CurrentWeapon (Underlying native function: OnRep_CurrentWeapon 0x150684c)
	void OnRepCurrentWeapon(class AFortWeapon*& OldWeapon); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_ClientAILODSettings (Underlying native function: OnRep_ClientAILODSettings 0x2107254)
	void OnRepClientAILODSettings(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawn.OnRep_bWeaponHolstered (Underlying native function: OnRep_bWeaponHolstered 0x1508c8c)
	void OnRepbWeaponHolstered(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_bIsInvulnerable (Underlying native function: OnRep_bIsInvulnerable 0x869fc98)
	void OnRepbIsInvulnerable(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnOutOfControlResistanceServer (Has no native function)
	void OnOutOfControlResistanceServer(float& ImpactDamageDone, struct FGameplayTagContainer& SourceTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EffectInstigator, class AActor*& EffectCauser); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnMovementStyleChanged (Has no native function)
	void OnMovementStyleChanged(struct TEnumAsByte<EFortMovementStyle>& PreviousMovementStyle, struct TEnumAsByte<EFortMovementStyle>& NewMovementStyle); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnMontageStarted (Underlying native function: OnMontageStarted 0x10ffdf4)
	void OnMontageStarted(class UAnimMontage*& Montage); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnMontageEnded (Underlying native function: OnMontageEnded 0x10ff818)
	void OnMontageEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x1117eb4)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnlySpinWhenFalling (Underlying native function: OnlySpinWhenFalling 0x8ac1df8)
	bool OnlySpinWhenFalling(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnEndWaterInteraction (Has no native function)
	void OnEndWaterInteraction(struct FVector& PreviousWaterSurfaceLocation, float& WaterDepth); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDisplaySentence (Has no native function)
	void OnDisplaySentence(struct FText& SpeechText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDisplayHitNotify (Has no native function)
	void OnDisplayHitNotify(float& DamageDealt, bool& bCriticalHit, bool& bFatalHit, bool& bShieldHit, class AActor*& HitActor, struct FGameplayTagContainer& HitTags, struct FVector& HitLocation); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDeathPlayEffects (Underlying native function: OnDeathPlayEffects 0x154e87c)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDamageZoneStatusChanged (Has no native function)
	void OnDamageZoneStatusChanged(struct TEnumAsByte<EFortDamageZone>& Zone, bool& bStatus); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDamageServer (Has no native function)
	void OnDamageServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnClearSentence (Has no native function)
	void OnClearSentence(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBumpPushedPawn (Has no native function)
	void OnBumpPushedPawn(class AFortPawn*& InstigatedBy, float& PushTimeLeft); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBuildingHitPlayEffects (Has no native function)
	void OnBuildingHitPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, struct FGameplayEffectContextHandle& EffectContext, bool& bPlayerPlaced); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBeginWaterInteraction (Has no native function)
	void OnBeginWaterInteraction(struct FVector& WaterSurfaceLocation, float& WaterDepth); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBaseChanged (Has no native function)
	void OnBaseChanged(class AActor*& NewBase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnAnimInputEvent (Has no native function)
	void OnAnimInputEvent(class UFortAnimInputEvent*& AnimInputEvent); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnAllMontageInstancesEnded (Underlying native function: OnAllMontageInstancesEnded 0x24c022c)
	void OnAllMontageInstancesEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCuesExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted_WithParams 0x8ac1618)
	void NetMulticastInvokeGameplayCuesExecutedWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCuesExecuted (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted 0x8ac1434)
	void NetMulticastInvokeGameplayCuesExecuted(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams 0x8ac1278)
	void NetMulticastInvokeGameplayCuesAddedAndWhileActiveWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_WithParams 0x21c1ab4)
	void NetMulticastInvokeGameplayCueExecutedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueExecuted_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_FromSpec 0xe8f460)
	void NetMulticastInvokeGameplayCueExecutedFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueExecuted (Underlying native function: NetMulticast_InvokeGameplayCueExecuted 0x8ac10e4)
	void NetMulticastInvokeGameplayCueExecuted(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams 0x8ac0f78)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec 0x8ac0e78)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAdded_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAdded_WithParams 0x11165e0)
	void NetMulticastInvokeGameplayCueAddedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& Parameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAdded (Underlying native function: NetMulticast_InvokeGameplayCueAdded 0x8ac0ce4)
	void NetMulticastInvokeGameplayCueAdded(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_Athena_BatchedDamageCues (Underlying native function: NetMulticast_Athena_BatchedDamageCues 0x20833c4)
	void NetMulticastAthenaBatchedDamageCues(struct FAthenaBatchedDamageGameplayCues_Shared& SharedData, struct FAthenaBatchedDamageGameplayCues_NonShared& NonSharedData); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.MulticastUnlinkAnimLayer (Underlying native function: MulticastUnlinkAnimLayer 0x23999ac)
	void MulticastUnlinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.MulticastLinkAnimLayer (Underlying native function: MulticastLinkAnimLayer 0x23d4fcc)
	void MulticastLinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.MovingEmoteStopped (Underlying native function: MovingEmoteStopped 0x273fd14)
	void MovingEmoteStopped(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.MaxHealthStateChanged (Underlying native function: MaxHealthStateChanged 0x264d654)
	void MaxHealthStateChanged(bool& bIsMaxHealth); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.LogChugSplashEvent (Underlying native function: LogChugSplashEvent 0x273fd14)
	void LogChugSplashEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.LinkAnimLayer (Underlying native function: LinkAnimLayer 0x2c2bf1c)
	void LinkAnimLayer(class UClass*& AnimLayer); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.LaunchCharacterJump (Underlying native function: LaunchCharacterJump 0x8ac0b3c)
	void LaunchCharacterJump(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride, bool& bIgnoreFallDamage, bool& bPlayFeedbackEvent); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.KillDisconnectedPawn (Underlying native function: KillDisconnectedPawn 0x8ac0b28)
	void KillDisconnectedPawn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.IsWeaponHolstered (Underlying native function: IsWeaponHolstered 0x8ac0914)
	bool IsWeaponHolstered(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsWeaponHiddenByHolstering (Underlying native function: IsWeaponHiddenByHolstering 0x8ac08f4)
	bool IsWeaponHiddenByHolstering(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsTurnTransitionActiveAndControllingRotation (Underlying native function: IsTurnTransitionActiveAndControllingRotation 0x8ac08c0)
	bool IsTurnTransitionActiveAndControllingRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsSurfaceSwimming (Underlying native function: IsSurfaceSwimming 0x23d77ec)
	bool IsSurfaceSwimming(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsStaggered (Underlying native function: IsStaggered 0x8ac08a0)
	bool IsStaggered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsSpinning (Underlying native function: IsSpinning 0x8ac087c)
	bool IsSpinning(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsSlidingEnabled (Underlying native function: IsSlidingEnabled 0x8ac0858)
	bool IsSlidingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInVortex (Underlying native function: IsInVortex 0x8ac071c)
	bool IsInVortex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInSkyTube (Underlying native function: IsInSkyTube 0x8ac0700)
	bool IsInSkyTube(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInsideHidingProp (Underlying native function: IsInsideHidingProp 0x8ac0738)
	bool IsInsideHidingProp(bool& bIncludeTransition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInGoop (Underlying native function: IsInGoop 0x8ac06e4)
	bool IsInGoop(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsFrontalHit (Underlying native function: IsFrontalHit 0x8ac062c)
	bool IsFrontalHit(struct FVector& HitDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsForciblyWadingInWater (Underlying native function: IsForciblyWadingInWater 0x8ac0608)
	bool IsForciblyWadingInWater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsDead (Underlying native function: IsDead 0x1605858)
	bool IsDead(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsDBNO (Underlying native function: IsDBNO 0x2d7add0)
	bool IsDBNO(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsAllowChainStun (Underlying native function: IsAllowChainStun 0x8ac05c8)
	bool IsAllowChainStun(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsActionInputIgnored (Underlying native function: IsActionInputIgnored 0x8ac05a0)
	bool IsActionInputIgnored(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.InitializeDeathHitSocket (Underlying native function: InitializeDeathHitSocket 0x8ac04b4)
	void InitializeDeathHitSocket(struct FVector& WorldLocation, struct FVector& WorldNormal); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.HideBodyOnDeath (Underlying native function: HideBodyOnDeath 0x8ac0430)
	void HideBodyOnDeath(bool& bDeathAnimationPlayed); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.HasCurrentMontage (Underlying native function: HasCurrentMontage 0x8ac03a8)
	bool HasCurrentMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.HandleIsHiddenForDeath (Underlying native function: HandleIsHiddenForDeath 0x160472c)
	void HandleIsHiddenForDeath(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.HandleIsDying (Underlying native function: HandleIsDying 0x13e2ea0)
	void HandleIsDying(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.GetWaterImmersionDepth (Underlying native function: GetWaterImmersionDepth 0x8ac00d8)
	float GetWaterImmersionDepth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetTeam (Underlying native function: GetTeam 0x25823dc)
	unsigned char GetTeam(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetTargetingTransform (Underlying native function: GetTargetingTransform 0x8abff98)
	struct FTransform GetTargetingTransform(enum EFortAbilityTargetingSource& Source, class UFortGameplayAbility*& SourceAbility); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSwingingDistanceToGround (Underlying native function: GetSwingingDistanceToGround 0x8abff70)
	float GetSwingingDistanceToGround(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetSwingAttachLocation (Underlying native function: GetSwingAttachLocation 0x82a92a4)
	struct FVector GetSwingAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSurfaceTrackingComponent (Underlying native function: GetSurfaceTrackingComponent 0x8abff4c)
	class UFortSurfaceTrackingComponent* GetSurfaceTrackingComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSphericalHitDirection (Underlying native function: GetSphericalHitDirection 0x8abfe1c)
	void GetSphericalHitDirection(struct FVector& HitDirection, float& Azimuth, float& Elevation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSlopeSlidingNormal (Underlying native function: GetSlopeSlidingNormal 0x8abfd74)
	struct FVector GetSlopeSlidingNormal(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSlopeSlidingAngles (Underlying native function: GetSlopeSlidingAngles 0x8abfc9c)
	void GetSlopeSlidingAngles(float& LocalPitch, float& LocalRoll); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSignalInStorm (Underlying native function: GetSignalInStorm 0x8abfb60)
	float GetSignalInStorm(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetShieldPercent (Underlying native function: GetShieldPercent 0x8abfb34)
	float GetShieldPercent(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortPawn.GetShieldOrHealthPercent (Underlying native function: GetShieldOrHealthPercent 0x8abfb0c)
	float GetShieldOrHealthPercent(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.GetShield (Underlying native function: GetShield 0x283cbbc)
	float GetShield(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetProjectileIgnoredActors (Underlying native function: GetProjectileIgnoredActors 0x8abf9e4)
	struct TArray<class AActor*> GetProjectileIgnoredActors(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetPawnMID (Underlying native function: GetPawnMID 0x8abf958)
	class UMaterialInstanceDynamic* GetPawnMID(int& ElementIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetOvershieldPercent (Underlying native function: GetOvershieldPercent 0x8abf92c)
	float GetOvershieldPercent(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortPawn.GetOvershield (Underlying native function: GetOvershield 0x8abf900)
	float GetOvershield(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMyMovementBaseActor (Underlying native function: GetMyMovementBaseActor 0x8abf8d4)
	class AActor* GetMyMovementBaseActor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetMovementPredictionPosition (Underlying native function: GetMovementPredictionPosition 0x8abf72c)
	struct FVector GetMovementPredictionPosition(float& PredictionDeltaTime); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMeleeReticleStrikeAngle (Underlying native function: GetMeleeReticleStrikeAngle 0x8abf69c)
	float GetMeleeReticleStrikeAngle(bool& bPrimaryInput); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMeleeComboCounter (Underlying native function: GetMeleeComboCounter 0x8abf654)
	int GetMeleeComboCounter(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxSignalInStorm (Underlying native function: GetMaxSignalInStorm 0x8abf628)
	float GetMaxSignalInStorm(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxShield (Underlying native function: GetMaxShield 0x283cb90)
	float GetMaxShield(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxOvershield (Underlying native function: GetMaxOvershield 0x8abf608)
	float GetMaxOvershield(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxHealth (Underlying native function: GetMaxHealth 0x27d8cb4)
	float GetMaxHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxDistanceWithoutFallDamage (Underlying native function: GetMaxDistanceWithoutFallDamage 0x8abf5d8)
	float GetMaxDistanceWithoutFallDamage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxControlResistance (Underlying native function: GetMaxControlResistance 0x8abf5b8)
	float GetMaxControlResistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetLocalSpin (Underlying native function: GetLocalSpin 0x8abf588)
	float GetLocalSpin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetKnockbackThreshold (Underlying native function: GetKnockbackThreshold 0x8abf55c)
	float GetKnockbackThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetKnockbackMultiplier (Underlying native function: GetKnockbackMultiplier 0x8abf530)
	float GetKnockbackMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIsSwinging (Underlying native function: GetIsSwinging 0x8abf514)
	bool GetIsSwinging(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIsSwingAttached (Underlying native function: GetIsSwingAttached 0x8abf4f4)
	bool GetIsSwingAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIsSlopeSliding (Underlying native function: GetIsSlopeSliding 0x8abf4d8)
	bool GetIsSlopeSliding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIgnoreFallDamageComponentTag (Underlying native function: GetIgnoreFallDamageComponentTag 0x8abf368)
	struct FName GetIgnoreFallDamageComponentTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetHealthPercent (Underlying native function: GetHealthPercent 0x8abf33c)
	float GetHealthPercent(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortPawn.GetHealth (Underlying native function: GetHealth 0x27d8ce0)
	float GetHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetFootstepSurfaceType (Underlying native function: GetFootstepSurfaceType 0x8abf1f8)
	struct TEnumAsByte<EFortFootstepSurfaceType> GetFootstepSurfaceType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetFootstepComponent (Underlying native function: GetFootstepComponent 0x8abf1d4)
	class UFortFootstepComponent* GetFootstepComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetFirstValidEmoteAudioComponent (Underlying native function: GetFirstValidEmoteAudioComponent 0x8abf1ac)
	class UAudioComponent* GetFirstValidEmoteAudioComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetEncounterInfo (Underlying native function: GetEncounterInfo 0x8abf180)
	class UFortAIEncounterInfo* GetEncounterInfo(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetEmotePropAttachMesh (Underlying native function: GetEmotePropAttachMesh 0x8abf158)
	class USkeletalMeshComponent* GetEmotePropAttachMesh(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetEmoteComponent (Underlying native function: GetEmoteComponent 0x8abf140)
	class UFortEmoteComponent* GetEmoteComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetEmoteAudioComponent (Underlying native function: GetEmoteAudioComponent 0x8abf0ac)
	class UAudioComponent* GetEmoteAudioComponent(struct FName& SoundID); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetDefaultTargetingRotation (Underlying native function: GetDefaultTargetingRotation 0x8abeed4)
	struct FRotator GetDefaultTargetingRotation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetDefaultTargetingOrigin (Underlying native function: GetDefaultTargetingOrigin 0x8abee98)
	struct FVector GetDefaultTargetingOrigin(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetDamageZone (Underlying native function: GetDamageZone 0x2767a6c)
	struct TEnumAsByte<EFortDamageZone> GetDamageZone(struct FHitResult& InHitResult); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentWeapon (Underlying native function: GetCurrentWeapon 0x2838a6c)
	class AFortWeapon* GetCurrentWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentWaterBody (Underlying native function: GetCurrentWaterBody 0x240480c)
	class AFortWaterBodyActor* GetCurrentWaterBody(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentSkyTube (Underlying native function: GetCurrentSkyTube 0x8abed90)
	class AFortSkyTube* GetCurrentSkyTube(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentSentenceSpeechText (Underlying native function: GetCurrentSentenceSpeechText 0x8abed1c)
	struct FText GetCurrentSentenceSpeechText(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentOvershield (Underlying native function: GetCurrentOvershield 0x8abecfc)
	float GetCurrentOvershield(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentMontageSectionTimeLeft (Underlying native function: GetCurrentMontageSectionTimeLeft 0x8abecc0)
	float GetCurrentMontageSectionTimeLeft(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetControlResistance (Underlying native function: GetControlResistance 0x8abec88)
	float GetControlResistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetControlRecoveryBehavior (Underlying native function: GetControlRecoveryBehavior 0x8abec70)
	enum EFortControlRecoveryBehavior GetControlRecoveryBehavior(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetAudioParameterComponent (Underlying native function: GetAudioParameterComponent 0x24d102c)
	class UAudioParameterComponent* GetAudioParameterComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetAssetSkeletalMeshComponentAttachment (Underlying native function: GetAssetSkeletalMeshComponentAttachment 0x8abeae8)
	class USkeletalMeshComponent* GetAssetSkeletalMeshComponentAttachment(struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetAllEmoteAudioComponents (Underlying native function: GetAllEmoteAudioComponents 0x8abea70)
	struct TArray<class UAudioComponent*> GetAllEmoteAudioComponents(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GameplayCue_InstantDeath (Underlying native function: GameplayCue_InstantDeath 0x2325f68)
	void GameplayCueInstantDeath(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x161afcc)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GameplayCue (Underlying native function: GameplayCue 0x1116760)
	void GameplayCue(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.ForceKill (Underlying native function: ForceKill 0x8abe910)
	void ForceKill(struct FGameplayTag& DeathReason, class AController*& KillerController, class AActor*& KillerActor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ExitSkyTube (Underlying native function: ExitSkyTube 0x8abe7a0)
	void ExitSkyTube(class AFortSkyTube*& SkyTube, bool& bOutIsLastTube); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EquipWeaponDefinition (Underlying native function: EquipWeaponDefinition 0x8abe634)
	class AFortWeapon* EquipWeaponDefinition(class UFortWeaponItemDefinition*& WeaponData, struct FGuid& ItemEntryGuid, struct FGuid& TrackerGuid, bool& bDisableEquipAnimation); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EquipBestWeapon (Underlying native function: EquipBestWeapon 0x8abe60c)
	bool EquipBestWeapon(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EnterSkyTube (Underlying native function: EnterSkyTube 0x8abe538)
	void EnterSkyTube(class AFortSkyTube*& SkyTube, bool& bOutIsFirstTube); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EmoteStopped (Underlying native function: EmoteStopped 0x8abe4b4)
	void EmoteStopped(class UFortItemDefinition*& MontageItemDef); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EmoteStarted (Underlying native function: EmoteStarted 0x8abe430)
	void EmoteStarted(class UFortItemDefinition*& MontageItemDef); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.DoFatalDamage (Underlying native function: DoFatalDamage 0x8abe2b4)
	void DoFatalDamage(class UAbilitySystemComponent*& KillerAbilitySystemComponent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.DetachAssetFromSocket (Underlying native function: DetachAssetFromSocket 0x23deb28)
	void DetachAssetFromSocket(struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.DestroyDynamicComponent (Underlying native function: DestroyDynamicComponent 0x8abe200)
	bool DestroyDynamicComponent(class UActorComponent*& Component); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ClientInternalEquipWeapon (Underlying native function: ClientInternalEquipWeapon 0x8abe0e4)
	void ClientInternalEquipWeapon(class AFortWeapon*& Weap); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortPawn.ClearEmoteAudioComponents (Underlying native function: ClearEmoteAudioComponents 0x8abe064)
	void ClearEmoteAudioComponents(class UFortItemDefinition*& EmoteItemDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.CanSpawnSoundVisuals (Underlying native function: CanSpawnSoundVisuals 0x8abde88)
	bool CanSpawnSoundVisuals(enum EFortSoundIndicatorTypes& IndicatorType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.BroadcastUnlinkAnimLayer (Underlying native function: BroadcastUnlinkAnimLayer 0x8abdc0c)
	void BroadcastUnlinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.BroadcastLinkAnimLayer (Underlying native function: BroadcastLinkAnimLayer 0x8abdb88)
	void BroadcastLinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AttachAssetToSocket (Underlying native function: AttachAssetToSocket 0x23de950)
	void AttachAssetToSocket(struct FAssetAttachment& InAttachment); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ApplyKnockback (Underlying native function: ApplyKnockback 0x8abd734)
	void ApplyKnockback(float& KnockbackMagnitude, float& KnockbackZAngle, struct FVector& ImpulseDir); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AnimMontage_LocalSetNextSectionName (Underlying native function: AnimMontage_LocalSetNextSectionName 0x8abd614)
	void AnimMontageLocalSetNextSectionName(class UAnimMontage*& AnimMontage, struct FName& SectionName, struct FName& NextSectionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AnimMontage_LocalJumpToSectionName (Underlying native function: AnimMontage_LocalJumpToSectionName 0x8abd588)
	bool AnimMontageLocalJumpToSectionName(struct FName& SectionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AnimMontage_LocalJumpToRandomSection (Underlying native function: AnimMontage_LocalJumpToRandomSection 0x8abd564)
	int AnimMontageLocalJumpToRandomSection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AlignRotationToHitDirection (Underlying native function: AlignRotationToHitDirection 0x8abd4dc)
	void AlignRotationToHitDirection(struct FVector& HitDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddWeaponTraceIgnoreActor (Underlying native function: AddWeaponTraceIgnoreActor 0x8abd3ac)
	void AddWeaponTraceIgnoreActor(class AActor*& ActorToIgnore); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddProjectileIgnoreActor (Underlying native function: AddProjectileIgnoreActor 0x8abd0fc)
	void AddProjectileIgnoreActor(class AActor*& ActorToIgnore); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddNonReplicatedTagToPawn (Underlying native function: AddNonReplicatedTagToPawn 0x8abd034)
	void AddNonReplicatedTagToPawn(struct FGameplayTag& tag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddEmoteAudioComponent (Underlying native function: AddEmoteAudioComponent 0x8abcbf0)
	void AddEmoteAudioComponent(struct FName& SoundID, class UAudioComponent*& AudioComponent, float& FadeOutTime, bool& bPersistsOverMontages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddDynamicComponentByClass (Underlying native function: AddDynamicComponentByClass 0x8abc8e0)
	class UActorComponent* AddDynamicComponentByClass(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable)
};

