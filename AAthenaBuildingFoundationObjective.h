// Class /Script/FortniteGame.AthenaBuildingFoundationObjective
// Size: 0x13f0
class AAthenaBuildingFoundationObjective : public ABuildingFoundation
{
	unsigned char unreflected_12b0[0x20]; // 0x12b0 (0x20) 
	struct FSlateBrush MiniMapBrush; // 0x12d0 (0xc0)
	struct FGameplayTag FoundationTag; // 0x1390 (0x4)
	unsigned char unreflected_1394[0x4]; // 0x1394 (0x4) 
	struct FScalableFloat LowHealthPercent; // 0x1398 (0x28)
	struct TArray<class ABuildingActor*> SpawnedBuildingActors; // 0x13c0 (0x10)
	float CurrentHealth; // 0x13d0 (0x4)
	float MaxHealth; // 0x13d4 (0x4)
	unsigned char padding_13d8[0x18]; // 0x13d8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.AthenaBuildingFoundationObjective.OnLowHealthPercentReached (Has no native function)
	void OnLowHealthPercentReached(); // (Event | Protected | BlueprintEvent)
};

