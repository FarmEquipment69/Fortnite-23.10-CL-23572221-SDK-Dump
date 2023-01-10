// Class /Script/FortniteAI.FortAIGoalManager
// Size: 0x3f0
class AFortAIGoalManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class UFortAIAssignment*> WorldAssignments; // 0x290 (0x10)
	struct TArray<class UFortAIAssignment*> WorldEnemyAssignments; // 0x2a0 (0x10)
	class UFortAIAssignment* DefaultAttackPlayersAssignment; // 0x2b0 (0x8)
	unsigned char unreflected_2b8[0x60]; // 0x2b8 (0x60) 
	struct TArray<class UEnvQuery*> CombinedQueries; // 0x318 (0x10)
	unsigned char unreflected_328[0x50]; // 0x328 (0x50) 
	class UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings; // 0x378 (0x8)
	class UFortAIAssignmentSettings* DefaultEnemyAssignmentSettings; // 0x380 (0x8)
	struct TArray<struct FPawnGoalSelectionTableEntry> PawnGoalSelectionTable; // 0x388 (0x10)
	unsigned char padding_398[0x58]; // 0x398 (0x58)

	/* Functions */

	// Function /Script/FortniteAI.FortAIGoalManager.SetCurrentGoalDiscouragement (Underlying native function: SetCurrentGoalDiscouragement 0xa0dc708)
	static void SetCurrentGoalDiscouragement(class UObject*& WorldContext, class AFortAIController*& AI); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.RemoveWorldAssignment (Underlying native function: RemoveWorldAssignment 0xa0dc448)
	static void RemoveWorldAssignment(class UObject*& WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.RemoveGoalsFromWorldAssignment (Underlying native function: RemoveGoalsFromWorldAssignment 0xa0dbfbc)
	static void RemoveGoalsFromWorldAssignment(class UObject*& WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.RemoveGoalFromWorldAssignment (Underlying native function: RemoveGoalFromWorldAssignment 0xa0dbe54)
	static void RemoveGoalFromWorldAssignment(class UObject*& WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.MakeGoalsFromLocationsAndActor (Underlying native function: MakeGoalsFromLocationsAndActor 0xa0d9a9c)
	static void MakeGoalsFromLocationsAndActor(struct TArray<struct FFortAIGoalInfo>& Goals, class UObject*& WorldContextObject, struct TArray<struct FVector>& GoalLocations, class AActor*& GoalActor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.MakeGoalsFromLocations (Underlying native function: MakeGoalsFromLocations 0xa0d9898)
	static void MakeGoalsFromLocations(struct TArray<struct FFortAIGoalInfo>& Goals, class UObject*& WorldContextObject, struct TArray<struct FVector>& GoalLocations); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.MakeGoalsFromActors (Underlying native function: MakeGoalsFromActors 0xa0d9618)
	static void MakeGoalsFromActors(struct TArray<struct FFortAIGoalInfo>& Goals, class UObject*& WorldContextObject, struct TArray<class AActor*>& GoalActors, bool& bActorsAlwaysPerceived, bool& bGoalActorsAllowUndermining); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.MakeGoalFromLocation (Underlying native function: MakeGoalFromLocation 0xa0d94b0)
	static void MakeGoalFromLocation(struct FFortAIGoalInfo& Goal, class UObject*& WorldContextObject, struct FVector& GoalLocation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.MakeGoalFromActor (Underlying native function: MakeGoalFromActor 0xa0d9280)
	static void MakeGoalFromActor(struct FFortAIGoalInfo& Goal, class UObject*& WorldContextObject, class AActor*& GoalActor, bool& bActorAlwaysPerceived, bool& bGoalActorAllowsUndermining); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.CreateWorldAssignment (Underlying native function: CreateWorldAssignment 0xa0d872c)
	static void CreateWorldAssignment(class UObject*& WorldContextObject, struct FFortAIAssignmentIdentifier& WorldAssignmentIdentifier, class UFortAIAssignmentSettings*& AssignmentSettings, class UClass*& GoalProvider, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, enum EAssignmentCreationResult& CreationResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.AddWorldAssignment (Underlying native function: AddWorldAssignment 0xa0d82b8)
	class UFortAIAssignment* AddWorldAssignment(class UFortAIAssignmentSettings*& AssignmentSettings, class AActor*& GoalActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.AddGoalToWorldAssignment (Underlying native function: AddGoalToWorldAssignment 0xa0d7ac0)
	static void AddGoalToWorldAssignment(class UObject*& WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.AddGoalsToWorldAssignment (Underlying native function: AddGoalsToWorldAssignment 0xa0d7c28)
	static void AddGoalsToWorldAssignment(class UObject*& WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.AddGoalActorToAssignment (Underlying native function: AddGoalActorToAssignment 0xa0d7874)
	void AddGoalActorToAssignment(class UFortAIAssignment*& Assignment, class AActor*& GoalActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalManager.AddGoal (Underlying native function: AddGoal 0xa0d77ac)
	void AddGoal(class AActor*& GoalActor, class UFortAIAssignmentSettings*& GoalSettings); // (Final | Native | Public | BlueprintCallable)
};

