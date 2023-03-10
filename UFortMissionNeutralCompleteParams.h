// Class /Script/FortniteGame.FortMissionNeutralCompleteParams
// Size: 0x30
class UFortMissionNeutralCompleteParams : public UFortMissionEventParams
{
	class AFortMission* NeutrallyCompletedMission; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionNeutralCompleteParams.SetParams (Underlying native function: SetParams 0x88edcd8)
	void SetParams(class AFortMission*& NeutrallyCompletedMission, class UFortMissionNeutralCompleteParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionNeutralCompleteParams.BreakParams (Underlying native function: BreakParams 0x88e816c)
	void BreakParams(class AFortMission*& NeutrallyCompletedMission); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

