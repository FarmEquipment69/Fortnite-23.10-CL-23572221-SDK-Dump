// Class /Script/FortniteUI.FortCreativeMatchmakingHUD
// Size: 0x3b0
class UFortCreativeMatchmakingHUD : public UCommonActivatableWidget
{
	class UFortKeybindWidget* KeybindWidgetMMHUD; // 0x3a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeMatchmakingHUD.Open (Underlying native function: Open 0xa535f08)
	void Open(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMatchmakingHUD.OnMatchmakingComplete (Underlying native function: OnMatchmakingComplete 0xa535a9c)
	void OnMatchmakingComplete(bool& bSuccess); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeMatchmakingHUD.CancelMatchmaking (Underlying native function: CancelMatchmaking 0xa5339e8)
	void CancelMatchmaking(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeMatchmakingHUD.BP_PartyLeaderSetup (Has no native function)
	void BPPartyLeaderSetup(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMatchmakingHUD.BP_OnMatchmakingComplete (Has no native function)
	void BPOnMatchmakingComplete(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMatchmakingHUD.BP_OnKeybindComplete (Has no native function)
	void BPOnKeybindComplete(class AFortPlayerControllerAthena*& FortPC); // (Event | Protected | BlueprintEvent)
};

