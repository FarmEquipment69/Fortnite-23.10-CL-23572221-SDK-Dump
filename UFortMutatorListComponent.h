// Class /Script/FortniteGame.FortMutatorListComponent
// Size: 0x200
class UFortMutatorListComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	bool bShouldMakeMutatorsDormant; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x37]; // 0xb1 (0x37) 
	enum EMutatorListInitState InitState; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct TArray<struct TWeakObjectPtr<class UClass>> MutatorDefs; // 0xf0 (0x10)
	class UPlaylistUserOptions* UserOptions; // 0x100 (0x8)
	struct TArray<class AFortGameplayMutator*> Mutators; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnSettingsInitialized; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnSettingsChanged; // 0x128 (0x10)
	struct FMutatorOverrideData OverrideData; // 0x138 (0xc0)
	unsigned char padding_1f8[0x8]; // 0x1f8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMutatorListComponent.UnregisterMinigameMutators (Underlying native function: UnregisterMinigameMutators 0x80d0538)
	void UnregisterMinigameMutators(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMutatorListComponent.SetPropertyOverrides (Underlying native function: SetPropertyOverrides 0x80d0194)
	void SetPropertyOverrides(struct TMap<struct FString, struct FString>& Properties); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMutatorListComponent.SetMutatorsActive (Underlying native function: SetMutatorsActive 0x80d0094)
	void SetMutatorsActive(bool& bActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMutatorListComponent.ResolvePendingRepOverrides (Underlying native function: ResolvePendingRepOverrides 0x80d0000)
	void ResolvePendingRepOverrides(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMutatorListComponent.RemovePropertyOverride (Underlying native function: RemovePropertyOverride 0x80cfeac)
	bool RemovePropertyOverride(struct FString& Property); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMutatorListComponent.RegisterMinigameMutators (Underlying native function: RegisterMinigameMutators 0x80cfe98)
	void RegisterMinigameMutators(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMutatorListComponent.OnRep_PropertyOverrideArray (Underlying native function: OnRep_PropertyOverrideArray 0x1d688e0)
	void OnRepPropertyOverrideArray(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMutatorListComponent.OnMinigameSetUp (Underlying native function: OnMinigameSetUp 0x80cf798)
	void OnMinigameSetUp(class AFortMinigame*& Minigame); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMutatorListComponent.GetPropertyOverridesAsStringsRaw (Underlying native function: GetPropertyOverridesAsStringsRaw 0x80cf164)
	struct TMap<struct FString, struct FString> GetPropertyOverridesAsStringsRaw(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortMutatorListComponent.GetPropertyOverridesAsStrings (Underlying native function: GetPropertyOverridesAsStrings 0x80cf0ac)
	struct TMap<struct FString, struct FString> GetPropertyOverridesAsStrings(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMutatorListComponent.GetMutatorByClass (Underlying native function: GetMutatorByClass 0x80cee58)
	class AFortGameplayMutator* GetMutatorByClass(class UClass*& MutatorClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMutatorListComponent.AddOrUpdatePropertyOverrides (Underlying native function: AddOrUpdatePropertyOverrides 0x80cec1c)
	void AddOrUpdatePropertyOverrides(struct TMap<struct FString, struct FString>& Properties); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

