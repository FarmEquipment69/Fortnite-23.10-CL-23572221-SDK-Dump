// Class /Script/FortniteAI.FortAthenaAIBotSpawnerData
// Size: 0x110
class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData
{
	class UClass* SkillSetComponent; // 0xe8 (0x8)
	class UClass* ConstructionComponent; // 0xf0 (0x8)
	class UClass* VehicleComponent; // 0xf8 (0x8)
	class UClass* CoverComponent; // 0x100 (0x8)
	class UClass* PerksComponent; // 0x108 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetVehicleComponent (Underlying native function: GetVehicleComponent 0xa1d58f4)
	class UFortAthenaAISpawnerDataComponent_VehicleBase* GetVehicleComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetSkillSetComponent (Underlying native function: GetSkillSetComponent 0xa1d58b8)
	class UFortAthenaAISpawnerDataComponent_SkillsetBase* GetSkillSetComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetPerksComponent (Underlying native function: GetPerksComponent 0xa1d587c)
	class UFortAthenaAISpawnerDataComponent_PerksBase* GetPerksComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetCoverComponent (Underlying native function: GetCoverComponent 0xa1d5840)
	class UFortAthenaAISpawnerDataComponent_CoverBase* GetCoverComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetConstructionComponent (Underlying native function: GetConstructionComponent 0xa1d5804)
	class UFortAthenaAISpawnerDataComponent_ConstructionBase* GetConstructionComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

