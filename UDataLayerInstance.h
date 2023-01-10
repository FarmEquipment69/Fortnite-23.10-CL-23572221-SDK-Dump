// Class /Script/Engine.DataLayerInstance
// Size: 0x48
class UDataLayerInstance : public UObject
{
	enum EDataLayerRuntimeState InitialRuntimeState; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UDataLayerInstance* Parent; // 0x30 (0x8)
	struct TArray<class UDataLayerInstance*> Children; // 0x38 (0x10)

	/* Functions */

	// Function /Script/Engine.DataLayerInstance.IsVisible (Underlying native function: IsVisible 0x24f75e4)
	bool IsVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerInstance.IsRuntime (Underlying native function: IsRuntime 0x2c6a96c)
	bool IsRuntime(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerInstance.IsInitiallyVisible (Underlying native function: IsInitiallyVisible 0x24f75e4)
	bool IsInitiallyVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerInstance.IsEffectiveVisible (Underlying native function: IsEffectiveVisible 0x24f75e4)
	bool IsEffectiveVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerInstance.GetType (Underlying native function: GetType 0x2b2e64c)
	enum EDataLayerType GetType(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerInstance.GetInitialRuntimeState (Underlying native function: GetInitialRuntimeState 0x9e25244)
	enum EDataLayerRuntimeState GetInitialRuntimeState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerInstance.GetDebugColor (Underlying native function: GetDebugColor 0x9e251f4)
	struct FColor GetDebugColor(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

