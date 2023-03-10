// Class /Script/FortniteGame.FortCreativePickupFishedParams
// Size: 0x38
class UFortCreativePickupFishedParams : public UFortMissionEventParams
{
	class APlayerState* PlayerState; // 0x28 (0x8)
	class AFortPickup* PickUp; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePickupFishedParams.SetParams (Underlying native function: SetParams 0x88ed760)
	void SetParams(class APlayerState*& InPlayerState, class AFortPickup*& InPickup, class UFortCreativePickupFishedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePickupFishedParams.BreakParams (Underlying native function: BreakParams 0x88e7c5c)
	void BreakParams(class APlayerState*& OutPlayerState, class AFortPickup*& OutPickup); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

