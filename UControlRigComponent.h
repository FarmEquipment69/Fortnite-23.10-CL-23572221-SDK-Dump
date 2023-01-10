// Class /Script/ControlRig.ControlRigComponent
// Size: 0x690
class UControlRigComponent : public UPrimitiveComponent
{
	class UClass* ControlRigClass; // 0x530 (0x8)
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0x538 (0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x548 (0x10)
	struct FMulticastInlineDelegate OnPreConstructionDelegate; // 0x558 (0x10)
	struct FMulticastInlineDelegate OnPostConstructionDelegate; // 0x568 (0x10)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x578 (0x10)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x588 (0x10)
	struct TArray<struct FControlRigComponentMappedElement> UserDefinedElements; // 0x598 (0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x5a8 (0x10)
	bool bEnableLazyEvaluation; // 0x5b8 (0x1)
	unsigned char unreflected_5b9[0x3]; // 0x5b9 (0x3) 
	float LazyEvaluationPositionThreshold; // 0x5bc (0x4)
	float LazyEvaluationRotationThreshold; // 0x5c0 (0x4)
	float LazyEvaluationScaleThreshold; // 0x5c4 (0x4)
	bool bResetTransformBeforeTick; // 0x5c8 (0x1)
	bool bResetInitialsBeforeConstruction; // 0x5c9 (0x1)
	bool bUpdateRigOnTick; // 0x5ca (0x1)
	bool bUpdateInEditor; // 0x5cb (0x1)
	bool bDrawBones; // 0x5cc (0x1)
	bool bShowDebugDrawing; // 0x5cd (0x1)
	unsigned char unreflected_5ce[0x2]; // 0x5ce (0x2) 
	class UControlRig* ControlRig; // 0x5d0 (0x8)
	unsigned char padding_5d8[0xb8]; // 0x5d8 (0xb8)

	/* Functions */

	// Function /Script/ControlRig.ControlRigComponent.Update (Underlying native function: Update 0x77af900)
	void Update(float& DeltaTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding (Underlying native function: SetObjectBinding 0x77af4f8)
	void SetObjectBinding(class UObject*& InObjectToBind); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements (Underlying native function: SetMappedElements 0x77af41c)
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement>& NewMappedElements); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform (Underlying native function: SetInitialSpaceTransform 0x77af280)
	void SetInitialSpaceTransform(struct FName& SpaceName, struct FTransform& InitialTransform, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform (Underlying native function: SetInitialBoneTransform 0x77af098)
	void SetInitialBoneTransform(struct FName& BoneName, struct FTransform& InitialTransform, enum EControlRigComponentSpace& Space, bool& bPropagateToChildren); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D (Underlying native function: SetControlVector2D 0x77aeba8)
	void SetControlVector2D(struct FName& ControlName, struct FVector2D& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform (Underlying native function: SetControlTransform 0x77aea0c)
	void SetControlTransform(struct FName& ControlName, struct FTransform& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlScale (Underlying native function: SetControlScale 0x77ae7ac)
	void SetControlScale(struct FName& ControlName, struct FVector& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator (Underlying native function: SetControlRotator 0x77ae6a4)
	void SetControlRotator(struct FName& ControlName, struct FRotator& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass (Underlying native function: SetControlRigClass 0x77ae61c)
	void SetControlRigClass(class UClass*& InControlRigClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition (Underlying native function: SetControlPosition 0x77ae514)
	void SetControlPosition(struct FName& ControlName, struct FVector& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset (Underlying native function: SetControlOffset 0x77ae378)
	void SetControlOffset(struct FName& ControlName, struct FTransform& OffsetTransform, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlInt (Underlying native function: SetControlInt 0x77ae2b8)
	void SetControlInt(struct FName& ControlName, int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat (Underlying native function: SetControlFloat 0x77ae1f0)
	void SetControlFloat(struct FName& ControlName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlBool (Underlying native function: SetControlBool 0x77ae12c)
	void SetControlBool(struct FName& ControlName, bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform (Underlying native function: SetBoneTransform 0x77adef8)
	void SetBoneTransform(struct FName& BoneName, struct FTransform& Transform, enum EControlRigComponentSpace& Space, float& Weight, bool& bPropagateToChildren); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh (Underlying native function: SetBoneInitialTransformsFromSkeletalMesh 0x77ade60)
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh*& InSkeletalMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize (Underlying native function: OnPreInitialize 0x77ad758)
	void OnPreInitialize(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve (Underlying native function: OnPreForwardsSolve 0x77ad6d4)
	void OnPreForwardsSolve(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction (Underlying native function: OnPreConstruction 0x77ad650)
	void OnPreConstruction(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize (Underlying native function: OnPostInitialize 0x77ad5cc)
	void OnPostInitialize(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve (Underlying native function: OnPostForwardsSolve 0x77ad548)
	void OnPostForwardsSolve(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction (Underlying native function: OnPostConstruction 0x77ad4c4)
	void OnPostConstruction(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.Initialize (Underlying native function: Initialize 0x77acfa8)
	void Initialize(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform (Underlying native function: GetSpaceTransform 0x77ac208)
	struct FTransform GetSpaceTransform(struct FName& SpaceName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform (Underlying native function: GetInitialSpaceTransform 0x77ac0f4)
	struct FTransform GetInitialSpaceTransform(struct FName& SpaceName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform (Underlying native function: GetInitialBoneTransform 0x77abfe0)
	struct FTransform GetInitialBoneTransform(struct FName& BoneName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetElementNames (Underlying native function: GetElementNames 0x77abe18)
	struct TArray<struct FName> GetElementNames(enum ERigElementType& ElementType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D (Underlying native function: GetControlVector2D 0x77abd80)
	struct FVector2D GetControlVector2D(struct FName& ControlName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform (Underlying native function: GetControlTransform 0x77abc6c)
	struct FTransform GetControlTransform(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlScale (Underlying native function: GetControlScale 0x77abaa4)
	struct FVector GetControlScale(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator (Underlying native function: GetControlRotator 0x77ab998)
	struct FRotator GetControlRotator(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlRig (Underlying native function: GetControlRig 0x77ab974)
	class UControlRig* GetControlRig(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition (Underlying native function: GetControlPosition 0x77ab874)
	struct FVector GetControlPosition(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset (Underlying native function: GetControlOffset 0x77ab760)
	struct FTransform GetControlOffset(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.GetControlInt (Underlying native function: GetControlInt 0x77ab6d4)
	int GetControlInt(struct FName& ControlName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat (Underlying native function: GetControlFloat 0x77ab644)
	float GetControlFloat(struct FName& ControlName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlBool (Underlying native function: GetControlBool 0x77ab5b8)
	bool GetControlBool(struct FName& ControlName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform (Underlying native function: GetBoneTransform 0x77ab4a4)
	struct FTransform GetBoneTransform(struct FName& BoneName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime (Underlying native function: GetAbsoluteTime 0x77ab478)
	float GetAbsoluteTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist (Underlying native function: DoesElementExist 0x77aafc8)
	bool DoesElementExist(struct FName& Name, enum ERigElementType& ElementType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements (Underlying native function: ClearMappedElements 0x77aaec8)
	void ClearMappedElements(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.CanExecute (Underlying native function: CanExecute 0x77aae90)
	bool CanExecute(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh (Underlying native function: AddMappedSkeletalMesh 0x77aa69c)
	void AddMappedSkeletalMesh(class USkeletalMeshComponent*& SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone*>& Bones, struct TArray<struct FControlRigComponentMappedCurve*>& Curves); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements (Underlying native function: AddMappedElements 0x77aa5f4)
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement>& NewMappedElements); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents (Underlying native function: AddMappedComponents 0x77aa458)
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent>& Components); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh (Underlying native function: AddMappedCompleteSkeletalMesh 0x77aa3b4)
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent*& SkeletalMeshComponent); // (Final | Native | Public | BlueprintCallable)
};

