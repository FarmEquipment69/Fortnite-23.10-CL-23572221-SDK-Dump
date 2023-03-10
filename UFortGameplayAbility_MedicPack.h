// Class /Script/FortniteGame.FortGameplayAbility_MedicPack
// Size: 0xb40
class UFortGameplayAbility_MedicPack : public UFortGameplayAbility
{
	unsigned char unreflected_b20[0x8]; // 0xb20 (0x8) 
	enum EMedicPackState ServerCurrentState; // 0xb28 (0x1)
	enum EMedicPackState CurrentState; // 0xb29 (0x1)
	unsigned char unreflected_b2a[0xe]; // 0xb2a (0xe) 
	float DelayRegenStartTime; // 0xb38 (0x4)
	bool bAbilityMarkedForPendingKill; // 0xb3c (0x1)
	unsigned char padding_b3d[0x3]; // 0xb3d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.SetCurrentState (Underlying native function: SetCurrentState 0x7e4b700)
	void SetCurrentState(enum EMedicPackState& InState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.OnRep_ServerCurrentState (Underlying native function: OnRep_ServerCurrentState 0x7e4ad2c)
	void OnRepServerCurrentState(enum EMedicPackState& PreviousState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.OnRep_bAbilityMarkedForPendingKill (Underlying native function: OnRep_bAbilityMarkedForPendingKill 0x7e4add0)
	void OnRepbAbilityMarkedForPendingKill(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.OnFuelIsFull (Underlying native function: OnFuelIsFull 0x6f7f9ac)
	void OnFuelIsFull(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.OnFuelIsEmpty (Underlying native function: OnFuelIsEmpty 0x6f7fb14)
	void OnFuelIsEmpty(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.OnCurrentStateChanged (Underlying native function: OnCurrentStateChanged 0x7e4ab60)
	void OnCurrentStateChanged(enum EMedicPackState& InPreviousState, enum EMedicPackState& InCurrentState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.OnAbilityCanceled (Underlying native function: OnAbilityCanceled 0x6f7f994)
	void OnAbilityCanceled(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_MedicPack.HandleCurrentStateChanged (Underlying native function: HandleCurrentStateChanged 0x7e4a020)
	void HandleCurrentStateChanged(enum EMedicPackState& InPreviousState); // (Final | Native | Public | BlueprintCallable)
};

