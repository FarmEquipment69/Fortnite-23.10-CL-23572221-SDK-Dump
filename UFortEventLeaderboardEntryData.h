// Class /Script/FortniteUI.FortEventLeaderboardEntryData
// Size: 0xa0
class UFortEventLeaderboardEntryData : public UObject
{
	unsigned char unreflected_a0[0xa0]; 

	/* Functions */

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.ShouldShowQualifiedIcon (Underlying native function: ShouldShowQualifiedIcon 0xa55d7f0)
	bool ShouldShowQualifiedIcon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalVictoryRoyales (Underlying native function: GetTotalVictoryRoyales 0xa55b304)
	int GetTotalVictoryRoyales(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalTrackedStat (Underlying native function: GetTotalTrackedStat 0xa55b1a0)
	int GetTotalTrackedStat(struct FString& TrackedStatName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalPointsForCategory (Underlying native function: GetTotalPointsForCategory 0xa55b114)
	int GetTotalPointsForCategory(struct FName& ScoreCategoryId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalMatchesPlayed (Underlying native function: GetTotalMatchesPlayed 0xa55b0f8)
	int GetTotalMatchesPlayed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalEliminations (Underlying native function: GetTotalEliminations 0xa55b0d4)
	int GetTotalEliminations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTeammateDisplayNames (Underlying native function: GetTeammateDisplayNames 0xa55af18)
	void GetTeammateDisplayNames(struct TArray<struct FString>& DisplayNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTeamDisplayNameText (Underlying native function: GetTeamDisplayNameText 0xa55ae9c)
	struct FText GetTeamDisplayNameText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTeamAccountId (Underlying native function: GetTeamAccountId 0xa55acf8)
	struct FString GetTeamAccountId(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetScore (Underlying native function: GetScore 0xa55ac54)
	int GetScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetRank (Underlying native function: GetRank 0x774d604)
	int GetRank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetPageIndex (Underlying native function: GetPageIndex 0xa55abc4)
	int GetPageIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetNumTeammates (Underlying native function: GetNumTeammates 0xa55ab70)
	int GetNumTeammates(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetLiveSessionId (Underlying native function: GetLiveSessionId 0xa55a8ec)
	struct FString GetLiveSessionId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetIsMatchPointWinner (Underlying native function: GetIsMatchPointWinner 0xa55a8b4)
	bool GetIsMatchPointWinner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetEventWindowId (Underlying native function: GetEventWindowId 0xa55a5ec)
	struct FString GetEventWindowId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetEventId (Underlying native function: GetEventId 0xa55a578)
	struct FString GetEventId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetAverageTrackedStat (Underlying native function: GetAverageTrackedStat 0xa559c7c)
	float GetAverageTrackedStat(struct FString& TrackedStatName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetAveragePlacement (Underlying native function: GetAveragePlacement 0xa559c54)
	float GetAveragePlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetAverageMatchScore (Underlying native function: GetAverageMatchScore 0xa559c20)
	float GetAverageMatchScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.DoesLeaderboardHaveQualifiedIcons (Underlying native function: DoesLeaderboardHaveQualifiedIcons 0xa559b44)
	bool DoesLeaderboardHaveQualifiedIcons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

