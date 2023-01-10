// Class /Script/Engine.ActorComponent
// Size: 0xa0
class UActorComponent : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FActorComponentTickFunction PrimaryComponentTick; // 0x30 (0x30)
	struct TArray<struct FName> ComponentTags; // 0x60 (0x10)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x70 (0x10)
	unsigned char unreflected_80[0x4]; // 0x80 (0x4) 
	int UCSSerializationIndex; // 0x84 (0x4)
	unsigned char bNetAddressable; // 0x88 (0x1)
	unsigned char bReplicateUsingRegisteredSubObjectList; // 0x88 (0x1)
	unsigned char bReplicates; // 0x88 (0x1)
	unsigned char unreflected_89[0x1]; // 0x89 (0x1) 
	unsigned char bAutoActivate; // 0x8a (0x1)
	unsigned char bIsActive; // 0x8a (0x1)
	unsigned char bEditableWhenInherited; // 0x8a (0x1)
	unsigned char bCanEverAffectNavigation; // 0x8a (0x1)
	unsigned char bIsEditorOnly; // 0x8a (0x1)
	unsigned char unreflected_8b[0x2]; // 0x8b (0x2) 
	enum EComponentCreationMethod CreationMethod; // 0x8d (0x1)
	struct FMulticastSparseDelegate OnComponentActivated; // 0x8e (0x1)
	struct FMulticastSparseDelegate OnComponentDeactivated; // 0x8f (0x1)
	unsigned char padding_90[0x10]; // 0x90 (0x10)

	/* Functions */

	// Function /Script/Engine.ActorComponent.ToggleActive (Underlying native function: ToggleActive 0x1679f1c)
	void ToggleActive(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetTickGroup (Underlying native function: SetTickGroup 0x7db7ff4)
	void SetTickGroup(struct TEnumAsByte<ETickingGroup>& NewTickGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetTickableWhenPaused (Underlying native function: SetTickableWhenPaused 0x9b25118)
	void SetTickableWhenPaused(bool& bTickableWhenPaused); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetIsReplicated (Underlying native function: SetIsReplicated 0x9b249a4)
	void SetIsReplicated(bool& ShouldReplicate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetComponentTickIntervalAndCooldown (Underlying native function: SetComponentTickIntervalAndCooldown 0x9b24670)
	void SetComponentTickIntervalAndCooldown(float& TickInterval); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetComponentTickInterval (Underlying native function: SetComponentTickInterval 0x7c12f08)
	void SetComponentTickInterval(float& TickInterval); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetComponentTickEnabled (Underlying native function: SetComponentTickEnabled 0x24e6d18)
	void SetComponentTickEnabled(bool& bEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetAutoActivate (Underlying native function: SetAutoActivate 0x1ad7d5c)
	void SetAutoActivate(bool& bNewAutoActivate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.SetActive (Underlying native function: SetActive 0x1306888)
	void SetActive(bool& bNewActive, bool& bReset); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.RemoveTickPrerequisiteComponent (Underlying native function: RemoveTickPrerequisiteComponent 0x9b23f90)
	void RemoveTickPrerequisiteComponent(class UActorComponent*& PrerequisiteComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.RemoveTickPrerequisiteActor (Underlying native function: RemoveTickPrerequisiteActor 0x9b23f0c)
	void RemoveTickPrerequisiteActor(class AActor*& PrerequisiteActor); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.ActorComponent.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.ActorComponent.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.ActorComponent.ReceiveAsyncPhysicsTick (Has no native function)
	void ReceiveAsyncPhysicsTick(float& DeltaSeconds, float& SimSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.ActorComponent.OnRep_IsActive (Underlying native function: OnRep_IsActive 0x1832458)
	void OnRepIsActive(); // (Native | Public)

	// Function /Script/Engine.ActorComponent.K2_DestroyComponent (Underlying native function: K2_DestroyComponent 0x2420830)
	void K2DestroyComponent(class UObject*& Object); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.IsComponentTickEnabled (Underlying native function: IsComponentTickEnabled 0x9b23844)
	bool IsComponentTickEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ActorComponent.IsBeingDestroyed (Underlying native function: IsBeingDestroyed 0x9b23828)
	bool IsBeingDestroyed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ActorComponent.IsActive (Underlying native function: IsActive 0x9b2380c)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ActorComponent.GetOwner (Underlying native function: GetOwner 0x2158e90)
	class AActor* GetOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ActorComponent.GetComponentTickInterval (Underlying native function: GetComponentTickInterval 0x2911338)
	float GetComponentTickInterval(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ActorComponent.Deactivate (Underlying native function: Deactivate 0x23fd994)
	void Deactivate(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.ComponentHasTag (Underlying native function: ComponentHasTag 0x1307e90)
	bool ComponentHasTag(struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ActorComponent.AddTickPrerequisiteComponent (Underlying native function: AddTickPrerequisiteComponent 0x9b224d0)
	void AddTickPrerequisiteComponent(class UActorComponent*& PrerequisiteComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.AddTickPrerequisiteActor (Underlying native function: AddTickPrerequisiteActor 0x9b2244c)
	void AddTickPrerequisiteActor(class AActor*& PrerequisiteActor); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ActorComponent.Activate (Underlying native function: Activate 0x1cf5418)
	void Activate(bool& bReset); // (Native | Public | BlueprintCallable)
};

