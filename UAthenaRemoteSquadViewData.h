// Class /Script/FortniteUI.AthenaRemoteSquadViewData
// Size: 0xd0
class UAthenaRemoteSquadViewData : public UObject
{
	struct FMulticastInlineDelegate OnPlayerAdded; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnSquadIdChanged; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnSquadKillscoreChanged; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnSquadPlaceChanged; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnSquadColorChanged; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnSquadEliminated; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnSquadSessionRankChanged; // 0x88 (0x10)
	struct TArray<class UAthenaRemotePlayerViewData*> PlayerDataArray; // 0x98 (0x10)
	unsigned char padding_a8[0x28]; // 0xa8 (0x28)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.UInt8Delegate__DelegateSignature (Has no native function)
	void UInt8DelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, unsigned char& IntParam); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.PlayerDelegate__DelegateSignature (Has no native function)
	void PlayerDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, class UAthenaRemotePlayerViewData*& PlayerData); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.LinearColorDelegate__DelegateSignature (Has no native function)
	void LinearColorDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, struct FLinearColor& ColorParam); // (MulticastDelegate | Public | Delegate | HasDefaults)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.IntDelegate__DelegateSignature (Has no native function)
	void IntDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, int& IntParam); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandleSessionRankChanged (Underlying native function: HandleSessionRankChanged 0x11160e4)
	void HandleSessionRankChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InSessionRank); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandlePlayerPlaceChanged (Underlying native function: HandlePlayerPlaceChanged 0x16d75e8)
	void HandlePlayerPlaceChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InPlace); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandlePlayerKillscoreChanged (Underlying native function: HandlePlayerKillscoreChanged 0x264d148)
	void HandlePlayerKillscoreChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InKillScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandlePlayerDeadStateChanged (Underlying native function: HandlePlayerDeadStateChanged 0x253bc6c)
	void HandlePlayerDeadStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& InEliminated); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetSquadSessionRank (Underlying native function: GetSquadSessionRank 0x843d6e0)
	int GetSquadSessionRank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetSquadID (Underlying native function: GetSquadID 0x6e205dc)
	int GetSquadID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetSquadColor (Underlying native function: GetSquadColor 0xa43d0fc)
	struct FLinearColor GetSquadColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetPlayerDatas (Underlying native function: GetPlayerDatas 0x2257054)
	struct TArray<class UAthenaRemotePlayerViewData*> GetPlayerDatas(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetPlace (Underlying native function: GetPlace 0x2d7adb8)
	int GetPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetMinigameTeamID (Underlying native function: GetMinigameTeamID 0x112a0b8)
	class UFortMinigameTeamIdentification* GetMinigameTeamID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetKillScore (Underlying native function: GetKillScore 0x2bbb8ec)
	int GetKillScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetIsEliminated (Underlying native function: GetIsEliminated 0xa43cbd4)
	bool GetIsEliminated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.EventDelegate__DelegateSignature (Has no native function)
	void EventDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData); // (MulticastDelegate | Public | Delegate)
};

