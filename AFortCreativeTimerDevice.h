// Class /Script/FortniteGame.FortCreativeTimerDevice
// Size: 0xf90
class AFortCreativeTimerDevice : public AFortCreativeDeviceProp
{
	unsigned char unreflected_f08[0x8]; // 0xf08 (0x8) 
	enum ETimerDeviceState ClientCurrentState; // 0xf10 (0x1)
	unsigned char unreflected_f11[0x7]; // 0xf11 (0x7) 
	struct FString ClientCurrentSecondaryText; // 0xf18 (0x10)
	struct FName ClientTimerTextStyle; // 0xf28 (0x4)
	bool bClientShowOnHud; // 0xf2c (0x1)
	unsigned char unreflected_f2d[0x3]; // 0xf2d (0x3) 
	int ClientCurrentTime; // 0xf30 (0x4)
	float ServerDisplayUpdateRate; // 0xf34 (0x4)
	unsigned char unreflected_f38[0x50]; // 0xf38 (0x50) 
	class AFortVolume* Volume; // 0xf88 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerStart (Underlying native function: TimerStart 0x8552c3c)
	void TimerStart(class AController*& TrackedPlayer, float& Duration, float& TimeUntilUrgency); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerSetState (Underlying native function: TimerSetState 0x8552b40)
	void TimerSetState(class AController*& TrackedPlayer, enum ETimerDeviceState& NewState, bool& bLoadingFromSave); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerResume (Underlying native function: TimerResume 0x8552ac0)
	void TimerResume(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerPause (Underlying native function: TimerPause 0x8552a40)
	void TimerPause(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerClearHandles (Underlying native function: TimerClearHandles 0x85529c0)
	void TimerClearHandles(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ServerRequestDisplayUpdate (Underlying native function: ServerRequestDisplayUpdate 0x8551a14)
	void ServerRequestDisplayUpdate(class AController*& TrackedPlayer, struct TArray<class AController*>& PlayersToUpdate); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ServerRequestClearDisplay (Underlying native function: ServerRequestClearDisplay 0x8551978)
	void ServerRequestClearDisplay(struct TArray<class AController*>& PlayersToUpdate); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.RemoveTrackedTimer (Underlying native function: RemoveTrackedTimer 0x8551448)
	void RemoveTrackedTimer(class AController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnUrgencyTimeReached (Has no native function)
	void OnUrgencyTimeReached(class AController*& TrackedPlayer); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnTimerStateChanged (Has no native function)
	void OnTimerStateChanged(class AController*& TrackedPlayer, struct FTimerHandle*& TimerHandle, enum ETimerDeviceState& CurrentState, enum ETimerDeviceState& PreviousState, bool& bLoadingFromSave); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnTimerCompleted (Has no native function)
	void OnTimerCompleted(class AController*& TrackedPlayer); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnServerDisplayUpdateTimerCompleted (Has no native function)
	void OnServerDisplayUpdateTimerCompleted(class AController*& TrackedPlayer); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnGameStateSet (Underlying native function: OnGameStateSet 0x8550adc)
	void OnGameStateSet(class AFortGameState*& GameState); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.GetTrackedPlayers (Underlying native function: GetTrackedPlayers 0x854e890)
	int GetTrackedPlayers(struct TArray<class AController*>& OutTrackedPlayers); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.GetTimerState (Underlying native function: GetTimerState 0x854e7c0)
	bool GetTimerState(class AController*& TrackedPlayer, enum ETimerDeviceState& OutState); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.GetTimerRemaining (Underlying native function: GetTimerRemaining 0x854e730)
	float GetTimerRemaining(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.DisplayUpdate (Has no native function)
	void DisplayUpdate(unsigned char& CurrentState, float& ServerTimeFinished); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.CreateTrackedTimer (Underlying native function: CreateTrackedTimer 0x854c190)
	void CreateTrackedTimer(class AController*& PlayerController, enum ETimerDeviceState& StartingState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ClearTrackedTimers (Underlying native function: ClearTrackedTimers 0x854b53c)
	void ClearTrackedTimers(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ClearDisplay (Has no native function)
	void ClearDisplay(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.BroadcastUpdateToHUD (Underlying native function: BroadcastUpdateToHUD 0x854b448)
	void BroadcastUpdateToHUD(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.AddTimerDeviceToVolume (Underlying native function: AddTimerDeviceToVolume 0x854b2b4)
	void AddTimerDeviceToVolume(); // (Final | Native | Public)
};

