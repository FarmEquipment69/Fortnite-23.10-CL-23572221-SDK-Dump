// Class /Script/FortniteGame.FortMissionForceSuccessParams
// Size: 0x30
class UFortMissionForceSuccessParams : public UFortMissionEventParams
{
	float FractionCompleted; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionForceSuccessParams.SetParams (Underlying native function: SetParams 0x88ee3e0)
	void SetParams(float& FractionCompleted, class UFortMissionForceSuccessParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionForceSuccessParams.BreakParams (Underlying native function: BreakParams 0x88e8794)
	void BreakParams(float& FractionCompleted); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

