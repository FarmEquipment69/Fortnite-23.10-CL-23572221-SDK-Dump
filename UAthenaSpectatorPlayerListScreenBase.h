// Class /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase
// Size: 0x2a0
class UAthenaSpectatorPlayerListScreenBase : public UCommonUserWidget
{
	struct TArray<class UAthenaSpectatorPlayerListRowData*> RowDataArray; // 0x290 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.UpdateListUI (Has no native function)
	void UpdateListUI(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnPlayerDied (Underlying native function: OnPlayerDied 0xa780b04)
	void OnPlayerDied(class AFortPlayerState*& NewlyDeadPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnPlayerBecameRelevant (Underlying native function: OnPlayerBecameRelevant 0xa78043c)
	void OnPlayerBecameRelevant(class AFortPlayerState*& NewlyRelevantPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnPlayerBecameIrrelevant (Underlying native function: OnPlayerBecameIrrelevant 0xa7803bc)
	void OnPlayerBecameIrrelevant(class AFortPlayerState*& NewlyIrrelevantPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0xa7801fc)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.ClearPlayers (Underlying native function: ClearPlayers 0xa77e054)
	void ClearPlayers(); // (Final | Native | Private)
};

