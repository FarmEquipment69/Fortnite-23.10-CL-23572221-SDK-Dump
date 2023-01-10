// Class /Script/FortniteGame.FortCampaignJackalVehicle
// Size: 0x1b40
class AFortCampaignJackalVehicle : public AFortAthenaJackalVehicle
{
	bool bVehicleLeftAnalogStrafing; // 0x1b28 (0x1)
	unsigned char unreflected_1b29[0x3]; // 0x1b29 (0x3) 
	float VehicleLeftAnalogStrafingMultiplier; // 0x1b2c (0x4)
	float MinSpeedToWallRun; // 0x1b30 (0x4)
	float AggroRangeOverride; // 0x1b34 (0x4)
	unsigned char padding_1b38[0x8]; // 0x1b38 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCampaignJackalVehicle.HandleOnPlayerDamaged (Underlying native function: HandleOnPlayerDamaged 0x81d6d18)
	void HandleOnPlayerDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)
};

