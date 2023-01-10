// Class /Script/FortniteGame.FortMissionStormShieldManager
// Size: 0xc0
class UFortMissionStormShieldManager : public UGameStateComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	class AFortMissionStormShield* StormShield; // 0xb8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionStormShieldManager.OnRep_StormShield (Underlying native function: OnRep_StormShield 0x87c9c7c)
	void OnRepStormShield(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionStormShieldManager.GetStormShield (Underlying native function: GetStormShield 0x735bbc0)
	class AFortMissionStormShield* GetStormShield(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionStormShieldManager.GetMissionStormShield (Underlying native function: GetMissionStormShield 0x87c8dec)
	static class AFortMissionStormShield* GetMissionStormShield(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMissionStormShieldManager.Get (Underlying native function: Get 0x87c8c34)
	static class UFortMissionStormShieldManager* Get(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

