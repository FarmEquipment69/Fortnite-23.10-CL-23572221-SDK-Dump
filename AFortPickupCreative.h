// Class /Script/FortniteGame.FortPickupCreative
// Size: 0x7b0
class AFortPickupCreative : public AFortPickupAthena
{
	unsigned char unreflected_768[0x8]; // 0x768 (0x8) 
	class UFortCreativeCostComponent* CostComponent; // 0x770 (0x8)
	bool bPickupOnTouch; // 0x778 (0x1)
	unsigned char unreflected_779[0x3]; // 0x779 (0x3) 
	int CachedPickupInstigatorHandle; // 0x77c (0x4)
	struct FPickupInstigatorData CachedInstigatorData; // 0x780 (0x18)
	bool bUseOverrideDespawnTime; // 0x798 (0x1)
	unsigned char unreflected_799[0x3]; // 0x799 (0x3) 
	float OverrideDespawnTime; // 0x79c (0x4)
	struct FMulticastInlineDelegate OnAccentColorParamChanged; // 0x7a0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupCreative.SetItemResourceCost (Underlying native function: SetItemResourceCost 0x8125344)
	void SetItemResourceCost(struct TEnumAsByte<EFortResourceType>& ResourceType, int& Cost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupCreative.OnRep_PickupInstigatorIndex (Underlying native function: OnRep_PickupInstigatorIndex 0x81206e8)
	void OnRepPickupInstigatorIndex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupCreative.OnPickupInstigatorDataRemoved (Underlying native function: OnPickupInstigatorDataRemoved 0x8120564)
	void OnPickupInstigatorDataRemoved(int& TrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupCreative.OnPickupInstigatorDataChanged (Underlying native function: OnPickupInstigatorDataChanged 0x81204e4)
	void OnPickupInstigatorDataChanged(int& TrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupCreative.GivePickupToPawn (Underlying native function: GivePickupToPawn 0x811ee74)
	void GivePickupToPawn(class AFortPawn*& Pawn, bool& DestoryAfterPickup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupCreative.GetAccentColorParam (Underlying native function: GetAccentColorParam 0x811d964)
	float GetAccentColorParam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupCreative.BlueprintTeamAllowed (Underlying native function: BlueprintTeamAllowed 0x8119d78)
	bool BlueprintTeamAllowed(class AFortPawn*& Pawn); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortPickupCreative.BlueprintClassAllowed (Underlying native function: BlueprintClassAllowed 0x8119ce4)
	bool BlueprintClassAllowed(class AFortPawn*& Pawn); // (Native | Event | Public | BlueprintEvent | Const)
};

