// Class /Script/FortniteUI.AthenaTimeWidgetBase
// Size: 0x2f8
class UAthenaTimeWidgetBase : public UFortHUDElementWidget
{
	struct FTimerHandle* UpdateTimerHandle; // 0x2d0 (0x8)
	struct FText CachedDisplayText; // 0x2d8 (0x18)
	struct FName CachedDisplayTextStyle; // 0x2f0 (0x4)
	bool bIsDisplaying; // 0x2f4 (0x1)
	unsigned char padding_2f5[0x3]; // 0x2f5 (0x3)

	/* Functions */

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.UpdateTimeText (Underlying native function: UpdateTimeText 0xa311d6c)
	void UpdateTimeText(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.UpdateDisplay (Has no native function)
	void UpdateDisplay(struct FText& DisplayText, struct FName& DisplayTextStyle); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnTimerWidgetActorUpdated (Underlying native function: OnTimerWidgetActorUpdated 0xa310ef8)
	void OnTimerWidgetActorUpdated(class AActor*& TimerWidgetActor); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnStopTimeDisplay (Has no native function)
	void OnStopTimeDisplay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnStartTimeDisplay (Has no native function)
	void OnStartTimeDisplay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x8b105a4)
	void OnMinigameStarted(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnMinigameEnded (Underlying native function: OnMinigameEnded 0xa310ca0)
	void OnMinigameEnded(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x19f11dc)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x2e40bf4)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.IsTextStyleValid (Underlying native function: IsTextStyleValid 0xa310930)
	bool IsTextStyleValid(struct FName& DisplayTextStyle); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTimeWidgetBase.ClientEnteredVolume (Underlying native function: ClientEnteredVolume 0xa30fb88)
	void ClientEnteredVolume(class APlayerState*& PlayerState, class AFortVolume*& FortVolume); // (Final | Native | Protected)
};

