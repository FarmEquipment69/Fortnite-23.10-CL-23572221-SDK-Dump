// Class /Script/FortniteUI.AthenaSpectatorMapPlayerListBase
// Size: 0x478
class UAthenaSpectatorMapPlayerListBase : public UAthenaSpectatorPlayerListBase
{
	struct FDataTableRowHandle ToggleOnlyShowMapPlayersRowHandle; // 0x428 (0x10)
	class UCommonButtonLegacy* ButtonSortBySquadId; // 0x438 (0x8)
	class UCommonButtonLegacy* ButtonSortByPlayerName; // 0x440 (0x8)
	class UCommonButtonLegacy* ButtonSortByEliminations; // 0x448 (0x8)
	class UCommonButtonLegacy* ButtonSortByEventScore; // 0x450 (0x8)
	class UCommonButtonLegacy* ButtonSortByState; // 0x458 (0x8)
	class UAthenaMapLayer* MapLayer; // 0x460 (0x8)
	unsigned char padding_468[0x10]; // 0x468 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorMapPlayerListBase.OnPlayerSquadIdChanged (Underlying native function: OnPlayerSquadIdChanged 0xa45cee4)
	void OnPlayerSquadIdChanged(class UAthenaRemotePlayerViewData*& InPlayerData, unsigned char& InSquadId); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorMapPlayerListBase.OnPlayerNameChanged (Underlying native function: OnPlayerNameChanged 0xa45cd54)
	void OnPlayerNameChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FString& InPlayerName); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorMapPlayerListBase.OnPlayerKillScoreChanged (Underlying native function: OnPlayerKillScoreChanged 0x265c878)
	void OnPlayerKillScoreChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InKillScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorMapPlayerListBase.OnPlayerIsInRelevancyChanged (Underlying native function: OnPlayerIsInRelevancyChanged 0x2555d94)
	void OnPlayerIsInRelevancyChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsInRelevancy); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorMapPlayerListBase.OnPlayerEliminatedStateChanged (Underlying native function: OnPlayerEliminatedStateChanged 0x2555d94)
	void OnPlayerEliminatedStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsEliminated); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorMapPlayerListBase.BP_HandleSquadIdVisibilityChanged (Has no native function)
	void BPHandleSquadIdVisibilityChanged(bool& bSquadIdsVisible); // (Event | Protected | BlueprintEvent)
};

