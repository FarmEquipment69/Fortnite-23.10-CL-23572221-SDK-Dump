// Class /Script/FortniteUI.FortCoreGamerObjectiveWidget
// Size: 0x3a0
class UFortCoreGamerObjectiveWidget : public UMinigameWidgetBase
{
	class UClass* ObjectiveRadialClass; // 0x328 (0x8)
	class UClass* DestructibleTrackerClass; // 0x330 (0x8)
	struct Fmargin ObjectivePadding; // 0x338 (0x10)
	class UHorizontalBox* ObjectiveContainer; // 0x348 (0x8)
	struct TMap<int, class UFortCoreGamerObjectiveRadial*> TrackedObjectiveWidgetMap; // 0x350 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortCoreGamerObjectiveWidget.HandleTrackedObjectiveRemoved (Underlying native function: HandleTrackedObjectiveRemoved 0xa2a4484)
	void HandleTrackedObjectiveRemoved(int& TrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveWidget.HandleTrackedObjectiveAdded (Underlying native function: HandleTrackedObjectiveAdded 0xa2a4404)
	void HandleTrackedObjectiveAdded(int& TrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveWidget.HandleMinigameStarted (Underlying native function: HandleMinigameStarted 0xa2a4244)
	void HandleMinigameStarted(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveWidget.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0xa2a4230)
	void HandleMinigameEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveWidget.GetOwnerPlayerTeam (Underlying native function: GetOwnerPlayerTeam 0xa2a3b2c)
	unsigned char GetOwnerPlayerTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

