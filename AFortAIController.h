// Class /Script/FortniteAI.FortAIController
// Size: 0x520
class AFortAIController : public AAIController
{
	unsigned char unreflected_3b0[0x28]; // 0x3b0 (0x28) 
	unsigned char bUsingNavMesh; // 0x3d8 (0x1)
	unsigned char bAlwaysNotifyBumpWall; // 0x3d8 (0x1)
	unsigned char bInstantRotation; // 0x3d8 (0x1)
	unsigned char bTurnTransitionsEnabled; // 0x3d8 (0x1)
	unsigned char bIgnoreAllActorsThatAreNotPawnsOrBuildings; // 0x3d9 (0x1)
	unsigned char bAllowHotspotAbilityLooping; // 0x3da (0x1)
	unsigned char unreflected_3db[0x5]; // 0x3db (0x5) 
	class UFortPathFollowingComponent* FortPathFollowingComp; // 0x3e0 (0x8)
	struct FAIHotSpotUseInfo CurrentHotSpot; // 0x3e8 (0x18)
	class UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent; // 0x400 (0x8)
	class UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters; // 0x408 (0x8)
	float GoalInfoUpdateRate; // 0x410 (0x4)
	unsigned char unreflected_414[0x4]; // 0x414 (0x4) 
	class AActor* GoalActor; // 0x418 (0x8)
	float GoalVisibilityPersistanceTime; // 0x420 (0x4)
	unsigned char unreflected_424[0xac]; // 0x424 (0xac) 
	class AFortAIPawn* MyFortPawn; // 0x4d0 (0x8)
	struct FMulticastInlineDelegate OnTeamSetDelegate; // 0x4d8 (0x10)
	struct FMulticastInlineDelegate OnControllerComponentAttachedEvent; // 0x4e8 (0x10)
	class UAIGoalComponent* AIGoalComponent; // 0x4f8 (0x8)
	struct FMulticastInlineDelegate OnControllerNewGoalActorEvent; // 0x500 (0x10)
	class UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x510 (0x8)
	class UFortGameStateComponent_AffiliationManager* CachedAffiliationManager; // 0x518 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAIController.WakeUp (Underlying native function: WakeUp 0xa0a0380)
	void WakeUp(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.UnlockMovementResource (Underlying native function: UnlockMovementResource 0xa0a02bc)
	void UnlockMovementResource(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.UnlockBehaviorResource (Underlying native function: UnlockBehaviorResource 0xa0a0288)
	void UnlockBehaviorResource(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetupCustomVIM (Underlying native function: SetupCustomVIM 0xa09f848)
	void SetupCustomVIM(class UClass*& VIM); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetTeamInt (Underlying native function: SetTeamInt 0xa09f748)
	void SetTeamInt(unsigned char& InTeam); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetTeam (Underlying native function: SetTeam 0xa09f748)
	void SetTeam(struct TEnumAsByte<EFortTeam>& InTeam); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetPawnAIType (Underlying native function: SetPawnAIType 0xa09f564)
	void SetPawnAIType(enum EFortressAIType& NewAIType, class AActor*& SpawnSpot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetIsSleeping (Underlying native function: SetIsSleeping 0xa09f3d8)
	void SetIsSleeping(bool& bNewSleepStatus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetGoalActor (Underlying native function: SetGoalActor 0xa09f310)
	void SetGoalActor(class AActor*& InActor, bool& bLocationAlwaysKnown); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetFullPeripheralVision (Underlying native function: SetFullPeripheralVision 0xa09f280)
	void SetFullPeripheralVision(bool& bNewFullPeripheralVision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.SetAlwaysGameplayRelevant (Underlying native function: SetAlwaysGameplayRelevant 0xa09f044)
	void SetAlwaysGameplayRelevant(bool& bInAlwaysGameplayRelevant); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.OnBuildingActorGoalDestroyed (Underlying native function: OnBuildingActorGoalDestroyed 0xa09e0e8)
	void OnBuildingActorGoalDestroyed(); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAIController.OnActorGoalDestroyed (Underlying native function: OnActorGoalDestroyed 0xa09e068)
	void OnActorGoalDestroyed(class AActor*& DestroyedActor); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAIController.LockMovementResource (Underlying native function: LockMovementResource 0xa09ddb8)
	void LockMovementResource(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.LockBehaviorResource (Underlying native function: LockBehaviorResource 0xa09dd84)
	void LockBehaviorResource(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.IsIgnoringProximity (Underlying native function: IsIgnoringProximity 0x83d7cb8)
	static bool IsIgnoringProximity(class AFortAIController*& FortAIController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteAI.FortAIController.IsAllowedToSleep (Underlying native function: IsAllowedToSleep 0xa09d328)
	bool IsAllowedToSleep(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.IgnoreProximityForDuration (Underlying native function: IgnoreProximityForDuration 0xa09d2a0)
	void IgnoreProximityForDuration(float& DurationToIgnore); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.GetGoalActor (Underlying native function: GetGoalActor 0x81f83e4)
	class AActor* GetGoalActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIController.GetEncounterInfo (Underlying native function: GetEncounterInfo 0xa09ca54)
	class UFortAIEncounterInfo* GetEncounterInfo(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIController.CreateBuildingActor (Underlying native function: CreateBuildingActor 0xa09c29c)
	bool CreateBuildingActor(class UClass*& BuildingClass, struct FVector& BuildLoc, struct FRotator& BuildRot, bool& bMirrored); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIController.ClearAllFocalPoints (Underlying native function: ClearAllFocalPoints 0xa09c14c)
	void ClearAllFocalPoints(); // (Final | Native | Public | BlueprintCallable)
};

