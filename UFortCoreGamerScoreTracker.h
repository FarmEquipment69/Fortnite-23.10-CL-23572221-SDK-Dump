// Class /Script/FortniteUI.FortCoreGamerScoreTracker
// Size: 0x330
class UFortCoreGamerScoreTracker : public UMinigameWidgetBase
{
	unsigned char unreflected_330[0x330]; 

	/* Functions */

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.PopulateTeamRows (Underlying native function: PopulateTeamRows 0xa2a46d0)
	void PopulateTeamRows(struct TArray<class UFortCoreGamerScoreTrackerRow*>& ScoreTrackerRows); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.OnUpdate (Has no native function)
	void OnUpdate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTimeRemainingText (Underlying native function: GetTimeRemainingText 0xa2a4148)
	struct FText GetTimeRemainingText(bool& bHasTimeLimit); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamRankings (Underlying native function: GetTeamRankings 0xa2a410c)
	struct TArray<struct FCoreGamerTeamInfo> GetTeamRankings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamNameForPlayerState (Underlying native function: GetTeamNameForPlayerState 0xa2a3ffc)
	struct FText GetTeamNameForPlayerState(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamName (Underlying native function: GetTeamName 0xa2a3ee4)
	struct FText GetTeamName(int& InTeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamIndexFromTeamByte (Underlying native function: GetTeamIndexFromTeamByte 0xa2a3e58)
	int GetTeamIndexFromTeamByte(unsigned char& InTeamByte); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamData (Underlying native function: GetTeamData 0xa2a3cec)
	void GetTeamData(int& DesiredTeamIndex, struct FMinigameTeam& OutTeam, bool& bFoundTeam); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetScoreForTeam (Underlying native function: GetScoreForTeam 0xa2a3c60)
	int GetScoreForTeam(int& InTeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetPlacementOfTeam (Underlying native function: GetPlacementOfTeam 0xa2a3b58)
	int GetPlacementOfTeam(int& DesiredTeamIndex, struct TArray<struct FCoreGamerTeamInfo>& InTeamRankings); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetLocalTeamIndex (Underlying native function: GetLocalTeamIndex 0xa2a3a8c)
	int GetLocalTeamIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetHighestOpposingTeamIndex (Underlying native function: GetHighestOpposingTeamIndex 0xa2a3a68)
	int GetHighestOpposingTeamIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetGoalScore (Underlying native function: GetGoalScore 0xa2a3a08)
	int GetGoalScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

