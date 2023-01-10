// Class /Script/FortniteGame.BattleMapPawnReplay
// Size: 0x6a0
class ABattleMapPawnReplay : public AHoverDronePawn
{
	unsigned char unreflected_440[0x1f8]; // 0x440 (0x1f8) 
	class UClass* GroundMoveNodeClass; // 0x638 (0x8)
	class UClass* AirMoveNodeClass; // 0x640 (0x8)
	class UClass* GotKillNodeClass; // 0x648 (0x8)
	class UClass* ZoneNodeClass; // 0x650 (0x8)
	class UClass* TeamFlightNodeClass; // 0x658 (0x8)
	class UClass* TimeIndicatorClass; // 0x660 (0x8)
	class USoundBase* SelectedNodeSound; // 0x668 (0x8)
	class USoundBase* HoveredNodeSound; // 0x670 (0x8)
	class USoundBase* ScrubbingToSound; // 0x678 (0x8)
	unsigned char padding_680[0x20]; // 0x680 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleTimeIndicatorUpdatedSegment (Underlying native function: HandleTimeIndicatorUpdatedSegment 0x8318180)
	void HandleTimeIndicatorUpdatedSegment(class ABattleMapNode*& StartNode, class ABattleMapEdge*& Edge, class ABattleMapNode*& EndNode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleRightMouseUp (Underlying native function: HandleRightMouseUp 0x8318050)
	void HandleRightMouseUp(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleRightMouseDown (Underlying native function: HandleRightMouseDown 0x831803c)
	void HandleRightMouseDown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleReplayEventRemoving (Underlying native function: HandleReplayEventRemoving 0x8317fb8)
	void HandleReplayEventRemoving(int& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleRefreshingReplayEvents (Underlying native function: HandleRefreshingReplayEvents 0x8317dd8)
	void HandleRefreshingReplayEvents(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandlePlaybackTimeChanged (Underlying native function: HandlePlaybackTimeChanged 0x8317f10)
	void HandlePlaybackTimeChanged(float& NowTime); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleLeftMouseUp (Underlying native function: HandleLeftMouseUp 0x8317efc)
	void HandleLeftMouseUp(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleLeftMouseDown (Underlying native function: HandleLeftMouseDown 0x8317ee8)
	void HandleLeftMouseDown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleGotoTimeComplete (Underlying native function: HandleGotoTimeComplete 0x8317e30)
	void HandleGotoTimeComplete(bool& bWasSuccessful); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleCompletedAllRequested (Underlying native function: HandleCompletedAllRequested 0x8317dd8)
	void HandleCompletedAllRequested(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleCameraOutsideSafeZoneChanged (Underlying native function: HandleCameraOutsideSafeZoneChanged 0x8317b8c)
	void HandleCameraOutsideSafeZoneChanged(bool& bCameraOutsideSafeZone); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleBattleMapShowTimeIndicatorChanged (Underlying native function: HandleBattleMapShowTimeIndicatorChanged 0x8317b04)
	void HandleBattleMapShowTimeIndicatorChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleBattleMapShowNearbyChestsChanged (Underlying native function: HandleBattleMapShowNearbyChestsChanged 0x8317a58)
	void HandleBattleMapShowNearbyChestsChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleBattleMapShowAllSquadMembersChanged (Underlying native function: HandleBattleMapShowAllSquadMembersChanged 0x83179d8)
	void HandleBattleMapShowAllSquadMembersChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.HandleBattleMapAutomaticCameraPlacementChanged (Underlying native function: HandleBattleMapAutomaticCameraPlacementChanged 0x8317948)
	void HandleBattleMapAutomaticCameraPlacementChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnReplay.BP_SetTimelineMode (Underlying native function: BP_SetTimelineMode 0x83174d0)
	bool BPSetTimelineMode(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BattleMapPawnReplay.BP_IsOnTimelineMode (Underlying native function: BP_IsOnTimelineMode 0x8317424)
	bool BPIsOnTimelineMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

