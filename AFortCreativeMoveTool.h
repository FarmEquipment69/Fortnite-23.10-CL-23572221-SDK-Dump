// Class /Script/FortniteGame.FortCreativeMoveTool
// Size: 0x1850
class AFortCreativeMoveTool : public AFortWeapon
{
	class UFortObjectMoverInputComponent* CreativeMoveToolInputComponent; // 0x1028 (0x8)
	unsigned char unreflected_1030[0x78]; // 0x1030 (0x78) 
	struct FMulticastInlineDelegate OnFinishedSpawningDelegate; // 0x10a8 (0x10)
	struct TMap<class AActor*, class AActor*> PreviewToOriginalActors; // 0x10b8 (0x50)
	unsigned char unreflected_1108[0x8]; // 0x1108 (0x8) 
	struct TArray<struct FOriginalAndSpawnedPair> SpawnHelperNewlyPlacedActors; // 0x1110 (0x10)
	struct TArray<struct FActorAndTransformPair> ToDuplicateActors; // 0x1120 (0x10)
	unsigned char unreflected_1130[0x8]; // 0x1130 (0x8) 
	struct FMulticastInlineDelegate OnFinishedSpawningSelectedActors; // 0x1138 (0x10)
	struct FMulticastInlineDelegate OnFinishedSpawningPreviewActors; // 0x1148 (0x10)
	struct FMulticastInlineDelegate OnFinishedSpawningForCut; // 0x1158 (0x10)
	struct TArray<struct FCreativeSelectedActorInfo> SelectedActorsReplicateToRemoteClients; // 0x1168 (0x10)
	class UObjectInteractionBehavior* ActiveMovementModeReplicateToRemoteClients; // 0x1178 (0x8)
	float MaxRange; // 0x1180 (0x4)
	unsigned char unreflected_1184[0x4]; // 0x1184 (0x4) 
	class UObjectInteractionBehavior* ActiveMovementMode; // 0x1188 (0x8)
	bool bIsPreviewingMove; // 0x1190 (0x1)
	unsigned char unreflected_1191[0x7]; // 0x1191 (0x7) 
	struct TArray<class UObjectInteractionBehavior*> InteractionBehaviors; // 0x1198 (0x10)
	unsigned char unreflected_11a8[0x10]; // 0x11a8 (0x10) 
	class UDeleteObjects* DeleteObjectsInteractionBehavior; // 0x11b8 (0x8)
	class UPlaysetPreview* PlaysetPreviewInteractionBehavior; // 0x11c0 (0x8)
	unsigned char unreflected_11c8[0x10]; // 0x11c8 (0x10) 
	struct FMulticastInlineDelegate OnMoveToolInteractionStarted; // 0x11d8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolInteractionStopped; // 0x11e8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotationAxisChanged; // 0x11f8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleAxisChanged; // 0x1208 (0x10)
	struct FMulticastInlineDelegate OnMoveToolLineOfSightBlockingChanged; // 0x1218 (0x10)
	struct FMulticastInlineDelegate OnMoveToolDropToFloorChanged; // 0x1228 (0x10)
	struct FMulticastInlineDelegate OnMoveToolPrecisionChanged; // 0x1238 (0x10)
	struct FMulticastInlineDelegate OnMoveToolTransformationModeChanged; // 0x1248 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleInsteadOfRotateChanged; // 0x1258 (0x10)
	struct FMulticastInlineDelegate OnAddedSelectedActor; // 0x1268 (0x10)
	struct FMulticastInlineDelegate OnCouldNotAddReachedSelectionLimit; // 0x1278 (0x10)
	struct FMulticastInlineDelegate OnRemovedSelectedActor; // 0x1288 (0x10)
	struct FMulticastInlineDelegate OnSelectedActorsCleared; // 0x1298 (0x10)
	struct FMulticastInlineDelegate OnSelectionPropertyChanged; // 0x12a8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleModified; // 0x12b8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotationModified; // 0x12c8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolBuildingAsPropSettingChanged; // 0x12d8 (0x10)
	struct FMulticastInlineDelegate OnMoveToolFocusChanged; // 0x12e8 (0x10)
	unsigned char unreflected_12f8[0x59]; // 0x12f8 (0x59) 
	enum ETransformationType CurrentTransformationType; // 0x1351 (0x1)
	unsigned char unreflected_1352[0x6]; // 0x1352 (0x6) 
	struct TArray<struct FCreativeSelectedActorInfo> SelectedActors; // 0x1358 (0x10)
	struct TArray<struct FLogicalConnectionChain> ServerSelectedActorLogicalConnections; // 0x1368 (0x10)
	struct TArray<struct FValidPlacementPair> ConnectedActorStates; // 0x1378 (0x10)
	struct FVector ScaleModifier; // 0x1388 (0x18)
	struct FTransform SelectionToWorld; // 0x13a0 (0x60)
	struct FBox SelectionSpaceActorsBounds; // 0x1400 (0x38)
	unsigned char unreflected_1438[0xc8]; // 0x1438 (0xc8) 
	bool bIsScaleUpPressed; // 0x1500 (0x1)
	unsigned char unreflected_1501[0x2f]; // 0x1501 (0x2f) 
	bool bIsMultiselectEnabled; // 0x1530 (0x1)
	bool bIsQuickbarSupported; // 0x1531 (0x1)
	bool bIsImmersiveEditModeEnabled; // 0x1532 (0x1)
	enum ESelectionProperty SelectionProperty; // 0x1533 (0x1)
	unsigned char unreflected_1534[0x2]; // 0x1534 (0x2) 
	bool bIsScaleDownPressed; // 0x1536 (0x1)
	bool bIsPushPressed; // 0x1537 (0x1)
	bool bIsPullPressed; // 0x1538 (0x1)
	bool bIsAutoTractorBeamRunning; // 0x1539 (0x1)
	unsigned char unreflected_153a[0xa]; // 0x153a (0xa) 
	bool bIsRotateClockwisePressed; // 0x1544 (0x1)
	bool bIsRotateCounterclockwisePressed; // 0x1545 (0x1)
	bool bIsScalingInsteadOfRotating; // 0x1546 (0x1)
	unsigned char unreflected_1547[0x9]; // 0x1547 (0x9) 
	struct FQuat TargetRotationOffset; // 0x1550 (0x20)
	struct FQuat RotationOffset; // 0x1570 (0x20)
	struct TArray<struct FRotator> RotationAxes; // 0x1590 (0x10)
	unsigned char RotationAxisIndex; // 0x15a0 (0x1)
	enum EScaleAxis SelectedScaleAxis; // 0x15a1 (0x1)
	unsigned char unreflected_15a2[0x6]; // 0x15a2 (0x6) 
	struct TSet<class UMeshComponent*> HoveredComponents; // 0x15a8 (0x50)
	struct TMap<class UMeshComponent*, float> ComponentsToReclaimMIDsFrom; // 0x15f8 (0x50)
	struct TArray<struct FCreativePooledMID> AllMIDs; // 0x1648 (0x10)
	unsigned char unreflected_1658[0x50]; // 0x1658 (0x50) 
	float MaxUnhoverAnimationTime; // 0x16a8 (0x4)
	unsigned char unreflected_16ac[0x4]; // 0x16ac (0x4) 
	struct TArray<struct FOriginalAndSpawnedPair> NewlyPlacedActors; // 0x16b0 (0x10)
	struct FFlashCountedActorInfo CutActors; // 0x16c0 (0x18)
	struct TArray<struct FCreativeSelectedActorInfo> CutActorsPrereplication; // 0x16d8 (0x10)
	struct TArray<class AActor*> DisableCollisionActors; // 0x16e8 (0x10)
	struct TArray<class AActor*> DisableCollisionActorsPrereplication; // 0x16f8 (0x10)
	struct TSet<class AActor*> AlreadyProcessedNewlyPlacedActorsOnClient; // 0x1708 (0x50)
	struct FAgingActorArray RecentlyPlacedAgingActors; // 0x1758 (0x10)
	bool bShouldDestroyPropsWhenPlacing; // 0x1768 (0x1)
	bool bAllowGravityOnPlace; // 0x1769 (0x1)
	unsigned char unreflected_176a[0x2]; // 0x176a (0x2) 
	struct FCreativeOptionVariableBase* WantsGravityOnPlace; // 0x176c (0x8)
	bool bShouldUsePrecisionGridSnapping; // 0x1774 (0x1)
	unsigned char GridSnapIndex; // 0x1775 (0x1)
	unsigned char unreflected_1776[0x2]; // 0x1776 (0x2) 
	struct FCreativeOptionVariableBase* WantsPrecisionGridSnapping; // 0x1778 (0x8)
	struct TArray<struct FVector> GridSnapRatios; // 0x1780 (0x10)
	bool bDoesRequireCreatePermission; // 0x1790 (0x1)
	enum EHitTraceType TraceType; // 0x1791 (0x1)
	bool bClientNeedsToProcessNewlyPlacedActors; // 0x1792 (0x1)
	unsigned char unreflected_1793[0x1]; // 0x1793 (0x1) 
	struct FCreativeOptionVariableBase* WantedHitTraceRule; // 0x1794 (0x8)
	unsigned char unreflected_179c[0x4]; // 0x179c (0x4) 
	struct FGameplayTagContainer MoveToolActivatedTags; // 0x17a0 (0x20)
	struct FGameplayTag ProgressTimerCueTag; // 0x17c0 (0x4)
	unsigned char unreflected_17c4[0x4]; // 0x17c4 (0x4) 
	class ULevelRecordSpawner* ActiveRecordSpawner; // 0x17c8 (0x8)
	class UClass* VolumeClassToSpawn; // 0x17d0 (0x8)
	struct FCreativeOptionVariableBase* WantedIgnoreRecentlyPlacedTime; // 0x17d8 (0x8)
	bool bAlwaysMoveFreely; // 0x17e0 (0x1)
	unsigned char unreflected_17e1[0x7]; // 0x17e1 (0x7) 
	bool bBuildingsAsPropsSnapToCenter; // 0x17e8 (0x1)
	unsigned char unreflected_17e9[0x3]; // 0x17e9 (0x3) 
	struct FCreativeOptionVariableBase* WantedAlwaysMoveFreely; // 0x17ec (0x8)
	struct FCreativeOptionVariableBase* WantedCameraSpacePositioning; // 0x17f4 (0x8)
	struct FCreativeOptionVariableBase* WantsAutoTractorBeam; // 0x17fc (0x8)
	unsigned char unreflected_1804[0x4]; // 0x1804 (0x4) 
	class AActor* HoveredActor; // 0x1808 (0x8)
	class AFortCreativeHeatmapThermometerPreview* CreativeHeatmapThermometerPreview; // 0x1810 (0x8)
	struct FGameplayTagContainer WeaponEquipContextTags; // 0x1818 (0x20)
	struct FString PlacementLocale; // 0x1838 (0x10)
	unsigned char padding_1848[0x8]; // 0x1848 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeMoveTool.UnholsterWeapon (Underlying native function: UnholsterWeapon 0x8e11c04)
	void UnholsterWeapon(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.TurboBuildAttemptToPlace (Underlying native function: TurboBuildAttemptToPlace 0x8e11bf0)
	void TurboBuildAttemptToPlace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.SpawnPlaysetVolumeOnServer (Underlying native function: SpawnPlaysetVolumeOnServer 0x8e11aa8)
	void SpawnPlaysetVolumeOnServer(class UFortPlaysetItemDefinition*& Playset, struct FVector& SpawnLocation, struct FRotator& SpawnRotation); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.SetupMIDForComponent (Underlying native function: SetupMIDForComponent 0x8e11604)
	void SetupMIDForComponent(class UMeshComponent*& MeshComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.SetTargetingState (Underlying native function: SetTargetingState 0x8e11580)
	void SetTargetingState(bool& bNewTargetingState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateTractorBeam (Underlying native function: ServerUpdateTractorBeam 0x8e11444)
	void ServerUpdateTractorBeam(float& NewTargetTractorBeamOffset, bool& bNewIsPushPressed, bool& bNewIsPullPressed); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateScalePressed (Underlying native function: ServerUpdateScalePressed 0x8e1134c)
	void ServerUpdateScalePressed(bool& bNewIsScaleUpPressed, bool& bNewIsScaleDownPressed); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateScaleAxis (Underlying native function: ServerUpdateScaleAxis 0x8e112b0)
	void ServerUpdateScaleAxis(enum EScaleAxis& SelectedAxis); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateRotationAxis (Underlying native function: ServerUpdateRotationAxis 0x8e11214)
	void ServerUpdateRotationAxis(unsigned char& AxisIndex); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateRotation (Underlying native function: ServerUpdateRotation 0x8e110b4)
	void ServerUpdateRotation(struct FQuat& ClientRotation, bool& bNewIsRotateClockwisePressed, bool& bNewIsRotateCounterclockwisePressed); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdatePrecisionMode (Underlying native function: ServerUpdatePrecisionMode 0x8e10fbc)
	void ServerUpdatePrecisionMode(bool& bPrecisionMode, unsigned char& PrecisionModeIndex); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateMirrored (Underlying native function: ServerUpdateMirrored 0x8e10f0c)
	void ServerUpdateMirrored(bool& bMirrored); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateLocale (Underlying native function: ServerUpdateLocale 0x8e10d90)
	void ServerUpdateLocale(struct FString& UpdatedLocale); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerStartReselectTimer (Underlying native function: ServerStartReselectTimer 0x8386ff0)
	void ServerStartReselectTimer(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerStartInteracting (Underlying native function: ServerStartInteracting 0x8e10bbc)
	void ServerStartInteracting(struct TArray<class AActor*>& Actors, struct FTransform& DragStart); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSpawnSelectedActorsWithTransform (Underlying native function: ServerSpawnSelectedActorsWithTransform 0x8e109d0)
	void ServerSpawnSelectedActorsWithTransform(bool& bAllowOverlap, bool& bAllowGravity, bool& bIgnoreStructuralIssues, bool& bForPreviewing, bool& bNotifyOwnerOnFailure); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSpawnActorWithTransform (Underlying native function: ServerSpawnActorWithTransform 0x8e106c0)
	void ServerSpawnActorWithTransform(class AActor*& ActorToSpawn, struct FTransform& TargetTransform, bool& bAllowOverlap, bool& bAllowGravity, bool& bIgnoreStructuralIssues, bool& bForPreviewing); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSetAlwaysMoveFreely (Underlying native function: ServerSetAlwaysMoveFreely 0x8e10588)
	void ServerSetAlwaysMoveFreely(enum EBuildingAsPropSetting& NewSetting); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSetAllowGravity (Underlying native function: ServerSetAllowGravity 0x8e104d8)
	void ServerSetAllowGravity(bool& bAllow); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSendProgressTimerCue (Underlying native function: ServerSendProgressTimerCue 0x8e10434)
	void ServerSendProgressTimerCue(float& Duration); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerResetScale (Underlying native function: ServerResetScale 0x8e103e8)
	void ServerResetScale(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerPlaceActorsAndClearMovementMode (Underlying native function: ServerPlaceActorsAndClearMovementMode 0x8e10278)
	void ServerPlaceActorsAndClearMovementMode(struct FTransform& TargetTransformForBuildings); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerOnNewlyPlacedActorProcessedByClient (Underlying native function: ServerOnNewlyPlacedActorProcessedByClient 0x8e101a4)
	void ServerOnNewlyPlacedActorProcessedByClient(struct FOriginalAndSpawnedPair& NewlyPlacedActorPair); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerMoveSelectionSet (Underlying native function: ServerMoveSelectionSet 0x8e0ffe8)
	void ServerMoveSelectionSet(struct FTransform& NewSelectionToWorld, bool& bShouldUpdateOwningClient); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerDuplicateStartInteracting (Underlying native function: ServerDuplicateStartInteracting 0x8e0fe14)
	void ServerDuplicateStartInteracting(struct TArray<class AActor*>& Actors, struct FTransform& DragStart); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerDestroyActor (Underlying native function: ServerDestroyActor 0x8e0fd74)
	void ServerDestroyActor(class AActor*& ActorToDestroy); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerClearMovementMode (Underlying native function: ServerClearMovementMode 0x8e0fcc4)
	void ServerClearMovementMode(bool& bExited); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerBatchDestroyActors (Underlying native function: ServerBatchDestroyActors 0x8e0fc0c)
	void ServerBatchDestroyActors(struct TArray<class AActor*>& ActorsToDestroy); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerAddItemToMoveTool (Underlying native function: ServerAddItemToMoveTool 0x8e0fb0c)
	void ServerAddItemToMoveTool(class AFortPlayerControllerAthena*& FortPC, class UFortItemDefinition*& PlaysetToSpawn, bool& bUseVolume); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerActorSelected (Underlying native function: ServerActorSelected 0x8e0fa20)
	void ServerActorSelected(class AActor*& Actor, class AFortPlayerController*& InstigatorPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerActorDeselected (Underlying native function: ServerActorDeselected 0x8e0f934)
	void ServerActorDeselected(class AActor*& Actor, class AFortPlayerController*& InstigatorPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.QueuedActorDestroyed (Underlying native function: QueuedActorDestroyed 0x8e0f834)
	void QueuedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.PushCreativeMoveToolEquippedInputComponent (Underlying native function: PushCreativeMoveToolEquippedInputComponent 0x8e0f81c)
	void PushCreativeMoveToolEquippedInputComponent(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.PopCreativeMoveToolEquippedInputComponent (Underlying native function: PopCreativeMoveToolEquippedInputComponent 0x83873b8)
	void PopCreativeMoveToolEquippedInputComponent(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantsPrecisionGridSnapping (Underlying native function: OnWantsPrecisionGridSnapping 0x8e0f158)
	void OnWantsPrecisionGridSnapping(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantsGravityOnPlace (Underlying native function: OnWantsGravityOnPlace 0x8e0f080)
	void OnWantsGravityOnPlace(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantsAutoTractorBeamChanged (Underlying native function: OnWantsAutoTractorBeamChanged 0x8e0efbc)
	void OnWantsAutoTractorBeamChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedIgnoreRecentlyPlacedTime (Underlying native function: OnWantedIgnoreRecentlyPlacedTime 0x8e0eef8)
	void OnWantedIgnoreRecentlyPlacedTime(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedHitTraceRule (Underlying native function: OnWantedHitTraceRule 0x8e0ee04)
	void OnWantedHitTraceRule(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedCameraSpacePositioning (Underlying native function: OnWantedCameraSpacePositioning 0x8e0ed40)
	void OnWantedCameraSpacePositioning(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedAlwaysMoveFreely (Underlying native function: OnWantedAlwaysMoveFreely 0x8e0ec2c)
	void OnWantedAlwaysMoveFreely(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnValidPlacementChangedActorInstance (Has no native function)
	void OnValidPlacementChangedActorInstance(class AActor*& ActorForPlacement, bool& ValidPlacement); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnValidPlacementChanged (Has no native function)
	void OnValidPlacementChanged(bool& bValidPlacement); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_SelectionProperty (Underlying native function: OnRep_SelectionProperty 0x8e0ebd0)
	void OnRepSelectionProperty(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_SelectedActorsReplicateToRemoteClients (Underlying native function: OnRep_SelectedActorsReplicateToRemoteClients 0x8e0eb50)
	void OnRepSelectedActorsReplicateToRemoteClients(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_NewlyPlacedActors (Underlying native function: OnRep_NewlyPlacedActors 0x8e0eb28)
	void OnRepNewlyPlacedActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_DisableCollisionActors (Underlying native function: OnRep_DisableCollisionActors 0x8e0eb14)
	void OnRepDisableCollisionActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_CutActors (Underlying native function: OnRep_CutActors 0x8e0eb00)
	void OnRepCutActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_ConnectedActorStates (Underlying native function: OnRep_ConnectedActorStates 0x8e0ea9c)
	void OnRepConnectedActorStates(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_BuildingsAsPropsSnapToCenter (Underlying native function: OnRep_BuildingsAsPropsSnapToCenter 0x8e0ea80)
	void OnRepBuildingsAsPropsSnapToCenter(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_AllowGravityOnPlace (Underlying native function: OnRep_AllowGravityOnPlace 0x8e0ea10)
	void OnRepAllowGravityOnPlace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_ActiveMovementModeReplicateToRemoteClients (Underlying native function: OnRep_ActiveMovementModeReplicateToRemoteClients 0x8e0e998)
	void OnRepActiveMovementModeReplicateToRemoteClients(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRemoveHighlightSelectedActor (Has no native function)
	void OnRemoveHighlightSelectedActor(class AActor*& SelectedActor, struct TArray<class UMeshComponent*>& SelectedComponents); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnPlaysetSelected (Underlying native function: OnPlaysetSelected 0x8e0e878)
	void OnPlaysetSelected(class UFortPlaysetItemDefinition*& SelectedPlayset); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnObjectPlacement (Has no native function)
	void OnObjectPlacement(struct TArray<class UMeshComponent*>& Components, struct FOriginalAndSpawnedPair& NewlyPlacedActorPair); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnInteractionStarted (Has no native function)
	void OnInteractionStarted(struct TArray<class UMeshComponent*>& Components); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnInteractionFinished (Has no native function)
	void OnInteractionFinished(struct TArray<class UMeshComponent*>& Components); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnHoverChanged (Has no native function)
	void OnHoverChanged(struct TArray<class UMeshComponent*>& NewHoveredComponents, struct TArray<class UMeshComponent*>& UnhoveredComponents, class UObjectInteractionBehavior*& ObjectInteraction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnHighlightSelectedActor (Has no native function)
	void OnHighlightSelectedActor(class AActor*& SelectedActor, struct TArray<class UMeshComponent*>& SelectedComponents); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnDeviceAddedToPlayspace (Underlying native function: OnDeviceAddedToPlayspace 0x8e0e788)
	void OnDeviceAddedToPlayspace(int& AddedDeviceTrackingGUID, struct FCreativeDeviceInstanceInfo& AddedDeviceInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnCreativeQuickmenuEnabledChanged (Underlying native function: OnCreativeQuickmenuEnabledChanged 0x8e0e70c)
	void OnCreativeQuickmenuEnabledChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnCopyOrPickupFailed (Has no native function)
	void OnCopyOrPickupFailed(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnClientInstigatorWeaponUnequipped (Underlying native function: OnClientInstigatorWeaponUnequipped 0x8e0e6e8)
	void OnClientInstigatorWeaponUnequipped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnClientInstigatorWeaponEquipped (Underlying native function: OnClientInstigatorWeaponEquipped 0x8e0e624)
	void OnClientInstigatorWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnAllowGravityToggleChanged (Has no native function)
	void OnAllowGravityToggleChanged(bool& bAllowGravity); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnAddedToQuickbar (Has no native function)
	void OnAddedToQuickbar(struct TArray<class UMeshComponent*>& Components); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastUpdateSelectionSetExceptServerAndOwningClient (Underlying native function: MulticastUpdateSelectionSetExceptServerAndOwningClient 0x8e0e4f0)
	void MulticastUpdateSelectionSetExceptServerAndOwningClient(struct FTransform& NewTransformToWorld); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastUpdateSelectionSetExceptServer (Underlying native function: MulticastUpdateSelectionSetExceptServer 0x8e0e3d8)
	void MulticastUpdateSelectionSetExceptServer(struct FTransform& NewTransformToWorld); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastForceMoveActorExceptOwningClient (Underlying native function: MulticastForceMoveActorExceptOwningClient 0x8e0e27c)
	void MulticastForceMoveActorExceptOwningClient(class AActor*& ActorToMove, struct FTransform& NewTransform); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastForceMoveActor (Underlying native function: MulticastForceMoveActor 0x8e0e120)
	void MulticastForceMoveActor(class AActor*& ActorToMove, struct FTransform& NewTransform); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IsRunningOnOwningClient (Underlying native function: IsRunningOnOwningClient 0x8e0deec)
	bool IsRunningOnOwningClient(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IsMultiselectingMoveOnGrid (Underlying native function: IsMultiselectingMoveOnGrid 0x8e0ded0)
	bool IsMultiselectingMoveOnGrid(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IsMultiSelecting (Underlying native function: IsMultiSelecting 0x8e0deb0)
	bool IsMultiSelecting(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IncrementOrWrapHitTraceRuleOnClient (Underlying native function: IncrementOrWrapHitTraceRuleOnClient 0x8e0ddf8)
	void IncrementOrWrapHitTraceRuleOnClient(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleTransformModeUpPressed (Underlying native function: HandleTransformModeUpPressed 0x8e0d820)
	void HandleTransformModeUpPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleTransformModeDownPressed (Underlying native function: HandleTransformModeDownPressed 0x8e0d808)
	void HandleTransformModeDownPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleUpReleased (Underlying native function: HandleScaleUpReleased 0x869fcd8)
	void HandleScaleUpReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleUpPressed (Underlying native function: HandleScaleUpPressed 0x86a05c0)
	void HandleScaleUpPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleSwitchAxisReleased (Underlying native function: HandleScaleSwitchAxisReleased 0x8e0d7f0)
	void HandleScaleSwitchAxisReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleSwitchAxisPressed (Underlying native function: HandleScaleSwitchAxisPressed 0x8e0d7d8)
	void HandleScaleSwitchAxisPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleDownReleased (Underlying native function: HandleScaleDownReleased 0x8ac1a74)
	void HandleScaleDownReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleDownPressed (Underlying native function: HandleScaleDownPressed 0x869fc98)
	void HandleScaleDownPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSwitchAxisReleased (Underlying native function: HandleRotateSwitchAxisReleased 0x8e0d7c0)
	void HandleRotateSwitchAxisReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSwitchAxisPressed (Underlying native function: HandleRotateSwitchAxisPressed 0x8382ce0)
	void HandleRotateSwitchAxisPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleCounterclockwiseReleased (Underlying native function: HandleRotateSingleCounterclockwiseReleased 0x8e0d7a8)
	void HandleRotateSingleCounterclockwiseReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleCounterclockwisePressed (Underlying native function: HandleRotateSingleCounterclockwisePressed 0x8e0d790)
	void HandleRotateSingleCounterclockwisePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleClockwiseReleased (Underlying native function: HandleRotateSingleClockwiseReleased 0x8e0d778)
	void HandleRotateSingleClockwiseReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleClockwisePressed (Underlying native function: HandleRotateSingleClockwisePressed 0x8e0d760)
	void HandleRotateSingleClockwisePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateCounterclockwiseReleased (Underlying native function: HandleRotateCounterclockwiseReleased 0x8e0d748)
	void HandleRotateCounterclockwiseReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateCounterclockwisePressed (Underlying native function: HandleRotateCounterclockwisePressed 0x8e0d730)
	void HandleRotateCounterclockwisePressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateClockwiseReleased (Underlying native function: HandleRotateClockwiseReleased 0x8e0d718)
	void HandleRotateClockwiseReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateClockwisePressed (Underlying native function: HandleRotateClockwisePressed 0x8e0d700)
	void HandleRotateClockwisePressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleResetScalePressed (Underlying native function: HandleResetScalePressed 0x8e0d6e8)
	void HandleResetScalePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleResetRotationPressed (Underlying native function: HandleResetRotationPressed 0x8e0d6d0)
	void HandleResetRotationPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePushReleased (Underlying native function: HandlePushReleased 0x8e0d6b8)
	void HandlePushReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePushPressed (Underlying native function: HandlePushPressed 0x8e0d6a0)
	void HandlePushPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePullReleased (Underlying native function: HandlePullReleased 0x8e0d688)
	void HandlePullReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePullPressed (Underlying native function: HandlePullPressed 0x8e0d670)
	void HandlePullPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePrecisionModeReleased (Underlying native function: HandlePrecisionModeReleased 0x8e0d658)
	void HandlePrecisionModeReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePrecisionModePressed (Underlying native function: HandlePrecisionModePressed 0x8e0d640)
	void HandlePrecisionModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePlaysetPreviewPlace (Underlying native function: HandlePlaysetPreviewPlace 0x8e0d628)
	void HandlePlaysetPreviewPlace(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePickupPressed (Underlying native function: HandlePickupPressed 0x8e0d610)
	void HandlePickupPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleMirrorPressed (Underlying native function: HandleMirrorPressed 0x8e0d5f8)
	void HandleMirrorPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleHitTraceRuleReleased (Underlying native function: HandleHitTraceRuleReleased 0x8e0d5e0)
	void HandleHitTraceRuleReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleHitTraceRulePressed (Underlying native function: HandleHitTraceRulePressed 0x8e0d5c8)
	void HandleHitTraceRulePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleHitTraceRuleHeldDownLongEnough (Underlying native function: HandleHitTraceRuleHeldDownLongEnough 0x8e0d5b0)
	void HandleHitTraceRuleHeldDownLongEnough(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitReleased (Underlying native function: HandleExitReleased 0x8e0d598)
	void HandleExitReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitPressed (Underlying native function: HandleExitPressed 0x8e0d580)
	void HandleExitPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitOrDeletePressed (Underlying native function: HandleExitOrDeletePressed 0x8e0d568)
	void HandleExitOrDeletePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitHeldDownLongEnough (Underlying native function: HandleExitHeldDownLongEnough 0x8e0d550)
	void HandleExitHeldDownLongEnough(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDuplicateActorReleased (Underlying native function: HandleDuplicateActorReleased 0x8e0d538)
	void HandleDuplicateActorReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDuplicateActorPressed (Underlying native function: HandleDuplicateActorPressed 0x130a73c)
	void HandleDuplicateActorPressed(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDropToFloorPressed (Underlying native function: HandleDropToFloorPressed 0x8e0d520)
	void HandleDropToFloorPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDeleteReleased (Underlying native function: HandleDeleteReleased 0x2d78c78)
	void HandleDeleteReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDeletePressed (Underlying native function: HandleDeletePressed 0x83878a0)
	void HandleDeletePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDeleteHeldDownLongEnough (Underlying native function: HandleDeleteHeldDownLongEnough 0x838797c)
	void HandleDeleteHeldDownLongEnough(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleCopyPickupReleased (Underlying native function: HandleCopyPickupReleased 0x8e0d508)
	void HandleCopyPickupReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleCopyPickupPressed (Underlying native function: HandleCopyPickupPressed 0x8e0d4f0)
	void HandleCopyPickupPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleClearMultiSelectQueuePressed (Underlying native function: HandleClearMultiSelectQueuePressed 0x160472c)
	void HandleClearMultiSelectQueuePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActorSelectedForQueueReleased (Underlying native function: HandleActorSelectedForQueueReleased 0x23d873c)
	void HandleActorSelectedForQueueReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActorSelectedForQueuePressed (Underlying native function: HandleActorSelectedForQueuePressed 0x18dbf68)
	void HandleActorSelectedForQueuePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActivateTranslateModePressed (Underlying native function: HandleActivateTranslateModePressed 0x2a7b1a4)
	void HandleActivateTranslateModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActivateScaleModePressed (Underlying native function: HandleActivateScaleModePressed 0x18dbfd0)
	void HandleActivateScaleModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActivateRotationModePressed (Underlying native function: HandleActivateRotationModePressed 0x2b13850)
	void HandleActivateRotationModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetValidQueuedActorsAsArray (Underlying native function: GetValidQueuedActorsAsArray 0x8e0d230)
	void GetValidQueuedActorsAsArray(struct TArray<class AActor*>& ValidQueuedActors); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetTargetTractorBeamOffset (Underlying native function: GetTargetTractorBeamOffset 0x8e0d1e4)
	float GetTargetTractorBeamOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetShouldUsePrecisionGridSnapping (Underlying native function: GetShouldUsePrecisionGridSnapping 0x8e0d100)
	bool GetShouldUsePrecisionGridSnapping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetShouldAutoTractorBeam (Underlying native function: GetShouldAutoTractorBeam 0x8e0d0e0)
	bool GetShouldAutoTractorBeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetSelectedScaleAxis (Underlying native function: GetSelectedScaleAxis 0x8e0d0c8)
	enum EScaleAxis GetSelectedScaleAxis(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetRotationAxisIndex (Underlying native function: GetRotationAxisIndex 0x8e0cf28)
	unsigned char GetRotationAxisIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetMultiselectLimit (Underlying native function: GetMultiselectLimit 0x8e0cdb4)
	int GetMultiselectLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetGridSnapRatios (Underlying native function: GetGridSnapRatios 0x8e0cc64)
	struct TArray<struct FVector> GetGridSnapRatios(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetGridSnapIndex (Underlying native function: GetGridSnapIndex 0x8e0cc4c)
	unsigned char GetGridSnapIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetCurrentVolume (Underlying native function: GetCurrentVolume 0x8e0c914)
	class AFortVolume* GetCurrentVolume(bool& bMustHavePermissions); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetCurrentHitTraceRule (Underlying native function: GetCurrentHitTraceRule 0x8e0c8fc)
	enum EHitTraceRule GetCurrentHitTraceRule(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetCreativeMoveToolInputComponent (Underlying native function: GetCreativeMoveToolInputComponent 0x8e0c8e4)
	class UFortObjectMoverInputComponent* GetCreativeMoveToolInputComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetClientNeedsToProcessNewlyPlacedActors (Underlying native function: GetClientNeedsToProcessNewlyPlacedActors 0x8e0c8cc)
	bool GetClientNeedsToProcessNewlyPlacedActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetAverageScaleModifier (Underlying native function: GetAverageScaleModifier 0x8e0c804)
	float GetAverageScaleModifier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetAllowGravityOnPlace (Underlying native function: GetAllowGravityOnPlace 0x8e0c7d0)
	bool GetAllowGravityOnPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetActiveMovementMode (Underlying native function: GetActiveMovementMode 0x8e0c7b8)
	class UObjectInteractionBehavior* GetActiveMovementMode(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.Finished_DuplicateStartInteractingOnServer (Underlying native function: Finished_DuplicateStartInteractingOnServer 0x8e0c7a4)
	void FinishedDuplicateStartInteractingOnServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.Finished_CutDuplicateStartInteractingOnServer (Underlying native function: Finished_CutDuplicateStartInteractingOnServer 0x8e0c790)
	void FinishedCutDuplicateStartInteractingOnServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.DoesBoxOverlapTerrain (Underlying native function: DoesBoxOverlapTerrain 0x8e0c6a0)
	static bool DoesBoxOverlapTerrain(class AActor*& WorldContextObject, struct FBox& Box); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.DeactiveWeaponAndState (Underlying native function: DeactiveWeaponAndState 0x8e0c66c)
	void DeactiveWeaponAndState(); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientStopInteracting (Underlying native function: ClientStopInteracting 0x8e0c5c8)
	void ClientStopInteracting(); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientStartInteracting (Underlying native function: ClientStartInteracting 0x8e0c400)
	void ClientStartInteracting(class UObjectInteractionBehavior*& NewActiveMovementMode, struct TArray<struct FCreativeSelectedActorInfo>& NewSelectedActors, struct FTransform& NewSelectionToWorld, struct FBox& NewSelectionSpaceActorBounds); // (0x00000002 | Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientDeactiveWeaponAndState (Underlying native function: ClientDeactiveWeaponAndState 0x8e0c3e8)
	void ClientDeactiveWeaponAndState(); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientAddItemToMoveToolComplete (Underlying native function: ClientAddItemToMoveToolComplete 0x8e0c364)
	void ClientAddItemToMoveToolComplete(class AFortPlayerControllerAthena*& FortPC); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.CanUtilizeMoveToolSpawningFunctionality (Underlying native function: CanUtilizeMoveToolSpawningFunctionality 0x8e0c33c)
	bool CanUtilizeMoveToolSpawningFunctionality(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.AdjustOptionsBasedOnSelectionProperty (Underlying native function: AdjustOptionsBasedOnSelectionProperty 0x8e0c0e0)
	void AdjustOptionsBasedOnSelectionProperty(enum ESelectionProperty& UpdatedSelectionProperty); // (Final | Native | Protected)
};

