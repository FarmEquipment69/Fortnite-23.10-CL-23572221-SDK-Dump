// Class /Script/Engine.DataLayer
// Size: 0x50
class UDataLayer : public UObject
{
	struct FName DataLayerLabel; // 0x28 (0x4)
	unsigned char bIsRuntime; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	enum EDataLayerRuntimeState InitialRuntimeState; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FColor DebugColor; // 0x34 (0x4)
	class UDataLayer* Parent; // 0x38 (0x8)
	struct TArray<class UDataLayer*> Children; // 0x40 (0x10)

	/* Functions */

	// Function /Script/Engine.DataLayer.IsVisible (Underlying native function: IsVisible 0x24f75e4)
	bool IsVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsRuntime (Underlying native function: IsRuntime 0x9e25294)
	bool IsRuntime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsInitiallyVisible (Underlying native function: IsInitiallyVisible 0x24f75e4)
	bool IsInitiallyVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsInitiallyActive (Underlying native function: IsInitiallyActive 0x9e252ac)
	bool IsInitiallyActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsEffectiveVisible (Underlying native function: IsEffectiveVisible 0x24f75e4)
	bool IsEffectiveVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsDynamicallyLoaded (Underlying native function: IsDynamicallyLoaded 0x9e25294)
	bool IsDynamicallyLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetInitialState (Underlying native function: GetInitialState 0x9e25224)
	enum EDataLayerState GetInitialState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetInitialRuntimeState (Underlying native function: GetInitialRuntimeState 0x9e25224)
	enum EDataLayerRuntimeState GetInitialRuntimeState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetDebugColor (Underlying native function: GetDebugColor 0x2472374)
	struct FColor GetDebugColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetDataLayerLabel (Underlying native function: GetDataLayerLabel 0x7083368)
	struct FName GetDataLayerLabel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.Equals (Underlying native function: Equals 0x9e24a44)
	bool Equals(struct FActorDataLayer& ActorDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

