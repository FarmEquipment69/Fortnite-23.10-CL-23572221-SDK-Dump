// Class /Script/FortniteUI.FortShowdownDetailView
// Size: 0x718
class UFortShowdownDetailView : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	struct FFortTournamentDisplayInfo TournamentDisplayInfo; // 0x2a8 (0x1d0)
	struct FShowdownTournamentEntry CMSTournamentData; // 0x478 (0x1e0)
	class UCommonTextBlock* TextTimeRemaining; // 0x658 (0x8)
	class UTextBlock* TextDebugId; // 0x660 (0x8)
	class UEpicCMSImage* ImagePosterFront; // 0x668 (0x8)
	class UEpicCMSImage* ImagePosterBack; // 0x670 (0x8)
	class UEpicCMSImage* ImageLoadingScreen; // 0x678 (0x8)
	class UEpicCMSImage* ImagePlaylistTile; // 0x680 (0x8)
	struct FText TimeRemainingFormat; // 0x688 (0x18)
	bool bTimeRemainingShowSeconds; // 0x6a0 (0x1)
	bool bTimeRemainingUppercase; // 0x6a1 (0x1)
	enum ETimespanAsTextFormat TimeRemainingFormatType; // 0x6a2 (0x1)
	unsigned char unreflected_6a3[0x1]; // 0x6a3 (0x1) 
	struct Fmargin TitlePaddingMobile; // 0x6a4 (0x10)
	unsigned char padding_6b4[0x64]; // 0x6b4 (0x64)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownDetailView.ShouldShowCrossplayError (Underlying native function: ShouldShowCrossplayError 0xa7c6f0c)
	bool ShouldShowCrossplayError(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.SetTournament (Underlying native function: SetTournament 0xa7c6a1c)
	void SetTournament(struct FString& TournamentId, struct FString& EventId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.RefreshDataBP (Has no native function)
	void RefreshDataBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortShowdownDetailView.IsWorldCupQualifierEvent (Underlying native function: IsWorldCupQualifierEvent 0xa7c683c)
	bool IsWorldCupQualifierEvent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.IsSeriesPointLeaderboardAvailable (Underlying native function: IsSeriesPointLeaderboardAvailable 0xa7c6818)
	bool IsSeriesPointLeaderboardAvailable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.IsPreviousDisplayedWindowFromDifferentVisualRound (Underlying native function: IsPreviousDisplayedWindowFromDifferentVisualRound 0xa7c6788)
	bool IsPreviousDisplayedWindowFromDifferentVisualRound(bool& bGroupByVisualRoundNumber); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.IsFloatingLeaderboardAvailable (Underlying native function: IsFloatingLeaderboardAvailable 0xa7c6764)
	bool IsFloatingLeaderboardAvailable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.IsFirstDisplayedWindow (Underlying native function: IsFirstDisplayedWindow 0xa7c6694)
	bool IsFirstDisplayedWindow(bool& bGroupByVisualRoundNumber); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.IsEventLeaderboardAvailable (Underlying native function: IsEventLeaderboardAvailable 0xa7c6670)
	bool IsEventLeaderboardAvailable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.HasScoreInEvent (Underlying native function: HasScoreInEvent 0xa7c6634)
	bool HasScoreInEvent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.HasRemainingVisualRounds (Underlying native function: HasRemainingVisualRounds 0xa7c65ec)
	bool HasRemainingVisualRounds(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetWindowSessionDisplayString (Underlying native function: GetWindowSessionDisplayString 0xa7c6450)
	struct FText GetWindowSessionDisplayString(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetWindowRoundDisplayString (Underlying native function: GetWindowRoundDisplayString 0xa7c63a4)
	struct FText GetWindowRoundDisplayString(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetWindowRoundAndSessionDisplayString (Underlying native function: GetWindowRoundAndSessionDisplayString 0xa7c62d8)
	struct FText GetWindowRoundAndSessionDisplayString(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentTimeState (Underlying native function: GetTournamentTimeState 0xa7c62b4)
	enum EFortShowdownEventState GetTournamentTimeState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentTimeLeft (Underlying native function: GetTournamentTimeLeft 0xa7c6288)
	struct FTimespan* GetTournamentTimeLeft(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentSeriesId (Underlying native function: GetTournamentSeriesId 0xa7c6214)
	struct FString GetTournamentSeriesId(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentScoringRules (Underlying native function: GetTournamentScoringRules 0xa7c618c)
	struct TArray<struct FFortShowdownScoringRuleInfo> GetTournamentScoringRules(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentPinUnlockScore (Underlying native function: GetTournamentPinUnlockScore 0xa7c6174)
	int GetTournamentPinUnlockScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentNextEvent (Underlying native function: GetTournamentNextEvent 0xa7c6100)
	struct FString GetTournamentNextEvent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentMatchType (Underlying native function: GetTournamentMatchType 0xa7c60dc)
	enum EFortShowdownMatchType GetTournamentMatchType(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentMatchCap (Underlying native function: GetTournamentMatchCap 0xa7c6078)
	int GetTournamentMatchCap(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentId (Underlying native function: GetTournamentId 0xa7c6004)
	struct FString GetTournamentId(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentEvents (Underlying native function: GetTournamentEvents 0xa7c5f5c)
	struct TArray<struct FString> GetTournamentEvents(bool& bGroupByRoundNumber); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentEndTime (Underlying native function: GetTournamentEndTime 0xa7c5eec)
	struct FDateTime* GetTournamentEndTime(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentEligibility (Underlying native function: GetTournamentEligibility 0xa7c5ec8)
	enum EFortEventWindowEligibility GetTournamentEligibility(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentBestScore (Underlying native function: GetTournamentBestScore 0xa7c5ea4)
	int GetTournamentBestScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentBestPinState (Underlying native function: GetTournamentBestPinState 0xa7c5e64)
	enum EFortShowdownPinState GetTournamentBestPinState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetTournamentBeginTime (Underlying native function: GetTournamentBeginTime 0xa7c5df4)
	struct FDateTime* GetTournamentBeginTime(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetSeriesPointLeaderboardIds (Underlying native function: GetSeriesPointLeaderboardIds 0xa7c5b6c)
	void GetSeriesPointLeaderboardIds(struct FString& OutEventId, struct FString& OutEventWindowId); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetNumEventVisualRounds (Underlying native function: GetNumEventVisualRounds 0xa7c59dc)
	int GetNumEventVisualRounds(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventWindowVisualRoundNumber (Underlying native function: GetEventWindowVisualRoundNumber 0xa7c5998)
	int GetEventWindowVisualRoundNumber(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventWindowSessionNumber (Underlying native function: GetEventWindowSessionNumber 0xa7c5974)
	int GetEventWindowSessionNumber(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventWindowEligibility (Underlying native function: GetEventWindowEligibility 0xa7c5950)
	enum EFortEventWindowEligibility GetEventWindowEligibility(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventTimeState (Underlying native function: GetEventTimeState 0x2aac720)
	enum EFortShowdownEventState GetEventTimeState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventTimespanAsText (Underlying native function: GetEventTimespanAsText 0xa7c5824)
	struct FText GetEventTimespanAsText(struct FTimespan*& InTimeRemaining, bool& bShowSeconds, enum ETimespanAsTextFormat& FormatType); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventTimeLeft (Underlying native function: GetEventTimeLeft 0xa7c57f8)
	struct FTimespan* GetEventTimeLeft(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventTimeAsText (Underlying native function: GetEventTimeAsText 0xa7c5704)
	struct FText GetEventTimeAsText(struct FDateTime*& DateTime, enum EFortDateTimeStyle& style); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventResultsSummary (Underlying native function: GetEventResultsSummary 0xa7c56c8)
	struct FFortShowdownEventBestResultsSummary GetEventResultsSummary(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventPlayerParticipationState (Underlying native function: GetEventPlayerParticipationState 0xa7c56a4)
	enum EFortShowdownEventState GetEventPlayerParticipationState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventPinState (Underlying native function: GetEventPinState 0xa7c563c)
	enum EFortShowdownPinState GetEventPinState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventLeaderboardRank (Underlying native function: GetEventLeaderboardRank 0xa7c55bc)
	int GetEventLeaderboardRank(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventLeaderboardPercentile (Underlying native function: GetEventLeaderboardPercentile 0xa7c5594)
	float GetEventLeaderboardPercentile(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventIdForEligibilityToken (Underlying native function: GetEventIdForEligibilityToken 0xa7c53f4)
	struct FString GetEventIdForEligibilityToken(struct FString& Token); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventId (Underlying native function: GetEventId 0x27acba4)
	struct FString GetEventId(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventEndTime (Underlying native function: GetEventEndTime 0xa7c53cc)
	struct FDateTime* GetEventEndTime(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventDateAsText (Underlying native function: GetEventDateAsText 0xa7c52d8)
	struct FText GetEventDateAsText(struct FDateTime*& DateTime, enum EFortDateTimeStyle& style); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetEventBeginTime (Underlying native function: GetEventBeginTime 0xa7c52b0)
	struct FDateTime* GetEventBeginTime(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetCurrentRegionName (Underlying native function: GetCurrentRegionName 0xa7c520c)
	struct FText GetCurrentRegionName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetCurrentEventTeamNumMatchesPlayed (Underlying native function: GetCurrentEventTeamNumMatchesPlayed 0xa7c518c)
	int GetCurrentEventTeamNumMatchesPlayed(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetCurrentEventScore (Underlying native function: GetCurrentEventScore 0xa7c5168)
	int GetCurrentEventScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetCurrentEventAlternativeScore (Underlying native function: GetCurrentEventAlternativeScore 0xa7c5144)
	int GetCurrentEventAlternativeScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetBestEventScore (Underlying native function: GetBestEventScore 0xa7c5120)
	int GetBestEventScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.GetAlternativeResultsSummary (Underlying native function: GetAlternativeResultsSummary 0xa7c50e4)
	struct FFortShowdownEventBestResultsSummary GetAlternativeResultsSummary(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.DoDisplayRoundNumber (Underlying native function: DoDisplayRoundNumber 0xa7c502c)
	bool DoDisplayRoundNumber(bool& bGroupByRoundNumber); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.DoCalloutMFARequirement (Underlying native function: DoCalloutMFARequirement 0xa7c5008)
	bool DoCalloutMFARequirement(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.ConvertCMSStringToColor (Underlying native function: ConvertCMSStringToColor 0xa7c4e68)
	struct FLinearColor ConvertCMSStringToColor(struct FString& ColorString); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownDetailView.CanUseAlternativeScore (Underlying native function: CanUseAlternativeScore 0xa7c4e34)
	bool CanUseAlternativeScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.CanGroupTournamentEventsByVisualRoundNumber (Underlying native function: CanGroupTournamentEventsByVisualRoundNumber 0xa7c4ddc)
	bool CanGroupTournamentEventsByVisualRoundNumber(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownDetailView.BP_ResetDetailView (Has no native function)
	void BPResetDetailView(); // (Event | Protected | BlueprintEvent)
};

