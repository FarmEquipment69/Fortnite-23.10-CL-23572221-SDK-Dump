// Class /Script/FortniteGame.FortMinigameObjectiveTrackerComponent
// Size: 0x228
class UFortMinigameObjectiveTrackerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnTrackedObjectiveAdded; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnTrackedObjectiveChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnTrackedObjectiveRemoved; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnTrackedObjectiveStateChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnTrackedObjectiveAllowedInteractionChanged; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnTrackedObjectiveTeamUpdated; // 0xf0 (0x10)
	struct FTrackedObjectiveArray ObjectiveArray; // 0x100 (0x128)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.UpdateTrackedProgress (Underlying native function: UpdateTrackedProgress 0x7dc66ac)
	void UpdateTrackedProgress(class UFortMinigameObjectiveComponent*& Objective); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.StopTrackingObjective (Underlying native function: StopTrackingObjective 0x7dc6550)
	void StopTrackingObjective(class UFortMinigameObjectiveComponent*& Objective, bool& bPurgeHistory); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.StartTrackingObjective (Underlying native function: StartTrackingObjective 0x7dc6150)
	int StartTrackingObjective(class UFortMinigameObjectiveComponent*& Objective, int& IndicatorPresetIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.SetTrackedState (Underlying native function: SetTrackedState 0x7dc5fd8)
	void SetTrackedState(class UFortMinigameObjectiveComponent*& Objective); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.SetIsInteractionAllowed (Underlying native function: SetIsInteractionAllowed 0x7dc5ed4)
	void SetIsInteractionAllowed(class UFortMinigameObjectiveComponent*& Objective); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0x7dc5c98)
	void HandleMinigameEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.GetTrackedObjectivesByQuery (Underlying native function: GetTrackedObjectivesByQuery 0x7dc5da8)
	bool GetTrackedObjectivesByQuery(struct TArray<struct FTrackedObjective>& TrackedObjectives, unsigned char& TeamIndex, enum ETrackedObjectiveQuery& QueryType); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.GetTrackedObjective (Underlying native function: GetTrackedObjective 0x7dc5cac)
	bool GetTrackedObjective(int& TrackedIndex, struct FTrackedObjective& TrackedObjective); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameObjectiveTrackerComponent.ClearTrackedObjectives (Underlying native function: ClearTrackedObjectives 0x7dc5c98)
	void ClearTrackedObjectives(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

