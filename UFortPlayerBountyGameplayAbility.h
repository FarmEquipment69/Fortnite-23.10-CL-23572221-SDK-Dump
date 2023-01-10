// Class /Script/FortniteGame.FortPlayerBountyGameplayAbility
// Size: 0xc98
class UFortPlayerBountyGameplayAbility : public UFortTransientQuestGameplayAbility
{
	struct TWeakObjectPtr<class UFortQuestItemDefinition_Athena> PoachedBountyQuestPtr; // 0xb28 (0x28)
	struct FBountyQuestSettings BountyQuestSettings; // 0xb50 (0x100)
	struct FGameplayTagQuery TargetFilter; // 0xc50 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.StartPlayerDuel (Underlying native function: StartPlayerDuel 0x7e733ec)
	void StartPlayerDuel(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.SpectatorShowUrgentQuestMessage (Underlying native function: SpectatorShowUrgentQuestMessage 0x7e73310)
	void SpectatorShowUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.SpectatorFailUrgentQuest (Underlying native function: SpectatorFailUrgentQuest 0x7e73230)
	void SpectatorFailUrgentQuest(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& FailedEventTag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.SpectatorCompleteUrgentQuest (Underlying native function: SpectatorCompleteUrgentQuest 0x7e73114)
	void SpectatorCompleteUrgentQuest(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& CompletedEventTag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedProtectorBountyTarget (Underlying native function: GetTrackedProtectorBountyTarget 0x7e70d38)
	class AFortPlayerStateAthena* GetTrackedProtectorBountyTarget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedPrimaryHunter (Underlying native function: GetTrackedPrimaryHunter 0x7e70ca4)
	class AFortPlayerStateAthena* GetTrackedPrimaryHunter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedHunterBountyTarget (Underlying native function: GetTrackedHunterBountyTarget 0x7e70c10)
	class AFortPlayerStateAthena* GetTrackedHunterBountyTarget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedBountyHunters (Underlying native function: GetTrackedBountyHunters 0x7e70bd0)
	struct TArray<class AFortPlayerStateAthena*> GetTrackedBountyHunters(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetIsPrimaryHunter (Underlying native function: GetIsPrimaryHunter 0x7e70698)
	bool GetIsPrimaryHunter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.CleanupBountyTarget (Underlying native function: CleanupBountyTarget 0x7e6ef60)
	void CleanupBountyTarget(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.CleanupBountyProtector (Underlying native function: CleanupBountyProtector 0x7e6ef4c)
	void CleanupBountyProtector(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.CleanupBountyHunter (Underlying native function: CleanupBountyHunter 0x7e6ef14)
	void CleanupBountyHunter(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.BountyPoached (Underlying native function: BountyPoached 0x7e6e828)
	void BountyPoached(); // (Final | Native | Protected | BlueprintCallable)
};

