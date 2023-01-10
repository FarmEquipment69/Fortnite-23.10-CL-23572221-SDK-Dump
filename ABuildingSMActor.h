// Class /Script/FortniteGame.BuildingSMActor
// Size: 0xde0
class ABuildingSMActor : public ABuildingActor
{
	unsigned char unreflected_780[0x20]; // 0x780 (0x20) 
	class UBuildingTextureData* TextureData[0x4]; // 0x7a0 (0x8) (ARRAY) 
	class UStaticMesh* StaticMesh; // 0x7c0 (0x8)
	struct TArray<struct FTierMeshSets> AlternateMeshes; // 0x7c8 (0x10)
	unsigned char bForceReplicateSubObjects; // 0x7d8 (0x1)
	unsigned char bNoPhysicsCollision; // 0x7d8 (0x1)
	unsigned char bNoCameraCollision; // 0x7d8 (0x1)
	unsigned char bNoPawnCollision; // 0x7d8 (0x1)
	unsigned char bNoAIPawnCollision; // 0x7d8 (0x1)
	unsigned char bBlocksCeilingPlacement; // 0x7d8 (0x1)
	unsigned char bBlocksAttachmentPlacement; // 0x7d8 (0x1)
	unsigned char bUsePhysicalSurfaceForFootstep; // 0x7d8 (0x1)
	unsigned char bRandomYawOnPlacement; // 0x7d9 (0x1)
	unsigned char bRandomScaleOnPlacement; // 0x7d9 (0x1)
	unsigned char bClearMIDWhenReturningToUndamagedState; // 0x7d9 (0x1)
	unsigned char bUseDynamicDestructionMaterial; // 0x7d9 (0x1)
	unsigned char bUseDynamicDestructionNiagaraSystem; // 0x7d9 (0x1)
	unsigned char bUseSingleMeshCullDistance; // 0x7d9 (0x1)
	unsigned char NumFrameSubObjects; // 0x7da (0x1)
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x7db (0x1)
	int AltMeshIdx; // 0x7dc (0x4)
	struct FVector2D RandomScaleRange; // 0x7e0 (0x10)
	struct FName DestructionLootTierGroup; // 0x7f0 (0x4)
	unsigned char unreflected_7f4[0x4]; // 0x7f4 (0x4) 
	struct TWeakObjectPtr<class UCurveLinearColor> WindSpeedCurve; // 0x7f8 (0x28)
	struct TWeakObjectPtr<class UCurveLinearColor> WindPannerSpeedCurve; // 0x820 (0x28)
	struct TWeakObjectPtr<class USoundBase> WindAudio; // 0x848 (0x28)
	float ShieldBuffMaterialParamValue1; // 0x870 (0x4)
	float ShieldBuffMaterialParamValue2; // 0x874 (0x4)
	float AnimatingDistanceFieldSelfShadowBias; // 0x878 (0x4)
	float AnimatingSubObjects; // 0x87c (0x4)
	float PlayerGridSnapSize; // 0x880 (0x4)
	unsigned char unreflected_884[0x54]; // 0x884 (0x54) 
	unsigned char bAllowBuildingCheat; // 0x8d8 (0x1)
	unsigned char bMirrored; // 0x8d8 (0x1)
	unsigned char bNoCollision; // 0x8d8 (0x1)
	unsigned char bNoVisibilityCollision; // 0x8d8 (0x1)
	unsigned char bSupportsRepairing; // 0x8d8 (0x1)
	unsigned char bHiddenDueToTrapPlacement; // 0x8d8 (0x1)
	unsigned char bAttachmentPlacementBlockedFront; // 0x8d8 (0x1)
	unsigned char bAttachmentPlacementBlockedBack; // 0x8d8 (0x1)
	unsigned char bUnderConstruction; // 0x8d9 (0x1)
	unsigned char bUnderRepair; // 0x8d9 (0x1)
	unsigned char bIsInitiallyBuilding; // 0x8d9 (0x1)
	unsigned char bCameraOnlyCollision; // 0x8d9 (0x1)
	unsigned char bNoWeaponCollision; // 0x8d9 (0x1)
	unsigned char bNoRangedWeaponCollision; // 0x8d9 (0x1)
	unsigned char bNoProjectileCollision; // 0x8d9 (0x1)
	unsigned char bDoNotBlockInteract; // 0x8d9 (0x1)
	unsigned char bNeedsMIDsForCreative; // 0x8da (0x1)
	unsigned char bAllowResourceDrop; // 0x8da (0x1)
	unsigned char bHideOnDeath; // 0x8da (0x1)
	unsigned char bPlayDestructionEffects; // 0x8da (0x1)
	unsigned char bSkipConstructionSounds; // 0x8da (0x1)
	unsigned char bSupportedDirectly; // 0x8da (0x1)
	unsigned char bForciblyStructurallySupported; // 0x8db (0x1)
	unsigned char bRegisterWithStructuralGrid; // 0x8db (0x1)
	unsigned char bCurrentlyBeingEdited; // 0x8db (0x1)
	unsigned char bAllowWeakSpots; // 0x8db (0x1)
	unsigned char bUseComplexForWeakSpots; // 0x8db (0x1)
	unsigned char bCanSpawnAtLowerQuotaLevels; // 0x8db (0x1)
	unsigned char bNeedsWindMaterialParameters; // 0x8dc (0x1)
	unsigned char bPlayBounce; // 0x8dc (0x1)
	unsigned char bPropagateBounce; // 0x8dc (0x1)
	unsigned char bPropagatesBounceEffects; // 0x8dc (0x1)
	unsigned char bNeedsDamageOverlay; // 0x8dc (0x1)
	unsigned char bDeriveCurieIdentifierFromResourceType; // 0x8dc (0x1)
	unsigned char bAllowCustomMaterial; // 0x8dc (0x1)
	enum ESavedSupportStatus SavedDirectlySupportedStatus; // 0x8dd (0x1)
	struct TEnumAsByte<ELootQuotaLevel> MaximumQuotaLevelBound; // 0x8de (0x1)
	enum EBuildingAnim BuildingAnimation; // 0x8df (0x1)
	unsigned char CurAnimSubObjectNum; // 0x8e0 (0x1)
	unsigned char CurAnimSubObjectTargetNum; // 0x8e1 (0x1)
	uint16_t ActorIndexInFoundation; // 0x8e2 (0x2)
	struct FFortBounceData BounceData; // 0x8e4 (0x30)
	float DestroyedTime; // 0x914 (0x4)
	float InfluenceMapWeight; // 0x918 (0x4)
	unsigned char unreflected_91c[0x4]; // 0x91c (0x4) 
	class UStaticMeshComponent* BASEEffectMeshComponent; // 0x920 (0x8)
	class UNaniteDisplacedMesh* DisplacedMesh; // 0x928 (0x8)
	struct TArray<struct FBuildingNavObstacle> NavObstacles; // 0x930 (0x10)
	unsigned char unreflected_940[0x10]; // 0x940 (0x10) 
	struct FVector BuildingPlacementDistance; // 0x950 (0x18)
	struct FVector_NetQuantize100 ReplicatedDrawScale3D; // 0x968 (0x18)
	struct FEditorOnlyBuildingInstanceMaterialParameters EditorOnlyInstanceMaterialParameters; // 0x980 (0x40)
	class UStaticMeshComponent* StaticMeshComponent; // 0x9c0 (0x8)
	class UFortWeakPointComponent* WeakPointComponent; // 0x9c8 (0x8)
	class UMaterialInterface* BaseMaterial; // 0x9d0 (0x8)
	struct FMulticastInlineDelegate OnConstructionComplete; // 0x9d8 (0x10)
	struct FMulticastInlineDelegate OnMeshSetChanged; // 0x9e8 (0x10)
	struct FBuildingActorMinimalReplicationProxy MinimalReplicationProxy; // 0x9f8 (0x4)
	struct FChosenQuotaInfo* DestructionLootTierChosenQuotaInfo; // 0x9fc (0x8)
	struct FName DestructionLootTierKey; // 0xa04 (0x4)
	struct FCurveTableRowHandle BuildingResourceAmountOverride; // 0xa08 (0x10)
	int MaxResourcesToSpawn; // 0xa18 (0x4)
	unsigned char unreflected_a1c[0x1c]; // 0xa1c (0x1c) 
	class UParticleSystem* BreakEffect; // 0xa38 (0x8)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> IntenseWindMaterials; // 0xa40 (0x10)
	struct FLinearColor ColorOverrides[0x4]; // 0xa50 (0x10) (ARRAY) 
	class URuntimeVirtualTexture* RVTHeightOverride; // 0xa90 (0x8)
	class URuntimeVirtualTexture* RVTColorOverride; // 0xa98 (0x8)
	struct TWeakObjectPtr<class UFXSystemAsset> DeathParticles; // 0xaa0 (0x28)
	class UFXSystemAsset* DeathParticlesInst; // 0xac8 (0x8)
	struct FName DeathParticleSocketName; // 0xad0 (0x4)
	unsigned char unreflected_ad4[0x4]; // 0xad4 (0x4) 
	class USoundBase* DeathSound; // 0xad8 (0x8)
	class UParticleSystem* ConstructedEffect; // 0xae0 (0x8)
	struct TArray<struct FRandomDayphaseFX> RandomDayphaseFXList; // 0xae8 (0x10)
	class UAudioComponent* ConstructionAudioComponent; // 0xaf8 (0x8)
	class AFortPawn* CachedDestructionInstigator; // 0xb00 (0x8)
	struct TArray<class UStaticMeshComponent*> StaticMeshComponentsNeedingDamageOverlay; // 0xb08 (0x10)
	float LastDamageAmount; // 0xb18 (0x4)
	unsigned char unreflected_b1c[0x4]; // 0xb1c (0x4) 
	struct FVector LastDamageHitImpulseDir; // 0xb20 (0x18)
	unsigned char unreflected_b38[0x8]; // 0xb38 (0x8) 
	struct TArray<struct FBuildingDamageHistoryEntry> DamageHistory; // 0xb40 (0x10)
	struct TArray<class UStaticMeshComponent*> CachedAnimatingStaticMeshes; // 0xb50 (0x10)
	unsigned char unreflected_b60[0x60]; // 0xb60 (0x60) 
	struct FMulticastInlineDelegate OnRepairBuildingStarted; // 0xbc0 (0x10)
	struct FMulticastInlineDelegate OnRepairBuildingFinished; // 0xbd0 (0x10)
	class UBuildingEditModeMetadata* EditModePatternData; // 0xbe0 (0x8)
	int UndermineGroup; // 0xbe8 (0x4)
	int LogicalBuildingIdx; // 0xbec (0x4)
	struct TArray<struct FAnimatingMaterialPair> AnimatingMaterialMappings; // 0xbf0 (0x10)
	struct TArray<struct FAnimatingMaterialPair> DamagedButNotAnimatingMaterialMappings; // 0xc00 (0x10)
	class UClass* EditModeSupportClass; // 0xc10 (0x8)
	class UBuildingEditModeSupport* EditModeSupport; // 0xc18 (0x8)
	float HealthToAutoBuild; // 0xc20 (0x4)
	float AccumulatedAutoBuildTime; // 0xc24 (0x4)
	struct TEnumAsByte<EBuildingReplacementType> BuildingReplacementType; // 0xc28 (0x1)
	struct TEnumAsByte<EBuildingReplacementType> ReplacementDestructionReason; // 0xc29 (0x1)
	enum EBuildingAnim CurBuildingAnimType; // 0xc2a (0x1)
	enum EFortDamageVisualsState DamageVisualsState; // 0xc2b (0x1)
	float CurBuildProgress; // 0xc2c (0x4)
	float OutwardMotionMagnitude; // 0xc30 (0x4)
	float CurBuildingAnimStartTime; // 0xc34 (0x4)
	struct TArray<class UMaterialInstanceConstant*> BlueprintMICs; // 0xc38 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> BlueprintMIDs; // 0xc48 (0x10)
	class UStaticMeshComponent* BlueprintMeshComp; // 0xc58 (0x8)
	class AFortPlayerStateZone* EditingPlayer; // 0xc60 (0x8)
	unsigned char unreflected_c68[0x20]; // 0xc68 (0x20) 
	struct FVector BuildingAttachmentPointOffset; // 0xc88 (0x18)
	float BuildingAttachmentRadius; // 0xca0 (0x4)
	struct TEnumAsByte<EBuildingAttachmentSlot> BuildingAttachmentSlot; // 0xca4 (0x1)
	struct TEnumAsByte<EBuildingAttachmentType> BuildingAttachmentType; // 0xca5 (0x1)
	struct TEnumAsByte<EPlacementType> BuildingPlacementType; // 0xca6 (0x1)
	enum EStructuralSupportCheck LastStructuralCheck; // 0xca7 (0x1)
	class ABuildingSMActor* ParentActorToAttachTo; // 0xca8 (0x8)
	struct TArray<class ABuildingActor*> AttachedBuildingActors; // 0xcb0 (0x10)
	struct TArray<class ABuildingActor*> BuildingActorsAttachedTo; // 0xcc0 (0x10)
	struct FGameplayTagQuery InvalidTrapTagQuery; // 0xcd0 (0x48)
	struct FMulticastInlineDelegate OnTrapPlacementChanged; // 0xd18 (0x10)
	struct FMulticastInlineDelegate OnReplacementDestruction; // 0xd28 (0x10)
	class ABuildingActor* AttachmentPlacementBlockingActors[0x2]; // 0xd38 (0x8) (ARRAY) 
	struct TWeakObjectPtr<class ABuildingFoundation> Foundation; // 0xd48 (0x8)
	unsigned char unreflected_d50[0x18]; // 0xd50 (0x18) 
	class ABuildingSMActor* DamagerOwner; // 0xd68 (0x8)
	class AFortConstructorBASE* RelevantBASE; // 0xd70 (0x8)
	unsigned char unreflected_d78[0x8]; // 0xd78 (0x8) 
	struct FWorldPartitionHLODDestructionTag HLODDestructionTag; // 0xd80 (0x10)
	class AFortConstructorBASE* LastRelevantBASE; // 0xd90 (0x8)
	unsigned char unreflected_d98[0x18]; // 0xd98 (0x18) 
	struct FProxyGameplayCueDamage ProxyGameplayCueDamage; // 0xdb0 (0x20)
	unsigned char padding_dd0[0x10]; // 0xdd0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingSMActor.WillRegisterWithStructuralGrid (Underlying native function: WillRegisterWithStructuralGrid 0x83896c4)
	bool WillRegisterWithStructuralGrid(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.UpdateRepairMaterialAnim (Underlying native function: UpdateRepairMaterialAnim 0x838963c)
	void UpdateRepairMaterialAnim(float& CurveValue); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.UpdateLODOverrideEffect (Underlying native function: UpdateLODOverrideEffect 0x83895b4)
	void UpdateLODOverrideEffect(float& CurveValue); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.UpdateDynamicShrinkAndDestroyEffect (Underlying native function: UpdateDynamicShrinkAndDestroyEffect 0x838952c)
	void UpdateDynamicShrinkAndDestroyEffect(float& CurveValue); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.UpdateComponentCollisionModes (Underlying native function: UpdateComponentCollisionModes 0x8387878)
	void UpdateComponentCollisionModes(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.TransferFromDuplicationData (Underlying native function: TransferFromDuplicationData 0x8389438)
	void TransferFromDuplicationData(struct FBuildingDuplicationData& SourceData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.TransferBuildingData (Underlying native function: TransferBuildingData 0x83893a0)
	void TransferBuildingData(class ABuildingSMActor*& SourceDataActor); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.StartBounceAnimation (Underlying native function: StartBounceAnimation 0x29b454c)
	void StartBounceAnimation(float& StartTime, float& Radius, struct FVector& Normal, struct FVector& Center, struct TEnumAsByte<EFortBounceType>& InBounceType, bool& bLocalInstigator); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetTextureData (Underlying native function: SetTextureData 0x83891ac)
	void SetTextureData(struct TArray<class UTexture2D*>& InTextures); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetResourceType (Underlying native function: SetResourceType 0x8389024)
	void SetResourceType(struct TEnumAsByte<EFortResourceType>& NewResourceType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetResourcesEarnedOverrideDelegate (Underlying native function: SetResourcesEarnedOverrideDelegate 0x83890a4)
	void SetResourcesEarnedOverrideDelegate(struct FDelegate& InOnResourcesEarnedOverrideDelegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetParentActorToAttachTo (Underlying native function: SetParentActorToAttachTo 0x8388e98)
	void SetParentActorToAttachTo(class ABuildingSMActor*& InParentActorToAttachTo); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetNoPhysicsCollision (Underlying native function: SetNoPhysicsCollision 0x8388e00)
	void SetNoPhysicsCollision(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetNoCameraCollision (Underlying native function: SetNoCameraCollision 0x8388d80)
	void SetNoCameraCollision(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetMirrored (Underlying native function: SetMirrored 0x8388bf0)
	void SetMirrored(bool& bIsMirrored); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetDisplacedMesh (Underlying native function: SetDisplacedMesh 0x8388798)
	bool SetDisplacedMesh(class UNaniteDisplacedMesh*& NaniteDisplacedMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetDeathParticles (Underlying native function: SetDeathParticles 0x8388718)
	void SetDeathParticles(class UParticleSystem*& InPS); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.SetBuildingTextureData (Underlying native function: SetBuildingTextureData 0x8388640)
	void SetBuildingTextureData(int& Index, class UBuildingTextureData*& NewBuildingTextureData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.RepairBuilding (Underlying native function: RepairBuilding 0x8388110)
	void RepairBuilding(class AFortPlayerController*& RepairingController, int& ResourcesSpent); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.ReadTextureData (Underlying native function: ReadTextureData 0x8387f60)
	struct TArray<class UTexture2D*> ReadTextureData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.PreForceMove (Underlying native function: PreForceMove 0x8387edc)
	void PreForceMove(class AController*& EventInstigator); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.PostForceMove (Underlying native function: PostForceMove 0x8387ec4)
	void PostForceMove(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.PlayFullHealthEffects (Underlying native function: PlayFullHealthEffects 0x160472c)
	void PlayFullHealthEffects(); // (0x00000002 | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.PlayDestructionEffects (Underlying native function: PlayDestructionEffects 0x8387eb0)
	void PlayDestructionEffects(); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.PlayConstructionBounce (Underlying native function: PlayConstructionBounce 0x80405fc)
	void PlayConstructionBounce(); // (0x00000002 | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.PlayBreakEffects (Underlying native function: PlayBreakEffects 0x13e2ea0)
	void PlayBreakEffects(); // (0x00000002 | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.OnRepairStarted (Has no native function)
	void OnRepairStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_ResourceType (Underlying native function: OnRep_ResourceType 0x83878b8)
	void OnRepResourceType(struct TEnumAsByte<EFortResourceType>& OldType); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_ReplicationProxy (Underlying native function: OnRep_ReplicationProxy 0x10df6b0)
	void OnRepReplicationProxy(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_ReplicatedDrawScale3D (Underlying native function: OnRep_ReplicatedDrawScale3D 0x28611b0)
	void OnRepReplicatedDrawScale3D(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_RelevantBASE (Underlying native function: OnRep_RelevantBASE 0x83878a0)
	void OnRepRelevantBASE(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_ProxyGameplayCueDamage (Underlying native function: OnRep_ProxyGameplayCueDamage 0x19b1bdc)
	void OnRepProxyGameplayCueDamage(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_NoCollision (Underlying native function: OnRep_NoCollision 0x8387878)
	void OnRepNoCollision(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_NoCameraCollision (Underlying native function: OnRep_NoCameraCollision 0x8387864)
	void OnRepNoCameraCollision(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_MetaData (Underlying native function: OnRep_MetaData 0x2f9c9bc)
	void OnRepMetaData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_HiddenDueToTrapPlacement (Underlying native function: OnRep_HiddenDueToTrapPlacement 0x8387824)
	void OnRepHiddenDueToTrapPlacement(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_EditingPlayer (Underlying native function: OnRep_EditingPlayer 0x2d78c78)
	void OnRepEditingPlayer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_bUnderRepair (Underlying native function: OnRep_bUnderRepair 0x838797c)
	void OnRepbUnderRepair(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_bUnderConstruction (Underlying native function: OnRep_bUnderConstruction 0x130a73c)
	void OnRepbUnderConstruction(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnRep_BuildingAnimation (Underlying native function: OnRep_BuildingAnimation 0x236b450)
	void OnRepBuildingAnimation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnLODOverrideEffectFinished (Underlying native function: OnLODOverrideEffectFinished 0x83873b8)
	void OnLODOverrideEffectFinished(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnDynamicShrinkAndDestroyEffectFinished (Underlying native function: OnDynamicShrinkAndDestroyEffectFinished 0x8386ff0)
	void OnDynamicShrinkAndDestroyEffectFinished(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.OnDynamicDestructionStarted (Underlying native function: OnDynamicDestructionStarted 0x8386fd8)
	void OnDynamicDestructionStarted(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnDynamicDestructionEnded (Underlying native function: OnDynamicDestructionEnded 0x8386fc0)
	void OnDynamicDestructionEnded(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnDynamicDestructionDissolveFinished (Underlying native function: OnDynamicDestructionDissolveFinished 0x59141f0)
	void OnDynamicDestructionDissolveFinished(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnDynamicDestructionCanceled (Underlying native function: OnDynamicDestructionCanceled 0x59141d0)
	void OnDynamicDestructionCanceled(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingSMActor.OnDetachFromBuilding (Has no native function)
	void OnDetachFromBuilding(class ABuildingActor*& AttachedToBuilding, bool& bBeingDestroyed); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.OnBuildingPlaced (Has no native function)
	void OnBuildingPlaced(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.OnBuildingCompleteCosmetic (Has no native function)
	void OnBuildingCompleteCosmetic(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.OnBounceAnimationUpdate (Has no native function)
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.OnAttachToBuilding (Has no native function)
	void OnAttachToBuilding(class ABuildingActor*& AttachedToBuilding); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCuesExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted_WithParams 0x8386a74)
	void NetMulticastInvokeGameplayCuesExecutedWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCuesExecuted (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted 0x8386890)
	void NetMulticastInvokeGameplayCuesExecuted(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams 0x83866d4)
	void NetMulticastInvokeGameplayCuesAddedAndWhileActiveWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_WithParams 0x24bf18c)
	void NetMulticastInvokeGameplayCueExecutedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueExecuted_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_FromSpec 0x83865a0)
	void NetMulticastInvokeGameplayCueExecutedFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueExecuted (Underlying native function: NetMulticast_InvokeGameplayCueExecuted 0x838640c)
	void NetMulticastInvokeGameplayCueExecuted(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams 0x8386134)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec 0x8386034)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueAdded_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAdded_WithParams 0x83862a0)
	void NetMulticastInvokeGameplayCueAddedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& Parameters); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.NetMulticast_InvokeGameplayCueAdded (Underlying native function: NetMulticast_InvokeGameplayCueAdded 0x8385ea0)
	void NetMulticastInvokeGameplayCueAdded(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingSMActor.MulticastPlayFullHealthEffects (Underlying native function: MulticastPlayFullHealthEffects 0x835726c)
	void MulticastPlayFullHealthEffects(); // (0x00000002 | Net | Native | Event | NetMulticast | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.MarkConnectedBuildingsForStructuralIntegrityCheck (Underlying native function: MarkConnectedBuildingsForStructuralIntegrityCheck 0x8385ce4)
	void MarkConnectedBuildingsForStructuralIntegrityCheck(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.IsUnderConstruction (Underlying native function: IsUnderConstruction 0x8385cb4)
	bool IsUnderConstruction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.IsSupportedByWorld (Underlying native function: IsSupportedByWorld 0x8385c8c)
	bool IsSupportedByWorld(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.IsStructurallySupported (Underlying native function: IsStructurallySupported 0x8385c64)
	bool IsStructurallySupported(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.HasDestructionLoot (Underlying native function: HasDestructionLoot 0x83858f0)
	bool HasDestructionLoot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetWindSpeedCurveForPreview (Underlying native function: GetWindSpeedCurveForPreview 0x68e9dc4)
	class UCurveLinearColor* GetWindSpeedCurveForPreview(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetWindPannerSpeedCurveForPreview (Underlying native function: GetWindPannerSpeedCurveForPreview 0x68e9dc4)
	class UCurveLinearColor* GetWindPannerSpeedCurveForPreview(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetWeakSpotEnabledTimeout (Underlying native function: GetWeakSpotEnabledTimeout 0x8384b0c)
	float GetWeakSpotEnabledTimeout(class AFortPlayerController*& Controller); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetReplacementDestructionReason (Underlying native function: GetReplacementDestructionReason 0x83849b4)
	struct TEnumAsByte<EBuildingReplacementType> GetReplacementDestructionReason(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.GetOverrideMeshMaterial (Has no native function)
	class UMaterialInterface* GetOverrideMeshMaterial(class UStaticMeshComponent*& MeshComp, int& MatIdx); // (Event | Protected | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetOrCreateMIDOnDefaultMesh (Underlying native function: GetOrCreateMIDOnDefaultMesh 0x83847d4)
	class UMaterialInstanceDynamic* GetOrCreateMIDOnDefaultMesh(int& ElementIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.GetMaximumLegalReplicatedHealthValue (Underlying native function: GetMaximumLegalReplicatedHealthValue 0x8384304)
	static int GetMaximumLegalReplicatedHealthValue(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingSMActor.GetLogicalBuildingIndex (Underlying native function: GetLogicalBuildingIndex 0x83842dc)
	int GetLogicalBuildingIndex(); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetIntenseWindMaterialsForPreview (Underlying native function: GetIntenseWindMaterialsForPreview 0x8384250)
	bool GetIntenseWindMaterialsForPreview(struct TArray<class UMaterialInterface*>& Materials); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.GetDuplicationData (Underlying native function: GetDuplicationData 0x8384130)
	struct FBuildingDuplicationData GetDuplicationData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.GetDisplacedMesh (Underlying native function: GetDisplacedMesh 0x8384118)
	class UNaniteDisplacedMesh* GetDisplacedMesh(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.GetDestructionLootTierGroup (Underlying native function: GetDestructionLootTierGroup 0x8384100)
	struct FName GetDestructionLootTierGroup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetDeathParticles (Underlying native function: GetDeathParticles 0x8383f48)
	class UFXSystemAsset* GetDeathParticles(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetBuildingTextureData (Underlying native function: GetBuildingTextureData 0x8383ce0)
	void GetBuildingTextureData(struct TArray<class UBuildingTextureData*>& OutTextureDataArray); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetBuildingMeshComponent (Underlying native function: GetBuildingMeshComponent 0x8383cc8)
	class UStaticMeshComponent* GetBuildingMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetAttachedBuildingSMActors (Underlying native function: GetAttachedBuildingSMActors 0x8383a5c)
	struct TArray<class ABuildingSMActor*> GetAttachedBuildingSMActors(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GetAttachedBuildingActors (Underlying native function: GetAttachedBuildingActors 0x83839dc)
	struct TArray<class ABuildingActor*> GetAttachedBuildingActors(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.GameplayCue_Abilities_Activation_Generic_BannerWallBuff2 (Underlying native function: GameplayCue_Abilities_Activation_Generic_BannerWallBuff2 0x83837cc)
	void GameplayCueAbilitiesActivationGenericBannerWallBuff2(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.GameplayCue_Abilities_Activation_Generic_BannerWallBuff1 (Underlying native function: GameplayCue_Abilities_Activation_Generic_BannerWallBuff1 0x83836d0)
	void GameplayCueAbilitiesActivationGenericBannerWallBuff1(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.ForceVisualState (Underlying native function: ForceVisualState 0x838364c)
	void ForceVisualState(enum EBuildingAnim& VisualState); // (0x00000002 | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.ForceIntoStructuralGridDuringRuntime (Underlying native function: ForceIntoStructuralGridDuringRuntime 0x7fbd6c0)
	void ForceIntoStructuralGridDuringRuntime(); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.FindDestructionLootTier (Underlying native function: FindDestructionLootTier 0x83833d8)
	int FindDestructionLootTier(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlySetInstanceMaterialVectorParameter (Underlying native function: EditorOnlySetInstanceMaterialVectorParameter 0x8383338)
	void EditorOnlySetInstanceMaterialVectorParameter(struct FName& ParamName, struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlySetInstanceMaterialTextureParameter (Underlying native function: EditorOnlySetInstanceMaterialTextureParameter 0x721b6f0)
	void EditorOnlySetInstanceMaterialTextureParameter(struct FName& ParamName, class UTexture*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlySetInstanceMaterialScalarParameter (Underlying native function: EditorOnlySetInstanceMaterialScalarParameter 0x8383290)
	void EditorOnlySetInstanceMaterialScalarParameter(struct FName& ParamName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlySetInstanceMaterialRTVParameter (Underlying native function: EditorOnlySetInstanceMaterialRTVParameter 0x721b6f0)
	void EditorOnlySetInstanceMaterialRTVParameter(struct FName& ParamName, class URuntimeVirtualTexture*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlyRemoveInstanceMaterialVectorParameter (Underlying native function: EditorOnlyRemoveInstanceMaterialVectorParameter 0x6f57cd8)
	void EditorOnlyRemoveInstanceMaterialVectorParameter(struct FName& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlyRemoveInstanceMaterialTextureParameter (Underlying native function: EditorOnlyRemoveInstanceMaterialTextureParameter 0x6f57cd8)
	void EditorOnlyRemoveInstanceMaterialTextureParameter(struct FName& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlyRemoveInstanceMaterialScalarParameter (Underlying native function: EditorOnlyRemoveInstanceMaterialScalarParameter 0x6f57cd8)
	void EditorOnlyRemoveInstanceMaterialScalarParameter(struct FName& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.EditorOnlyRemoveInstanceMaterialRTVParameter (Underlying native function: EditorOnlyRemoveInstanceMaterialRTVParameter 0x6f57cd8)
	void EditorOnlyRemoveInstanceMaterialRTVParameter(struct FName& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.DetachBuildingActorFromMe (Underlying native function: DetachBuildingActorFromMe 0x8383190)
	void DetachBuildingActorFromMe(class ABuildingActor*& ActorToAttach, bool& bBeingDestroyed, class AController*& Killer); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.ClearResourcesEarnedOverrideDelegate (Underlying native function: ClearResourcesEarnedOverrideDelegate 0x8382fc4)
	void ClearResourcesEarnedOverrideDelegate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.ClearRequestedBuildingAnimation (Underlying native function: ClearRequestedBuildingAnimation 0x8382fa4)
	void ClearRequestedBuildingAnimation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingSMActor.CanDoBuildingAnimations (Underlying native function: CanDoBuildingAnimations 0x8382ad0)
	bool CanDoBuildingAnimations(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.CancelRepair (Underlying native function: CancelRepair 0x8382ce0)
	void CancelRepair(); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.CancelAutoBuild (Underlying native function: CancelAutoBuild 0x8382cc8)
	void CancelAutoBuild(); // (0x00000002 | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.CanBeDamaged (Underlying native function: CanBeDamaged 0x8382a0c)
	bool CanBeDamaged(class AController*& DamageInstigator, class AActor*& DamageCauser); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingSMActor.BlueprintOnStructurallyUnstable (Underlying native function: BlueprintOnStructurallyUnstable 0x7fbd708)
	void BlueprintOnStructurallyUnstable(); // (0x00000002 | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.BlueprintOnStructurallyStable (Underlying native function: BlueprintOnStructurallyStable 0x7fbd6f0)
	void BlueprintOnStructurallyStable(); // (0x00000002 | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingSMActor.BlueprintCanAttemptGenerateResources (Underlying native function: BlueprintCanAttemptGenerateResources 0x83826a8)
	bool BlueprintCanAttemptGenerateResources(struct FGameplayTagContainer& InTags, class AController*& InstigatorController); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingSMActor.AttachBuildingActorToMe (Underlying native function: AttachBuildingActorToMe 0x83823e0)
	void AttachBuildingActorToMe(class ABuildingActor*& ActorToAttach, bool& bForceAttachment); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingSMActor.AddToGrid (Underlying native function: AddToGrid 0x8382158)
	void AddToGrid(bool& bFromDynamicBuilder); // (Final | Native | Public | BlueprintCallable)
};

