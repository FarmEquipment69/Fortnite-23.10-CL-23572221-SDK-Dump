// Class /Script/FortniteUI.AthenaCurieStatusWidget
// Size: 0x318
class UAthenaCurieStatusWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_318[0x318]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.SetPlayerState (Underlying native function: SetPlayerState 0xa2ea804)
	void SetPlayerState(class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.OnPlayerStatePawnChanged (Underlying native function: OnPlayerStatePawnChanged 0xa2ea288)
	void OnPlayerStatePawnChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa2ea108)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& NewSpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.OnCurieStateRemoved (Has no native function)
	void OnCurieStateRemoved(struct FGameplayTag& RemovedState); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.OnCurieStateDetachedFromSpectator (Underlying native function: OnCurieStateDetachedFromSpectator 0xa2ea000)
	void OnCurieStateDetachedFromSpectator(class UObject*& InOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.OnCurieStateAttachedToSpectator (Underlying native function: OnCurieStateAttachedToSpectator 0xa2e9ef8)
	void OnCurieStateAttachedToSpectator(class UObject*& InOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.OnCurieStateAdded (Has no native function)
	void OnCurieStateAdded(struct FGameplayTag& AddedState); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCurieStatusWidget.HasState (Underlying native function: HasState 0xa2e9d14)
	bool HasState(struct FGameplayTag& CurieState); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

