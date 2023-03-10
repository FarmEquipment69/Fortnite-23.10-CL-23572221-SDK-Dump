// Class /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget
// Size: 0x2f0
class UFortAthenaCreativeMatchmakingWidget : public UFortMatchmakingWidgetBase
{
	unsigned char unreflected_2d0[0x18]; // 0x2d0 (0x18) 
	unsigned char bIsCreativeHUD; // 0x2e8 (0x1)
	unsigned char padding_2e9[0x7]; // 0x2e9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.TogglePlayerReadyState (Underlying native function: TogglePlayerReadyState 0xa55ddd4)
	void TogglePlayerReadyState(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.SetupOwningPlayerForReadyCheckInput (Underlying native function: SetupOwningPlayerForReadyCheckInput 0xa55d794)
	void SetupOwningPlayerForReadyCheckInput(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.SetOwningPlayerReadyState (Underlying native function: SetOwningPlayerReadyState 0xa55cf5c)
	void SetOwningPlayerReadyState(bool& bInReadyState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.OnUpdatedSquadReadyInformationBP (Has no native function)
	void OnUpdatedSquadReadyInformationBP(int& SquadMembers, int& ReadySquadMembers, bool& AmIReady); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.OnPlaySimpleIntroOutroWithDelay (Has no native function)
	void OnPlaySimpleIntroOutroWithDelay(float& InDelay); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.NativeOnHideWidget (Underlying native function: NativeOnHideWidget 0xa55c16c)
	void NativeOnHideWidget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.InGameMathcmakingUpdateCheckFailed (Underlying native function: InGameMathcmakingUpdateCheckFailed 0xa55be84)
	void InGameMathcmakingUpdateCheckFailed(enum EUpdateCompletionStatus& Status); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.HasAnyPlayerOptedOutOfCrossPlatformPlay (Underlying native function: HasAnyPlayerOptedOutOfCrossPlatformPlay 0xa55be60)
	bool HasAnyPlayerOptedOutOfCrossPlatformPlay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.HandlePartyLeaderReadinessChangedBP (Has no native function)
	void HandlePartyLeaderReadinessChangedBP(enum EGameReadiness& GameReadiness, int& SquadMemberIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.HandleMatchmakingPartyReadyBP (Has no native function)
	void HandleMatchmakingPartyReadyBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.HandleInGameReadinessChangedBP (Has no native function)
	void HandleInGameReadinessChangedBP(enum EGameReadiness& GameReadiness, int& SquadMemberIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.GetIsDestPlaylistCreativeRoyale (Underlying native function: GetIsDestPlaylistCreativeRoyale 0xa55a898)
	bool GetIsDestPlaylistCreativeRoyale(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortAthenaCreativeMatchmakingWidget.DisableOwningPlayerForReadyCheckInput (Underlying native function: DisableOwningPlayerForReadyCheckInput 0xa559ab0)
	void DisableOwningPlayerForReadyCheckInput(); // (Final | Native | Public | BlueprintCallable)
};

