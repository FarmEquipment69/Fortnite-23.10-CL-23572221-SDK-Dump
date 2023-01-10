// Class /Script/FortniteGame.FortPlayerPetRepState
// Size: 0x2b8
class AFortPlayerPetRepState : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class AActor* LookAtTarget; // 0x290 (0x8)
	class UAthenaPetItemDefinition* PetItemDef; // 0x298 (0x8)
	struct FPetStimuliRepData* StimuliTag; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x10]; // 0x2a8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPetRepState.OnRep_StimuliTag (Underlying native function: OnRep_StimuliTag 0x2d8cf80)
	void OnRepStimuliTag(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPetRepState.OnRep_PetItemDef (Underlying native function: OnRep_PetItemDef 0x273fd14)
	void OnRepPetItemDef(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPetRepState.OnRep_LookAtTarget (Underlying native function: OnRep_LookAtTarget 0x2a60e68)
	void OnRepLookAtTarget(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPetRepState.GetFortPlayerPawn (Underlying native function: GetFortPlayerPawn 0x815c7b8)
	class AFortPlayerPawn* GetFortPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

