// Class /Script/AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x28
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.SetState (Underlying native function: SetState 0x9808da0)
	static void SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName& TargetState, float& Duration, struct TEnumAsByte<ETransitionLogicType>& BlendType, class UBlendProfile*& BlendProfile, enum EAlphaBlendOption& AlphaBlendOption, class UCurveFloat*& CustomBlendCurve); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut (Underlying native function: IsStateBlendingOut 0x9808504)
	static bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn (Underlying native function: IsStateBlendingIn 0x98083bc)
	static bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetState (Underlying native function: GetState 0x9808274)
	static struct FName GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction (Underlying native function: GetRelevantAnimTimeRemainingFraction 0x98080d0)
	static float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining (Underlying native function: GetRelevantAnimTimeRemaining 0x1607f5c)
	static float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure (Underlying native function: ConvertToAnimationStateResultPure 0x9806ec0)
	static void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult (Underlying native function: ConvertToAnimationStateResult 0x25e717c)
	static void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure (Underlying native function: ConvertToAnimationStateMachinePure 0x9806d48)
	static void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine (Underlying native function: ConvertToAnimationStateMachine 0x9806bd0)
	static void ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

