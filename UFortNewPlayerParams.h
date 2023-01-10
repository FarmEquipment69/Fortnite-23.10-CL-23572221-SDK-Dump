// Class /Script/FortniteGame.FortNewPlayerParams
// Size: 0x30
class UFortNewPlayerParams : public UFortMissionEventParams
{
	class AFortPlayerController* NewPlayerController; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortNewPlayerParams.SetParams (Underlying native function: SetParams 0x88edcd8)
	void SetParams(class AFortPlayerController*& NewPlayerController, class UFortNewPlayerParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNewPlayerParams.BreakParams (Underlying native function: BreakParams 0x88e816c)
	void BreakParams(class AFortPlayerController*& NewPlayerController); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

