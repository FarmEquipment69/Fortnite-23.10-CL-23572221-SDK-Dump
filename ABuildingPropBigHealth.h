// Class /Script/FortniteGame.BuildingPropBigHealth
// Size: 0xf10
class ABuildingPropBigHealth : public ABuildingProp
{
	int64_t BigHealth; // 0xef8 (0x8)
	int64_t BigHealthMax; // 0xf00 (0x8)
	bool bShowHealthBar; // 0xf08 (0x1)
	unsigned char padding_f09[0x7]; // 0xf09 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropBigHealth.SetBigHealthMax (Underlying native function: SetBigHealthMax 0x83885c0)
	void SetBigHealthMax(int64_t& NewHealth); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropBigHealth.SetBigHealth (Underlying native function: SetBigHealth 0x83884e0)
	void SetBigHealth(int64_t& NewHealth); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropBigHealth.OnRep_BigHealth (Underlying native function: OnRep_BigHealth 0x8387750)
	void OnRepBigHealth(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingPropBigHealth.GetHealthValueText (Underlying native function: GetHealthValueText 0x83841d4)
	struct FText GetHealthValueText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingPropBigHealth.GetHealthValuePercent (Underlying native function: GetHealthValuePercent 0x83841a0)
	float GetHealthValuePercent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)
};

