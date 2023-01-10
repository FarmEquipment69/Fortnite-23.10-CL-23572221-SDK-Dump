// Class /Script/FortniteGame.FortGameModePickup_Wax
// Size: 0xa40
class AFortGameModePickup_Wax : public AFortGameModePickup
{
	bool bIsFirstGeneration; // 0x790 (0x1)
	unsigned char unreflected_791[0x3]; // 0x791 (0x3) 
	int AmountOfTokens; // 0x794 (0x4)
	unsigned char unreflected_798[0x8]; // 0x798 (0x8) 
	struct FScalableFloat HeightAboveTerrianDropPickupAt; // 0x7a0 (0x28)
	struct FScalableFloat HeightAboveTerrainPickupLandAt; // 0x7c8 (0x28)
	struct FScalableFloat RandomTossAngleTowardsCenter; // 0x7f0 (0x28)
	struct FScalableFloat TimeUntilDespawnOutsideStorm; // 0x818 (0x28)
	struct FScalableFloat TimeUntilDespawnInsideStorm; // 0x840 (0x28)
	struct FScalableFloat DrawOnCompassDistance; // 0x868 (0x28)
	struct FSlateBrush DrawOnCompassBrush; // 0x890 (0xc0)
	struct FSlateBrush DrawOnMapBrush; // 0x950 (0xc0)
	struct FText UseInteractTextSingleCoin; // 0xa10 (0x18)
	struct FText UseInteractTextMultipleCoins; // 0xa28 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortGameModePickup_Wax.OnLocalPickedUp (Has no native function)
	void OnLocalPickedUp(); // (Event | Public | BlueprintEvent)
};

