// Class /Script/RidingCodeRuntime.ControllingRiderComponent
// Size: 0x698
class UControllingRiderComponent : public URiderComponent
{
	bool bCanControlRidable; // 0x658 (0x1)
	bool bIsControllingRidable; // 0x659 (0x1)
	enum ERidingControlInputStyle ControlInputStyle; // 0x65a (0x1)
	unsigned char unreflected_65b[0xd]; // 0x65b (0xd) 
	struct FRidingControlInputState ReplicatedControlInputState; // 0x668 (0xc)
	struct FRidingControlInputStateReliable ReplicatedControlInputStateReliable; // 0x674 (0x1)
	struct FRidingControlInputStateUnreliable ReplicatedControlInputStateUnreliable; // 0x675 (0x2)
	unsigned char unreflected_677[0x1]; // 0x677 (0x1) 
	class UFortInputComponent* ControllingRiderInputComponent; // 0x678 (0x8)
	unsigned char unreflected_680[0x10]; // 0x680 (0x10) 
	float AutoRunDoubleTapTimestamp; // 0x690 (0x4)
	bool bCanBePet; // 0x694 (0x1)
	unsigned char padding_695[0x3]; // 0x695 (0x3)

	/* Functions */

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput (Underlying native function: UpdateFromInput 0x6ffbf18)
	void UpdateFromInput(float& DeltaTime, struct FRidingControlInputState& InputState); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable (Underlying native function: ServerUpdateControlInputStateUnreliable 0x6ffbba4)
	void ServerUpdateControlInputStateUnreliable(struct FRidingControlInputStateUnreliable& InputState); // (Net | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable (Underlying native function: ServerUpdateControlInputStateReliable 0x6ffbb08)
	void ServerUpdateControlInputStateReliable(struct FRidingControlInputStateReliable& InputState); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting (Underlying native function: ServerCancelPetting 0x280e53c)
	void ServerCancelPetting(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ReloadPressed (Underlying native function: ReloadPressed 0x6ffb9c8)
	void ReloadPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled (Underlying native function: OnSprintCanceled 0x662da60)
	void OnSprintCanceled(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable (Underlying native function: OnRep_IsControllingRidable 0x2a79eb8)
	void OnRepIsControllingRidable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable (Underlying native function: OnRep_ControlInputUnreliable 0x2be7888)
	void OnRepControlInputUnreliable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable (Underlying native function: OnRep_ControlInputReliable 0x2e27c20)
	void OnRepControlInputReliable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove (Underlying native function: IsTryingToMove 0x52c2620)
	bool IsTryingToMove(float& Tolerance); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased (Underlying native function: HandleSpotActorOrPettingAbilityReleased 0x6ffb064)
	void HandleSpotActorOrPettingAbilityReleased(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed (Underlying native function: HandleSpotActorOrPettingAbilityPressed 0x6ffb050)
	void HandleSpotActorOrPettingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased (Underlying native function: HandleRidingAbilityReleased 0x6ffb014)
	void HandleRidingAbilityReleased(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed (Underlying native function: HandleRidingAbilityPressed 0x6ffb000)
	void HandleRidingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop (Has no native function)
	void HandleRequestPettingStop(); // (Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart (Has no native function)
	void HandleRequestPettingStart(); // (Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed (Underlying native function: HandlePettingAbilityPressed 0x6ffaae4)
	void HandlePettingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed (Underlying native function: HandleGamepadRidingAbilityPressed 0x6ffa8f4)
	void HandleGamepadRidingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.GetControlInputState (Underlying native function: GetControlInputState 0x6ffa3e4)
	struct FRidingControlInputState GetControlInputState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight (Underlying native function: ControllingActor_OnMoveRight 0x6ffa2b4)
	void ControllingActorOnMoveRight(float& Val); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward (Underlying native function: ControllingActor_OnMoveForward 0x6ffa230)
	void ControllingActorOnMoveForward(float& Val); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput (Underlying native function: ControllingActor_OnJumpInput 0x6ffa1b0)
	void ControllingActorOnJumpInput(bool& bPressed); // (Final | Native | Protected)
};

