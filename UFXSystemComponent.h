// Class /Script/Engine.FXSystemComponent
// Size: 0x530
class UFXSystemComponent : public UPrimitiveComponent
{

	/* Functions */

	// Function /Script/Engine.FXSystemComponent.SetVectorParameter (Underlying native function: SetVectorParameter 0x1a05744)
	void SetVectorParameter(struct FName& ParameterName, struct FVector& Param); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetUseAutoManageAttachment (Underlying native function: SetUseAutoManageAttachment 0x22b1b48)
	void SetUseAutoManageAttachment(bool& bAutoManage); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetIntParameter (Underlying native function: SetIntParameter 0x1a03810)
	void SetIntParameter(struct FName& ParameterName, int& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetFloatParameter (Underlying native function: SetFloatParameter 0x18390e4)
	void SetFloatParameter(struct FName& ParameterName, float& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetEmitterEnable (Underlying native function: SetEmitterEnable 0x9a4e20c)
	void SetEmitterEnable(struct FName& EmitterName, bool& bNewEnableState); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetColorParameter (Underlying native function: SetColorParameter 0x1a04e00)
	void SetColorParameter(struct FName& ParameterName, struct FLinearColor& Param); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetBoolParameter (Underlying native function: SetBoolParameter 0x1a04940)
	void SetBoolParameter(struct FName& ParameterName, bool& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetAutoAttachmentParameters (Underlying native function: SetAutoAttachmentParameters 0x150ef5c)
	void SetAutoAttachmentParameters(class USceneComponent*& Parent, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetActorParameter (Underlying native function: SetActorParameter 0x9a4d860)
	void SetActorParameter(struct FName& ParameterName, class AActor*& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.ReleaseToPool (Underlying native function: ReleaseToPool 0x9a4d848)
	void ReleaseToPool(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.GetFXSystemAsset (Underlying native function: GetFXSystemAsset 0x2e7c4a4)
	class UFXSystemAsset* GetFXSystemAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

