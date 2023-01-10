// Class /Script/CustomizableObject.CustomizableObjectInstance
// Size: 0x350
class UCustomizableObjectInstance : public UObject
{
	struct FMulticastInlineDelegate BeginUpdateDelegate; // 0x28 (0x10)
	unsigned char unreflected_38[0x18]; // 0x38 (0x18) 
	struct FMulticastInlineDelegate UpdatedDelegate; // 0x50 (0x10)
	unsigned char unreflected_60[0x18]; // 0x60 (0x18) 
	struct FMulticastInlineDelegate BeginDestroyDelegate; // 0x78 (0x10)
	unsigned char unreflected_88[0x68]; // 0x88 (0x68) 
	struct TArray<class USkeletalMesh*> SkeletalMeshes; // 0xf0 (0x10)
	struct FString SkeletalMeshStatus; // 0x100 (0x10)
	unsigned char unreflected_110[0x48]; // 0x110 (0x48) 
	struct FCustomizableObjectInstanceDescriptor Descriptor; // 0x158 (0x118)
	class UCustomizableInstancePrivateData* PrivateData; // 0x270 (0x8)
	unsigned char unreflected_278[0x18]; // 0x278 (0x18) 
	class UCustomizableObject* CustomizableObject; // 0x290 (0x8)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x298 (0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x2a8 (0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x2b8 (0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x2c8 (0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x2d8 (0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x2e8 (0x10)
	struct TMap<struct FName, struct FMultilayerProjector> MultilayerProjectors; // 0x2f8 (0x50)
	bool bBuildParameterDecorations; // 0x348 (0x1)
	unsigned char padding_349[0x7]; // 0x349 (0x7)

