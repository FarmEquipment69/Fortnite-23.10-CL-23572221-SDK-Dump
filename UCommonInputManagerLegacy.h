// Class /Script/CommonUILegacy.CommonInputManagerLegacy
// Size: 0x108
class UCommonInputManagerLegacy : public UObject
{
	unsigned char unreflected_28[0x80]; // 0x28 (0x80) 
	struct TScriptInterface<class ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler; // 0xa8 (0x10)
	struct TArray<class UCommonActivatablePanelLegacy*> ActivatablePanelStack; // 0xb8 (0x10)
	class UCommonGlobalInputHandlerLegacy* GlobalInputHandler; // 0xc8 (0x8)
	unsigned char unreflected_d0[0x18]; // 0xd0 (0x18) 
	struct TArray<struct FOperation> Operations; // 0xe8 (0x10)
	unsigned char padding_f8[0x10]; // 0xf8 (0x10)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing (Underlying native function: SuspendStartingOperationProcessing 0x6dd244c)
	void SuspendStartingOperationProcessing(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction (Underlying native function: StopListeningForExistingHeldAction 0x6dd22d4)
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, struct FDelegate& CompleteEvent, struct FDelegate& ProgressEvent); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction (Underlying native function: StartListeningForExistingHeldAction 0x6dd215c)
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, struct FDelegate& CompleteEvent, struct FDelegate& ProgressEvent); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter (Underlying native function: SetGlobalInputHandlerPriorityFilter 0x6dd1b64)
	void SetGlobalInputHandlerPriorityFilter(int& InFilterPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing (Underlying native function: ResumeStartingOperationProcessing 0x6dd14a8)
	void ResumeStartingOperationProcessing(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel (Underlying native function: PushActivatablePanel 0x6dd1260)
	void PushActivatablePanel(class UCommonActivatablePanelLegacy*& ActivatablePanel, bool& bIntroPanel, bool& bOutroPanelBelow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel (Underlying native function: PopActivatablePanel 0x6dd11bc)
	void PopActivatablePanel(class UCommonActivatablePanelLegacy*& ActivatablePanel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack (Underlying native function: IsPanelOnStack 0x6dd1008)
	bool IsPanelOnStack(class UCommonActivatablePanelLegacy*& InPanel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended (Underlying native function: IsInputSuspended 0x6dd0fc4)
	bool IsInputSuspended(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetTopPanel (Underlying native function: GetTopPanel 0x6dd0850)
	class UCommonActivatablePanelLegacy* GetTopPanel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter (Underlying native function: GetGlobalInputHandlerPriorityFilter 0x6dd05c0)
	int GetGlobalInputHandlerPriorityFilter(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions (Underlying native function: GetAvailableInputActions 0x6dd03b8)
	bool GetAvailableInputActions(struct TArray<struct FCommonInputActionHandlerData>& AvailableInputActions); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

