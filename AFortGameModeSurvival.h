// Class /Script/FortniteGame.FortGameModeSurvival
// Size: 0xc70
class AFortGameModeSurvival : public AFortGameModePvE
{

	/* Functions */

	// Function /Script/FortniteGame.FortGameModeSurvival.FireEvent_SurvivalVoteReport (Underlying native function: FireEvent_SurvivalVoteReport 0x8c92864)
	void FireEventSurvivalVoteReport(struct TArray<class ABuildingActor*>& ActorsBeingDefended); // (Final | Native | Protected | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameModeSurvival.FireEvent_SurvivalPeriodicReport (Underlying native function: FireEvent_SurvivalPeriodicReport 0x8c92780)
	void FireEventSurvivalPeriodicReport(enum EFortReportDayPhase& TimeOfReport, struct TArray<class ABuildingActor*>& ActorsBeingDefended); // (Final | Native | Protected | HasOutParms | BlueprintCallable | Const)
};

