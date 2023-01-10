// Class /Script/FortniteGame.FortLauncherAthena
// Size: 0x1110
class AFortLauncherAthena : public ABuildingTrapFloor
{
	struct FScalableFloat LaunchStrength; // 0x1098 (0x28)
	struct FScalableFloat LaunchStrengthVehicle; // 0x10c0 (0x28)
	class USoundBase* OnLaunchSound3P; // 0x10e8 (0x8)
	class USoundBase* OnLaunchSound1P; // 0x10f0 (0x8)
	bool bAllowMultipleTriggers; // 0x10f8 (0x1)
	bool bLaunchPlayersFromVehicles; // 0x10f9 (0x1)
	unsigned char unreflected_10fa[0x6]; // 0x10fa (0x6) 
	struct FServerLaunchInfo ServerLaunchInfo; // 0x1100 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortLauncherAthena.TriggerLaunchEffects (Has no native function)
	void TriggerLaunchEffects(class AFortPawn*& Pawn); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortLauncherAthena.ReTriggerForPawn (Underlying native function: ReTriggerForPawn 0x80cfe18)
	void ReTriggerForPawn(class AFortPlayerPawnAthena*& AthenaPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortLauncherAthena.OnTriggerEndOverlap (Underlying native function: OnTriggerEndOverlap 0x80cfc3c)
	void OnTriggerEndOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortLauncherAthena.OnRepLaunchServerInfo (Underlying native function: OnRepLaunchServerInfo 0x2a1e9b8)
	void OnRepLaunchServerInfo(); // (Final | Native | Public)
};

