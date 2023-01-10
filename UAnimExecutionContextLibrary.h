// Class /Script/AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x28
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime (Underlying native function: GetDeltaTime 0x9807d28)
	static float GetDeltaTime(struct FAnimUpdateContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight (Underlying native function: GetCurrentWeight 0x9807c78)
	static float GetCurrentWeight(struct FAnimUpdateContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference (Underlying native function: GetAnimNodeReference 0x9807ab0)
	static struct FAnimNodeReference GetAnimNodeReference(class UAnimInstance*& Instance, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance (Underlying native function: GetAnimInstance 0x2599ce0)
	static class UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext (Underlying native function: ConvertToUpdateContext 0x9807954)
	static struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext (Underlying native function: ConvertToPoseContext 0x98077f8)
	static struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext (Underlying native function: ConvertToInitializationContext 0x9807418)
	static struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext (Underlying native function: ConvertToComponentSpacePoseContext 0x98072bc)
	static struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

