// Class /Script/SaveTheWorldUI.FortQuestPlayButton
// Size: 0x298
class UFortQuestPlayButton : public UCommonUserWidget
{
	class UFortQuestItem* QuestItem; // 0x290 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.OnContentMissing (Has no native function)
	void OnContentMissing(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged (Has no native function)
	void HandlePlayerStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted (Has no native function)
	void HandleMatchmakingStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete (Has no native function)
	void HandleMatchmakingComplete(enum EMatchmakingCompleteResult& Result); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected (Has no native function)
	void HandleLobbyDisconnected(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest (Underlying native function: CanPlayQuest 0x7243018)
	bool CanPlayQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.CanNavigateToQuestObjective (Underlying native function: CanNavigateToQuestObjective 0x7242f38)
	bool CanNavigateToQuestObjective(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest (Underlying native function: AttemptToPlayQuest 0x7242e84)
	void AttemptToPlayQuest(); // (Final | Native | Public | BlueprintCallable)
};

