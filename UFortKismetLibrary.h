// Class /Script/FortniteGame.FortKismetLibrary
// Size: 0x38
class UFortKismetLibrary : public UBlueprintFunctionLibrary
{
	struct TArray<struct FName> FortShippingLogSuppressedObjects; // 0x28 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortKismetLibrary.VectorToNormalizedAngleInDegrees (Underlying native function: VectorToNormalizedAngleInDegrees 0x86ee180)
	static float VectorToNormalizedAngleInDegrees(struct FVector& V); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.VectorSlerp (Underlying native function: VectorSlerp 0x86edfe8)
	static struct FVector VectorSlerp(struct FVector& Origin, struct FVector& Start, struct FVector& End, float& Alpha); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ValidateOwnershipForGroupEmote (Underlying native function: ValidateOwnershipForGroupEmote 0x86edeac)
	static bool ValidateOwnershipForGroupEmote(class AFortPawn*& Pawn, class UFortItemDefinition*& EmoteDef); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.UpgradeAllWeaponsVerticalToRarity (Underlying native function: UpgradeAllWeaponsVerticalToRarity 0x86eddc0)
	static bool UpgradeAllWeaponsVerticalToRarity(class AFortPlayerController*& PlayerController, enum EFortRarity& NewRarity, bool& bThrottle); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.UpdatePlayerCustomCharacterPartsVisualization (Underlying native function: UpdatePlayerCustomCharacterPartsVisualization 0x86edd08)
	static void UpdatePlayerCustomCharacterPartsVisualization(class AFortPlayerState*& PlayerState); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.UnregisterGridFoundation (Underlying native function: UnregisterGridFoundation 0x86edc78)
	static void UnregisterGridFoundation(class ABuildingFoundation*& BuildingFoundation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.UnhideTutorialWidget (Underlying native function: UnhideTutorialWidget 0x86edb84)
	static void UnhideTutorialWidget(class UObject*& WorldContextObject, struct FName& WidgetName); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.UnhideAllTutorialWidgets (Underlying native function: UnhideAllTutorialWidgets 0x86edadc)
	static void UnhideAllTutorialWidgets(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.UnequipFortAbilitySet (Underlying native function: UnequipFortAbilitySet 0x86eda38)
	static void UnequipFortAbilitySet(struct FFortAbilitySetHandle& AbilitySetHandle); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.TrySmartConsumeResources (Underlying native function: TrySmartConsumeResources 0x86ed634)
	static bool TrySmartConsumeResources(int& ResourceCost, class AFortPlayerController*& SourcePlayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.TriggerFeedbackEvent (Underlying native function: TriggerFeedbackEvent 0x86ed40c)
	static void TriggerFeedbackEvent(class UObject*& WorldContextObject, struct FFortFeedbackHandle& EventHandle, class AFortPawn*& InstigatorPawn, class AFortPawn*& Recipient, float& OverriddenDelay, bool& bOverriddenQueuing, bool& bAllowReplication); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ToUpperExceptIslandCode (Underlying native function: ToUpperExceptIslandCode 0x86ed000)
	static struct FString ToUpperExceptIslandCode(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.TossPickupFromContainer (Underlying native function: TossPickupFromContainer 0x86ed170)
	static void TossPickupFromContainer(class UObject*& WorldContextObject, class AActor*& Container, class AFortPickup*& PickUp, int& NumSteps, int& Step, float& LootTossConeHalfAngle, struct FRotator& LootTossDirection, float& LootTossSpeed, bool& bForceHidePickupMinimapIndicator); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ToLowerExceptIslandCode (Underlying native function: ToLowerExceptIslandCode 0x86ece90)
	static struct FString ToLowerExceptIslandCode(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnTransientActor (Underlying native function: SpawnTransientActor 0x86ecbfc)
	static void SpawnTransientActor(class UObject*& WorldContextObject, class UClass*& ActorClass, class AActor*& SpawnedActor, struct FTransform& SpawnTransform, enum ESpawnActorCollisionHandlingMethod& CollisionHandlingOverride, class AActor*& OwnerActor, class APawn*& InstigatorPawn); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnTracerFromPool (Underlying native function: SpawnTracerFromPool 0x86eca5c)
	static class AFortTracerBase* SpawnTracerFromPool(class UObject*& WorldContextObject, class UClass*& TracerClass, struct FVector& Origin, struct FVector& Destination, class AFortPawn*& Instigator); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnProjectile (Underlying native function: SpawnProjectile 0x86ec5e0)
	static class AFortProjectileBase* SpawnProjectile(class UClass*& ProjectileClass, class AActor*& RequestedBy, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, struct FRotator& SpawnDirection, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnHit, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, bool& bUseDefaultPhysics, class AActor*& HomingTarget, float& InitialSpeed, float& GravityScale, float& ChargePercent, class UFortWorldItemDefinition*& OptionalAssociatedItemDef); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnItemVariantPickupInWorld (Underlying native function: SpawnItemVariantPickupInWorld 0x86ec4dc)
	static class AFortPickup* SpawnItemVariantPickupInWorld(class UObject*& WorldContextObject, struct FSpawnItemVariantParams& Params); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnInstancedPickupInWorld (Underlying native function: SpawnInstancedPickupInWorld 0x86ec294)
	static bool SpawnInstancedPickupInWorld(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, int& NumberToSpawn, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnBuildingGameplayActorFromWorldContext (Underlying native function: SpawnBuildingGameplayActorFromWorldContext 0x86ec094)
	static class ABuildingGameplayActor* SpawnBuildingGameplayActorFromWorldContext(class UObject*& WorldContextObject, class UClass*& BGAClass, struct FTransform& Transform, class AActor*& OptionalOwner, class APawn*& OptionalInstigator); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnBuildingGameplayActor (Underlying native function: SpawnBuildingGameplayActor 0x86ebed4)
	static class ABuildingGameplayActor* SpawnBuildingGameplayActor(class UClass*& BGAClass, struct FTransform& Transform, class AActor*& Instigator, bool& bAutomaticallyInitialize); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SpawnAreaOfEffectCloud (Underlying native function: SpawnAreaOfEffectCloud 0x86ebc8c)
	static class AFortAreaOfEffectCloud* SpawnAreaOfEffectCloud(class UClass*& AreaOfEffectClass, class AActor*& RequestedBy, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnHit, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ShowSoundIndicatorLocalForTeam (Underlying native function: ShowSoundIndicatorLocalForTeam 0x2808da8)
	static void ShowSoundIndicatorLocalForTeam(class UObject*& WorldContextObject, class AActor*& TrackedActor, struct FVector& Location, float& MaxAudibleDistance, enum EFortSoundIndicatorTypes& IndicatorType, struct TArray<class AFortPlayerController*>& IgnoreOnControllers, unsigned char& Team, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& Affiliations, class AActor*& Instigator, struct FLinearColor& Tint, class UTexture*& OverrideIcon); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ShowSoundIndicatorLocal (Underlying native function: ShowSoundIndicatorLocal 0x150eb14)
	static void ShowSoundIndicatorLocal(class UObject*& WorldContextObject, class AActor*& TrackedActor, struct FVector& Location, float& MaxAudibleDistance, enum EFortSoundIndicatorTypes& IndicatorType, struct TArray<class AFortPlayerController*>& IgnoreOnControllers, class AActor*& Instigator, struct FLinearColor& Tint, class UTexture*& OverrideIcon); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ShouldHideTutorialWidget (Underlying native function: ShouldHideTutorialWidget 0x86ebbdc)
	static bool ShouldHideTutorialWidget(struct FName& WidgetName); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ShouldDisableMatchStatsDisplay (Underlying native function: ShouldDisableMatchStatsDisplay 0x86ebb1c)
	static bool ShouldDisableMatchStatsDisplay(class UObject*& WorldContextObject); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ShouldBlockQuestProgressReport (Underlying native function: ShouldBlockQuestProgressReport 0x5997140)
	static bool ShouldBlockQuestProgressReport(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.SetTimeOfDaySpeed (Underlying native function: SetTimeOfDaySpeed 0x19b8730)
	static void SetTimeOfDaySpeed(class UObject*& WorldContextObject, float& TimeOfDaySpeedFactor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetTimeOfDay (Underlying native function: SetTimeOfDay 0x19b7040)
	static void SetTimeOfDay(class UObject*& WorldContextObject, float& TimeOfDay); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetSceneCaptureShowFlags (Underlying native function: SetSceneCaptureShowFlags 0x86eba4c)
	static void SetSceneCaptureShowFlags(class USceneCaptureComponent2D*& SceneCaptureComponent, struct TArray<struct FEngineShowFlagsSetting>& ShowFlagSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetProjectileMovementDrunkData (Underlying native function: SetProjectileMovementDrunkData 0x86eb930)
	static void SetProjectileMovementDrunkData(class AFortProjectileBase*& Projectile, struct FProjectileMovementDrunkConfig& NewConfig); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetOutlinePostProcessEnabled (Underlying native function: SetOutlinePostProcessEnabled 0x86eb848)
	static void SetOutlinePostProcessEnabled(class UObject*& WorldContextObject, bool& bEnablePostProcess); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetNiagaraAssetMatchActivation (Underlying native function: SetNiagaraAssetMatchActivation 0x86eb65c)
	static void SetNiagaraAssetMatchActivation(class UNiagaraComponent*& NiagaraComponent, class UNiagaraSystem*& NiagaraSystem, bool& bResetExistingOverrideParameters); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetExtendedSafeZoneInfo (Underlying native function: SetExtendedSafeZoneInfo 0x6d23b2c)
	static void SetExtendedSafeZoneInfo(class AActor*& ControllerOrPawn, bool& bEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetComponentAffectNavigationGeneration (Underlying native function: SetComponentAffectNavigationGeneration 0x86eb3c8)
	static void SetComponentAffectNavigationGeneration(class UActorComponent*& Component, bool& bAffectNavigation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetCanBeDamaged (Underlying native function: SetCanBeDamaged 0x27c15b0)
	static void SetCanBeDamaged(class AActor*& Actor, bool& bCanBeDamaged); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetCameraComponentAdditiveOffset (Underlying native function: SetCameraComponentAdditiveOffset 0x86eb0dc)
	static void SetCameraComponentAdditiveOffset(class UCameraComponent*& CameraComponent, struct FTransform& AdditiveTransformOffset, float& AdditiveFOVOffset); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SetActorEnableCollision_WithChildren (Underlying native function: SetActorEnableCollision_WithChildren 0x86eaf88)
	static void SetActorEnableCollisionWithChildren(class AActor*& Target, bool& bEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.SelectMaterialInstance (Underlying native function: SelectMaterialInstance 0x24fab48)
	static class UMaterialInstance* SelectMaterialInstance(class UMaterialInstance*& A, class UMaterialInstance*& B, bool& bSelectA); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ScriptError (Underlying native function: ScriptError 0x86eac44)
	static void ScriptError(struct FString& message); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ScriptEnsureIsValid (Underlying native function: ScriptEnsureIsValid 0x86eaa9c)
	static void ScriptEnsureIsValid(struct FString& message, class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RotateVectorTowardVector (Underlying native function: RotateVectorTowardVector 0x86ea954)
	static struct FVector RotateVectorTowardVector(struct FVector& Source, struct FVector& Target, float& Degrees); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ResolvePlayerStateFromContextualObjects (Underlying native function: ResolvePlayerStateFromContextualObjects 0x86ea8a8)
	static class AFortPlayerState* ResolvePlayerStateFromContextualObjects(struct TArray<class UObject*>& Objects); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ReplaceRangeInGameplayEffectContainer (Underlying native function: ReplaceRangeInGameplayEffectContainer 0x86ea754)
	static struct FFortGameplayEffectContainer ReplaceRangeInGameplayEffectContainer(struct FFortGameplayEffectContainer& EffectContainer, struct FScalableFloat& NewRange); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ReplaceHalfExtentsInGameplayEffectContainer (Underlying native function: ReplaceHalfExtentsInGameplayEffectContainer 0x86ea5ec)
	static struct FFortGameplayEffectContainer ReplaceHalfExtentsInGameplayEffectContainer(struct FFortGameplayEffectContainer& EffectContainer, struct FVector& NewHalfExtents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RemoveItemFromInventoryOwner (Underlying native function: RemoveItemFromInventoryOwner 0x86ea500)
	static void RemoveItemFromInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RemoveGlobalEnvironmentGameplayEffect (Underlying native function: RemoveGlobalEnvironmentGameplayEffect 0x86ea28c)
	static void RemoveGlobalEnvironmentGameplayEffect(class UObject*& WorldContextObject, class UClass*& GameplayEffect); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RemoveEventOverrides (Underlying native function: RemoveEventOverrides 0x86ea0ac)
	static void RemoveEventOverrides(struct FString& EventSection, bool& bSuccess); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RemoveControllerComponent (Underlying native function: RemoveControllerComponent 0x86e9ff8)
	static void RemoveControllerComponent(class AController*& Controller, class UClass*& ControllerCompClass); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RemoveArbitraryComponent (Underlying native function: RemoveArbitraryComponent 0x86e9f44)
	static void RemoveArbitraryComponent(class AActor*& TargetActor, class UClass*& ComponentClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RemoveActorsOfClassFromBuildingSMActorArray (Underlying native function: RemoveActorsOfClassFromBuildingSMActorArray 0x86e9d50)
	static void RemoveActorsOfClassFromBuildingSMActorArray(struct TArray<class ABuildingSMActor*>& ArrayToRemoveClassFrom, class UClass*& ClassToRemove, struct TArray<class ABuildingSMActor*>& ArrayWithClassRemoved); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.RegisterGridFoundation (Underlying native function: RegisterGridFoundation 0x86e9ce0)
	static void RegisterGridFoundation(class ABuildingFoundation*& BuildingFoundation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RegisterDayTimeHitCallback (Underlying native function: RegisterDayTimeHitCallback 0x86e9a60)
	static void RegisterDayTimeHitCallback(class UObject*& Object, struct FString& FunctionName, float& TimeInHours, bool& bRecurring, bool& bBlockTriggeringThisCycle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RegisterDayPhaseHitCallback (Underlying native function: RegisterDayPhaseHitCallback 0x86e97ec)
	static void RegisterDayPhaseHitCallback(class UObject*& Object, struct FString& FunctionName, enum EFortDayPhase& Phase, bool& bRecurring, bool& bBlockTriggeringThisCycle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ReadRenderTargetToBoolArray (Underlying native function: ReadRenderTargetToBoolArray 0x86e8e88)
	static bool ReadRenderTargetToBoolArray(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, float& Threshold, struct TArray<bool>& OutBoolArray, bool& bDebugPrintToLog); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.RandUniformPointInDonut (Underlying native function: RandUniformPointInDonut 0x86e8af8)
	static struct FVector2D RandUniformPointInDonut(float& InnerCircleRadius, float& OuterCircleRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.RandPointInDonut (Underlying native function: RandPointInDonut 0x86e8a14)
	static struct FVector2D RandPointInDonut(float& InnerCircleRadius, float& OuterCircleRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.RandomGroundLocationInCircle (Underlying native function: RandomGroundLocationInCircle 0x86e8bdc)
	static bool RandomGroundLocationInCircle(class UObject*& WorldContextObject, struct FVector& CircleCenter, float& CircleRadius, class AActor*& TraceIgnoreActor, float& TraceStartZ, float& TraceEndZ, float& TraceRadius, struct FCollisionProfileName& TraceProfile, struct FVector& OutLocation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.PushOffTransformByHitLocation (Underlying native function: PushOffTransformByHitLocation 0x86e84c0)
	static struct FTransform PushOffTransformByHitLocation(class AActor*& RequestedBy, struct FTransform& InTransform, struct FHitResult& Hit, float& Distance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.PushOffHitLocation (Underlying native function: PushOffHitLocation 0x86e8380)
	static struct FVector PushOffHitLocation(class AActor*& RequestedBy, struct FHitResult& Hit, float& Distance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ProfilerBookmark (Underlying native function: ProfilerBookmark 0x6e8f5f8)
	static void ProfilerBookmark(struct FString& BookmarkStr); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.PlayLocalForceFeedbackAtLocationMulti (Underlying native function: PlayLocalForceFeedbackAtLocationMulti 0x239d1f0)
	static void PlayLocalForceFeedbackAtLocationMulti(class UObject*& WorldContextObject, class UForceFeedbackEffect*& NearForceFeedbackEffect, class UForceFeedbackEffect*& FarForceFeedbackEffect, struct FVector& Location, float& InnerRadius, float& OuterRadius, struct FName& tag); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.PlayLocalForceFeedbackAtLocation (Underlying native function: PlayLocalForceFeedbackAtLocation 0x86e7800)
	static void PlayLocalForceFeedbackAtLocation(class UObject*& WorldContextObject, class UForceFeedbackEffect*& ForceFeedbackEffect, struct FVector& Location, float& Radius, struct FName& tag); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.PickLootDropsWithNamedWeights (Underlying native function: PickLootDropsWithNamedWeights 0x86e75f4)
	static bool PickLootDropsWithNamedWeights(class UObject*& WorldContextObject, struct TArray<struct FFortItemEntry>& OutLootToDrop, struct FName& TierGroupName, int& WorldLevel, struct TMap<struct FName, float>& NamedWeightsMap, int& ForcedLootTier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.PickLootDrops (Underlying native function: PickLootDrops 0x86e7484)
	static bool PickLootDrops(class UObject*& WorldContextObject, struct TArray<struct FFortItemEntry>& OutLootToDrop, struct FName& TierGroupName, int& WorldLevel, int& ForcedLootTier); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.OpenActor (Underlying native function: OpenActor 0x86e727c)
	static bool OpenActor(class AActor*& OpenableInterfaceActor, class AController*& OptionalControllerInstigator, bool& bRequestFastOpen); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.OnSameTeam (Underlying native function: OnSameTeam 0x1850b5c)
	static bool OnSameTeam(class AActor*& ActorA, class AActor*& ActorB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.OnSameSquad (Underlying native function: OnSameSquad 0x86e7184)
	static bool OnSameSquad(class AFortPlayerPawnAthena*& PlayerPawnA, class AFortPlayerPawnAthena*& PlayerPawnB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.NotifyProjectileThrown (Underlying native function: NotifyProjectileThrown 0x86e6c10)
	static void NotifyProjectileThrown(class UClass*& ProjClass, class AActor*& RequestedBy, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, float& Speed); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.NotEqual_UniqueNetIdReplUniqueNetIdRepl (Underlying native function: NotEqual_UniqueNetIdReplUniqueNetIdRepl 0x86e6ac8)
	static bool NotEqualUniqueNetIdReplUniqueNetIdRepl(struct FUniqueNetIdRepl& A, struct FUniqueNetIdRepl& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.NormalizedAngleInDegreesToVector (Underlying native function: NormalizedAngleInDegreesToVector 0x86e6a30)
	static struct FVector NormalizedAngleInDegreesToVector(float& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeWeaponCoreAnimation (Underlying native function: MakeWeaponCoreAnimation 0x86e4c8c)
	static struct TEnumAsByte<EFortWeaponCoreAnimation> MakeWeaponCoreAnimation(struct TEnumAsByte<EFortWeaponCoreAnimation>& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeResourceType (Underlying native function: MakeResourceType 0x86e4c8c)
	static struct TEnumAsByte<EFortResourceType> MakeResourceType(struct TEnumAsByte<EFortResourceType>& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeMovementStyle (Underlying native function: MakeMovementStyle 0x86e4c8c)
	static struct TEnumAsByte<EFortMovementStyle> MakeMovementStyle(struct TEnumAsByte<EFortMovementStyle>& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeGameplayEffectContainerSpecFromAbilityComponent (Underlying native function: MakeGameplayEffectContainerSpecFromAbilityComponent 0x86e52d4)
	static struct FFortGameplayEffectContainerSpec MakeGameplayEffectContainerSpecFromAbilityComponent(struct FFortGameplayEffectContainer& EffectContainer, class UAbilitySystemComponent*& AbilityComp, int& GameplayEffectLevel); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeGameplayEffectContainerSpecFromAbility (Underlying native function: MakeGameplayEffectContainerSpecFromAbility 0x86e4d7c)
	static struct FFortGameplayEffectContainerSpec MakeGameplayEffectContainerSpecFromAbility(struct FFortGameplayEffectContainer& EffectContainer, class UGameplayAbility*& Ability, int& GameplayEffectLevel); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeDayNightPhase (Underlying native function: MakeDayNightPhase 0x86e4d04)
	static enum EFortDayPhase MakeDayNightPhase(enum EFortDayPhase& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeBuildingState (Underlying native function: MakeBuildingState 0x86e4c8c)
	static struct TEnumAsByte<EFortBuildingState> MakeBuildingState(struct TEnumAsByte<EFortBuildingState>& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.MakeAllPlayersTalkToSelf (Underlying native function: MakeAllPlayersTalkToSelf 0x86e49c4)
	static void MakeAllPlayersTalkToSelf(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo, class USoundBase*& Audio, float& Delay, bool& bInterruptCurrentLine, bool& bCanBeInterrupted, bool& bCanCue, struct TEnumAsByte<EFortFeedbackBroadcastFilter>& BroadcastFilter, bool& bLatent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.KeepCGPathOptimizations (Underlying native function: KeepCGPathOptimizations 0x86e4840)
	static void KeepCGPathOptimizations(class AController*& RequestedBy, int64_t& ExpectedBudget, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorldWithLootTier (Underlying native function: K2_SpawnPickupInWorldWithLootTier 0x86e44d8)
	static struct TArray<class AFortPickup*> K2SpawnPickupInWorldWithLootTier(class UObject*& WorldContextObject, struct FName& LootTierName, struct FVector& Position, int& OverrideMaxStackCount, bool& bToss, bool& bTossWithVelocity, struct FVector& TossVelocity, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, int& LootWorldLevel); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorldWithLevel (Underlying native function: K2_SpawnPickupInWorldWithLevel 0x86e4124)
	static class AFortPickup* K2SpawnPickupInWorldWithLevel(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, int& WorldLevel, int& NumberToSpawn, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup, int& PickupInstigatorHandle, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, class AFortPlayerController*& OptionalOwnerPC, bool& bPickupOnlyRelevantToOwner); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorldWithClassAndLevel (Underlying native function: K2_SpawnPickupInWorldWithClassAndLevel 0x86e3d34)
	static class AFortPickup* K2SpawnPickupInWorldWithClassAndLevel(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, int& WorldLevel, class UClass*& PickupClass, int& NumberToSpawn, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup, int& PickupInstigatorHandle, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, class AFortPlayerController*& OptionalOwnerPC, bool& bPickupOnlyRelevantToOwner); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorldWithClassAndItemEntry (Underlying native function: K2_SpawnPickupInWorldWithClassAndItemEntry 0x86e399c)
	static class AFortPickup* K2SpawnPickupInWorldWithClassAndItemEntry(class UObject*& WorldContextObject, struct FFortItemEntry& ItemEntry, class UClass*& PickupClass, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, class AFortPlayerController*& OptionalOwnerPC, bool& bPickupOnlyRelevantToOwner); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorldWithClass (Underlying native function: K2_SpawnPickupInWorldWithClass 0x86e35e4)
	static class AFortPickup* K2SpawnPickupInWorldWithClass(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, class UClass*& PickupClass, int& NumberToSpawn, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup, int& PickupInstigatorHandle, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, class AFortPlayerController*& OptionalOwnerPC, bool& bPickupOnlyRelevantToOwner); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorld (Underlying native function: K2_SpawnPickupInWorld 0x86e326c)
	static class AFortPickup* K2SpawnPickupInWorld(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, int& NumberToSpawn, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup, int& PickupInstigatorHandle, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, class AFortPlayerController*& OptionalOwnerPC, bool& bPickupOnlyRelevantToOwner); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_SetCurrentResourceType (Underlying native function: K2_SetCurrentResourceType 0x86e31b8)
	void K2SetCurrentResourceType(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& NewMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_RemoveItemsFromPlayerByNameStateValue (Underlying native function: K2_RemoveItemsFromPlayerByNameStateValue 0x86e3098)
	static int K2RemoveItemsFromPlayerByNameStateValue(class AFortPlayerController*& PlayerController, struct TEnumAsByte<EFortItemEntryState>& StateType, struct FName& StateValue, bool& bForceRemoval); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_RemoveItemsFromPlayerByIntStateValue (Underlying native function: K2_RemoveItemsFromPlayerByIntStateValue 0x86e2f78)
	static int K2RemoveItemsFromPlayerByIntStateValue(class AFortPlayerController*& PlayerController, struct TEnumAsByte<EFortItemEntryState>& StateType, int& StateValue, bool& bForceRemoval); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayerByGuid (Underlying native function: K2_RemoveItemFromPlayerByGuid 0x86e2e54)
	static int K2RemoveItemFromPlayerByGuid(class AFortPlayerController*& PlayerController, struct FGuid& ItemGuid, int& AmountToRemove, bool& bForceRemoval); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayer (Underlying native function: K2_RemoveItemFromPlayer 0x86e2ce4)
	static int K2RemoveItemFromPlayer(class AFortPlayerController*& PlayerController, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, int& AmountToRemove, bool& bForceRemoval); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromAllPlayers (Underlying native function: K2_RemoveItemFromAllPlayers 0x86e2bbc)
	static void K2RemoveItemFromAllPlayers(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, int& AmountToRemove); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_RemoveFortItemFromPlayer (Underlying native function: K2_RemoveFortItemFromPlayer 0x86e2a9c)
	static int K2RemoveFortItemFromPlayer(class AFortPlayerController*& PlayerController, class UFortItem*& Item, int& AmountToRemove, bool& bForceRemoval); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_PayBuildingResourceCost (Underlying native function: K2_PayBuildingResourceCost 0x86e28a4)
	static int K2PayBuildingResourceCost(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType, int& ResourceAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_HasBuildingResourcesAvailable (Underlying native function: K2_HasBuildingResourcesAvailable 0x86e272c)
	static bool K2HasBuildingResourcesAvailable(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType, int& ResourceAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GiveItemToPlayer (Underlying native function: K2_GiveItemToPlayer 0x86e25bc)
	static void K2GiveItemToPlayer(class AFortPlayerController*& PlayerController, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, int& NumberToGive, bool& bNotifyPlayer); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GiveItemToAllPlayers (Underlying native function: K2_GiveItemToAllPlayers 0x86e245c)
	static void K2GiveItemToAllPlayers(class UObject*& WorldContextObject, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, int& NumberToGive, bool& bNotifyPlayer); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GiveBuildingResource (Underlying native function: K2_GiveBuildingResource 0x86e2378)
	static void K2GiveBuildingResource(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType, int& ResourceAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GetResourceItemDefinition (Underlying native function: K2_GetResourceItemDefinition 0x86e22e4)
	static class UFortResourceItemDefinition* K2GetResourceItemDefinition(struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GetNumAvailableBuildingResources (Underlying native function: K2_GetNumAvailableBuildingResources 0x86e21b4)
	static int K2GetNumAvailableBuildingResources(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GetItemQuantityOnPlayer (Underlying native function: K2_GetItemQuantityOnPlayer 0x86e2054)
	static int K2GetItemQuantityOnPlayer(class AFortPlayerController*& PlayerController, class UFortItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GetCurrentResourceType (Underlying native function: K2_GetCurrentResourceType 0x86e1fcc)
	static struct TEnumAsByte<EFortResourceType> K2GetCurrentResourceType(class AFortPlayerController*& Controller); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_GetClosestAxisXY (Underlying native function: K2_GetClosestAxisXY 0x86e1f20)
	static struct FVector K2GetClosestAxisXY(struct FVector& InVector); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.K2_CycleBuildingMaterial (Underlying native function: K2_CycleBuildingMaterial 0x86e1dd8)
	void K2CycleBuildingMaterial(class AFortPlayerController*& Controller, bool& bBroadcast, bool& bDoUIFeedback, bool& bHonorAutoSwitch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.JonLHack_GetAllObjectsOfClassFromPath (Underlying native function: JonLHack_GetAllObjectsOfClassFromPath 0x86e1bcc)
	static struct TArray<class UObject*> JonLHackGetAllObjectsOfClassFromPath(struct FString& Path, class UClass*& Class, bool& bIncludeClassObjects); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsXPSystemEnabledForWorld (Underlying native function: IsXPSystemEnabledForWorld 0x86e1b4c)
	static bool IsXPSystemEnabledForWorld(class UWorld*& World); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsXPSystemEnabled (Underlying native function: IsXPSystemEnabled 0x86e1ac0)
	static bool IsXPSystemEnabled(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsVKEditPlaylist (Underlying native function: IsVKEditPlaylist 0x86e1a40)
	static bool IsVKEditPlaylist(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsValid_UniqueNetIdRepl (Underlying native function: IsValid_UniqueNetIdRepl 0x86e1970)
	static bool IsValidUniqueNetIdRepl(struct FUniqueNetIdRepl& InUniqueNetIdRepl); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsValid (Underlying native function: IsValid 0x86e18d8)
	static bool IsValid(struct FAttributeInfo& AttributeInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsUsingBattlEye (Underlying native function: IsUsingBattlEye 0x2830cb8)
	static bool IsUsingBattlEye(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsTabletGame (Underlying native function: IsTabletGame 0x86e1894)
	static bool IsTabletGame(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsRunningNoMCP (Underlying native function: IsRunningNoMCP 0x86e1870)
	static bool IsRunningNoMCP(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsPhoneGame (Underlying native function: IsPhoneGame 0x86e1830)
	static bool IsPhoneGame(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsPapayaPlaylist (Underlying native function: IsPapayaPlaylist 0x86e17b0)
	static bool IsPapayaPlaylist(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsNavigationDataBuildInProgress (Underlying native function: IsNavigationDataBuildInProgress 0x86e16b4)
	static bool IsNavigationDataBuildInProgress(class ANavigationData*& NavigationData); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsMobilePlatform (Underlying native function: IsMobilePlatform 0x182c668)
	static bool IsMobilePlatform(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsMobileGame (Underlying native function: IsMobileGame 0x22a0240)
	static bool IsMobileGame(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsLocationInSafeZone (Underlying native function: IsLocationInSafeZone 0x86e15e8)
	static bool IsLocationInSafeZone(class UObject*& WorldContextObject, struct FVector& Location); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsLinkingStreamedAccountsEnabled (Underlying native function: IsLinkingStreamedAccountsEnabled 0x86b10d4)
	static bool IsLinkingStreamedAccountsEnabled(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsItemDefRandomCustomizationSelector (Underlying native function: IsItemDefRandomCustomizationSelector 0x2e40008)
	static bool IsItemDefRandomCustomizationSelector(class UFortItemDefinition*& InItemDef); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsItemDefinitionAnAbilityOrVehcileWeapon (Underlying native function: IsItemDefinitionAnAbilityOrVehcileWeapon 0x86e1568)
	static bool IsItemDefinitionAnAbilityOrVehcileWeapon(class UFortItemDefinition*& ItemDefinition); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsHeldObjectBeingHeld (Underlying native function: IsHeldObjectBeingHeld 0x86e14c8)
	static bool IsHeldObjectBeingHeld(class AActor*& HeldObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsFullBodyHit (Underlying native function: IsFullBodyHit 0x86e13e0)
	static bool IsFullBodyHit(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsFatalHit (Underlying native function: IsFatalHit 0x86e12f8)
	static bool IsFatalHit(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsEnvQueryResultValid (Underlying native function: IsEnvQueryResultValid 0x86e0ef4)
	static bool IsEnvQueryResultValid(struct FEnvQueryResult& Result, struct FString& OutDebugString); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsDiceCritical (Underlying native function: IsDiceCritical 0x86e0df4)
	static bool IsDiceCritical(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCurveTableRowValid (Underlying native function: IsCurveTableRowValid 0x86e0c34)
	static bool IsCurveTableRowValid(struct FCurveTableRowHandle& CurveTableRowHandle, struct FString& ContextString); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCriticalHit (Underlying native function: IsCriticalHit 0x26e2058)
	static bool IsCriticalHit(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCreativeRoyalePlaylist (Underlying native function: IsCreativeRoyalePlaylist 0x86e0b74)
	static bool IsCreativeRoyalePlaylist(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCreativeOrPlaygroundModePlaylist (Underlying native function: IsCreativeOrPlaygroundModePlaylist 0x27d1c78)
	static bool IsCreativeOrPlaygroundModePlaylist(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCosmeticObjectDisplayedInFrontendContext (Underlying native function: IsCosmeticObjectDisplayedInFrontendContext 0x2ab1228)
	static bool IsCosmeticObjectDisplayedInFrontendContext(class UObject*& CosmeticObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCosmeticObjectDisplayedAsPreview (Underlying native function: IsCosmeticObjectDisplayedAsPreview 0x86e0af4)
	static bool IsCosmeticObjectDisplayedAsPreview(class UObject*& CosmeticObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsConsolePlatform (Underlying native function: IsConsolePlatform 0x24f75e4)
	static bool IsConsolePlatform(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCompetitivePlaylist (Underlying native function: IsCompetitivePlaylist 0x2d87404)
	static bool IsCompetitivePlaylist(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsCellConnection (Underlying native function: IsCellConnection 0x24f75e4)
	static bool IsCellConnection(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsBattleLabModePlaylist (Underlying native function: IsBattleLabModePlaylist 0x86e0a74)
	static bool IsBattleLabModePlaylist(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsAssetNull (Underlying native function: IsAssetNull 0x142c270)
	static bool IsAssetNull(struct TWeakObjectPtr<class UObject>& Asset); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IsActorWithinGoldenPOI (Underlying native function: IsActorWithinGoldenPOI 0x86e089c)
	static bool IsActorWithinGoldenPOI(class UObject*& WorldContextObject, class AActor*& InActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.IsActorSubmergedInOcean (Underlying native function: IsActorSubmergedInOcean 0x86e07f0)
	static bool IsActorSubmergedInOcean(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.InEditorOrPIE (Underlying native function: InEditorOrPIE 0x22d0498)
	static bool InEditorOrPIE(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.InEditor (Underlying native function: InEditor 0x22d0498)
	static bool InEditor(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.IncrementAnalyticMatchCount (Underlying native function: IncrementAnalyticMatchCount 0x86e0704)
	static int IncrementAnalyticMatchCount(class UObject*& WorldContextObject, enum EAnalyticMatchCounts& MatchCountID, int& AmountToAdd); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.HideTutorialWidget (Underlying native function: HideTutorialWidget 0x86e05e8)
	static void HideTutorialWidget(class UObject*& WorldContextObject, struct FName& WidgetName); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.HasSelectableRewards (Underlying native function: HasSelectableRewards 0x86e0448)
	static bool HasSelectableRewards(struct FFortRewardInfo& RewardInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.HasRewards (Underlying native function: HasRewards 0x86e0378)
	static bool HasRewards(struct FFortRewardInfo& RewardInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.HasOpenBroadcasterGrantWindow (Underlying native function: HasOpenBroadcasterGrantWindow 0x86e020c)
	static bool HasOpenBroadcasterGrantWindow(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.HasMultipleVisibleRewards (Underlying native function: HasMultipleVisibleRewards 0x86e013c)
	static bool HasMultipleVisibleRewards(struct FFortRewardInfo& RewardInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GiveItemToInventoryOwnerWithParams (Underlying native function: GiveItemToInventoryOwnerWithParams 0x86dfeec)
	static class UFortWorldItem* GiveItemToInventoryOwnerWithParams(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, int& NumberToGive, struct FGiveInventoryItemParams& Params); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GiveItemToInventoryOwner (Underlying native function: GiveItemToInventoryOwner 0x86dfcd4)
	static class UFortWorldItem* GiveItemToInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, int& NumberToGive, bool& bNotifyPlayer, int& ItemLevel, int& PickupInstigatorHandle, bool& bUseItemPickupAnalyticEvent); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetWeaponStatsRow (Underlying native function: GetWeaponStatsRow 0x86dfbc0)
	static bool GetWeaponStatsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortBaseWeaponStats& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetWeaponDurabilityByRarityStatsRow (Underlying native function: GetWeaponDurabilityByRarityStatsRow 0x86dfa88)
	static bool GetWeaponDurabilityByRarityStatsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortWeaponDurabilityByRarityStats& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetUpgradedWeaponItemVerticalToRarity (Underlying native function: GetUpgradedWeaponItemVerticalToRarity 0x86df9c4)
	static class UFortWeaponItemDefinition* GetUpgradedWeaponItemVerticalToRarity(class UFortWeaponItemDefinition*& ItemToUpgrade, enum EFortRarity& NewRarity); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetUpgradedWeaponItemFromTable (Underlying native function: GetUpgradedWeaponItemFromTable 0x86df900)
	static class UFortWeaponItemDefinition* GetUpgradedWeaponItemFromTable(class UFortWeaponItemDefinition*& ItemToUpgrade, enum EFortWeaponUpgradeDirection& UpgradeDirection); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetUnmodifiedDamage (Underlying native function: GetUnmodifiedDamage 0x86df814)
	static float GetUnmodifiedDamage(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTrapStatsRow (Underlying native function: GetTrapStatsRow 0x86df700)
	static bool GetTrapStatsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortTrapStats& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTooltipTextFromTokenFromTooltipClass (Underlying native function: GetTooltipTextFromTokenFromTooltipClass 0x86df4ac)
	static bool GetTooltipTextFromTokenFromTooltipClass(class UObject*& WorldContextObject, class UObject*& ObjectToDescribe, class UClass*& TooltipClass, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTooltipTextFromToken (Underlying native function: GetTooltipTextFromToken 0x86df298)
	static bool GetTooltipTextFromToken(class UObject*& WorldContextObject, class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTooltipNumericValueFromTooltipClass (Underlying native function: GetTooltipNumericValueFromTooltipClass 0x86df080)
	static bool GetTooltipNumericValueFromTooltipClass(class UObject*& WorldContextObject, class UObject*& ObjectToDescribe, class UClass*& TooltipClass, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, float& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTooltipNumericValue (Underlying native function: GetTooltipNumericValue 0x86deeb0)
	static bool GetTooltipNumericValue(class UObject*& WorldContextObject, class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, float& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTooltipDescriptionFromTooltipClass (Underlying native function: GetTooltipDescriptionFromTooltipClass 0x86dec5c)
	static bool GetTooltipDescriptionFromTooltipClass(class UObject*& WorldContextObject, class UObject*& ObjectToDescribe, class UClass*& TooltipClass, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct TArray<struct FText>& Description, bool& bSummaryTooltip); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTooltipDescription (Underlying native function: GetTooltipDescription 0x86dea5c)
	static bool GetTooltipDescription(class UObject*& WorldContextObject, class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct TArray<struct FText>& Description, bool& bSummaryTooltip); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTimeUntilInRealTimeSeconds (Underlying native function: GetTimeUntilInRealTimeSeconds 0x86de990)
	static float GetTimeUntilInRealTimeSeconds(class UObject*& WorldContextObject, float& GameTime); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTimeOfDaySpeed (Underlying native function: GetTimeOfDaySpeed 0x86de910)
	static float GetTimeOfDaySpeed(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTimeOfDay (Underlying native function: GetTimeOfDay 0x86de890)
	static float GetTimeOfDay(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTimeDayPhaseBegins (Underlying native function: GetTimeDayPhaseBegins 0x86de7cc)
	static float GetTimeDayPhaseBegins(class UObject*& WorldContextObject, enum EFortDayPhase& DayPhase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetThreatVisualsManager (Underlying native function: GetThreatVisualsManager 0x86de74c)
	static class AFortThreatVisualsManager* GetThreatVisualsManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTeamInfo (Underlying native function: GetTeamInfo 0x86de658)
	static class AFortTeamInfo* GetTeamInfo(class UObject*& WorldContextObject, unsigned char& Team); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTeamAffiliationToLocalPlayer (Underlying native function: GetTeamAffiliationToLocalPlayer 0x130986c)
	static struct TEnumAsByte<EFortTeamAffiliation> GetTeamAffiliationToLocalPlayer(class UObject*& WorldContextObject, unsigned char& Team, bool& bIncludeNonSpectators, bool& bIncludeSpectators); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTeamAffiliationForActorToLocalPlayer (Underlying native function: GetTeamAffiliationForActorToLocalPlayer 0x1308e98)
	static struct TEnumAsByte<EFortTeamAffiliation> GetTeamAffiliationForActorToLocalPlayer(class AActor*& Actor, bool& bIncludeNonSpectators, bool& bIncludeSpectators); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTeamAffiliationBetweenTeams (Underlying native function: GetTeamAffiliationBetweenTeams 0x86de594)
	static struct TEnumAsByte<EFortTeamAffiliation> GetTeamAffiliationBetweenTeams(unsigned char& TeamA, unsigned char& TeamB); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetTeamAffiliation (Underlying native function: GetTeamAffiliation 0x86de4d8)
	static struct TEnumAsByte<EFortTeamAffiliation> GetTeamAffiliation(class AActor*& ActorA, class AActor*& ActorB); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetSubGame (Underlying native function: GetSubGame 0x206538c)
	static enum ESubGame GetSubGame(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetStunTime (Underlying native function: GetStunTime 0x86de3ec)
	static float GetStunTime(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetStaticMeshesForClass (Underlying native function: GetStaticMeshesForClass 0x86de314)
	static void GetStaticMeshesForClass(class UClass*& Class, struct TArray<class UStaticMesh*>& OutStaticMeshes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetStaticMeshComponentsForClass (Underlying native function: GetStaticMeshComponentsForClass 0x5996ea0)
	static void GetStaticMeshComponentsForClass(class UClass*& Class, struct TArray<class UStaticMeshComponent*>& OutStaticMeshComponents); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetSpecialActorInputActionDataTableRow (Underlying native function: GetSpecialActorInputActionDataTableRow 0x86de274)
	static struct FDataTableRowHandle GetSpecialActorInputActionDataTableRow(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetSoftPtrAssetName (Underlying native function: GetSoftPtrAssetName 0x86ddecc)
	static struct FString GetSoftPtrAssetName(struct TWeakObjectPtr<class UObject>& Asset); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetShowTeamSelectButton (Underlying native function: GetShowTeamSelectButton 0x86ddcfc)
	static bool GetShowTeamSelectButton(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetServerWorldTimeSeconds (Underlying native function: GetServerWorldTimeSeconds 0x86ddc7c)
	static float GetServerWorldTimeSeconds(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetSeasonalEventManager (Underlying native function: GetSeasonalEventManager 0x86ddb64)
	static class UFortSeasonalEventManager* GetSeasonalEventManager(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetSafeZoneLocation (Underlying native function: GetSafeZoneLocation 0x86dd9ec)
	static bool GetSafeZoneLocation(class UObject*& WorldContextObject, int& SafeZoneIndex, struct FVector& OutLocation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetResourceMaxStackSize (Underlying native function: GetResourceMaxStackSize 0x86dd7f0)
	static int GetResourceMaxStackSize(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetRangedWeaponStatsRow (Underlying native function: GetRangedWeaponStatsRow 0x1bc6b84)
	static bool GetRangedWeaponStatsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortRangedWeaponStats& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetRandomWeightedIndex (Underlying native function: GetRandomWeightedIndex 0x86dd754)
	static int GetRandomWeightedIndex(struct TArray<float>& InWeights); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetRandomSurvivorName (Underlying native function: GetRandomSurvivorName 0x86dd580)
	static struct FText GetRandomSurvivorName(class UObject*& WorldContextObject, struct TEnumAsByte<EFortDisplayGender>& Gender, bool& bRemoveFromList); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetRandomLiveStreamingViewerName (Underlying native function: GetRandomLiveStreamingViewerName 0x86dd46c)
	static struct FText GetRandomLiveStreamingViewerName(class UObject*& WorldContextObject, bool& bRemoveFromList); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetProjectileTrajectoryData (Underlying native function: GetProjectileTrajectoryData 0x86dd2d0)
	static void GetProjectileTrajectoryData(struct FFortProjectileTrajectoryData& TrajectoryData, class AActor*& Instigator, class UClass*& ProjectileClass, float& DefaultSpeed, float& DefaultGravityScale); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPrimaryInstance (Underlying native function: GetPrimaryInstance 0x86dd20c)
	static class UGameplayAbility* GetPrimaryInstance(struct FGameplayAbilitySpec& Spec); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPrimaryAbilityInstanceOfAbilitySystemComponent (Underlying native function: GetPrimaryAbilityInstanceOfAbilitySystemComponent 0x86dd0c4)
	static class UGameplayAbility* GetPrimaryAbilityInstanceOfAbilitySystemComponent(class UFortAbilitySystemComponent*& AbilitySystemComponent, class UClass*& AbilityClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPreviousDayPhase (Underlying native function: GetPreviousDayPhase 0x86dd020)
	static enum EFortDayPhase GetPreviousDayPhase(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlaylistUsesCustomCharacterParts (Underlying native function: GetPlaylistUsesCustomCharacterParts 0x285aa78)
	static bool GetPlaylistUsesCustomCharacterParts(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlaylistAllowsTeamSwitching (Underlying native function: GetPlaylistAllowsTeamSwitching 0x86dcf40)
	static bool GetPlaylistAllowsTeamSwitching(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlayerOrObjectNameSafe (Underlying native function: GetPlayerOrObjectNameSafe 0x86dce84)
	static struct FString GetPlayerOrObjectNameSafe(class AActor*& InActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlayerNameSafe (Underlying native function: GetPlayerNameSafe 0x1604ba8)
	static struct FString GetPlayerNameSafe(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlayerInfoFromUniqueID (Underlying native function: GetPlayerInfoFromUniqueID 0x86dcd58)
	static class UFortRegisteredPlayerInfo* GetPlayerInfoFromUniqueID(class UObject*& WorldContextObject, struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlayerAimPointHit (Underlying native function: GetPlayerAimPointHit 0x86dcba0)
	static struct FHitResult GetPlayerAimPointHit(class AFortPlayerController*& SourcePlayer, float& MaxRange, struct TArray<class AActor*>& IgnoredActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPlayerAimPoint (Underlying native function: GetPlayerAimPoint 0x86dc888)
	static struct FVector GetPlayerAimPoint(class AFortPlayerController*& SourcePlayer, float& MaxRange, struct TArray<class AActor*>& IgnoredActors, bool& NoTrace); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPhysicalMemoryMB (Underlying native function: GetPhysicalMemoryMB 0x86dc840)
	static int64_t GetPhysicalMemoryMB(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetPawnStatsRow (Underlying native function: GetPawnStatsRow 0x86dc72c)
	static bool GetPawnStatsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortPawnStats& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetOceanTotalHeight (Underlying native function: GetOceanTotalHeight 0x86dc6ac)
	static float GetOceanTotalHeight(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetNumericCVar (Underlying native function: GetNumericCVar 0x16dc884)
	static bool GetNumericCVar(struct FString& CVar, float& OutValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetNumberOfRegisteredPlayers (Underlying native function: GetNumberOfRegisteredPlayers 0x86dc620)
	static int GetNumberOfRegisteredPlayers(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetNumActorsOfClass (Underlying native function: GetNumActorsOfClass 0x86dc55c)
	static int GetNumActorsOfClass(class UObject*& WorldContextObject, class UClass*& ActorClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetNavigationDataForActor (Underlying native function: GetNavigationDataForActor 0x86dc3ec)
	static class ANavigationData* GetNavigationDataForActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetMusicManager (Underlying native function: GetMusicManager 0x86dc36c)
	static class AFortMusicManager* GetMusicManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetMIDForSkeletalMeshComponent (Underlying native function: GetMIDForSkeletalMeshComponent 0x86dbf6c)
	static class UMaterialInstanceDynamic* GetMIDForSkeletalMeshComponent(class USkeletalMeshComponent*& SkeletalMeshComponent, int& ElementIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetMeleeWeaponStatsRow (Underlying native function: GetMeleeWeaponStatsRow 0x86dc258)
	static bool GetMeleeWeaponStatsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortMeleeWeaponStats& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetMatchTime (Underlying native function: GetMatchTime 0x86dc088)
	static float GetMatchTime(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetMatchmakingDifficultyRangeFromDifficultyInfo (Underlying native function: GetMatchmakingDifficultyRangeFromDifficultyInfo 0x86dc118)
	static void GetMatchmakingDifficultyRangeFromDifficultyInfo(struct FGameDifficultyInfo& DifficultyInfo, float& OutMinDifficulty, float& OutMaxDifficulty); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetLootLevel (Underlying native function: GetLootLevel 0x86dbedc)
	static int GetLootLevel(class UObject*& WorldContextObject); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetLocalFortPlayerControllers (Underlying native function: GetLocalFortPlayerControllers 0x2134050)
	static struct TArray<class AFortPlayerController*> GetLocalFortPlayerControllers(class UObject*& WorldContextObject, bool& bIncludeNonSpectators, bool& bIncludeSpectators); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetLicensedAudioTreatment (Underlying native function: GetLicensedAudioTreatment 0x86dbe5c)
	static enum ELicensedAudioTreatment GetLicensedAudioTreatment(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetLevelViewportCameraInfo (Underlying native function: GetLevelViewportCameraInfo 0x86dbd70)
	static bool GetLevelViewportCameraInfo(class UObject*& WorldContextObject, struct FVector& CameraLocation, struct FRotator& CameraRotation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetItemQuantityOnPlayerByGUID (Underlying native function: GetItemQuantityOnPlayerByGUID 0x86dbc5c)
	static int GetItemQuantityOnPlayerByGUID(class AFortPlayerController*& PlayerController, struct FGuid& ItemGuid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetItemDefinitionFromItemQuantityPair (Underlying native function: GetItemDefinitionFromItemQuantityPair 0x86dbbcc)
	static class UFortItemDefinition* GetItemDefinitionFromItemQuantityPair(struct FFortItemQuantityPair& ItemQuantityPair); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetIsPlayingReplay (Underlying native function: GetIsPlayingReplay 0x25a451c)
	static bool GetIsPlayingReplay(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetIsBroadcastClient (Underlying native function: GetIsBroadcastClient 0x86dbb24)
	static bool GetIsBroadcastClient(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetInventoryItemWithGuid (Underlying native function: GetInventoryItemWithGuid 0x86dba2c)
	static class UFortItem* GetInventoryItemWithGuid(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct FGuid& ItemGuid); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetImpulseData (Underlying native function: GetImpulseData 0x86db864)
	static void GetImpulseData(struct FGameplayEffectContextHandle& EffectContext, struct FVector& ImpulseDirection, float& KnockbackMagnitude, float& KnockbackZAngle); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetHumanReadableName (Underlying native function: GetHumanReadableName 0x86db644)
	static struct FString GetHumanReadableName(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetHoursUntilDayPhase (Underlying native function: GetHoursUntilDayPhase 0x86db57c)
	static int GetHoursUntilDayPhase(class UObject*& WorldContextObject, enum EFortDayPhase& DayPhase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetHostilityPercentage (Underlying native function: GetHostilityPercentage 0x86db4f0)
	static float GetHostilityPercentage(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetHeldObjectsOwningPlayer (Underlying native function: GetHeldObjectsOwningPlayer 0x86db43c)
	static class AFortPlayerPawn* GetHeldObjectsOwningPlayer(class AActor*& HeldObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetHeldObjectComponentAttachedToPlayer (Underlying native function: GetHeldObjectComponentAttachedToPlayer 0x86db3bc)
	static class UFortHeldObjectComponent* GetHeldObjectComponentAttachedToPlayer(class AFortPlayerPawn*& FortPawn); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetHeldObjectAttachedToPlayer (Underlying native function: GetHeldObjectAttachedToPlayer 0x86db32c)
	static class AActor* GetHeldObjectAttachedToPlayer(class AFortPlayerPawn*& FortPawn); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetGlobalTimeOfDayManager (Underlying native function: GetGlobalTimeOfDayManager 0x2c84ea4)
	static struct TScriptInterface<class IFortTimeOfDayManagerInterface> GetGlobalTimeOfDayManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetGameStateAthenaFromContext (Underlying native function: GetGameStateAthenaFromContext 0x2651f7c)
	static class AFortGameStateAthena* GetGameStateAthenaFromContext(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetGameStateAthena (Underlying native function: GetGameStateAthena 0x2651f7c)
	static class AFortGameStateAthena* GetGameStateAthena(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetGameContextGameplayTags (Underlying native function: GetGameContextGameplayTags 0x86db158)
	static bool GetGameContextGameplayTags(class UObject*& WorldContextObject, struct FGameplayTagContainer& OutGameContextGameplayTags); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFortPlayerPawnsInRange (Underlying native function: GetFortPlayerPawnsInRange 0x86daf98)
	static void GetFortPlayerPawnsInRange(class UObject*& WorldContextObject, struct FVector& SourcePosition, float& Range, bool& bDo2DCheck, struct TArray<class AFortPlayerPawn*>& OutFortPlayerPawns); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFortPlayerPawns (Underlying native function: GetFortPlayerPawns 0x86dae9c)
	static struct TArray<class AFortPlayerPawn*> GetFortPlayerPawns(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFortPlayerControllerFromActor (Underlying native function: GetFortPlayerControllerFromActor 0x20d7984)
	static class AFortPlayerController* GetFortPlayerControllerFromActor(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFortPhysicalSurface (Underlying native function: GetFortPhysicalSurface 0x86dadf4)
	static struct TEnumAsByte<EPhysicalSurface> GetFortPhysicalSurface(struct FHitResult& Hit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFortPawnsInRange (Underlying native function: GetFortPawnsInRange 0x160587c)
	static void GetFortPawnsInRange(class UObject*& WorldContextObject, struct FVector& SourcePosition, float& Range, bool& bDo2DCheck, struct TArray<class AFortPawn*>& OutFortPawns); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFortGameUserSettings (Underlying native function: GetFortGameUserSettings 0x182c6c8)
	static class UFortGameUserSettings* GetFortGameUserSettings(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFloatHoursUntilDayPhase (Underlying native function: GetFloatHoursUntilDayPhase 0x86dacf4)
	static float GetFloatHoursUntilDayPhase(class UObject*& WorldContextObject, enum EFortDayPhase& DayPhase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFirstLocalFortPlayerController (Underlying native function: GetFirstLocalFortPlayerController 0x1309b10)
	static class AFortPlayerController* GetFirstLocalFortPlayerController(class UObject*& WorldContextObject, bool& bIncludeNonSpectators, bool& bIncludeSpectators); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetFactionTagContainerForActor (Underlying native function: GetFactionTagContainerForActor 0x86dabf4)
	static struct FGameplayTagContainer GetFactionTagContainerForActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetEffectDirection (Underlying native function: GetEffectDirection 0x86daaf8)
	static struct FVector GetEffectDirection(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetDirectionActorToActor (Underlying native function: GetDirectionActorToActor 0x86da93c)
	static struct FRotator GetDirectionActorToActor(class AActor*& SourceActor, class AActor*& TargetActor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetDefaultAbsoluteTimeOfDaySpeed (Underlying native function: GetDefaultAbsoluteTimeOfDaySpeed 0x86da8bc)
	static float GetDefaultAbsoluteTimeOfDaySpeed(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetDebugStringForUniqueId (Underlying native function: GetDebugStringForUniqueId 0x86da6f8)
	static struct FString GetDebugStringForUniqueId(struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetCurrentSafeZonePhase (Underlying native function: GetCurrentSafeZonePhase 0x86da560)
	static int GetCurrentSafeZonePhase(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetCurrentDayPhase (Underlying native function: GetCurrentDayPhase 0x26914e0)
	static enum EFortDayPhase GetCurrentDayPhase(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetCurrentAthenaWinCondition (Underlying native function: GetCurrentAthenaWinCondition 0x86da484)
	static enum EAthenaWinCondition GetCurrentAthenaWinCondition(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetControllerSpecialStatSourceTags (Underlying native function: GetControllerSpecialStatSourceTags 0x86d9f48)
	static void GetControllerSpecialStatSourceTags(class AController*& Controller, struct FGameplayTagContainer& InOutTags, class AController*& InitiatorPC, bool& bNeedToFetchClassTags, bool& bInitiatorHadFriendHelp); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetControllerObjectiveStatSourceTags (Underlying native function: GetControllerObjectiveStatSourceTags 0x86d9e18)
	static void GetControllerObjectiveStatSourceTags(class AController*& Controller, struct FGameplayTagContainer& OutTags, bool& bIsInitiator); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetControllerFromActor (Underlying native function: GetControllerFromActor 0x86d9cd8)
	static class AController* GetControllerFromActor(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetContextualTimeOfDayManager (Underlying native function: GetContextualTimeOfDayManager 0x2803e98)
	static struct TScriptInterface<class IFortTimeOfDayManagerInterface> GetContextualTimeOfDayManager(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetClosestFortPlayerPawnByTeamAffiliation (Underlying native function: GetClosestFortPlayerPawnByTeamAffiliation 0x86d9b98)
	static class AFortPlayerPawn* GetClosestFortPlayerPawnByTeamAffiliation(class UObject*& WorldContextObject, struct FVector& Position, class AActor*& TeamAffiliationActor, struct TEnumAsByte<EFortTeamAffiliation>& TeamAffiliation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetClosestFortPlayerPawn (Underlying native function: GetClosestFortPlayerPawn 0x86d9ac8)
	static class AFortPlayerPawn* GetClosestFortPlayerPawn(class UObject*& WorldContextObject, struct FVector& Position); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetClosestBuildingActorFromArray (Underlying native function: GetClosestBuildingActorFromArray 0x86d98b8)
	static class ABuildingSMActor* GetClosestBuildingActorFromArray(class AActor*& Actor, struct TArray<class ABuildingSMActor*>& ArrayOfBuildings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetClosestActorFromArray (Underlying native function: GetClosestActorFromArray 0x86d98b8)
	static class AActor* GetClosestActorFromArray(class AActor*& Actor, struct TArray<class AActor*>& ArrayOfActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetCameraLookHitResult (Underlying native function: GetCameraLookHitResult 0x86d975c)
	static bool GetCameraLookHitResult(struct FHitResult& OutHitResult, class AFortPlayerController*& PlayerController, float& CameraForwardTraceDistance, bool& bTraceComplex); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetCameraComponentAdditiveOffset (Underlying native function: GetCameraComponentAdditiveOffset 0x86d95d0)
	static bool GetCameraComponentAdditiveOffset(struct FTransform& OutAdditiveTransformOffset, float& OutAdditiveFOVOffset, class UCameraComponent*& CameraComponent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetCalendarEventInformation (Underlying native function: GetCalendarEventInformation 0x1adc5ac)
	static void GetCalendarEventInformation(class UObject*& WorldContextObject, struct FString& EventName, bool& bIsEventActive, struct FTimespan*& TimeSinceBegin, struct FTimespan*& TimeUntilEnd, float& TimespanRatio); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetBuildingStructuralSupportSystem (Underlying native function: GetBuildingStructuralSupportSystem 0x2a32d3c)
	static void GetBuildingStructuralSupportSystem(class UObject*& WorldContextObject, class UBuildingStructuralSupportSystem*& BuildingStructuralSupportSystem); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetBuildingHealthPercentage (Underlying native function: GetBuildingHealthPercentage 0x2823138)
	static float GetBuildingHealthPercentage(class ABuildingActor*& BuildingActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetBroadcasterGrantWindowSecondsRemaining (Underlying native function: GetBroadcasterGrantWindowSecondsRemaining 0x86d9550)
	static float GetBroadcasterGrantWindowSecondsRemaining(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetBestAimedAtPawnByAngle (Underlying native function: GetBestAimedAtPawnByAngle 0x86d8ee4)
	static class AFortPawn* GetBestAimedAtPawnByAngle(class AFortPlayerPawn*& SourcePawn, struct FVector& DestOffsetVec, float& MaxAngleInDegree, float& Range, bool& bTargetAIPawns, struct TEnumAsByte<EFortTeamAffiliation>& TeamAffiliationRequirement); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAngleDegrees (Underlying native function: GetAngleDegrees 0x86d7c0c)
	static float GetAngleDegrees(struct FVector& Source, struct FVector& Target); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAmmoItemDefinitionsFromInventoryWeapons (Underlying native function: GetAmmoItemDefinitionsFromInventoryWeapons 0x86d7b80)
	static struct TArray<struct FAmmoItemState> GetAmmoItemDefinitionsFromInventoryWeapons(class AFortPlayerController*& Controller); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAllFortPlayerPawns (Underlying native function: GetAllFortPlayerPawns 0x86d7aa8)
	static void GetAllFortPlayerPawns(class UObject*& WorldContextObject, struct TArray<class AFortPlayerPawn*>& OutFortPlayerPawns); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAllFortPlayerControllers (Underlying native function: GetAllFortPlayerControllers 0x86d7988)
	static struct TArray<class AFortPlayerController*> GetAllFortPlayerControllers(class UObject*& WorldContextObject, bool& bIncludeNonSpectators, bool& bIncludeSpectators); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAimedAtEnemy (Underlying native function: GetAimedAtEnemy 0x86d763c)
	static class AFortPawn* GetAimedAtEnemy(class AFortPlayerController*& SourcePlayer, float& RectHalfWidth, float& RectHalfHeight, float& Range, bool& bTargetAIPawns); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAIGoalManager (Underlying native function: GetAIGoalManager 0x86d5170)
	static class AFortAIGoalManager* GetAIGoalManager(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetAIDirector (Underlying native function: GetAIDirector 0x86d5170)
	static class AFortAIDirector* GetAIDirector(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetActorTeamInfo (Underlying native function: GetActorTeamInfo 0x86d7570)
	static class AFortTeamInfo* GetActorTeamInfo(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetActorTeam (Underlying native function: GetActorTeam 0x2780f0c)
	static unsigned char GetActorTeam(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetActorPvPTeamIndex (Underlying native function: GetActorPvPTeamIndex 0x86d7454)
	static bool GetActorPvPTeamIndex(class AActor*& Actor, unsigned char& TeamIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GetActorCollisionComponentBounds (Underlying native function: GetActorCollisionComponentBounds 0x86d72d4)
	static void GetActorCollisionComponentBounds(struct FVector& OutOrigin, struct FVector& OutBoxExtent, class AActor*& BoundsActor, bool& bIncludeFromChildActors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.GenerateGuidFromObject (Underlying native function: GenerateGuidFromObject 0x86d6f08)
	static struct FGuid GenerateGuidFromObject(class UObject*& InObject, bool& bOnlyStrings); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FortShippingLog (Underlying native function: FortShippingLog 0x1e7be78)
	static void FortShippingLog(class UObject*& WorldContextObject, struct FString& InString, bool& bLogAsWarning); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FortBlueprintLog (Underlying native function: FortBlueprintLog 0x86d6d80)
	static void FortBlueprintLog(class UObject*& WorldContextObject, struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindStaticGroundLocationWithExtentAt (Underlying native function: FindStaticGroundLocationWithExtentAt 0x86d6950)
	static struct FVector FindStaticGroundLocationWithExtentAt(class UWorld*& World, struct FVector& InLocation, struct FQuat& ActorRotation, struct FVector& ActorExtent, class AActor*& IgnoreActor, float& TraceStartZ, float& TraceEndZ); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindStaticGroundLocationUsingWorldContextAt (Underlying native function: FindStaticGroundLocationUsingWorldContextAt 0x86d6768)
	static struct FVector FindStaticGroundLocationUsingWorldContextAt(class UObject*& WorldContextObject, struct FVector& InLocation, class AActor*& IgnoreActor, float& TraceStartZ, float& TraceEndZ); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindStaticGroundLocationAt (Underlying native function: FindStaticGroundLocationAt 0x86d6408)
	static struct FVector FindStaticGroundLocationAt(class UWorld*& World, struct FVector& InLocation, class AActor*& IgnoreActor, float& TraceStartZ, float& TraceEndZ); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindOrAddArbitraryComponent (Underlying native function: FindOrAddArbitraryComponent 0x86d6344)
	static class UActorComponent* FindOrAddArbitraryComponent(class AActor*& TargetActor, class UClass*& ComponentClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindGroundLocationUsingWorldContextAt (Underlying native function: FindGroundLocationUsingWorldContextAt 0x86d6114)
	static struct FVector FindGroundLocationUsingWorldContextAt(class UObject*& WorldContextObject, class AActor*& IgnoreActor, struct FVector& InLocation, float& TraceStartZ, float& TraceEndZ, struct FName& TraceName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindGroundLocationAt (Underlying native function: FindGroundLocationAt 0x86d5f2c)
	static struct FVector FindGroundLocationAt(class UWorld*& World, class AActor*& IgnoreActor, struct FVector& InLocation, float& TraceStartZ, float& TraceEndZ, struct FName& TraceName); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindFirstTagForParentTagChecked (Underlying native function: FindFirstTagForParentTagChecked 0x86d5d44)
	static bool FindFirstTagForParentTagChecked(class AActor*& TargetActor, struct FGameplayTag& ParentTagToCheck, struct FGameplayTag& OutChildTag); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindAllComponents (Underlying native function: FindAllComponents 0x86d5c44)
	static struct TArray<class UActorComponent*> FindAllComponents(class UObject*& WorldContextObject, class UClass*& ComponentClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FindActorsContainingName (Underlying native function: FindActorsContainingName 0x86d5a54)
	static struct TArray<class AActor*> FindActorsContainingName(class UObject*& WorldContextObject, class UClass*& ActorClass, struct FString& Name); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FilterTargetHitResultList (Underlying native function: FilterTargetHitResultList 0x86d5804)
	static struct TArray<struct FHitResult> FilterTargetHitResultList(class UObject*& WorldContextObject, struct FFortTargetFilter& Filter, class AActor*& RequestingActor, struct TArray<struct FHitResult>& HitResultsToFilter, bool& bAtLeastOneActorLeft); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FilterTargetActorList (Underlying native function: FilterTargetActorList 0x86d55b4)
	static struct TArray<class AActor*> FilterTargetActorList(class UObject*& WorldContextObject, struct FFortTargetFilter& Filter, class AActor*& RequestingActor, struct TArray<class AActor*>& ActorsToFilter, bool& bAtLeastOneActorLeft); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FilterSingleTargetHitResult (Underlying native function: FilterSingleTargetHitResult 0x86d53f0)
	static bool FilterSingleTargetHitResult(class UObject*& WorldContextObject, struct FFortTargetFilter& Filter, class AActor*& RequestingActor, struct FHitResult& HitResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.FilterSingleTargetActor (Underlying native function: FilterSingleTargetActor 0x86d5268)
	static bool FilterSingleTargetActor(class UObject*& WorldContextObject, struct FFortTargetFilter& Filter, class AActor*& RequestingActor, class AActor*& TargetActor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ExtractSkeletalMeshScale (Underlying native function: ExtractSkeletalMeshScale 0x86d51e0)
	static struct FVector ExtractSkeletalMeshScale(class UClass*& BlueprintClass); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ExtractSkeletalMesh (Underlying native function: ExtractSkeletalMesh 0x86d5170)
	static class USkeletalMesh* ExtractSkeletalMesh(class UClass*& BlueprintClass); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ExecuteClientEvent (Underlying native function: ExecuteClientEvent 0x86d4ff4)
	static void ExecuteClientEvent(class UObject*& WorldContextObject, struct FFortClientEventName*& EventType, class UObject*& EventSource, class UObject*& EventFocus); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.EvaluateCurveTableRow (Underlying native function: EvaluateCurveTableRow 0x86d4dbc)
	static bool EvaluateCurveTableRow(struct FCurveTableRowHandle& CurveTableRowHandle, float& InXY, float& OutXY, struct FString& ContextString); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.EquipItemToQuickBarSlot (Underlying native function: EquipItemToQuickBarSlot 0x86d4b44)
	static bool EquipItemToQuickBarSlot(class UObject*& WorldContextObject, class UFortItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, enum EFortQuickBars& QuickBarType, int& SlotIndex); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.EquipFortAbilitySet (Underlying native function: EquipFortAbilitySet 0x86d4a20)
	static struct FFortAbilitySetHandle EquipFortAbilitySet(struct TScriptInterface<class IAbilitySystemInterface>& AbilitySystemInterfaceActor, class UFortAbilitySet*& AbilitySet, class UObject*& OverrideSourceObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.EqualEqual_UniqueNetIdReplUniqueNetIdRepl (Underlying native function: EqualEqual_UniqueNetIdReplUniqueNetIdRepl 0x24691f4)
	static bool EqualEqualUniqueNetIdReplUniqueNetIdRepl(struct FUniqueNetIdRepl& A, struct FUniqueNetIdRepl& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.EnableTutorialHighlight (Underlying native function: EnableTutorialHighlight 0x86d492c)
	static void EnableTutorialHighlight(class UObject*& WorldContextObject, struct FName& WidgetName); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.EmptyQuickBarSlot (Underlying native function: EmptyQuickBarSlot 0x86d4834)
	static bool EmptyQuickBarSlot(class UObject*& WorldContextObject, enum EFortQuickBars& QuickBarType, int& SlotIndex); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.EffectContextAddSourceObject (Underlying native function: EffectContextAddSourceObject 0x86d46dc)
	static void EffectContextAddSourceObject(struct FGameplayEffectContextHandle& EffectContext, class UObject*& Src); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DropItemByGuid (Underlying native function: DropItemByGuid 0x86d45f4)
	static void DropItemByGuid(class AController*& Controller, struct FGuid& ItemGuid, int& AmountToDrop); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DropInstancedLootAtLocation (Underlying native function: DropInstancedLootAtLocation 0x86d42a4)
	static struct TArray<class AFortPickup*> DropInstancedLootAtLocation(class UObject*& WorldContextObject, struct FName& LootTierGroup, struct TArray<class AFortPlayerController*>& RelevantPlayers, bool& bAllowCombining, struct FVector& DropLocation, enum EFortPickupSourceTypeFlag& SourceTypeFlag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DropInstancedLoot (Underlying native function: DropInstancedLoot 0x86d4090)
	static struct TArray<class AFortPickup*> DropInstancedLoot(class AFortPawn*& PawnContext, struct FName& LootTierGroup, struct TArray<class AFortPlayerController*>& RelevantPlayers, bool& bAllowCombining); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DoesItemDefinitionHaveGameplayTag (Underlying native function: DoesItemDefinitionHaveGameplayTag 0x86d3ed0)
	static bool DoesItemDefinitionHaveGameplayTag(class UFortItemDefinition*& ItemDefinition, struct FGameplayTag& tag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DoesItemDefinitionConsumeUniqueRangedWeaponAmmo (Underlying native function: DoesItemDefinitionConsumeUniqueRangedWeaponAmmo 0x86d3e20)
	static bool DoesItemDefinitionConsumeUniqueRangedWeaponAmmo(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.DoesItemConsumeUniqueRangedWeaponAmmo (Underlying native function: DoesItemConsumeUniqueRangedWeaponAmmo 0x86d3d8c)
	static bool DoesItemConsumeUniqueRangedWeaponAmmo(class UFortItem*& Item); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.Divide_Int64Int64UsingFloatingPoint (Underlying native function: Divide_Int64Int64UsingFloatingPoint 0x1eef290)
	static float DivideInt64Int64UsingFloatingPoint(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.DisableTutorialHighlight (Underlying native function: DisableTutorialHighlight 0x86d3c98)
	static void DisableTutorialHighlight(class UObject*& WorldContextObject, struct FName& WidgetName); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DeviceSupportsForceFeedback (Underlying native function: DeviceSupportsForceFeedback 0x86d3c74)
	static bool DeviceSupportsForceFeedback(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.DestroyItemInQuickBarSlot (Underlying native function: DestroyItemInQuickBarSlot 0x86d3b8c)
	static void DestroyItemInQuickBarSlot(class AFortPlayerPawn*& PlayerPawn, class UFortItemDefinition*& ItemToDestroyFromInventory, struct FGuid& ItemVariantGuid); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DebugSphereSendToAll (Underlying native function: DebugSphereSendToAll 0x86d3940)
	static void DebugSphereSendToAll(class UObject*& WorldContextObject, struct FVector& Center, float& Radius, int& Segments, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DebugOrientedBoxSendToAll (Underlying native function: DebugOrientedBoxSendToAll 0x86d36f0)
	static void DebugOrientedBoxSendToAll(class UObject*& WorldContextObject, struct FVector& Center, struct FVector& Extent, struct FRotator& Rotation, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DebugLineSendToAll (Underlying native function: DebugLineSendToAll 0x86d3254)
	static void DebugLineSendToAll(class UObject*& WorldContextObject, struct FVector& LineStart, struct FVector& LineEnd, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DebugCapsuleSendToAll (Underlying native function: DebugCapsuleSendToAll 0x86d3464)
	static void DebugCapsuleSendToAll(class UObject*& WorldContextObject, struct FVector& Center, float& HalfHeight, float& Radius, struct FQuat& Rotation, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DebugBoxSendToAll (Underlying native function: DebugBoxSendToAll 0x86d3254)
	static void DebugBoxSendToAll(class UObject*& WorldContextObject, struct FVector& Center, struct FVector& Extent, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.DeactivateAttachedParticleSystems (Underlying native function: DeactivateAttachedParticleSystems 0x86d3008)
	static void DeactivateAttachedParticleSystems(class AFortPlayerPawn*& PlayerPawn, struct TArray<class UFXSystemComponent*>& FXComponents, bool& bOnlyActiveSystems); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CustomHandleActorStreamedInEditor (Underlying native function: CustomHandleActorStreamedInEditor 0x6df70d4)
	static void CustomHandleActorStreamedInEditor(class AActor*& SourceActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CreateTossAmmoPickupForWeaponItemDefinitionAtLocation (Underlying native function: CreateTossAmmoPickupForWeaponItemDefinitionAtLocation 0x86d2da8)
	static void CreateTossAmmoPickupForWeaponItemDefinitionAtLocation(class UObject*& WorldContextObject, class UFortWeaponItemDefinition*& WeaponItemDefinition, struct FGameplayTagContainer& SourceTags, struct FVector& Location, enum EFortPickupSourceTypeFlag& SourceTypeFlag, enum EFortPickupSpawnSource& SpawnSource); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CreateNewSplineObject (Underlying native function: CreateNewSplineObject 0x86d2d1c)
	static class UFortSpline* CreateNewSplineObject(class UObject*& Outer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CreateItemEntry (Underlying native function: CreateItemEntry 0x86d2bd4)
	static struct FFortItemEntry CreateItemEntry(class UFortItemDefinition*& InItemDefinition, int& InCount, int& InLevel); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.CopyJerseyElements (Underlying native function: CopyJerseyElements 0x86d2b20)
	static void CopyJerseyElements(class UMaterialInstanceDynamic*& SourceMID, class UMaterialInstanceDynamic*& TargetMID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CopyHideElements (Underlying native function: CopyHideElements 0x86d2a6c)
	static void CopyHideElements(class UMaterialInstanceDynamic*& SourceMID, class UMaterialInstanceDynamic*& TargetMID); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ConvertToRealTime (Underlying native function: ConvertToRealTime 0x86d29a0)
	static float ConvertToRealTime(class UObject*& WorldContextObject, float& InGameTime); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ConvertToGameTime (Underlying native function: ConvertToGameTime 0x86d28d4)
	static float ConvertToGameTime(class UObject*& WorldContextObject, float& InRealTime); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ComputePhysicsAngularVelocity (Underlying native function: ComputePhysicsAngularVelocity 0x86d26fc)
	static struct FVector ComputePhysicsAngularVelocity(struct FVector& Current, struct FVector& Target, struct FVector& BackupAxis, float& SpeedCoef, float& DeltaTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CloseActor (Underlying native function: CloseActor 0x86d2604)
	static bool CloseActor(class AActor*& OpenableInterfaceActor, class AController*& OptionalControllerInstigator); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ClientForceFireSelectedWeapon (Underlying native function: ClientForceFireSelectedWeapon 0x86d2594)
	static void ClientForceFireSelectedWeapon(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ClearTutorialHighlights (Underlying native function: ClearTutorialHighlights 0x86d24ec)
	static void ClearTutorialHighlights(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CheckPlayerLineOfSightToPawn (Underlying native function: CheckPlayerLineOfSightToPawn 0x86d234c)
	static bool CheckPlayerLineOfSightToPawn(class AFortPlayerPawn*& SourcePawn, class AFortPawn*& TargetPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CheckLineOfSightToActorWithChannel (Underlying native function: CheckLineOfSightToActorWithChannel 0x86d2208)
	static bool CheckLineOfSightToActorWithChannel(struct FVector& SourcePos, class AActor*& Target, struct TEnumAsByte<ECollisionChannel>& TargetFilterChannel, class AActor*& Source); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CheckLineOfSightToActor (Underlying native function: CheckLineOfSightToActor 0x86d20f4)
	static bool CheckLineOfSightToActor(struct FVector& SourcePos, class AActor*& Target, class AActor*& Source); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CheckHasEnoughResourcesForSmartConsume (Underlying native function: CheckHasEnoughResourcesForSmartConsume 0x86d1f0c)
	static bool CheckHasEnoughResourcesForSmartConsume(int& ResourceCost, class AFortPlayerController*& SourcePlayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ChangeTeam (Underlying native function: ChangeTeam 0x86d1da8)
	static void ChangeTeam(class AActor*& PlayerToSwitch, class AActor*& Instigator, unsigned char& NewTeam, struct FGameplayTagContainer& ChangeTeamTags); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.CanPerformNativeAction (Underlying native function: CanPerformNativeAction 0x86d1cd0)
	static bool CanPerformNativeAction(class UFortAbilitySystemComponent*& FortAbilitySystem, struct FGameplayTag& NativeActionTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.CanFollowNextOrPreviousTeammate (Underlying native function: CanFollowNextOrPreviousTeammate 0x86d1c04)
	static bool CanFollowNextOrPreviousTeammate(class APlayerController*& OwningControler); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.BroadcastSoundAtLocation (Underlying native function: BroadcastSoundAtLocation 0x86d1a70)
	static void BroadcastSoundAtLocation(class UObject*& WorldContextObject, class USoundBase*& InSound, struct FVector& Location, float& VolumeMultiplier, float& PitchMultiplier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.BroadcastSound (Underlying native function: BroadcastSound 0x86d1938)
	static void BroadcastSound(class UObject*& WorldContextObject, class USoundBase*& InSound, float& VolumeMultiplier, float& PitchMultiplier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.BroadcastPlayerImpactAtLocation (Underlying native function: BroadcastPlayerImpactAtLocation 0x86d171c)
	static bool BroadcastPlayerImpactAtLocation(class UObject*& WorldContextObject, class APlayerController*& Player, struct FVector& Position, float& Loudness, float& Duration, bool& bRelativePosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.BroadcastMessage (Underlying native function: BroadcastMessage 0x86d1628)
	static void BroadcastMessage(class UObject*& WorldContextObject, struct FText& message); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.BroadcastAbilitySpinThrustAtLocation (Underlying native function: BroadcastAbilitySpinThrustAtLocation 0x86d1280)
	static void BroadcastAbilitySpinThrustAtLocation(class UObject*& WorldContextObject, class USoundBase*& InSound, class UObject*& Instigator, struct FVector& Position, float& Radius, struct FName& tag); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.BroadcastAbilityImpactAtLocation (Underlying native function: BroadcastAbilityImpactAtLocation 0x86d1068)
	static void BroadcastAbilityImpactAtLocation(class UObject*& WorldContextObject, class USoundBase*& InSound, class UObject*& Instigator, struct FVector& Position, float& Radius, struct FName& tag, bool& bSubtractLocalNoise); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.BoxOverlapComponents (Underlying native function: BoxOverlapComponents 0x86d0d50)
	static bool BoxOverlapComponents(class UObject*& WorldContextObject, struct FTransform& BoxTransform, struct FVector& BoxExtent, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ComponentClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class UPrimitiveComponent*>& OutComponents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.BoxOverlapActors (Underlying native function: BoxOverlapActors 0x86d0a38)
	static bool BoxOverlapActors(class UObject*& WorldContextObject, struct FTransform& BoxTransform, struct FVector& BoxExtent, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ActorClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AuthorityGetFortPossessedPlayerPawns (Underlying native function: AuthorityGetFortPossessedPlayerPawns 0x86d0890)
	static struct TArray<class AFortPlayerPawn*> AuthorityGetFortPossessedPlayerPawns(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AttemptGetPlayerStateForPawn (Underlying native function: AttemptGetPlayerStateForPawn 0x86d06ac)
	static class AFortPlayerState* AttemptGetPlayerStateForPawn(class AFortPlayerPawn*& FortPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AreCampaignVehiclesEnabled (Underlying native function: AreCampaignVehiclesEnabled 0x86d0664)
	static bool AreCampaignVehiclesEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.AreAthenaVehiclesEnabled (Underlying native function: AreAthenaVehiclesEnabled 0x86d061c)
	static bool AreAthenaVehiclesEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGlobalEnvironmentGameplayEffectToActor (Underlying native function: ApplyGlobalEnvironmentGameplayEffectToActor 0x86d043c)
	static struct FActiveGameplayEffectHandle* ApplyGlobalEnvironmentGameplayEffectToActor(class AActor*& EffectTargetActor, class UClass*& GameplayEffect, int& GameplayEffectLevel, struct FGameplayTagContainer& AdditionalContextTags); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGlobalEnvironmentGameplayEffect (Underlying native function: ApplyGlobalEnvironmentGameplayEffect 0x86d0298)
	static void ApplyGlobalEnvironmentGameplayEffect(class UObject*& WorldContextObject, class UClass*& GameplayEffect, int& GameplayEffectLevel, struct FGameplayTagContainer& AdditionalContextTags); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGlobalEnvironmentDamageToActor (Underlying native function: ApplyGlobalEnvironmentDamageToActor 0x86d0120)
	static void ApplyGlobalEnvironmentDamageToActor(class AActor*& DamageTargetActor, float& EnvironmentDamage, struct FGameplayTagContainer& AdditionalContextTags, class UClass*& EnvironmentDamageGE); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGameplayEffectToActorsInRange (Underlying native function: ApplyGameplayEffectToActorsInRange 0x86cfad8)
	static void ApplyGameplayEffectToActorsInRange(class UObject*& WorldContextObject, struct TArray<class UClass*>& EffectsToApply, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, struct FVector& SourcePosition, float& Range, struct TArray<class AActor*>& IgnoredActors, bool& bRequireLoS, int& GameplayEffectLevel, class UAbilitySystemComponent*& InstigatorAbilitySystemComp); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGameplayEffectsToActorsInBox (Underlying native function: ApplyGameplayEffectsToActorsInBox 0x86cfe14)
	static void ApplyGameplayEffectsToActorsInBox(class UObject*& WorldContextObject, struct TArray<class UClass*>& EffectsToApply, struct FVector& BoxCenter, struct FVector& BoxExtents, struct FRotator& BoxOrientation, struct TArray<class AActor*>& IgnoredActors, bool& bRequireLoS, int& GameplayEffectLevel, float& DebugLifeTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGameplayEffectsToActor (Underlying native function: ApplyGameplayEffectsToActor 0x19b3bd4)
	static void ApplyGameplayEffectsToActor(class AActor*& TargetActor, struct TArray<class UClass*>& EffectsToApply, struct FVector& SourcePos, bool& bRequireLoS, int& EffectLevel, class UAbilitySystemComponent*& InstigatorAbilitySystemComp); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyGameplayEffectSpecToActorsInRange (Underlying native function: ApplyGameplayEffectSpecToActorsInRange 0x86cf67c)
	static void ApplyGameplayEffectSpecToActorsInRange(class UObject*& WorldContextObject, struct FGameplayEffectSpecHandle& EffectSpecToApply, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, struct FVector& SourcePosition, float& Range, struct TArray<class AActor*>& IgnoredActors, bool& bRequireLoS, class UAbilitySystemComponent*& InstigatorAbilitySystemComp); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyEventOverrides (Underlying native function: ApplyEventOverrides 0x86cf4e4)
	static void ApplyEventOverrides(struct FString& EventSection, bool& bSuccess); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ApplyCharacterCosmetics (Underlying native function: ApplyCharacterCosmetics 0x86cf21c)
	static void ApplyCharacterCosmetics(class UObject*& WorldContextObject, struct TArray<class UCustomCharacterPart*>& CharacterParts, class AFortPlayerState*& PlayerState, bool& bSuccess); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AddScoringEvent (Underlying native function: AddScoringEvent 0x86cefa8)
	static void AddScoringEvent(class AFortPlayerController*& Controller, struct FGameplayTagContainer& TargetTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AddRegenItemToInventoryOwner (Underlying native function: AddRegenItemToInventoryOwner 0x86cee48)
	static void AddRegenItemToInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortWorldItemDefinition*& RegenItemDefinition, int& NumberToGive, bool& bNotifyPlayer, bool& bResetRegenCooldown); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AddControllerComponent (Underlying native function: AddControllerComponent 0x86ced84)
	static class UControllerComponent* AddControllerComponent(class AController*& Controller, class UClass*& ControllerCompClass); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AddCameraModifierForOwningPlayerController (Underlying native function: AddCameraModifierForOwningPlayerController 0x86cec6c)
	static class UCameraModifier* AddCameraModifierForOwningPlayerController(class UClass*& InCameraModifierClass, class AActor*& InActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.AddActorToClear (Underlying native function: AddActorToClear 0x86ce274)
	static void AddActorToClear(class UObject*& WorldContextObject, class ABuildingActor*& Building); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKismetLibrary.ActivateQuickbarSlot (Underlying native function: ActivateQuickbarSlot 0x86ce054)
	static void ActivateQuickbarSlot(class AFortPlayerPawn*& PlayerPawn, enum EFortQuickBars& InQuickBar, int& Slot, float& ActivateDelay, bool& bUpdatePreviousFocusedSlot, bool& bForceExecution); // (Final | Native | Static | Public | BlueprintCallable)
};

