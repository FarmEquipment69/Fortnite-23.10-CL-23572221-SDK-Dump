// Class /Script/FortniteUI.AthenaBattleMapTimelineWidget
// Size: 0x5d8
class UAthenaBattleMapTimelineWidget : public UFortActivatablePanel
{
	class UCommonButtonLegacy* ButtonForward; // 0x518 (0x8)
	class UCommonButtonLegacy* ButtonBackward; // 0x520 (0x8)
	float ForwardButtonPositionAlpha; // 0x528 (0x4)
	float BackwardButtonPositionAlpha; // 0x52c (0x4)
	struct FDataTableRowHandle ForwardDataTableRow; // 0x530 (0x10)
	struct FDataTableRowHandle BackwardDataTableRow; // 0x540 (0x10)
	struct FDataTableRowHandle StopDataTableRow; // 0x550 (0x10)
	struct FDataTableRowHandle ScrubToDataTableRow; // 0x560 (0x10)
	struct FDataTableRowHandle ExitBattleMapDataTableRow; // 0x570 (0x10)
	struct FDataTableRowHandle ZoomInDataTableRow; // 0x580 (0x10)
	struct FDataTableRowHandle ZoomOutDataTableRow; // 0x590 (0x10)
	unsigned char padding_5a0[0x38]; // 0x5a0 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.OnReplayLevelStreamingChanged (Underlying native function: OnReplayLevelStreamingChanged 0x27fe71c)
	void OnReplayLevelStreamingChanged(bool& bStreaming); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleZoomOutPressed (Underlying native function: HandleZoomOutPressed 0xa43ec2c)
	void HandleZoomOutPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleZoomOutHeld (Underlying native function: HandleZoomOutHeld 0xa43eba8)
	void HandleZoomOutHeld(float& HeldPercent); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleZoomInPressed (Underlying native function: HandleZoomInPressed 0xa43eb24)
	void HandleZoomInPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleZoomInHeld (Underlying native function: HandleZoomInHeld 0xa43eaa0)
	void HandleZoomInHeld(float& HeldPercent); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleToggledBattleMapLive (Underlying native function: HandleToggledBattleMapLive 0xa43e7c8)
	void HandleToggledBattleMapLive(class ABattleMapPawnLive*& BattleMapPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleTimelineStopPressed (Underlying native function: HandleTimelineStopPressed 0xa43e5c4)
	void HandleTimelineStopPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleTimelineScrubToPressed (Underlying native function: HandleTimelineScrubToPressed 0xa43e538)
	void HandleTimelineScrubToPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleTimelineModeChanged (Underlying native function: HandleTimelineModeChanged 0xa43e4b4)
	void HandleTimelineModeChanged(bool& bEnabled); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleTimelineForwardPressed (Underlying native function: HandleTimelineForwardPressed 0xa43e3a8)
	void HandleTimelineForwardPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleTimelineBackwardPressed (Underlying native function: HandleTimelineBackwardPressed 0xa43e31c)
	void HandleTimelineBackwardPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleSelectedNode (Underlying native function: HandleSelectedNode 0xa43de74)
	void HandleSelectedNode(class ABattleMapNode*& InSelectedNode); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleExitBattleMapPressed (Underlying native function: HandleExitBattleMapPressed 0xa43d830)
	void HandleExitBattleMapPressed(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBattleMapTimelineWidget.HandleCameraTypeChanged (Underlying native function: HandleCameraTypeChanged 0x15934f8)
	void HandleCameraTypeChanged(class AFortPlayerControllerSpectating*& SpectatorPC, enum ESpectatorCameraType& NewCameraType); // (Final | Native | Private)
};

