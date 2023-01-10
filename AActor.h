// Class /Script/Engine.Actor
// Size: 0x288
class AActor : public UObject
{
	struct FActorTickFunction PrimaryActorTick; // 0x28 (0x30)
	unsigned char bNetTemporary; // 0x58 (0x1)
	unsigned char bOnlyRelevantToOwner; // 0x58 (0x1)
	unsigned char bAlwaysRelevant; // 0x58 (0x1)
	unsigned char bReplicateMovement; // 0x58 (0x1)
	unsigned char bCallPreReplication; // 0x58 (0x1)
	unsigned char bCallPreReplicationForReplay; // 0x58 (0x1)
	unsigned char bHidden; // 0x58 (0x1)
	unsigned char bTearOff; // 0x59 (0x1)
	unsigned char bForceNetAddressable; // 0x59 (0x1)
	unsigned char bExchangedRoles; // 0x59 (0x1)
	unsigned char bNetLoadOnClient; // 0x59 (0x1)
	unsigned char bNetUseOwnerRelevancy; // 0x59 (0x1)
	unsigned char bRelevantForNetworkReplays; // 0x59 (0x1)
	unsigned char bRelevantForLevelBounds; // 0x59 (0x1)
	unsigned char bReplayRewindable; // 0x59 (0x1)
	unsigned char bAllowTickBeforeBeginPlay; // 0x5a (0x1)
	unsigned char bAutoDestroyWhenFinished; // 0x5a (0x1)
	unsigned char bCanBeDamaged; // 0x5a (0x1)
	unsigned char bBlockInput; // 0x5a (0x1)
	unsigned char bCollideWhenPlacing; // 0x5a (0x1)
	unsigned char bFindCameraComponentWhenViewTarget; // 0x5a (0x1)
	unsigned char bGenerateOverlapEventsDuringLevelStreaming; // 0x5a (0x1)
	unsigned char bIgnoresOriginShifting; // 0x5a (0x1)
	unsigned char bEnableAutoLODGeneration; // 0x5b (0x1)
	unsigned char bIsEditorOnlyActor; // 0x5b (0x1)
	unsigned char bActorSeamlessTraveled; // 0x5b (0x1)
	unsigned char bReplicates; // 0x5b (0x1)
	unsigned char bCanBeInCluster; // 0x5b (0x1)
	unsigned char bAllowReceiveTickEventOnDedicatedServer; // 0x5b (0x1)
	unsigned char bReplicateUsingRegisteredSubObjectList; // 0x5b (0x1)
	unsigned char bActorEnableCollision; // 0x5c (0x1)
	unsigned char bActorIsBeingDestroyed; // 0x5d (0x1)
	unsigned char bAsyncPhysicsTickEnabled; // 0x5d (0x1)
	enum EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5e (0x1)
	enum EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5f (0x1)
	float InitialLifeSpan; // 0x60 (0x4)
	float CustomTimeDilation; // 0x64 (0x4)
	struct TEnumAsByte<ENetRole> RemoteRole; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	int RayTracingGroupId; // 0x6c (0x4)
	struct FRepAttachment AttachmentReplication; // 0x70 (0x60)
	struct FRepMovement ReplicatedMovement; // 0xd0 (0x70)
	class AActor* Owner; // 0x140 (0x8)
	struct FName NetDriverName; // 0x148 (0x4)
	struct TEnumAsByte<ENetRole> Role; // 0x14c (0x1)
	struct TEnumAsByte<ENetDormancy> NetDormancy; // 0x14d (0x1)
	enum ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14e (0x1)
	struct TEnumAsByte<EAutoReceiveInput> AutoReceiveInput; // 0x14f (0x1)
	int InputPriority; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	class UInputComponent* InputComponent; // 0x158 (0x8)
	float NetCullDistanceSquared; // 0x160 (0x4)
	int NetTag; // 0x164 (0x4)
	float NetUpdateFrequency; // 0x168 (0x4)
	float MinNetUpdateFrequency; // 0x16c (0x4)
	float NetPriority; // 0x170 (0x4)
	unsigned char unreflected_174[0x4]; // 0x174 (0x4) 
	class APawn* Instigator; // 0x178 (0x8)
	struct TArray<class AActor*> Children; // 0x180 (0x10)
	class USceneComponent* RootComponent; // 0x190 (0x8)
	unsigned char unreflected_198[0x8]; // 0x198 (0x8) 
	struct TArray<struct FName> Layers; // 0x1a0 (0x10)
	struct TWeakObjectPtr<class UChildActorComponent> ParentComponent; // 0x1b0 (0x8)
	unsigned char unreflected_1b8[0x10]; // 0x1b8 (0x10) 
	struct TArray<struct FName> Tags; // 0x1c8 (0x10)
	struct FMulticastSparseDelegate OnTakeAnyDamage; // 0x1d8 (0x1)
	struct FMulticastSparseDelegate OnTakePointDamage; // 0x1d9 (0x1)
	struct FMulticastSparseDelegate OnTakeRadialDamage; // 0x1da (0x1)
	struct FMulticastSparseDelegate OnActorBeginOverlap; // 0x1db (0x1)
	struct FMulticastSparseDelegate OnActorEndOverlap; // 0x1dc (0x1)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x1dd (0x1)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x1de (0x1)
	struct FMulticastSparseDelegate OnClicked; // 0x1df (0x1)
	struct FMulticastSparseDelegate OnReleased; // 0x1e0 (0x1)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x1e1 (0x1)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x1e2 (0x1)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x1e3 (0x1)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x1e4 (0x1)
	struct FMulticastSparseDelegate OnActorHit; // 0x1e5 (0x1)
	struct FMulticastSparseDelegate OnDestroyed; // 0x1e6 (0x1)
	struct FMulticastSparseDelegate OnEndPlay; // 0x1e7 (0x1)
	unsigned char unreflected_1e8[0x80]; // 0x1e8 (0x80) 
	struct TArray<class UActorComponent*> InstanceComponents; // 0x268 (0x10)
	struct TArray<class UActorComponent*> BlueprintCreatedComponents; // 0x278 (0x10)

