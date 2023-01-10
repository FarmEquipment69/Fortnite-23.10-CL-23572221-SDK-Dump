// Class /Script/Engine.AnimNotifyStateMachineInspectionLibrary
// Size: 0x28
class UAnimNotifyStateMachineInspectionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.AnimNotifyStateMachineInspectionLibrary.IsTriggeredByStateMachine (Underlying native function: IsTriggeredByStateMachine 0x9aab168)
	static bool IsTriggeredByStateMachine(struct FAnimNotifyEventReference& EventReference, class UAnimInstance*& AnimInstance, struct FName& StateMachineName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimNotifyStateMachineInspectionLibrary.IsTriggeredByStateInStateMachine (Underlying native function: IsTriggeredByStateInStateMachine 0x9aaafa8)
	static bool IsTriggeredByStateInStateMachine(struct FAnimNotifyEventReference& EventReference, class UAnimInstance*& AnimInstance, struct FName& StateMachineName, struct FName& StateName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimNotifyStateMachineInspectionLibrary.IsTriggeredByState (Underlying native function: IsTriggeredByState 0x9aaad98)
	static bool IsTriggeredByState(struct FAnimNotifyEventReference& EventReference, class UAnimInstance*& AnimInstance, struct FName& StateName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

