// Class /Script/FortniteUI.FortShowdownTournamentListView
// Size: 0xba0
class UFortShowdownTournamentListView : public UCommonListView
{
	float EntryWidthSize; // 0xb90 (0x4)
	int NumPaddingRowLeft; // 0xb94 (0x4)
	int NumPaddingRowRight; // 0xb98 (0x4)
	bool bCanUseDesiredScrollOffset; // 0xb9c (0x1)
	unsigned char padding_b9d[0x3]; // 0xb9d (0x3)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownTournamentListView.SetScrollOffsetAnimation (Underlying native function: SetScrollOffsetAnimation 0xa7f5d04)
	void SetScrollOffsetAnimation(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.SelectTournamentAtIndex (Underlying native function: SelectTournamentAtIndex 0xa7f3ba8)
	class UFortShowdownTournamentTile* SelectTournamentAtIndex(int& SelectedIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.SelectLastTournament (Underlying native function: SelectLastTournament 0xa7f3b74)
	class UFortShowdownTournamentTile* SelectLastTournament(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.SelectFirstTournament (Underlying native function: SelectFirstTournament 0xa7f3b48)
	class UFortShowdownTournamentTile* SelectFirstTournament(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.ScrollItemToDesiredOffset (Underlying native function: ScrollItemToDesiredOffset 0xa7f3ac8)
	void ScrollItemToDesiredOffset(class UObject*& InObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.NavigateTournamentRight (Underlying native function: NavigateTournamentRight 0xa7f2cc4)
	class UFortShowdownTournamentTile* NavigateTournamentRight(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.NavigateTournamentLeft (Underlying native function: NavigateTournamentLeft 0xa7f2c8c)
	class UFortShowdownTournamentTile* NavigateTournamentLeft(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.IsSelectedItemLastRow (Underlying native function: IsSelectedItemLastRow 0xa7f2b3c)
	bool IsSelectedItemLastRow(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.IsSelectedItemFirstRow (Underlying native function: IsSelectedItemFirstRow 0xa7f2b18)
	bool IsSelectedItemFirstRow(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.GetEntryAtIndex (Underlying native function: GetEntryAtIndex 0xa7ed738)
	class UUserWidget* GetEntryAtIndex(int& SelectedIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.GetDesiredScrollOffset (Underlying native function: GetDesiredScrollOffset 0xa7ed008)
	float GetDesiredScrollOffset(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownTournamentListView.FindTournament (Underlying native function: FindTournament 0xa7ec414)
	class UFortShowdownTournamentTile* FindTournament(struct FString& TournamentId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

