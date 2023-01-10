// Class /Script/FortniteGame.FortObjectiveSucceededParams
// Size: 0x30
class UFortObjectiveSucceededParams : public UFortMissionEventParams
{
	class AFortObjectiveBase* SucceededObjective; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortObjectiveSucceededParams.SetParams (Underlying native function: SetParams 0x88edcd8)
	void SetParams(class AFortObjectiveBase*& SucceededObjective, class UFortObjectiveSucceededParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveSucceededParams.BreakParams (Underlying native function: BreakParams 0x88e816c)
	void BreakParams(class AFortObjectiveBase*& SucceededObjective); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

