// Class /Script/EnhancedInput.EnhancedInputLibrary
// Size: 0x28
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext (Underlying native function: RequestRebuildControlMappingsUsingContext 0x7ce8ce4)
	static void RequestRebuildControlMappingsUsingContext(class UInputMappingContext*& Context, bool& bForceImmediately); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType (Underlying native function: MakeInputActionValueOfType 0x7ce7d78)
	static struct FInputActionValue MakeInputActionValueOfType(double& X, double& Y, double& Z, enum EInputActionValueType& ValueType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValue (Underlying native function: MakeInputActionValue 0x7ce7bd0)
	static struct FInputActionValue MakeInputActionValue(double& X, double& Y, double& Z, struct FInputActionValue& MatchValueType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable (Underlying native function: IsActionKeyMappingPlayerMappable 0x7ce7a48)
	static bool IsActionKeyMappingPlayerMappable(struct FEnhancedActionKeyMapping& ActionKeyMapping); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings (Underlying native function: GetPlayerMappableKeySettings 0x7ce72fc)
	static class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(struct FEnhancedActionKeyMapping& ActionKeyMapping); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetMappingName (Underlying native function: GetMappingName 0x7ce721c)
	static struct FName GetMappingName(struct FEnhancedActionKeyMapping& ActionKeyMapping); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetBoundActionValue (Underlying native function: GetBoundActionValue 0x7ce6dec)
	static struct FInputActionValue GetBoundActionValue(class AActor*& Actor, class UInputAction*& Action); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString (Underlying native function: Conv_InputActionValueToString 0x7ce6c4c)
	static struct FString ConvInputActionValueToString(struct FInputActionValue& ActionValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool (Underlying native function: Conv_InputActionValueToBool 0x7ce6b8c)
	static bool ConvInputActionValueToBool(struct FInputActionValue& InValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D (Underlying native function: Conv_InputActionValueToAxis3D 0x7ce6aec)
	static struct FVector ConvInputActionValueToAxis3D(struct FInputActionValue& ActionValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D (Underlying native function: Conv_InputActionValueToAxis2D 0x7ce6a58)
	static struct FVector2D ConvInputActionValueToAxis2D(struct FInputActionValue& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D (Underlying native function: Conv_InputActionValueToAxis1D 0x7ce69bc)
	static double ConvInputActionValueToAxis1D(struct FInputActionValue& InValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue (Underlying native function: BreakInputActionValue 0x7ce67b8)
	static void BreakInputActionValue(struct FInputActionValue& InActionValue, double& X, double& Y, double& Z, enum EInputActionValueType& Type); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

