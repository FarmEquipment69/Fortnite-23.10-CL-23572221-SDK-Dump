// Class /Script/FortniteGame.FortAthenaMutator_Crucible
// Size: 0x610
class AFortAthenaMutator_Crucible : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnCrucibleLeaderboardUpdated; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnCrucibleParticipantBestTimesUpdated; // 0x340 (0x10)
	struct FMulticastInlineDelegate OnCrucibleLatestCourseResultsUpdated; // 0x350 (0x10)
	unsigned char unreflected_360[0x238]; // 0x360 (0x238) 
	struct FCrucibleCourseData CourseData; // 0x598 (0x10)
	struct TArray<struct FCrucibleStatValue> ParticipantBestTimes; // 0x5a8 (0x10)
	enum EFortCrucibleControlType CurrentControlType; // 0x5b8 (0x1)
	unsigned char unreflected_5b9[0x7]; // 0x5b9 (0x7) 
	struct FCrucibleCourseResults LatestCourseResults; // 0x5c0 (0x30)
	float LatestServerTime; // 0x5f0 (0x4)
	unsigned char padding_5f4[0x1c]; // 0x5f4 (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseStart (Underlying native function: TriggerCourseStart 0x81fc4f8)
	void TriggerCourseStart(class AFortPlayerControllerAthena*& AthenaPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseSegmentTargetElim (Underlying native function: TriggerCourseSegmentTargetElim 0x81fc44c)
	void TriggerCourseSegmentTargetElim(int& SegmentId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseSegmentStart (Underlying native function: TriggerCourseSegmentStart 0x81fc38c)
	void TriggerCourseSegmentStart(class AFortPlayerControllerAthena*& AthenaPC, int& SegmentId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseSegmentFinish (Underlying native function: TriggerCourseSegmentFinish 0x81fc2cc)
	void TriggerCourseSegmentFinish(class AFortPlayerControllerAthena*& AthenaPC, int& SegmentId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseSegmentAIElim (Underlying native function: TriggerCourseSegmentAIElim 0x81fc220)
	void TriggerCourseSegmentAIElim(int& SegmentId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseFinish (Underlying native function: TriggerCourseFinish 0x81fc1a0)
	void TriggerCourseFinish(class AFortPlayerControllerAthena*& AthenaPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.TriggerCourseCancel (Underlying native function: TriggerCourseCancel 0x81fc124)
	void TriggerCourseCancel(class AFortPlayerControllerAthena*& AthenaPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.RetrieveCrucibleStatsRaw (Underlying native function: RetrieveCrucibleStatsRaw 0x81fbc3c)
	void RetrieveCrucibleStatsRaw(class AFortPlayerControllerAthena*& AthenaPC, struct TArray<struct FString>& InStatNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.ReportCrucibleStatsRaw (Underlying native function: ReportCrucibleStatsRaw 0x81fbae4)
	void ReportCrucibleStatsRaw(class AFortPlayerControllerAthena*& AthenaPC, struct TMap<struct FString, int64_t>& InStats); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.RegisterParticipant (Underlying native function: RegisterParticipant 0x81fb01c)
	void RegisterParticipant(class AFortPlayerControllerAthena*& AthenaPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.RegisterCourseSegment (Underlying native function: RegisterCourseSegment 0x81faedc)
	void RegisterCourseSegment(int& SegmentId, int& NumAI, int& NumTargets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.OnRep_ParticipantBestTimes (Underlying native function: OnRep_ParticipantBestTimes 0x81fae6c)
	void OnRepParticipantBestTimes(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.OnRep_LatestServerTime (Underlying native function: OnRep_LatestServerTime 0x81fae30)
	void OnRepLatestServerTime(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.OnRep_LatestCourseResults (Underlying native function: OnRep_LatestCourseResults 0x81fadfc)
	void OnRepLatestCourseResults(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.OnRep_CurrentControlType (Underlying native function: OnRep_CurrentControlType 0x81fad10)
	void OnRepCurrentControlType(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.OnInputMethodChanged (Underlying native function: OnInputMethodChanged 0x81fa288)
	void OnInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.IsLeaderboardSwitchingDisabled (Underlying native function: IsLeaderboardSwitchingDisabled 0x81f9628)
	bool IsLeaderboardSwitchingDisabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.IsLeaderboardFilterTextDisabled (Underlying native function: IsLeaderboardFilterTextDisabled 0x81f95f4)
	bool IsLeaderboardFilterTextDisabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.InsertLocalScoreIntoLeaderboard (Underlying native function: InsertLocalScoreIntoLeaderboard 0x81f94a4)
	static void InsertLocalScoreIntoLeaderboard(struct FCrucibleLeaderboardEntry& LocalTopScore, struct TArray<struct FCrucibleLeaderboardEntry>& LeaderboardToUpdate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.InitializePlayerAmmo (Underlying native function: InitializePlayerAmmo 0x81f9434)
	void InitializePlayerAmmo(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.HasRegisteredPlayerController (Underlying native function: HasRegisteredPlayerController 0x81f93c8)
	bool HasRegisteredPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetServerTimeContinuous (Underlying native function: GetServerTimeContinuous 0x81f8a18)
	float GetServerTimeContinuous(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetParticipantBestTimeCurrentControlState (Underlying native function: GetParticipantBestTimeCurrentControlState 0x81f87b0)
	bool GetParticipantBestTimeCurrentControlState(enum EFortCrucibleStatType& StatType, struct FCrucibleStatValue& OutStatValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetParticipantBestTime (Underlying native function: GetParticipantBestTime 0x81f86b4)
	bool GetParticipantBestTime(enum EFortCrucibleStatId& StatId, struct FCrucibleStatValue& OutStatValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetLeaderboardState (Underlying native function: GetLeaderboardState 0x81f8520)
	enum EFortCrucibleLeaderboardState GetLeaderboardState(enum EFortCrucibleLeaderboardId& LeaderboardId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetLeaderboardEntries (Underlying native function: GetLeaderboardEntries 0x81f8424)
	struct TArray<struct FCrucibleLeaderboardEntry> GetLeaderboardEntries(enum EFortCrucibleLeaderboardId& LeaderboardId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetLatestServerTimeReceivedOnClientTime (Underlying native function: GetLatestServerTimeReceivedOnClientTime 0x81f83cc)
	float GetLatestServerTimeReceivedOnClientTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetLatestServerTime (Underlying native function: GetLatestServerTime 0x81f83b4)
	float GetLatestServerTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetLatestSegmentResults (Underlying native function: GetLatestSegmentResults 0x81f8218)
	bool GetLatestSegmentResults(int& SegmentId, struct FCrucibleSegmentResults& OutSegmentResults, bool& OutIsInProgress, bool& OutHasBeenCanceled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetLatestCourseResults (Underlying native function: GetLatestCourseResults 0x81f80f0)
	struct FCrucibleCourseResults GetLatestCourseResults(bool& OutIsInProgress, bool& OutHasBeenCanceled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetCurrentControlState (Underlying native function: GetCurrentControlState 0x81f7cdc)
	enum EFortCrucibleControlType GetCurrentControlState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetCourseSegmentData (Underlying native function: GetCourseSegmentData 0x81f7bd0)
	bool GetCourseSegmentData(int& SegmentId, struct FCrucibleSegmentData& OutSegmentData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Crucible.GetCourseData (Underlying native function: GetCourseData 0x81f7b58)
	struct FCrucibleCourseData GetCourseData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

