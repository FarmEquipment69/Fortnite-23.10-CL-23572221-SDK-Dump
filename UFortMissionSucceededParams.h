// Class /Script/FortniteGame.FortMissionSucceededParams
// Size: 0x30
class UFortMissionSucceededParams : public UFortMissionEventParams
{
	class AFortMission* SucceededMission; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionSucceededParams.SetParams (Underlying native function: SetParams 0x88edcd8)
	void SetParams(class AFortMission*& SucceededMission, class UFortMissionSucceededParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionSucceededParams.BreakParams (Underlying native function: BreakParams 0x88e816c)
	void BreakParams(class AFortMission*& SucceededMission); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