	/* Functions */

	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync (Underlying native function: UpdateSkeletalMeshAsync 0x71588c4)
	void UpdateSkeletalMeshAsync(bool& bIgnoreCloseDist, bool& bForceHighPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption (Underlying native function: SetVectorParameterSelectedOption 0x7157db8)
	void SetVectorParameterSelectedOption(struct FString& VectorParamName, struct FLinearColor& VectorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOptionT (Underlying native function: SetTextureParameterSelectedOptionT 0x52fa0f0)
	void SetTextureParameterSelectedOptionT(struct FString& TextureParamName, class UTexture2D*& TextureValue, int& RangeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets (Underlying native function: SetReplacePhysicsAssets 0x7158838)
	void SetReplacePhysicsAssets(bool& bReplaceEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValues (Underlying native function: SetRandomValues 0x715881c)
	void SetRandomValues(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorValue (Underlying native function: SetProjectorValue 0x71584f4)
	void SetProjectorValue(struct FString& ProjectorParamName, struct FVector& OutPos, struct FVector& OutDirection, struct FVector& OutUp, struct FVector& OutScale, float& OutAngle, int& RangeIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetObject (Underlying native function: SetObject 0x7158474)
	void SetObject(class UCustomizableObject*& InObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption (Underlying native function: SetIntParameterSelectedOption 0x71581d8)
	void SetIntParameterSelectedOption(struct FString& ParamName, struct FString& SelectedOptionName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption (Underlying native function: SetFloatParameterSelectedOption 0x7158004)
	void SetFloatParameterSelectedOption(struct FString& FloatParamName, float& FloatValue, int& RangeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetCurrentState (Underlying native function: SetCurrentState 0x7157f58)
	void SetCurrentState(struct FString& StateName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption (Underlying native function: SetColorParameterSelectedOption 0x7157db8)
	void SetColorParameterSelectedOption(struct FString& ColorParamName, struct FLinearColor& ColorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations (Underlying native function: SetBuildParameterDecorations 0x7157d38)
	void SetBuildParameterDecorations(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption (Underlying native function: SetBoolParameterSelectedOption 0x7157b6c)
	void SetBoolParameterSelectedOption(struct FString& BoolParamName, bool& BoolValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange (Underlying native function: RemoveValueFromProjectorRange 0x71579d8)
	int RemoveValueFromProjectorRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange (Underlying native function: RemoveValueFromIntRange 0x7157830)
	int RemoveValueFromIntRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange (Underlying native function: RemoveValueFromFloatRange 0x7157694)
	int RemoveValueFromFloatRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector (Underlying native function: RemoveMultilayerProjector 0x7157604)
	void RemoveMultilayerProjector(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer (Underlying native function: MultilayerProjectorUpdateVirtualLayer 0x71574b4)
	void MultilayerProjectorUpdateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID, struct FMultilayerProjectorVirtualLayer& Layer); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer (Underlying native function: MultilayerProjectorUpdateLayer 0x7157370)
	void MultilayerProjectorUpdateLayer(struct FName& ProjectorParamName, int& Index, struct FMultilayerProjectorLayer& Layer); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer (Underlying native function: MultilayerProjectorRemoveVirtualLayer 0x7157294)
	void MultilayerProjectorRemoveVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt (Underlying native function: MultilayerProjectorRemoveLayerAt 0x71571c4)
	void MultilayerProjectorRemoveLayerAt(struct FName& ProjectorParamName, int& Index); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers (Underlying native function: MultilayerProjectorNumLayers 0x7157128)
	int MultilayerProjectorNumLayers(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers (Underlying native function: MultilayerProjectorGetVirtualLayers 0x715704c)
	struct TArray<struct FName> MultilayerProjectorGetVirtualLayers(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer (Underlying native function: MultilayerProjectorGetVirtualLayer 0x7156f24)
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer (Underlying native function: MultilayerProjectorGetLayer 0x7156e0c)
	struct FMultilayerProjectorLayer MultilayerProjectorGetLayer(struct FName& ProjectorParamName, int& Index); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer (Underlying native function: MultilayerProjectorFindOrCreateVirtualLayer 0x7156ce4)
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer (Underlying native function: MultilayerProjectorCreateVirtualLayer 0x7156c08)
	void MultilayerProjectorCreateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer (Underlying native function: MultilayerProjectorCreateLayer 0x7156b38)
	void MultilayerProjectorCreateLayer(struct FName& ProjectorParamName, int& Index); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional (Underlying native function: IsParamMultidimensional 0x7156840)
	bool IsParamMultidimensional(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParameterRelevant (Underlying native function: IsParameterRelevant 0x71569b4)
	bool IsParameterRelevant(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh (Underlying native function: HasAnySkeletalMesh 0x715681c)
	bool HasAnySkeletalMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnyParameters (Underlying native function: HasAnyParameters 0x71567cc)
	bool HasAnyParameters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetVectorParameters (Underlying native function: GetVectorParameters 0x71567b0)
	struct TArray<struct FCustomizableObjectVectorParameterValue> GetVectorParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOptionT (Underlying native function: GetTextureParameterSelectedOptionT 0x52f9f40)
	class UTexture2D* GetTextureParameterSelectedOptionT(struct FString& TextureParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameters (Underlying native function: GetTextureParameters 0x7156794)
	struct TArray<struct FCustomizableObjectTextureParameterValue> GetTextureParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh (Underlying native function: GetSkeletalMesh 0x7156708)
	class USkeletalMesh* GetSkeletalMesh(int& ComponentIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValue (Underlying native function: GetProjectorValue 0x715637c)
	void GetProjectorValue(struct FString& ProjectorParamName, struct FVector& OutPos, struct FVector& OutDirection, struct FVector& OutUp, struct FVector& OutScale, float& OutAngle, enum ECustomizableObjectProjectorType& OutType, int& RangeIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorUp (Underlying native function: GetProjectorUp 0x71561b8)
	struct FVector GetProjectorUp(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorScale (Underlying native function: GetProjectorScale 0x7155ff4)
	struct FVector GetProjectorScale(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorPosition (Underlying native function: GetProjectorPosition 0x7155e30)
	struct FVector GetProjectorPosition(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType (Underlying native function: GetProjectorParameterType 0x7155c0c)
	enum ECustomizableObjectProjectorType GetProjectorParameterType(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameters (Underlying native function: GetProjectorParameters 0x7155e14)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> GetProjectorParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorDirection (Underlying native function: GetProjectorDirection 0x7155a48)
	struct FVector GetProjectorDirection(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorAngle (Underlying native function: GetProjectorAngle 0x715589c)
	float GetProjectorAngle(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetParameterDescription (Underlying native function: GetParameterDescription 0x71556a0)
	class UTexture2D* GetParameterDescription(struct FString& ParamName, int& DescIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption (Underlying native function: GetIntParameterSelectedOption 0x7155468)
	struct FString GetIntParameterSelectedOption(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameters (Underlying native function: GetIntParameters 0x7155684)
	struct TArray<struct FCustomizableObjectIntParameterValue> GetIntParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption (Underlying native function: GetFloatParameterSelectedOption 0x71552a0)
	float GetFloatParameterSelectedOption(struct FString& FloatParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameters (Underlying native function: GetFloatParameters 0x715544c)
	struct TArray<struct FCustomizableObjectFloatParameterValue> GetFloatParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCustomizableObject (Underlying native function: GetCustomizableObject 0x2dfcd64)
	class UCustomizableObject* GetCustomizableObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCurrentState (Underlying native function: GetCurrentState 0x7155218)
	struct FString GetCurrentState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption (Underlying native function: GetColorParameterSelectedOption 0x7155078)
	struct FLinearColor GetColorParameterSelectedOption(struct FString& ColorParamName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations (Underlying native function: GetBuildParameterDecorations 0x7155060)
	bool GetBuildParameterDecorations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption (Underlying native function: GetBoolParameterSelectedOption 0x7154eb0)
	bool GetBoolParameterSelectedOption(struct FString& BoolParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameters (Underlying native function: GetBoolParameters 0x7155044)
	struct TArray<struct FCustomizableObjectBoolParameterValue> GetBoolParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimBP (Underlying native function: GetAnimBP 0x7154dc0)
	class UClass* GetAnimBP(int& ComponentIndex, int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags (Underlying native function: GetAnimationGameplayTags 0x7154e8c)
	struct FGameplayTagContainer GetAnimationGameplayTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance (Underlying native function: ForEachAnimInstance 0x7154ce4)
	void ForEachAnimInstance(int& ComponentIndex, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex (Underlying native function: FindVectorParameterNameIndex 0x7154b7c)
	int FindVectorParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex (Underlying native function: FindProjectorParameterNameIndex 0x7154a14)
	int FindProjectorParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex (Underlying native function: FindIntParameterNameIndex 0x71548ac)
	int FindIntParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex (Underlying native function: FindFloatParameterNameIndex 0x7154744)
	int FindFloatParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex (Underlying native function: FindBoolParameterNameIndex 0x71545dc)
	int FindBoolParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.CurrentParamRange (Underlying native function: CurrentParamRange 0x7154448)
	int CurrentParamRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector (Underlying native function: CreateMultiLayerProjector 0x71543ac)
	bool CreateMultiLayerProjector(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.CloneStatic (Underlying native function: CloneStatic 0x715430c)
	class UCustomizableObjectInstance* CloneStatic(class UObject*& Outer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.Clone (Underlying native function: Clone 0x71542bc)
	class UCustomizableObjectInstance* Clone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange (Underlying native function: AddValueToProjectorRange 0x7154154)
	int AddValueToProjectorRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToIntRange (Underlying native function: AddValueToIntRange 0x7153fec)
	int AddValueToIntRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange (Underlying native function: AddValueToFloatRange 0x7153f10)
	int AddValueToFloatRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)
};

