// Class /Script/FortniteUI.AthenaGameOverDisplay
// Size: 0x5f8
class UAthenaGameOverDisplay : public UFortActivatablePanel
{
	class UClass* MatchStatsClass; // 0x518 (0x8)
	unsigned char unreflected_520[0x20]; // 0x520 (0x20) 
	struct FDataTableRowHandle InputReturnToLobby; // 0x540 (0x10)
	struct FDataTableRowHandle InputNextTeammate; // 0x550 (0x10)
	struct FDataTableRowHandle InputPreviousTeammate; // 0x560 (0x10)
	struct FDataTableRowHandle InputNextPlayer; // 0x570 (0x10)
	struct FDataTableRowHandle InputPreviousPlayer; // 0x580 (0x10)
	struct FDataTableRowHandle InputReportPlayer; // 0x590 (0x10)
	struct FDataTableRowHandle InputToggleBattleMap; // 0x5a0 (0x10)
	struct FDataTableRowHandle InputForceStartPostGame; // 0x5b0 (0x10)
	class UEliminatedOverlay* EliminatedOverlay; // 0x5c0 (0x8)
	class UCommonButtonLegacy* ButtonHighlights; // 0x5c8 (0x8)
	struct FScalableFloat bAllowSpectateAllPlayers; // 0x5d0 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnWinningScoreDetermined (Underlying native function: OnWinningScoreDetermined 0xa376d80)
	void OnWinningScoreDetermined(int& Score); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnWinnerAnnounced (Underlying native function: OnWinnerAnnounced 0xa376c20)
	void OnWinnerAnnounced(struct FString& Winner); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnViewTargetChanged (Underlying native function: OnViewTargetChanged 0xa376c04)
	void OnViewTargetChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnToggleFullscreenMap (Underlying native function: OnToggleFullscreenMap 0xa3769e8)
	void OnToggleFullscreenMap(bool& bFullscreenMapVisible); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnSpectatorStreamingChanged (Underlying native function: OnSpectatorStreamingChanged 0xa3769e8)
	void OnSpectatorStreamingChanged(bool& bSpectatorStreaming); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnSpecialActorListChanged (Underlying native function: OnSpecialActorListChanged 0xa376b54)
	void OnSpecialActorListChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnRessurectingNowDelegate (Underlying native function: OnRessurectingNowDelegate 0xa3769e8)
	void OnRessurectingNowDelegate(bool& bRessurectingNow); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPlayerOrTeamWon (Underlying native function: OnPlayerOrTeamWon 0xa3769d4)
	void OnPlayerOrTeamWon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPlayerLost (Underlying native function: OnPlayerLost 0xa376940)
	void OnPlayerLost(enum EEndOfMatchReason& LostReason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPlaceChanged (Underlying native function: OnPlaceChanged 0xa376850)
	void OnPlaceChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPawnDied (Underlying native function: OnPawnDied 0xa3766f4)
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnKillFeedUpdated (Underlying native function: OnKillFeedUpdated 0xa3766e0)
	void OnKillFeedUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.InGameMatchmakingComplete (Underlying native function: InGameMatchmakingComplete 0xa375f80)
	void InGameMatchmakingComplete(bool& bSuccess); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.HighlightCountChanged (Underlying native function: HighlightCountChanged 0xa375f00)
	void HighlightCountChanged(int& HighlightCount); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.HandleToggledBattleMapLive (Underlying native function: HandleToggledBattleMapLive 0xa375e68)
	void HandleToggledBattleMapLive(class ABattleMapPawnLive*& NewSpectatorPawn); // (Final | Native | Protected)
};

