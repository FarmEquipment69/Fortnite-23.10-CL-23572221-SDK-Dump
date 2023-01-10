// Class /Script/FortniteGame.FortMissionTimerComponent
// Size: 0x140
class UFortMissionTimerComponent : public UActorComponent
{
	unsigned char bShowTimeElapsed; // 0xa0 (0x1)
	unsigned char bUpdateQuestsTimeElapsed; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FMulticastInlineDelegate OnMissionTimerComponentUpdated; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnMissionTimerTimeAddedOrRemoved; // 0xb8 (0x10)
	struct TArray<struct FMissionTimeDisplayData> DisplayData; // 0xc8 (0x10)
	struct FMissionTimerData TimerData; // 0xd8 (0x30)
	struct FText TimerLabelText; // 0x108 (0x18)
	bool bDisplayInTimeFormat; // 0x120 (0x1)
	struct TEnumAsByte<ETimerOverrideSetting> TimerVisibilityOverrideSetting; // 0x121 (0x1)
	unsigned char unreflected_122[0x2]; // 0x122 (0x2) 
	float TimerVisibilityShowAtEndTime; // 0x124 (0x4)
	unsigned char padding_128[0x18]; // 0x128 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionTimerComponent.UnpauseMissionTimer (Underlying native function: UnpauseMissionTimer 0x87183d4)
	void UnpauseMissionTimer(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.SetTimerVisibilityOverrideToShowAtEnd (Underlying native function: SetTimerVisibilityOverrideToShowAtEnd 0x87182c4)
	void SetTimerVisibilityOverrideToShowAtEnd(float& ShowTime); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.SetTimerVisibilityOverrideSetting (Underlying native function: SetTimerVisibilityOverrideSetting 0x8718200)
	void SetTimerVisibilityOverrideSetting(struct TEnumAsByte<ETimerOverrideSetting>& NewVisibilitySetting); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.SetTimerLabelText (Underlying native function: SetTimerLabelText 0x8718130)
	void SetTimerLabelText(struct FText& NewLabelText); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.SetTimerDisplayFormat (Underlying native function: SetTimerDisplayFormat 0x87180b0)
	void SetTimerDisplayFormat(bool& bNewDisplayInTimeFormat); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.SetMissionTimer (Underlying native function: SetMissionTimer 0x8717ec4)
	void SetMissionTimer(struct FString& FunctionName, float& TimerLength, class AActor*& CallbackActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.SetMissionTimeElapsedTimer (Underlying native function: SetMissionTimeElapsedTimer 0x8717e88)
	void SetMissionTimeElapsedTimer(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.ResetMissionTimer (Underlying native function: ResetMissionTimer 0x8717d50)
	void ResetMissionTimer(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.PauseMissionTimer (Underlying native function: PauseMissionTimer 0x871762c)
	void PauseMissionTimer(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.OnRep_TimerVisibilityOverride (Underlying native function: OnRep_TimerVisibilityOverride 0x87175f4)
	void OnRepTimerVisibilityOverride(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionTimerComponent.OnRep_TimerData (Underlying native function: OnRep_TimerData 0x87175e0)
	void OnRepTimerData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionTimerComponent.IsTimerVisible (Underlying native function: IsTimerVisible 0x87147bc)
	bool IsTimerVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.IsMissionTimerSet (Underlying native function: IsMissionTimerSet 0x8714798)
	bool IsMissionTimerSet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.IsMissionTimerPaused (Underlying native function: IsMissionTimerPaused 0x8065fbc)
	bool IsMissionTimerPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.GetTimeText (Underlying native function: GetTimeText 0x8714384)
	struct FText GetTimeText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.GetTimerLabelText (Underlying native function: GetTimerLabelText 0x8714400)
	struct FText GetTimerLabelText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.GetNormalizedTime (Underlying native function: GetNormalizedTime 0x87140bc)
	float GetNormalizedTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.GetMissionTimerTimeRemaining (Underlying native function: GetMissionTimerTimeRemaining 0x8714094)
	float GetMissionTimerTimeRemaining(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.GetMissionTimerTimeElapsed (Underlying native function: GetMissionTimerTimeElapsed 0x871406c)
	float GetMissionTimerTimeElapsed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.GetCorrectTimeDisplayData (Underlying native function: GetCorrectTimeDisplayData 0x8713b10)
	struct FMissionTimeDisplayData GetCorrectTimeDisplayData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionTimerComponent.DummyTimer (Underlying native function: DummyTimer 0x273fd14)
	void DummyTimer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionTimerComponent.ClearMissionTimer (Underlying native function: ClearMissionTimer 0x87134b4)
	void ClearMissionTimer(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionTimerComponent.AddOrRemoveTime (Underlying native function: AddOrRemoveTime 0x6df7bc0)
	void AddOrRemoveTime(float& TimeToAdd); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

