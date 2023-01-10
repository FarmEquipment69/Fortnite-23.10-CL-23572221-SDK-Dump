// Class /Script/Engine.DataLayerSubsystem
// Size: 0x178
class UDataLayerSubsystem : public UWorldSubsystem
{
	struct FMulticastInlineDelegate OnDataLayerRuntimeStateChanged; // 0x30 (0x10)
	struct TWeakObjectPtr<class UClass> DataLayerLoadingPolicyClass; // 0x40 (0x28)
	class UDataLayerLoadingPolicy* DataLayerLoadingPolicy; // 0x68 (0x8)
	unsigned char padding_70[0x108]; // 0x70 (0x108)

	/* Functions */

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerStateByLabel (Underlying native function: SetDataLayerStateByLabel 0x9e2578c)
	void SetDataLayerStateByLabel(struct FName& InDataLayerLabel, enum EDataLayerState& InState); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerState (Underlying native function: SetDataLayerState 0x9e256bc)
	void SetDataLayerState(struct FActorDataLayer& InDataLayer, enum EDataLayerState& InState); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerRuntimeStateByLabel (Underlying native function: SetDataLayerRuntimeStateByLabel 0x9e255a8)
	void SetDataLayerRuntimeStateByLabel(struct FName& InDataLayerLabel, enum EDataLayerRuntimeState& InState, bool& bInIsRecursive); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerRuntimeState (Underlying native function: SetDataLayerRuntimeState 0x9e25494)
	void SetDataLayerRuntimeState(struct FActorDataLayer& InDataLayer, enum EDataLayerRuntimeState& InState, bool& bInIsRecursive); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerInstanceRuntimeState (Underlying native function: SetDataLayerInstanceRuntimeState 0x9e25398)
	void SetDataLayerInstanceRuntimeState(class UDataLayerAsset*& InDataLayerAsset, enum EDataLayerRuntimeState& InState, bool& bInIsRecursive); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.GetLoadedDataLayerNames (Underlying native function: GetLoadedDataLayerNames 0x9e25268)
	struct TSet<struct FName> GetLoadedDataLayerNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerStateByLabel (Underlying native function: GetDataLayerStateByLabel 0x9e25150)
	enum EDataLayerState GetDataLayerStateByLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerState (Underlying native function: GetDataLayerState 0x9e2507c)
	enum EDataLayerState GetDataLayerState(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerRuntimeStateByLabel (Underlying native function: GetDataLayerRuntimeStateByLabel 0x9e25150)
	enum EDataLayerRuntimeState GetDataLayerRuntimeStateByLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerRuntimeState (Underlying native function: GetDataLayerRuntimeState 0x9e2507c)
	enum EDataLayerRuntimeState GetDataLayerRuntimeState(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerInstanceRuntimeState (Underlying native function: GetDataLayerInstanceRuntimeState 0x9e24fc0)
	enum EDataLayerRuntimeState GetDataLayerInstanceRuntimeState(class UDataLayerAsset*& InDataLayerAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerInstanceFromAsset (Underlying native function: GetDataLayerInstanceFromAsset 0x9e24f08)
	class UDataLayerInstance* GetDataLayerInstanceFromAsset(class UDataLayerAsset*& InDataLayerAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerInstanceEffectiveRuntimeState (Underlying native function: GetDataLayerInstanceEffectiveRuntimeState 0x9e24e4c)
	enum EDataLayerRuntimeState GetDataLayerInstanceEffectiveRuntimeState(class UDataLayerAsset*& InDataLayerAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerFromName (Underlying native function: GetDataLayerFromName 0x9e24d98)
	class UDataLayerInstance* GetDataLayerFromName(struct FName& InDataLayerName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerFromLabel (Underlying native function: GetDataLayerFromLabel 0x9e24d0c)
	class UDataLayerInstance* GetDataLayerFromLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerEffectiveRuntimeStateByLabel (Underlying native function: GetDataLayerEffectiveRuntimeStateByLabel 0x9e24c68)
	enum EDataLayerRuntimeState GetDataLayerEffectiveRuntimeStateByLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerEffectiveRuntimeState (Underlying native function: GetDataLayerEffectiveRuntimeState 0x9e24bd0)
	enum EDataLayerRuntimeState GetDataLayerEffectiveRuntimeState(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayer (Underlying native function: GetDataLayer 0x9e24b08)
	class UDataLayerInstance* GetDataLayer(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetActiveDataLayerNames (Underlying native function: GetActiveDataLayerNames 0x9e24adc)
	struct TSet<struct FName> GetActiveDataLayerNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

