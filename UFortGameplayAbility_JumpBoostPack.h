// Class /Script/FortniteGame.FortGameplayAbility_JumpBoostPack
// Size: 0xb40
class UFortGameplayAbility_JumpBoostPack : public UFortGameplayAbility
{
	unsigned char unreflected_b20[0x8]; // 0xb20 (0x8) 
	enum EJumpBoostPackState ServerCurrentState; // 0xb28 (0x1)
	enum EJumpBoostPackState CurrentState; // 0xb29 (0x1)
	unsigned char unreflected_b2a[0xe]; // 0xb2a (0xe) 
	float DelayRegenStartTime; // 0xb38 (0x4)
	bool bAbilityMarkedForPendingKill; // 0xb3c (0x1)
	unsigned char padding_b3d[0x3]; // 0xb3d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.SetCurrentState (Underlying native function: SetCurrentState 0x7e4b680)
	void SetCurrentState(enum EJumpBoostPackState& InState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.OnRep_ServerCurrentState (Underlying native function: OnRep_ServerCurrentState 0x7e4acac)
	void OnRepServerCurrentState(enum EJumpBoostPackState& PreviousState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.OnRep_bAbilityMarkedForPendingKill (Underlying native function: OnRep_bAbilityMarkedForPendingKill 0x7e4adac)
	void OnRepbAbilityMarkedForPendingKill(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.OnFuelIsFull (Underlying native function: OnFuelIsFull 0x6f7f9ac)
	void OnFuelIsFull(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.OnFuelIsEmpty (Underlying native function: OnFuelIsEmpty 0x6f7fb14)
	void OnFuelIsEmpty(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.OnCurrentStateChanged (Underlying native function: OnCurrentStateChanged 0x7e4ab60)
	void OnCurrentStateChanged(enum EJumpBoostPackState& InPreviousState, enum EJumpBoostPackState& InCurrentState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.OnAbilityCanceled (Underlying native function: OnAbilityCanceled 0x6f7f994)
	void OnAbilityCanceled(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_JumpBoostPack.HandleCurrentStateChanged (Underlying native function: HandleCurrentStateChanged 0x7e49fa0)
	void HandleCurrentStateChanged(enum EJumpBoostPackState& InPreviousState); // (Final | Native | Public | BlueprintCallable)
};

