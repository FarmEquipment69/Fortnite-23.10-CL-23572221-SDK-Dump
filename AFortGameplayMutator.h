// Class /Script/FortniteGame.FortGameplayMutator
// Size: 0x2c0
class AFortGameplayMutator : public AInfo
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	unsigned char bMutatorActive; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	uint32_t MutatorEnabledMinigameStates; // 0x294 (0x4)
	bool bNetworkDormantWhenDeactivated; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	struct FGameplayTagContainer GameplayTagContainer; // 0x2a0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayMutator.SetMutatorActive (Underlying native function: SetMutatorActive 0x890e60c)
	void SetMutatorActive(bool& bEnable); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayMutator.OnRep_bMutatorActive (Underlying native function: OnRep_bMutatorActive 0x16162d8)
	void OnRepbMutatorActive(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameplayMutator.IsMutatorActive (Underlying native function: IsMutatorActive 0x890e4ac)
	bool IsMutatorActive(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMutator.BP_OnMutatorListPropertiesApplied (Has no native function)
	void BPOnMutatorListPropertiesApplied(class UFortMutatorListComponent*& MutatorList); // (Event | Protected | BlueprintEvent)
};

