// Class /Script/FortniteAI.FortAthenaNpcPatrollingComponent
// Size: 0xf8
class UFortAthenaNpcPatrollingComponent : public UActorComponent
{
	class AAIController* CachedAIController; // 0xa0 (0x8)
	struct FMulticastInlineDelegate OnStartPatrollingEvent; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnStopPatrollingEvent; // 0xb8 (0x10)
	class AFortAthenaPatrolPath* PatrolPath; // 0xc8 (0x8)
	unsigned char padding_d0[0x28]; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.UpdateCurrentDestinationToNearestNextPoint (Underlying native function: UpdateCurrentDestinationToNearestNextPoint 0xa20fe04)
	void UpdateCurrentDestinationToNearestNextPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.SetPatrolPath (Underlying native function: SetPatrolPath 0xa20fcbc)
	void SetPatrolPath(class AFortAthenaPatrolPath*& NewPatrolPath, bool& bOrientationAlreadyRandomized); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.SelectNextPatrolPoint (Underlying native function: SelectNextPatrolPoint 0xa20f9e4)
	void SelectNextPatrolPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.RemovePatrolPath (Underlying native function: RemovePatrolPath 0xa20f9d0)
	void RemovePatrolPath(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.IsPatrollingEnable (Underlying native function: IsPatrollingEnable 0xa20f554)
	bool IsPatrollingEnable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.IsCurrentPatrolPointAnEndPoint (Underlying native function: IsCurrentPatrolPointAnEndPoint 0xa20f47c)
	bool IsCurrentPatrolPointAnEndPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPointsCount (Underlying native function: GetPatrolPointsCount 0xa20f45c)
	int GetPatrolPointsCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPath (Underlying native function: GetPatrolPath 0x8661dcc)
	class AFortAthenaPatrolPath* GetPatrolPath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.GetCurrentPatrolPoint (Underlying native function: GetCurrentPatrolPoint 0xa20f21c)
	class AFortAthenaPatrolPoint* GetCurrentPatrolPoint(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.FindAndSetDynamicPatrolPath (Underlying native function: FindAndSetDynamicPatrolPath 0xa20f04c)
	bool FindAndSetDynamicPatrolPath(struct FFortAthenaAIObjectTrackerQuery& FindQuery, bool& bOrientationAlreadyRandomized, bool& bExcludeCurrentlyUsedPatrolPath); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

