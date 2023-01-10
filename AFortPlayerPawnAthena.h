// Class /Script/FortniteGame.FortPlayerPawnAthena
// Size: 0x5220
class AFortPlayerPawnAthena : public AFortPlayerPawn
{
	unsigned char unreflected_4330[0x10]; // 0x4330 (0x10) 
	struct FMulticastInlineDelegate OnInteractionFailedCallback; // 0x4340 (0x10)
	class AActor* ItemInteractionActor; // 0x4350 (0x8)
	unsigned char unreflected_4358[0x10]; // 0x4358 (0x10) 
	struct FVector PreviousVelocityXY; // 0x4368 (0x18)
	class USoundBase* OnReviveSound; // 0x4380 (0x8)
	float ReviveFromDBNOTime; // 0x4388 (0x4)
	float DBNOStartTime; // 0x438c (0x4)
	float DBNOInvulnerableTime; // 0x4390 (0x4)
	float ConvertFromDBNOTime; // 0x4394 (0x4)
	float ServerWorldTimeRevivalTime; // 0x4398 (0x4)
	unsigned char unreflected_439c[0xc]; // 0x439c (0xc) 
	bool bWasCrouchedBeforeDBNO; // 0x43a8 (0x1)
	unsigned char unreflected_43a9[0x3]; // 0x43a9 (0x3) 
	struct FName ItemSpecialActorID; // 0x43ac (0x4)
	struct FGameplayTag ItemSpecialActorCategoryTag; // 0x43b0 (0x4)
	unsigned char unreflected_43b4[0x4]; // 0x43b4 (0x4) 
	float BecameSpecialActorTime; // 0x43b8 (0x4)
	bool bPlaytestWithNoMouse; // 0x43bc (0x1)
	unsigned char unreflected_43bd[0x7]; // 0x43bd (0x7) 
	float CapsuleRadiusAthena; // 0x43c4 (0x4)
	float CapsuleHalfHeightAthena; // 0x43c8 (0x4)
	unsigned char unreflected_43cc[0x4]; // 0x43cc (0x4) 
	double MeshHeightAdjustAthena; // 0x43d0 (0x8)
	class UParticleSystem* LandEmitterTemplate; // 0x43d8 (0x8)
	class UFortPawnComponent_CustomDepth* CustomDepthComponent; // 0x43e0 (0x8)
	struct FGameplayTagContainer IgnoreLandGhostModeTags; // 0x43e8 (0x20)
	class UParticleSystem* LandWindEmitterTemplate; // 0x4408 (0x8)
	struct FVector LandFXLocationOffset; // 0x4410 (0x18)
	float LandFXRotateYawMaxDegrees; // 0x4428 (0x4)
	float LandFXMaxDrawDistance; // 0x442c (0x4)
	float LandForceIntensityVelocityZFactor; // 0x4430 (0x4)
	float MinLandForceIntensity; // 0x4434 (0x4)
	float MaxLandForceIntensity; // 0x4438 (0x4)
	float MinLandForceDuration; // 0x443c (0x4)
	float MaxLandForceDuration; // 0x4440 (0x4)
	float LandFXCoolDownTime; // 0x4444 (0x4)
	float LandFXPawnRecentRenderTolerance; // 0x4448 (0x4)
	unsigned char unreflected_444c[0x14]; // 0x444c (0x14) 
	bool bShouldPawnInstantDie; // 0x4460 (0x1)
	bool bShouldPawnDBNODisplayOnKillFeed; // 0x4461 (0x1)
	bool bShouldPawnDeathDisplayOnKillFeed; // 0x4462 (0x1)
	bool bShouldPawnLeaveEliminationIndicator; // 0x4463 (0x1)
	bool bShouldPawnAwardPoints; // 0x4464 (0x1)
	bool bShouldTriggerDeathAnalytics; // 0x4465 (0x1)
	bool bShouldDropItemsOnDeath; // 0x4466 (0x1)
	bool bShouldSkipMovementFullSimulation; // 0x4467 (0x1)
	unsigned char bEnableGroundInteractionEffects; // 0x4468 (0x1)
	unsigned char unreflected_4469[0x3]; // 0x4469 (0x3) 
	struct FFortPlayerAthenaAttributeReplicationProxy AttributeReplicationProxy; // 0x446c (0x18)
	struct FFortPlayerAthenaGravityAttributeReplicationProxy GravityAttributeReplicationProxy; // 0x4484 (0x10)
	unsigned char unreflected_4494[0x4]; // 0x4494 (0x4) 
	struct FGameplayAbilityRepAnimMontage ReplayRepAnimMontageInfo; // 0x4498 (0x38)
	struct FMinimalGameplayCueReplicationProxy SimulatedProxyActiveGameplayCues; // 0x44d0 (0x2d0)
	struct FMinimalGameplayCueReplicationProxy SimulatedProxyMinimalReplicationGameplayCues; // 0x47a0 (0x2d0)
	struct FMinimalReplicationTagCountMap FastReplicationMinimalReplicationTags; // 0x4a70 (0x60)
	unsigned char unreflected_4ad0[0x8]; // 0x4ad0 (0x8) 
	class UTexture2D* CurrentQuickChatIcon; // 0x4ad8 (0x8)
	unsigned char unreflected_4ae0[0x1f6]; // 0x4ae0 (0x1f6) 
	bool bADSWhileNotOnGround; // 0x4cd6 (0x1)
	unsigned char unreflected_4cd7[0x1]; // 0x4cd7 (0x1) 
	class USoundBase* DefaultCrouchedFootstepSound; // 0x4cd8 (0x8)
	class USoundBase* DefaultCrouchSprintFootstepSound; // 0x4ce0 (0x8)
	struct FMulticastInlineDelegate OnFortPlayerDied; // 0x4ce8 (0x10)
	struct FMulticastInlineDelegate OnFortDeathCause; // 0x4cf8 (0x10)
	struct FMulticastInlineDelegate OnFortPlayerHitByVehicle; // 0x4d08 (0x10)
	class APawn* KillerForSpectatorRotation; // 0x4d18 (0x8)
	unsigned char unreflected_4d20[0x1]; // 0x4d20 (0x1) 
	bool bDelaySimProxyCollisionInAircraftPhase; // 0x4d21 (0x1)
	unsigned char unreflected_4d22[0x2]; // 0x4d22 (0x2) 
	float TimeToDelaySkydiveCollision; // 0x4d24 (0x4)
	float PositionCaptureIntervalForDistanceTraveledAccumulation; // 0x4d28 (0x4)
	unsigned char unreflected_4d2c[0x14]; // 0x4d2c (0x14) 
	float SkydiveAudioMovementVolumeInterpSpeed; // 0x4d40 (0x4)
	unsigned char unreflected_4d44[0xc]; // 0x4d44 (0xc) 
	float SkydiveAudioForwardDotInterpSpeed; // 0x4d50 (0x4)
	float SkydiveAudioRightDotInterpSpeed; // 0x4d54 (0x4)
	unsigned char unreflected_4d58[0x4]; // 0x4d58 (0x4) 
	struct FFortEffectDistanceQuality DamageFXSignificance; // 0x4d5c (0x18)
	unsigned char unreflected_4d74[0xc]; // 0x4d74 (0xc) 
	class UClass* ScreenEffectHealthDamage; // 0x4d80 (0x8)
	class UClass* ScreenEffectShieldDamage; // 0x4d88 (0x8)
	class UAnimMontage* AdditiveHitReactsMontage; // 0x4d90 (0x8)
	struct FGameplayTagContainer DamageTagsToNotDisplayDirectionDamage; // 0x4d98 (0x20)
	struct FGameplayTagContainer DamageTagsToNotAddCameraShake; // 0x4db8 (0x20)
	struct FGameplayTagContainer WeaponTagsToNotPlayCircleAndStreakFX; // 0x4dd8 (0x20)
	struct FMulticastInlineDelegate OnPlayerLootedContainer; // 0x4df8 (0x10)
	unsigned char unreflected_4e08[0x20]; // 0x4e08 (0x20) 
	bool bIsPlayerPawnReady; // 0x4e28 (0x1)
	unsigned char unreflected_4e29[0x7]; // 0x4e29 (0x7) 
	struct FVector LastFiredLocation; // 0x4e30 (0x18)
	struct FVector LastFiredDirection; // 0x4e48 (0x18)
	float LastFiredTime; // 0x4e60 (0x4)
	unsigned char unreflected_4e64[0x14]; // 0x4e64 (0x14) 
	class UDataTable* PrototypeShootingModel; // 0x4e78 (0x8)
	class AController* FallInstigator; // 0x4e80 (0x8)
	struct FGameplayTagContainer FallDamageTags; // 0x4e88 (0x20)
	class ABuildingSMActor* LastFloorBeforeFalling; // 0x4ea8 (0x8)
	float LastFallDistance; // 0x4eb0 (0x4)
	float SkydiveDebugTimer; // 0x4eb4 (0x4)
	float MeleeCombatSlowSpeedMultiplier; // 0x4eb8 (0x4)
	float MeleeCombatSlowDuration; // 0x4ebc (0x4)
	struct FAthenaPawnReplayData EncryptedPawnReplayData; // 0x4ec0 (0x30)
	class UAudioComponent* InAirAudioComp; // 0x4ef0 (0x8)
	class UParticleSystemComponent* PSCPlayerWalkLand; // 0x4ef8 (0x8)
	class UParticleSystemComponent* PSCPlayerRunLand; // 0x4f00 (0x8)
	class UParticleSystemComponent* PSCHitDamage; // 0x4f08 (0x8)
	unsigned char unreflected_4f10[0x8]; // 0x4f10 (0x8) 
	class UFortContrailsComponent* ContrailsComponent; // 0x4f18 (0x8)
	unsigned char unreflected_4f20[0x20]; // 0x4f20 (0x20) 
	struct TArray<class UFortMobileInteractionComponent*> MobileInteractionComponents; // 0x4f40 (0x10)
	struct FLinearColor MinimapIconColorFiftyFiftyPlayer; // 0x4f50 (0x10)
	float MaxIndicatorVisibilityDistForReplays; // 0x4f60 (0x4)
	unsigned char unreflected_4f64[0x4]; // 0x4f64 (0x4) 
	class UAudioComponent* ConsumableUseAudio; // 0x4f68 (0x8)
	float InAirAudioParameterValue; // 0x4f70 (0x4)
	float InAirAudioFallDistanceThreshold; // 0x4f74 (0x4)
	unsigned char unreflected_4f78[0x4]; // 0x4f78 (0x4) 
	float WalkDustActivateSpeed; // 0x4f7c (0x4)
	unsigned char unreflected_4f80[0x4]; // 0x4f80 (0x4) 
	float WalkDustResetSpeed; // 0x4f84 (0x4)
	unsigned char unreflected_4f88[0x4]; // 0x4f88 (0x4) 
	float RunParticleActivateSpeed; // 0x4f8c (0x4)
	unsigned char unreflected_4f90[0x10]; // 0x4f90 (0x10) 
	float LastHealthPostProcessWeight; // 0x4fa0 (0x4)
	float HealthPostProcessStartTime; // 0x4fa4 (0x4)
	float HealthPostProcessMuteTime; // 0x4fa8 (0x4)
	unsigned char unreflected_4fac[0x5c]; // 0x4fac (0x5c) 
	bool bIsCreativeGhostModeActivated; // 0x5008 (0x1)
	bool bIsCreativeModeratorModeActivated; // 0x5009 (0x1)
	unsigned char unreflected_500a[0x2e]; // 0x500a (0x2e) 
	class UFortSkinWeightOverrideManager* SkinWeightManager; // 0x5038 (0x8)
	unsigned char unreflected_5040[0x38]; // 0x5040 (0x38) 
	struct FGameplayTagContainer InvulnerabilityTags; // 0x5078 (0x20)
	class UUnicornAthenaPawnSampler* UnicornPawnSampler; // 0x5098 (0x8)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0x50a0 (0x98)
	unsigned char unreflected_5138[0x10]; // 0x5138 (0x10) 
	class UForceFeedbackEffect* DamageForceFeedback; // 0x5148 (0x8)
	class UClass* DamageCameraShakeClass; // 0x5150 (0x8)
	struct FGameplayTagContainer DamageTagsExcludedFromCameraShake; // 0x5158 (0x20)
	unsigned char unreflected_5178[0x18]; // 0x5178 (0x18) 
	int UpdateSharedReplicationWhileAttachedCount; // 0x5190 (0x4)
	float BPRotationSpeedWhenTurnedOffByAnim; // 0x5194 (0x4)
	float BPRotationSpeedOnDetach; // 0x5198 (0x4)
	float BPMaxRotationSpeedWhenAttached; // 0x519c (0x4)
	float BPTimeToReachMaxRotationSpeed; // 0x51a0 (0x4)
	float BPAddedRotationInfluenceFromForwardVectorOnAttach; // 0x51a4 (0x4)
	struct FRotator YawNegative90; // 0x51a8 (0x18)
	struct FString CallerIDupdatemeshrotation; // 0x51c0 (0x10)
	float AttachPointNormalizeTolerance; // 0x51d0 (0x4)
	float ForwardProjectedNormalizeTolerance; // 0x51d4 (0x4)
	class ABuildingGameplayActor* SwingingAttachBGA; // 0x51d8 (0x8)
	struct FVector SwingingRightVec; // 0x51e0 (0x18)
	float SwingingLastAttachTime; // 0x51f8 (0x4)
	bool bSwingingShouldRotateMesh; // 0x51fc (0x1)
	bool bSwingingUseProgrammaticRotation; // 0x51fd (0x1)
	bool bImprovedDBNOEnabled; // 0x51fe (0x1)
	unsigned char DBNORevivingActorsCount; // 0x51ff (0x1)
	unsigned char padding_5200[0x20]; // 0x5200 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPawnAthena.TurnOnCollisionAfterSkydiveDelay (Underlying native function: TurnOnCollisionAfterSkydiveDelay 0x81421bc)
	void TurnOnCollisionAfterSkydiveDelay(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.TeleportToSkyDive (Underlying native function: TeleportToSkyDive 0x8142138)
	void TeleportToSkyDive(float& HeightAboveGround); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SwingingUpdateMeshRotation (Underlying native function: SwingingUpdateMeshRotation 0x8141f30)
	void SwingingUpdateMeshRotation(float& DeltaTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.Swinging_VectorToAttachPoint (Underlying native function: Swinging_VectorToAttachPoint 0x8141fb4)
	struct FVector SwingingVectorToAttachPoint(struct FString& CallerID); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.StopConsumableUseAudio (Underlying native function: StopConsumableUseAudio 0x8141f1c)
	void StopConsumableUseAudio(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.StartConsumableUseAudio (Underlying native function: StartConsumableUseAudio 0x8141e68)
	void StartConsumableUseAudio(class USoundBase*& sound); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetUpdateSharedReplicationWhileAttached (Underlying native function: SetUpdateSharedReplicationWhileAttached 0x8141c50)
	void SetUpdateSharedReplicationWhileAttached(bool& bNewValue); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetShouldSkipMovementFullSimulation (Underlying native function: SetShouldSkipMovementFullSimulation 0x8141bd0)
	void SetShouldSkipMovementFullSimulation(bool& bInShouldSkipMovementFullSimulation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetShouldDropItemsOnDeath (Underlying native function: SetShouldDropItemsOnDeath 0x8141b50)
	void SetShouldDropItemsOnDeath(bool& bInShouldDropItemsOnDeath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetMeshHeightAdjustAthena (Underlying native function: SetMeshHeightAdjustAthena 0x8141a4c)
	void SetMeshHeightAdjustAthena(double& HeightAdjust); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetIsSignificantForSpecialEventSequence (Underlying native function: SetIsSignificantForSpecialEventSequence 0x81419c8)
	void SetIsSignificantForSpecialEventSequence(bool& bIsSignificant); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetImprovedDBNO (Underlying native function: SetImprovedDBNO 0x8141938)
	void SetImprovedDBNO(bool& bEnable); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetFallInstigator (Underlying native function: SetFallInstigator 0x8141838)
	void SetFallInstigator(class AController*& NewFallInstigator, struct FGameplayTagContainer& NewFallingDamageTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetEnableRenderCustomDepth (Underlying native function: SetEnableRenderCustomDepth 0x81417b8)
	void SetEnableRenderCustomDepth(bool& bInEnableRenderCustomDepth); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetDamageCameraShakeClass (Underlying native function: SetDamageCameraShakeClass 0x8141738)
	void SetDamageCameraShakeClass(class UClass*& NewValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetCharacterBodyVisibilityForPossession (Underlying native function: SetCharacterBodyVisibilityForPossession 0x8141600)
	bool SetCharacterBodyVisibilityForPossession(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetCapsuleRadiusAthena (Underlying native function: SetCapsuleRadiusAthena 0x8141560)
	void SetCapsuleRadiusAthena(float& Radius); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetCapsuleHalfHeightAthena (Underlying native function: SetCapsuleHalfHeightAthena 0x81414c0)
	void SetCapsuleHalfHeightAthena(float& HalfHeight); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetBushEnabled (Underlying native function: SetBushEnabled 0x6df775c)
	void SetBushEnabled(bool& bEnableBush); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerSuicide (Underlying native function: ServerSuicide 0x8141344)
	void ServerSuicide(bool& bSuppressResurrectionChip, int& MatchPlacement); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerSetInteractingItem (Underlying native function: ServerSetInteractingItem 0x814124c)
	void ServerSetInteractingItem(class AActor*& InteractingItem, bool& bClearInteraction); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerForceImmediateLandscapeCheck (Underlying native function: ServerForceImmediateLandscapeCheck 0x8141234)
	void ServerForceImmediateLandscapeCheck(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerCreativeToggleInvulnerable (Underlying native function: ServerCreativeToggleInvulnerable 0x81411e8)
	void ServerCreativeToggleInvulnerable(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerCreativeToggleGhost (Underlying native function: ServerCreativeToggleGhost 0x8141138)
	void ServerCreativeToggleGhost(bool& bEnableOnly); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.RemoveDBNORevivingActor (Underlying native function: RemoveDBNORevivingActor 0x81400b4)
	unsigned char RemoveDBNORevivingActor(class AActor*& RevivingActorToRemove); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnSuccessfulBuildingEdit (Has no native function)
	void OnSuccessfulBuildingEdit(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnSpawnImmunityTimeReset (Has no native function)
	void OnSpawnImmunityTimeReset(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnSignificantTick (Has no native function)
	void OnSignificantTick(float& Significance); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnResInDuringWarmup (Has no native function)
	void OnResInDuringWarmup(); // (0x00000002 | BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_ReplayRepAnimMontageInfo (Underlying native function: OnRep_ReplayRepAnimMontageInfo 0x110142c)
	void OnRepReplayRepAnimMontageInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_MeshHeightAdjustAthena (Underlying native function: OnRep_MeshHeightAdjustAthena 0x13c8b40)
	void OnRepMeshHeightAdjustAthena(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_ImprovedDBNOEnabled (Underlying native function: OnRep_ImprovedDBNOEnabled 0x8140ce8)
	void OnRepImprovedDBNOEnabled(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_GravityAttributeReplicationProxy (Underlying native function: OnRep_GravityAttributeReplicationProxy 0x2080ff0)
	void OnRepGravityAttributeReplicationProxy(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_CapsuleRadiusAthena (Underlying native function: OnRep_CapsuleRadiusAthena 0x281be80)
	void OnRepCapsuleRadiusAthena(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_CapsuleHalfHeightAthena (Underlying native function: OnRep_CapsuleHalfHeightAthena 0x281bee8)
	void OnRepCapsuleHalfHeightAthena(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_bIsCreativeModeratorModeActivated (Underlying native function: OnRep_bIsCreativeModeratorModeActivated 0x8140e1c)
	void OnRepbIsCreativeModeratorModeActivated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_bIsCreativeGhostModeActivated (Underlying native function: OnRep_bIsCreativeGhostModeActivated 0x8140df4)
	void OnRepbIsCreativeGhostModeActivated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_AttributeProxy (Underlying native function: OnRep_AttributeProxy 0x10d80f8)
	void OnRepAttributeProxy(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnReceivedStormSurgeDamage (Has no native function)
	void OnReceivedStormSurgeDamage(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnOutsideSafeZonePhaseChanged (Has no native function)
	void OnOutsideSafeZonePhaseChanged(int& SafeZonePhase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnLeftReplayRelevancy (Has no native function)
	void OnLeftReplayRelevancy(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnEnteredReplayRelevancy (Has no native function)
	void OnEnteredReplayRelevancy(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStopInvulnerable (Has no native function)
	void OnCreativeStopInvulnerable(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStopGhost (Has no native function)
	void OnCreativeStopGhost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStartInvulnerable (Has no native function)
	void OnCreativeStartInvulnerable(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStartGhost (Has no native function)
	void OnCreativeStartGhost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeModeratorModeDeactivate (Has no native function)
	void OnCreativeModeratorModeDeactivate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeModeratorModeActivate (Has no native function)
	void OnCreativeModeratorModeActivate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.NetMulticast_SuccessfulBuildingEdit (Underlying native function: NetMulticast_SuccessfulBuildingEdit 0x2bf4950)
	void NetMulticastSuccessfulBuildingEdit(); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.MeleeCombatBlocked (Underlying native function: MeleeCombatBlocked 0x8140ac8)
	void MeleeCombatBlocked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.MeleeCombatActivated (Underlying native function: MeleeCombatActivated 0x8140a50)
	void MeleeCombatActivated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.LocalIsTryingToEnterVehicle (Underlying native function: LocalIsTryingToEnterVehicle 0x8140a28)
	bool LocalIsTryingToEnterVehicle(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.LandscapeCheck (Underlying native function: LandscapeCheck 0x8140a14)
	void LandscapeCheck(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.IsPlayingMinigame (Underlying native function: IsPlayingMinigame 0x81409d4)
	bool IsPlayingMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.IsBackpackEquipped (Underlying native function: IsBackpackEquipped 0x814092c)
	bool IsBackpackEquipped(enum EBackpackType& BackpackType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GoToHUBIslandIfOutOfBounds (Has no native function)
	void GoToHUBIslandIfOutOfBounds(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetReviveFromDBNOTime (Underlying native function: GetReviveFromDBNOTime 0x81407ac)
	float GetReviveFromDBNOTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetNumberOfDBNORevivingActors (Underlying native function: GetNumberOfDBNORevivingActors 0x8140794)
	unsigned char GetNumberOfDBNORevivingActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetDefaultReviveFromDBNOTime (Underlying native function: GetDefaultReviveFromDBNOTime 0x8140754)
	float GetDefaultReviveFromDBNOTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetCurrentVoiceAmplitude (Underlying native function: GetCurrentVoiceAmplitude 0x6e8e624)
	float GetCurrentVoiceAmplitude(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetAdditiveHitReactsMontage (Underlying native function: GetAdditiveHitReactsMontage 0x2c6bef8)
	class UAnimMontage* GetAdditiveHitReactsMontage(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GameplayCue_PinkOatmeal_MeatPizza_PossessProp (Underlying native function: GameplayCue_PinkOatmeal_MeatPizza_PossessProp 0x81405d0)
	void GameplayCuePinkOatmealMeatPizzaPossessProp(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GameplayCue_Creative_PossessProp (Underlying native function: GameplayCue_Creative_PossessProp 0x81405d0)
	void GameplayCueCreativePossessProp(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GamePhaseStepChanged (Underlying native function: GamePhaseStepChanged 0x19f2f18)
	void GamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ForceReviveFromDBNO (Underlying native function: ForceReviveFromDBNO 0x6df70d4)
	void ForceReviveFromDBNO(class AController*& EventInstigator); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.FastSharedReplication (Underlying native function: FastSharedReplication 0x1116b84)
	void FastSharedReplication(struct FSharedRepMovement& SharedRepMovement); // (Final | Net | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CreativeToggleInvulnerable (Underlying native function: CreativeToggleInvulnerable 0x814059c)
	void CreativeToggleInvulnerable(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CreativeToggleGhost (Underlying native function: CreativeToggleGhost 0x814051c)
	void CreativeToggleGhost(bool& bEnableOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ClientSetGravityJumpMultipliers (Underlying native function: ClientSetGravityJumpMultipliers 0x8140390)
	void ClientSetGravityJumpMultipliers(float& NewGravityVal, float& NewVehicleGravityVal, float& NewJumpZ, float& NewJumpHorizontalAcceleration, float& NewJumpHorizontalVelocity); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CanPlayerCreateInCurrentVolume (Underlying native function: CanPlayerCreateInCurrentVolume 0x8140158)
	bool CanPlayerCreateInCurrentVolume(class AFortVolume*& OutCurrentVolume); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CancelMeleeCombatSlow (Underlying native function: CancelMeleeCombatSlow 0x81401f0)
	void CancelMeleeCombatSlow(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.BushStateChanged (Has no native function)
	void BushStateChanged(bool& bNewBushState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.AddDBNORevivingActor (Underlying native function: AddDBNORevivingActor 0x81400b4)
	unsigned char AddDBNORevivingActor(class AActor*& RevivingActorToAdd); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.AddComponentToPawnHighlightSet (Underlying native function: AddComponentToPawnHighlightSet 0x8140034)
	void AddComponentToPawnHighlightSet(class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Public | BlueprintCallable)
};

