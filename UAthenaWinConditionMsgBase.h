// Class /Script/FortniteUI.AthenaWinConditionMsgBase
// Size: 0x348
class UAthenaWinConditionMsgBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x70]; // 0x2d0 (0x70) 
	struct FFortPrioritizedWidgetData PrioritizedWidgetData; // 0x340 (0x2)
	unsigned char padding_342[0x6]; // 0x342 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.OnShowHUDMessage (Underlying native function: OnShowHUDMessage 0xa347d7c)
	void OnShowHUDMessage(struct FHUDMessageData& MessageData); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.HandleSpatialLoadingStateChanged (Underlying native function: HandleSpatialLoadingStateChanged 0xa3471f4)
	void HandleSpatialLoadingStateChanged(enum ESpatialLoadingState& NewState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.HandlePlaylistInitialized (Underlying native function: HandlePlaylistInitialized 0xa346f70)
	void HandlePlaylistInitialized(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0xa3467bc)
	void HandleMinigameEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.HandleGameStateInitialized (Underlying native function: HandleGameStateInitialized 0xa34673c)
	void HandleGameStateInitialized(class AFortGameState*& GameState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.HandleExitVolume (Underlying native function: HandleExitVolume 0xa346504)
	void HandleExitVolume(class APlayerState*& ClientState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.HandleEnteredVolume (Underlying native function: HandleEnteredVolume 0xa3463ac)
	void HandleEnteredVolume(class APlayerState*& ClientState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.GetTextFillColor (Underlying native function: GetTextFillColor 0xa3461cc)
	struct FSlateColor GetTextFillColor(struct FRichTextStyleRow& Row); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.BP_OnShowHUDMessage (Has no native function)
	void BPOnShowHUDMessage(struct FHUDMessageData& MessageData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.BP_OnMinigameEnded (Has no native function)
	void BPOnMinigameEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.BP_OnGameStateInitialized (Has no native function)
	void BPOnGameStateInitialized(class AFortGameState*& GameState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWinConditionMsgBase.BindVolumeManagerEvents (Underlying native function: BindVolumeManagerEvents 0xa345de0)
	void BindVolumeManagerEvents(); // (Final | Native | Protected)
};

