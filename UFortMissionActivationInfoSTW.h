// Class /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
// Size: 0x178
class UFortMissionActivationInfoSTW : public UObject
{
	bool bIsMultiplayer; // 0x28 (0x1)
	unsigned char unreflected_29[0x77]; // 0x29 (0x77) 
	class AFortPlayerController* FortPC; // 0xa0 (0x8)
	class AFortGameStateZone* GameStateZone; // 0xa8 (0x8)
	class UCurveFloat* DifficultyIncreaseBluGloCurve; // 0xb0 (0x8)
	unsigned char padding_b8[0xc0]; // 0xb8 (0xc0)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText (Underlying native function: TimeSecondsToText 0x71d0a50)
	struct FText TimeSecondsToText(float& InSeconds); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote (Underlying native function: SubmitVote 0x71d098c)
	void SubmitVote(enum EFortVoteType& VoteType, bool& bApprove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote (Underlying native function: RequestVote 0x71d0548)
	void RequestVote(enum EFortVoteType& VoteType, float& VoteDuration, float& FailedVoteLockOutDuration, enum EFortVoteArbitratorType& ArbitratorType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked (Underlying native function: IsVoteLocked 0x71d00d4)
	bool IsVoteLocked(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive (Underlying native function: IsVoteActive 0x71cffd0)
	bool IsVoteActive(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator (Underlying native function: IsPlayerVoteInstigator 0x71cfe68)
	bool IsPlayerVoteInstigator(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive (Underlying native function: IsAnyVoteActive 0x71cfe48)
	bool IsAnyVoteActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted (Underlying native function: HasPlayerVoted 0x71cfcb8)
	bool HasPlayerVoted(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved (Underlying native function: HandleTeamMemberRemoved 0x71cfb88)
	void HandleTeamMemberRemoved(int& RemovedIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded (Underlying native function: HandleTeamMemberAdded 0x71cfab4)
	void HandleTeamMemberAdded(struct FFortTeamMemberInfo& NewInfo); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated (Underlying native function: HandleGameplayVoteUpdated 0x71cf788)
	void HandleGameplayVoteUpdated(enum EFortVoteType& VoteType, enum EFortVoteStatus& VoteStatus, int& VoteResult, struct TArray<struct FVoter>& Voters); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining (Underlying native function: GetVoteTimeRemaining 0x71cf618)
	float GetVoteTimeRemaining(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters (Underlying native function: GetVoters 0x71cf6bc)
	struct TArray<struct FVoter> GetVoters(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts (Underlying native function: GetVoteCounts 0x71cf4c0)
	void GetVoteCounts(enum EFortVoteType& VoteType, int& OutYesVoteCount, int& OutNoVoteCount); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement (Underlying native function: GetStartObjectiveBluGloRequirement 0x71cf478)
	int GetStartObjectiveBluGloRequirement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo (Underlying native function: GetPrimaryMissionInfo 0x71cf40c)
	class UFortMissionInfo* GetPrimaryMissionInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission (Underlying native function: GetPrimaryMission 0x71cf3e8)
	class AFortMission* GetPrimaryMission(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType (Underlying native function: GetMissionVoteType 0x71cf3b0)
	enum EFortVoteType GetMissionVoteType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining (Underlying native function: GetMissionObjectiveTimeRemaining 0x71cf388)
	float GetMissionObjectiveTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining (Underlying native function: GetLockoutTimeRemaining 0x71cf294)
	struct FText GetLockoutTimeRemaining(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId (Underlying native function: GetInstigatorId 0x71cef58)
	struct FUniqueNetIdRepl GetInstigatorId(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement (Underlying native function: GetIncreaseDifficultyBluGloRequirement 0x71cef34)
	int GetIncreaseDifficultyBluGloRequirement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards (Underlying native function: GetDeltaRewards 0x71ced34)
	void GetDeltaRewards(int& BaseDifficultyIncreaseTier, int& ComparedDifficultyIncreaseTier, struct TArray<struct FFortItemDelta>& DeltaRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount (Underlying native function: GetAvailableBluGloCount 0x71cecf8)
	int GetAvailableBluGloCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType (Underlying native function: GetArbitratorType 0x71cec64)
	enum EFortVoteArbitratorType GetArbitratorType(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags (Underlying native function: DoesPrimaryMissionContainTags 0x71ce68c)
	bool DoesPrimaryMissionContainTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote (Underlying native function: CanRequestVote 0x71ce244)
	bool CanRequestVote(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

