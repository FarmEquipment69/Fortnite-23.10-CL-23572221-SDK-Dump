// Class /Script/SaveTheWorldUI.FortResultsWidgetSTW
// Size: 0x470
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x78]; // 0x3a8 (0x78) 
	int AdditionalGrantedMissionPoints; // 0x420 (0x4)
	unsigned char unreflected_424[0x4]; // 0x424 (0x4) 
	struct TArray<class UFortItem*> RewardedBadges; // 0x428 (0x10)
	struct TArray<class UFortItem*> MissedBadges; // 0x438 (0x10)
	struct TArray<class UFortItem*> RewardedItems; // 0x448 (0x10)
	struct TArray<class UFortItem*> RewardedAccountItems; // 0x458 (0x10)
	class UCommonUserWidget* RadialPicker; // 0x468 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent (Underlying native function: TriggerSetupTeleportCameraEvent 0x71ead6c)
	void TriggerSetupTeleportCameraEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat (Underlying native function: ToggleChat 0x71eacb8)
	void ToggleChat(bool& bShow); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic (Underlying native function: SendEndOfRoundUpVoteAnalytic 0x71ea574)
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic (Underlying native function: SendEndOfRoundScreenAnalytic 0x71ea368)
	void SendEndOfRoundScreenAnalytic(struct FString& ScreenName, bool& Skipped, float& TimeSpent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic (Underlying native function: SendEndOfRoundFriendInviteAnalytic 0x71ea184)
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone (Underlying native function: RequestExitZone 0x71ea0c0)
	void RequestExitZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.LogXPData (Underlying native function: LogXPData 0x71e7c3c)
	void LogXPData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized (Underlying native function: IsDataFinalized 0x71e79a8)
	bool IsDataFinalized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel (Underlying native function: HandlePickerCancel 0x71e6fbc)
	void HandlePickerCancel(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked (Underlying native function: HandleEmoteClicked 0x71e6e34)
	void HandleEmoteClicked(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText (Underlying native function: GetZoneCompletionResultText 0x71e6a94)
	struct FText GetZoneCompletionResultText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult (Underlying native function: GetZoneCompletionResult 0x71e6a64)
	enum EFortCompletionResult GetZoneCompletionResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned (Underlying native function: GetTotalMissionPointsEarned 0x71e6a14)
	int GetTotalMissionPointsEarned(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType (Underlying native function: GetRewardsByType 0x71e6844)
	void GetRewardsByType(enum EFortRewardItemTypeSTW& Type, struct TArray<class UFortItem*>& OutRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

