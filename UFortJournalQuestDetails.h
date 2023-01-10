// Class /Script/SaveTheWorldUI.FortJournalQuestDetails
// Size: 0x298
class UFortJournalQuestDetails : public UCommonUserWidget
{
	class UFortQuestItem* CurrentQuest; // 0x290 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest (Underlying native function: SetCurrentQuest 0x7246728)
	void SetCurrentQuest(class UFortQuestItem*& InCurrentQuest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent (Underlying native function: RegisterEndSpokenDialogEvent 0x72461fc)
	void RegisterEndSpokenDialogEvent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog (Has no native function)
	void OnEndSpokenDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP (Has no native function)
	void HandleCurrentQuestChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives (Underlying native function: GetVisibleObjectives 0x72447dc)
	void GetVisibleObjectives(struct TArray<class UFortQuestObjectiveInfo*>& VisibleObjectives); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetRewards (Underlying native function: GetRewards 0x7244554)
	void GetRewards(struct TArray<struct FFortItemInstanceQuantityPair>& OutRewards, struct TArray<struct FFortItemInstanceQuantityPair>& OutSelectableRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives (Underlying native function: GetFutureObjectives 0x7243850)
	void GetFutureObjectives(struct TArray<class UFortQuestObjectiveInfo*>& FutureObjectives); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType (Underlying native function: GetActiveMissionTileType 0x72433a4)
	enum EFortTheaterMapTileType GetActiveMissionTileType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest (Underlying native function: CanPlayQuest 0x7242ff4)
	bool CanPlayQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest (Underlying native function: CanPartyLeaderPlayQuest 0x7242f5c)
	bool CanPartyLeaderPlayQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest (Underlying native function: CanGotoQuest 0x7242ee4)
	bool CanGotoQuest(); // (Final | Native | Public | BlueprintCallable)
};

