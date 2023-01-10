// Class /Script/FortniteUI.FortResultsWidget
// Size: 0x5a8
class UFortResultsWidget : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x78]; // 0x4e0 (0x78) 
	int AdditionalGrantedMissionPoints; // 0x558 (0x4)
	unsigned char unreflected_55c[0x4]; // 0x55c (0x4) 
	struct TArray<class UFortItem*> RewardedBadges; // 0x560 (0x10)
	struct TArray<class UFortItem*> MissedBadges; // 0x570 (0x10)
	struct TArray<class UFortItem*> RewardedItems; // 0x580 (0x10)
	struct TArray<class UFortItem*> RewardedAccountItems; // 0x590 (0x10)
	class UCommonUserWidget* RadialPicker; // 0x5a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortResultsWidget.TriggerSetupTeleportCameraEvent (Underlying native function: TriggerSetupTeleportCameraEvent 0x71ead6c)
	void TriggerSetupTeleportCameraEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.ToggleChat (Underlying native function: ToggleChat 0x71eacb8)
	void ToggleChat(bool& bShow); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.SendEndOfRoundUpVoteAnalytic (Underlying native function: SendEndOfRoundUpVoteAnalytic 0x71ea574)
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.SendEndOfRoundScreenAnalytic (Underlying native function: SendEndOfRoundScreenAnalytic 0x71ea368)
	void SendEndOfRoundScreenAnalytic(struct FString& ScreenName, bool& Skipped, float& TimeSpent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.SendEndOfRoundFriendInviteAnalytic (Underlying native function: SendEndOfRoundFriendInviteAnalytic 0x71ea184)
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.RequestExitZone (Underlying native function: RequestExitZone 0x71ea0c0)
	void RequestExitZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.LogXPData (Underlying native function: LogXPData 0xa5b06fc)
	void LogXPData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.IsDataFinalized (Underlying native function: IsDataFinalized 0xa5b05b4)
	bool IsDataFinalized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortResultsWidget.HandlePickerCancel (Underlying native function: HandlePickerCancel 0xa5afccc)
	void HandlePickerCancel(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.HandleEmoteClicked (Underlying native function: HandleEmoteClicked 0x71e947c)
	void HandleEmoteClicked(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.GetZoneCompletionResultText (Underlying native function: GetZoneCompletionResultText 0xa5af7f8)
	struct FText GetZoneCompletionResultText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortResultsWidget.GetZoneCompletionResult (Underlying native function: GetZoneCompletionResult 0xa5af7c8)
	enum EFortCompletionResult GetZoneCompletionResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortResultsWidget.GetTotalMissionPointsEarned (Underlying native function: GetTotalMissionPointsEarned 0xa5af654)
	int GetTotalMissionPointsEarned(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.GetRewardsByType (Underlying native function: GetRewardsByType 0xa5af330)
	void GetRewardsByType(enum EFortRewardItemType& Type, struct TArray<class UFortItem*>& OutRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

