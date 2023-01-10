// Class /Script/FortniteGame.FortObjectiveBase
// Size: 0x358
class AFortObjectiveBase : public AFortMissionState
{
	class UFortBadgeItemDefinition* ObjectiveRewardBadge; // 0x2c0 (0x8)
	struct TArray<class UFortWorldItemDefinition*> ItemsToGiveOnObjectiveStart; // 0x2c8 (0x10)
	bool bStartPlayingOnMissionStart; // 0x2d8 (0x1)
	bool bAcceptsMissionEventsWhenFinished; // 0x2d9 (0x1)
	unsigned char unreflected_2da[0x6]; // 0x2da (0x6) 
	struct FGameplayTagContainer ObjectiveHandle; // 0x2e0 (0x20)
	struct FString ObjectiveAnalyticsName; // 0x300 (0x10)
	struct TEnumAsByte<EFortObjectiveRequirement> MissionRequirement; // 0x310 (0x1)
	bool bIsObjectiveVisible; // 0x311 (0x1)
	enum EFortMissionVisibilityOverride VisibilityOverride; // 0x312 (0x1)
	bool bIsProgressBarHidden; // 0x313 (0x1)
	enum EFortMissionAudibility ObjectiveAudiblity; // 0x314 (0x1)
	bool bRelevantToSpecificTeam; // 0x315 (0x1)
	struct TEnumAsByte<EFortTeam> RelevantTeam; // 0x316 (0x1)
	enum EFortObjectiveStatus ObjectiveStatus; // 0x317 (0x1)
	unsigned char unreflected_318[0x8]; // 0x318 (0x8) 
	class UFortMissionTimerComponent* TimerComponent; // 0x320 (0x8)
	struct FMulticastInlineDelegate OnObjectiveStatusChanged; // 0x328 (0x10)
	struct FMulticastInlineDelegate OnObjectiveVisibilityChanged; // 0x338 (0x10)
	struct FMulticastInlineDelegate OnObjectiveVisibilityOverrideChanged; // 0x348 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortObjectiveBase.UnpauseObjectiveTimer (Underlying native function: UnpauseObjectiveTimer 0x89286f8)
	void UnpauseObjectiveTimer(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.StopObjective (Underlying native function: StopObjective 0x892852c)
	void StopObjective(enum EFortObjectiveStatus& Status, struct FString& Description, class UFortBadgeItemDefinition*& ExtraBadgeToGrant); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.StartPlayingObjective (Underlying native function: StartPlayingObjective 0x6e5d700)
	bool StartPlayingObjective(); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.SetUIVisibilityOverride (Underlying native function: SetUIVisibilityOverride 0x89282a4)
	void SetUIVisibilityOverride(enum EFortMissionVisibilityOverride& InVisibilityOverride); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.SetUiVisibility (Underlying native function: SetUiVisibility 0x8928370)
	void SetUiVisibility(bool& bInIsObjectiveVisible); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.SetObjectiveTimer (Underlying native function: SetObjectiveTimer 0x8928030)
	void SetObjectiveTimer(struct FString& FunctionName, float& TimerLength, bool& bStartPaused); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.PauseObjectiveTimer (Underlying native function: PauseObjectiveTimer 0x8927d10)
	void PauseObjectiveTimer(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.OnRep_ObjectiveVisibilityOverride (Underlying native function: OnRep_ObjectiveVisibilityOverride 0x8927bf0)
	void OnRepObjectiveVisibilityOverride(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortObjectiveBase.OnRep_ObjectiveStatus (Underlying native function: OnRep_ObjectiveStatus 0x8927bdc)
	void OnRepObjectiveStatus(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortObjectiveBase.OnRep_bIsObjectiveVisible (Underlying native function: OnRep_bIsObjectiveVisible 0x8927c40)
	void OnRepbIsObjectiveVisible(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortObjectiveBase.OnGenericObjectiveEvent (Has no native function)
	void OnGenericObjectiveEvent(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortObjectiveBase.IsRelevantToTeam (Underlying native function: IsRelevantToTeam 0x89277cc)
	bool IsRelevantToTeam(unsigned char& Team); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.IsRelevantToASpecificTeam (Underlying native function: IsRelevantToASpecificTeam 0x89277b4)
	bool IsRelevantToASpecificTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.IsObjectiveTimerPaused (Underlying native function: IsObjectiveTimerPaused 0x892778c)
	bool IsObjectiveTimerPaused(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.GrantRewardsByTag (Underlying native function: GrantRewardsByTag 0x89276bc)
	void GrantRewardsByTag(struct FGameplayTag& RewardTag, struct TEnumAsByte<EFortRewardType>& RewardType); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.GetTimerComponent (Underlying native function: GetTimerComponent 0x814077c)
	class UFortMissionTimerComponent* GetTimerComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.GetRewardItemsByTag (Underlying native function: GetRewardItemsByTag 0x8927310)
	void GetRewardItemsByTag(struct FGameplayTag& RewardTag, struct TArray<class UFortWorldItemDefinition*>& OutRewardItems); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.GetObjectiveTimerTimeRemaining (Underlying native function: GetObjectiveTimerTimeRemaining 0x89272d4)
	float GetObjectiveTimerTimeRemaining(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.GetObjectiveDisplayString (Underlying native function: GetObjectiveDisplayString 0x8927254)
	struct FText GetObjectiveDisplayString(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.GetMissionGuid (Underlying native function: GetMissionGuid 0x89271fc)
	struct FGuid GetMissionGuid(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.GetMission (Underlying native function: GetMission 0x89271b0)
	class AFortMission* GetMission(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.EnableTick (Underlying native function: EnableTick 0x89270e4)
	void EnableTick(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.ClearObjectiveTimer (Underlying native function: ClearObjectiveTimer 0x8927080)
	void ClearObjectiveTimer(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintPostObjectiveLoad (Has no native function)
	void BlueprintPostObjectiveLoad(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintOnStartPlaying (Has no native function)
	void BlueprintOnStartPlaying(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintOnObjectiveEnd (Has no native function)
	void BlueprintOnObjectiveEnd(enum EFortObjectiveStatus& Status); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintOnActivated (Has no native function)
	void BlueprintOnActivated(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintGetProgressBarText (Has no native function)
	struct FText BlueprintGetProgressBarText(int& ProgressBarIdx); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintGetProgressBarPercentage (Has no native function)
	float BlueprintGetProgressBarPercentage(int& ProgressBarIdx); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintGetProgressBarIcon (Has no native function)
	class UTexture2D* BlueprintGetProgressBarIcon(int& ProgressBarIdx); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintGetProgressBarColor (Has no native function)
	struct FLinearColor BlueprintGetProgressBarColor(int& ProgressBarIdx); // (BlueprintCosmetic | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintGetObjectiveDisplayText (Has no native function)
	struct FText BlueprintGetObjectiveDisplayText(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.BlueprintGetNumProgressBars (Has no native function)
	int BlueprintGetNumProgressBars(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortObjectiveBase.AttemptMissionSave (Underlying native function: AttemptMissionSave 0x8926e08)
	void AttemptMissionSave(struct FString& OptionalSaveName); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)
};

