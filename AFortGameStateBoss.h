// Class /Script/FortniteGame.FortGameStateBoss
// Size: 0x1110
class AFortGameStateBoss : public AFortGameStatePvE
{
	unsigned char unreflected_1110[0x1110]; 

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateBoss.BossSpawned (Underlying native function: BossSpawned 0x273fd14)
	void BossSpawned(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateBoss.BossKilled (Underlying native function: BossKilled 0x8c91d10)
	void BossKilled(class AController*& InstigatingController, class AActor*& DamageCausingActor, struct FGameplayTagContainer& DamageTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateBoss.AllPlayersDied (Underlying native function: AllPlayersDied 0x273fd14)
	void AllPlayersDied(); // (Final | Native | Public | BlueprintCallable)
};