	/* Functions */

	// Function /Script/Engine.Actor.WasRecentlyRendered (Underlying native function: WasRecentlyRendered 0x9a6e37c)
	bool WasRecentlyRendered(float& Tolerance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.TearOff (Underlying native function: TearOff 0x6ffbf00)
	void TearOff(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetTickGroup (Underlying native function: SetTickGroup 0x9a6e280)
	void SetTickGroup(struct TEnumAsByte<ETickingGroup>& NewTickGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetTickableWhenPaused (Underlying native function: SetTickableWhenPaused 0x9a6e2fc)
	void SetTickableWhenPaused(bool& bTickableWhenPaused); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetReplicates (Underlying native function: SetReplicates 0x9a6e200)
	void SetReplicates(bool& bInReplicates); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetReplicateMovement (Underlying native function: SetReplicateMovement 0x9a6e17c)
	void SetReplicateMovement(bool& bInReplicateMovement); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetRayTracingGroupId (Underlying native function: SetRayTracingGroupId 0x9a6e0f4)
	void SetRayTracingGroupId(int& InRaytracingGroupId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetOwner (Underlying native function: SetOwner 0x6ffb078)
	void SetOwner(class AActor*& NewOwner); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetNetDormancy (Underlying native function: SetNetDormancy 0x9a6e074)
	void SetNetDormancy(struct TEnumAsByte<ENetDormancy>& NewDormancy); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetLifeSpan (Underlying native function: SetLifeSpan 0x24a8dac)
	void SetLifeSpan(float& InLifespan); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetAutoDestroyWhenFinished (Underlying native function: SetAutoDestroyWhenFinished 0x9a6dfb4)
	void SetAutoDestroyWhenFinished(bool& bVal); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorTickInterval (Underlying native function: SetActorTickInterval 0x9a6df30)
	void SetActorTickInterval(float& TickInterval); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorTickEnabled (Underlying native function: SetActorTickEnabled 0x24164c4)
	void SetActorTickEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorScale3D (Underlying native function: SetActorScale3D 0x1cb5eac)
	void SetActorScale3D(struct FVector& NewScale3D); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorRelativeScale3D (Underlying native function: SetActorRelativeScale3D 0x9a6dea0)
	void SetActorRelativeScale3D(struct FVector& NewRelativeScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorHiddenInGame (Underlying native function: SetActorHiddenInGame 0x2504614)
	void SetActorHiddenInGame(bool& bNewHidden); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorEnableCollision (Underlying native function: SetActorEnableCollision 0x25cbefc)
	void SetActorEnableCollision(bool& bNewActorEnableCollision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.RemoveTickPrerequisiteComponent (Underlying native function: RemoveTickPrerequisiteComponent 0x9a6de1c)
	void RemoveTickPrerequisiteComponent(class UActorComponent*& PrerequisiteComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.RemoveTickPrerequisiteActor (Underlying native function: RemoveTickPrerequisiteActor 0x9a6dd98)
	void RemoveTickPrerequisiteActor(class AActor*& PrerequisiteActor); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveRadialDamage (Has no native function)
	void ReceiveRadialDamage(float& DamageReceived, class UDamageType*& DamageType, struct FVector& Origin, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceivePointDamage (Has no native function)
	void ReceivePointDamage(float& Damage, class UDamageType*& DamageType, struct FVector& HitLocation, struct FVector& HitNormal, class UPrimitiveComponent*& HitComponent, struct FName& BoneName, struct FVector& ShotFromDirection, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FHitResult& HitInfo); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveHit (Has no native function)
	void ReceiveHit(class UPrimitiveComponent*& MyComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, bool& bSelfMoved, struct FVector& HitLocation, struct FVector& HitNormal, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveAsyncPhysicsTick (Has no native function)
	void ReceiveAsyncPhysicsTick(float& DeltaSeconds, float& SimSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveAnyDamage (Has no native function)
	void ReceiveAnyDamage(float& Damage, class UDamageType*& DamageType, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnReleased (Has no native function)
	void ReceiveActorOnReleased(struct FKey& ButtonReleased); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchLeave (Has no native function)
	void ReceiveActorOnInputTouchLeave(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchEnter (Has no native function)
	void ReceiveActorOnInputTouchEnter(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchEnd (Has no native function)
	void ReceiveActorOnInputTouchEnd(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchBegin (Has no native function)
	void ReceiveActorOnInputTouchBegin(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnClicked (Has no native function)
	void ReceiveActorOnClicked(struct FKey& ButtonPressed); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorEndOverlap (Has no native function)
	void ReceiveActorEndOverlap(class AActor*& OtherActor); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorEndCursorOver (Has no native function)
	void ReceiveActorEndCursorOver(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorBeginOverlap (Has no native function)
	void ReceiveActorBeginOverlap(class AActor*& OtherActor); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorBeginCursorOver (Has no native function)
	void ReceiveActorBeginCursorOver(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.PrestreamTextures (Underlying native function: PrestreamTextures 0x2d15f40)
	void PrestreamTextures(float& Seconds, bool& bEnableStreaming, int& CinematicTextureGroups); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.OnRep_ReplicateMovement (Underlying native function: OnRep_ReplicateMovement 0x1832458)
	void OnRepReplicateMovement(); // (Native | Public)

	// Function /Script/Engine.Actor.OnRep_ReplicatedMovement (Underlying native function: OnRep_ReplicatedMovement 0x14211f8)
	void OnRepReplicatedMovement(); // (Native | Public)

	// Function /Script/Engine.Actor.OnRep_Owner (Underlying native function: OnRep_Owner 0x1679f1c)
	void OnRepOwner(); // (Native | Protected)

	// Function /Script/Engine.Actor.OnRep_Instigator (Underlying native function: OnRep_Instigator 0x12a0d40)
	void OnRepInstigator(); // (Native | Public)

	// Function /Script/Engine.Actor.OnRep_AttachmentReplication (Underlying native function: OnRep_AttachmentReplication 0x13eec30)
	void OnRepAttachmentReplication(); // (Native | Public)

	// Function /Script/Engine.Actor.MakeNoise (Underlying native function: MakeNoise 0x9a6dc00)
	void MakeNoise(float& Loudness, class APawn*& NoiseInstigator, struct FVector& NoiseLocation, float& MaxRange, struct FName& tag); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_TeleportTo (Underlying native function: K2_TeleportTo 0x13cb69c)
	bool K2TeleportTo(struct FVector& DestLocation, struct FRotator& DestRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorTransform (Underlying native function: K2_SetActorTransform 0x184531c)
	bool K2SetActorTransform(struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRotation (Underlying native function: K2_SetActorRotation 0x20ec528)
	bool K2SetActorRotation(struct FRotator& NewRotation, bool& bTeleportPhysics); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRelativeTransform (Underlying native function: K2_SetActorRelativeTransform 0x9a6da00)
	void K2SetActorRelativeTransform(struct FTransform& NewRelativeTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRelativeRotation (Underlying native function: K2_SetActorRelativeRotation 0x266f5cc)
	void K2SetActorRelativeRotation(struct FRotator& NewRelativeRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRelativeLocation (Underlying native function: K2_SetActorRelativeLocation 0x9a6d85c)
	void K2SetActorRelativeLocation(struct FVector& NewRelativeLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorLocationAndRotation (Underlying native function: K2_SetActorLocationAndRotation 0x9a6d654)
	bool K2SetActorLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorLocation (Underlying native function: K2_SetActorLocation 0x14ce9f8)
	bool K2SetActorLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_OnReset (Has no native function)
	void K2OnReset(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.K2_OnEndViewTarget (Has no native function)
	void K2OnEndViewTarget(class APlayerController*& PC); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.K2_OnBecomeViewTarget (Has no native function)
	void K2OnBecomeViewTarget(class APlayerController*& PC); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.K2_GetRootComponent (Underlying native function: K2_GetRootComponent 0x24c3668)
	class USceneComponent* K2GetRootComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_GetComponentsByClass (Underlying native function: K2_GetComponentsByClass 0x1cbfd98)
	struct TArray<class UActorComponent*> K2GetComponentsByClass(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_GetActorRotation (Underlying native function: K2_GetActorRotation 0x23b782c)
	struct FRotator K2GetActorRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_GetActorLocation (Underlying native function: K2_GetActorLocation 0x2092cec)
	struct FVector K2GetActorLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_DetachFromActor (Underlying native function: K2_DetachFromActor 0x9a6d54c)
	void K2DetachFromActor(enum EDetachmentRule& LocationRule, enum EDetachmentRule& RotationRule, enum EDetachmentRule& ScaleRule); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_DestroyActor (Underlying native function: K2_DestroyActor 0x27fbe30)
	void K2DestroyActor(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachToComponent (Underlying native function: K2_AttachToComponent 0x296fc6c)
	void K2AttachToComponent(class USceneComponent*& Parent, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachToActor (Underlying native function: K2_AttachToActor 0x2bbb6e8)
	void K2AttachToActor(class AActor*& ParentActor, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachRootComponentToActor (Underlying native function: K2_AttachRootComponentToActor 0x9a6d3e0)
	void K2AttachRootComponentToActor(class AActor*& InParentActor, struct FName& InSocketName, struct TEnumAsByte<EAttachLocation>& AttachLocationType, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachRootComponentTo (Underlying native function: K2_AttachRootComponentTo 0x9a6d294)
	void K2AttachRootComponentTo(class USceneComponent*& InParent, struct FName& InSocketName, struct TEnumAsByte<EAttachLocation>& AttachLocationType, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldTransformKeepScale (Underlying native function: K2_AddActorWorldTransformKeepScale 0x9a6d094)
	void K2AddActorWorldTransformKeepScale(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldTransform (Underlying native function: K2_AddActorWorldTransform 0x9a6ce94)
	void K2AddActorWorldTransform(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldRotation (Underlying native function: K2_AddActorWorldRotation 0x9a6ccf0)
	void K2AddActorWorldRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldOffset (Underlying native function: K2_AddActorWorldOffset 0x9a6cb4c)
	void K2AddActorWorldOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorLocalTransform (Underlying native function: K2_AddActorLocalTransform 0x9a6c94c)
	void K2AddActorLocalTransform(struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorLocalRotation (Underlying native function: K2_AddActorLocalRotation 0x9a6c7a8)
	void K2AddActorLocalRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorLocalOffset (Underlying native function: K2_AddActorLocalOffset 0x9a6c604)
	void K2AddActorLocalOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.IsOverlappingActor (Underlying native function: IsOverlappingActor 0x9a6c574)
	bool IsOverlappingActor(class AActor*& Other); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.IsChildActor (Underlying native function: IsChildActor 0x9a6c508)
	bool IsChildActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.IsActorTickEnabled (Underlying native function: IsActorTickEnabled 0x9a6c4f0)
	bool IsActorTickEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.IsActorBeingDestroyed (Underlying native function: IsActorBeingDestroyed 0x2d88a78)
	bool IsActorBeingDestroyed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.HasAuthority (Underlying native function: HasAuthority 0x2341fb0)
	bool HasAuthority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetVerticalDistanceTo (Underlying native function: GetVerticalDistanceTo 0x9a6c3bc)
	float GetVerticalDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetVelocity (Underlying native function: GetVelocity 0x2172484)
	struct FVector GetVelocity(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetTransform (Underlying native function: GetTransform 0x27778b4)
	struct FTransform GetTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetTickableWhenPaused (Underlying native function: GetTickableWhenPaused 0x9a6c3a4)
	bool GetTickableWhenPaused(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.GetSquaredHorizontalDistanceTo (Underlying native function: GetSquaredHorizontalDistanceTo 0x9a6c268)
	float GetSquaredHorizontalDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetSquaredDistanceTo (Underlying native function: GetSquaredDistanceTo 0x9a6c1d8)
	float GetSquaredDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetRemoteRole (Underlying native function: GetRemoteRole 0x8d95bb0)
	struct TEnumAsByte<ENetRole> GetRemoteRole(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetRayTracingGroupId (Underlying native function: GetRayTracingGroupId 0x9a6c1b4)
	int GetRayTracingGroupId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetParentComponent (Underlying native function: GetParentComponent 0x845d04c)
	class UChildActorComponent* GetParentComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetParentActor (Underlying native function: GetParentActor 0x9a6c190)
	class AActor* GetParentActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetOwner (Underlying native function: GetOwner 0x277669c)
	class AActor* GetOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetOverlappingComponents (Underlying native function: GetOverlappingComponents 0x9a6c0f4)
	void GetOverlappingComponents(struct TArray<class UPrimitiveComponent*>& OverlappingComponents); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetOverlappingActors (Underlying native function: GetOverlappingActors 0x9a6c004)
	void GetOverlappingActors(struct TArray<class AActor*>& OverlappingActors, class UClass*& ClassFilter); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLocalRole (Underlying native function: GetLocalRole 0x29ddad4)
	struct TEnumAsByte<ENetRole> GetLocalRole(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLifeSpan (Underlying native function: GetLifeSpan 0x9a6bfd8)
	float GetLifeSpan(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLevelTransform (Underlying native function: GetLevelTransform 0x9a6bf7c)
	struct FTransform GetLevelTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLevel (Underlying native function: GetLevel 0x9a6bf40)
	class ULevel* GetLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInstigatorController (Underlying native function: GetInstigatorController 0x25b1f60)
	class AController* GetInstigatorController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInstigator (Underlying native function: GetInstigator 0x22ebcac)
	class APawn* GetInstigator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInputVectorAxisValue (Underlying native function: GetInputVectorAxisValue 0x9a6bde4)
	struct FVector GetInputVectorAxisValue(struct FKey& InputAxisKey); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInputAxisValue (Underlying native function: GetInputAxisValue 0x9a6bd54)
	float GetInputAxisValue(struct FName& InputAxisName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInputAxisKeyValue (Underlying native function: GetInputAxisKeyValue 0x9a6bc6c)
	float GetInputAxisKeyValue(struct FKey& InputAxisKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetHorizontalDotProductTo (Underlying native function: GetHorizontalDotProductTo 0x9a6b91c)
	float GetHorizontalDotProductTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetHorizontalDistanceTo (Underlying native function: GetHorizontalDistanceTo 0x9a6b7dc)
	float GetHorizontalDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetGameTimeSinceCreation (Underlying native function: GetGameTimeSinceCreation 0x9a6b7b4)
	float GetGameTimeSinceCreation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetDotProductTo (Underlying native function: GetDotProductTo 0x9a6b46c)
	float GetDotProductTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetDistanceTo (Underlying native function: GetDistanceTo 0x9a6b3dc)
	float GetDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetComponentsByTag (Underlying native function: GetComponentsByTag 0x9a6b2cc)
	struct TArray<class UActorComponent*> GetComponentsByTag(class UClass*& ComponentClass, struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetComponentsByInterface (Underlying native function: GetComponentsByInterface 0x9a6b200)
	struct TArray<class UActorComponent*> GetComponentsByInterface(class UClass*& Interface); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetComponentByClass (Underlying native function: GetComponentByClass 0x18e82b8)
	class UActorComponent* GetComponentByClass(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAttachParentSocketName (Underlying native function: GetAttachParentSocketName 0x9a6b1d8)
	struct FName GetAttachParentSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAttachParentActor (Underlying native function: GetAttachParentActor 0x24e4c60)
	class AActor* GetAttachParentActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAttachedActors (Underlying native function: GetAttachedActors 0x2a4cc08)
	void GetAttachedActors(struct TArray<class AActor*>& OutActors, bool& bResetArray, bool& bRecursivelyIncludeAttachedActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAllChildActors (Underlying native function: GetAllChildActors 0x9a6b0e4)
	void GetAllChildActors(struct TArray<class AActor*>& ChildActors, bool& bIncludeDescendants); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorUpVector (Underlying native function: GetActorUpVector 0x9a6af54)
	struct FVector GetActorUpVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorTimeDilation (Underlying native function: GetActorTimeDilation 0x9a6af2c)
	float GetActorTimeDilation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorTickInterval (Underlying native function: GetActorTickInterval 0x2472374)
	float GetActorTickInterval(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorScale3D (Underlying native function: GetActorScale3D 0x227799c)
	struct FVector GetActorScale3D(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorRightVector (Underlying native function: GetActorRightVector 0x9a6ad98)
	struct FVector GetActorRightVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorRelativeScale3D (Underlying native function: GetActorRelativeScale3D 0x9a6ad40)
	struct FVector GetActorRelativeScale3D(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorForwardVector (Underlying native function: GetActorForwardVector 0x23df678)
	struct FVector GetActorForwardVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorEyesViewPoint (Underlying native function: GetActorEyesViewPoint 0x9a6ac5c)
	void GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorEnableCollision (Underlying native function: GetActorEnableCollision 0x9a6ac44)
	bool GetActorEnableCollision(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorBounds (Underlying native function: GetActorBounds 0x2a37674)
	void GetActorBounds(bool& bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool& bIncludeFromChildActors); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.ForceNetUpdate (Underlying native function: ForceNetUpdate 0x2bb9c84)
	void ForceNetUpdate(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.FlushNetDormancy (Underlying native function: FlushNetDormancy 0x9a6ac30)
	void FlushNetDormancy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.FinishAddComponent (Underlying native function: FinishAddComponent 0x9a6a94c)
	void FinishAddComponent(class UActorComponent*& Component, bool& bManualAttachment, struct FTransform& RelativeTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.EnableInput (Underlying native function: EnableInput 0x9a6a8c8)
	void EnableInput(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.DisableInput (Underlying native function: DisableInput 0x662e81c)
	void DisableInput(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.DetachRootComponentFromParent (Underlying native function: DetachRootComponentFromParent 0x9a6a848)
	void DetachRootComponentFromParent(bool& bMaintainWorldPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.AddTickPrerequisiteComponent (Underlying native function: AddTickPrerequisiteComponent 0x9a6a7c4)
	void AddTickPrerequisiteComponent(class UActorComponent*& PrerequisiteComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.AddTickPrerequisiteActor (Underlying native function: AddTickPrerequisiteActor 0x9a6a740)
	void AddTickPrerequisiteActor(class AActor*& PrerequisiteActor); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.AddComponentByClass (Underlying native function: AddComponentByClass 0x2507554)
	class UActorComponent* AddComponentByClass(class UClass*& Class, bool& bManualAttachment, struct FTransform& RelativeTransform, bool& bDeferredFinish); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.AddComponent (Underlying native function: AddComponent 0x2064600)
	class UActorComponent* AddComponent(struct FName& TemplateName, bool& bManualAttachment, struct FTransform& RelativeTransform, class UObject*& ComponentTemplateContext, bool& bDeferredFinish); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.ActorHasTag (Underlying native function: ActorHasTag 0x21fdb28)
	bool ActorHasTag(struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

