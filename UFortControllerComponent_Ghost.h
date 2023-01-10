// Class /Script/FortniteGame.FortControllerComponent_Ghost
// Size: 0x118
class UFortControllerComponent_Ghost : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UFortGadgetItemDefinition* ItemProvidingGhostMode; // 0xa8 (0x8)
	struct FGameplayTagContainer AbilitiesToBlockWhenGhosted; // 0xb0 (0x20)
	struct FGameplayTagContainer GhostModeTags; // 0xd0 (0x20)
	unsigned char bBecomeInvulnerableWhenGhosted; // 0xf0 (0x1)
	unsigned char bBecomeAIIgnoredWhenGhosted; // 0xf0 (0x1)
	unsigned char bSetHealthAndShieldsToZeroWhenGhosted; // 0xf0 (0x1)
	unsigned char bBecomeGhostOnDBNO; // 0xf0 (0x1)
	unsigned char bOverrideInteractionComponent; // 0xf0 (0x1)
	unsigned char bKeepWeaponHolsteredWhenGhosted; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x7]; // 0xf1 (0x7) 
	class UClass* DBNOToGhostReviveGameplayEffect; // 0xf8 (0x8)
	unsigned char padding_100[0x18]; // 0x100 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.StartGhostMode (Underlying native function: StartGhostMode 0x273fd14)
	void StartGhostMode(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.SetBecomeGhostOnDBNO (Underlying native function: SetBecomeGhostOnDBNO 0x845e830)
	void SetBecomeGhostOnDBNO(bool& bEnable); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.ReviveAndBecomeGhosted (Underlying native function: ReviveAndBecomeGhosted 0x273fd14)
	void ReviveAndBecomeGhosted(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.OnPlayerPossession (Underlying native function: OnPlayerPossession 0x845d820)
	void OnPlayerPossession(class APawn*& PossessPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.OnPawnDBNOStateChange (Underlying native function: OnPawnDBNOStateChange 0x845d758)
	void OnPawnDBNOStateChange(class AFortPawn*& Pawn, bool& bNewDBNOState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.OnGhostModeChanged (Underlying native function: OnGhostModeChanged 0x845d59c)
	void OnGhostModeChanged(class AFortPlayerControllerGameplay*& PlayerController, bool& bEnteredGhostMode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.IsInGhostMode (Underlying native function: IsInGhostMode 0x845d2ac)
	bool IsInGhostMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.HandleAbilityEnded (Underlying native function: HandleAbilityEnded 0x845d1e0)
	void HandleAbilityEnded(struct FAbilityEndedData& AbilityData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_Ghost.EndGhostMode (Underlying native function: EndGhostMode 0x273fd14)
	void EndGhostMode(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

