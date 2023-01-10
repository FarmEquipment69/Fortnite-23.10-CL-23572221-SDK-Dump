// Class /Script/FortniteGame.FortOutpostContext
// Size: 0x60
class UFortOutpostContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnBuildingLevelChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnItemsNeedRefresh; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnGooContentNeedRefresh; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortOutpostContext.UpgradePOST (Underlying native function: UpgradePOST 0x8cea1ac)
	void UpgradePOST(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostContext.UpgradeBuildingByDefinition (Underlying native function: UpgradeBuildingByDefinition 0x8cea120)
	void UpgradeBuildingByDefinition(class UFortOutpostItemDefinition*& BuildingToUpgrade); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostContext.UpgradeBuilding (Underlying native function: UpgradeBuilding 0x8cea01c)
	void UpgradeBuilding(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostContext.LeaveOutpostAsParty (Underlying native function: LeaveOutpostAsParty 0x8ce88f4)
	void LeaveOutpostAsParty(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetPOSTBuildingHealthMod (Underlying native function: GetPOSTBuildingHealthMod 0x8ce7ffc)
	float GetPOSTBuildingHealthMod(int& POSTLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetOutpostCoreLevel (Underlying native function: GetOutpostCoreLevel 0x8ce7908)
	int GetOutpostCoreLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetNextPOSTLevelRequirements (Underlying native function: GetNextPOSTLevelRequirements 0x8ce755c)
	struct TArray<class UOutpostPOSTRequirementData*> GetNextPOSTLevelRequirements(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetHighestEnduranceWaveReached (Underlying native function: GetHighestEnduranceWaveReached 0x8ce73dc)
	int GetHighestEnduranceWaveReached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetHarvestingToolForLevel (Underlying native function: GetHarvestingToolForLevel 0x8ce7334)
	class UFortWorldItemDefinition* GetHarvestingToolForLevel(int& InHarvestingOptimizerLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetBuildingUpgradeCostFromDefinition (Underlying native function: GetBuildingUpgradeCostFromDefinition 0x8ce6b44)
	void GetBuildingUpgradeCostFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding, struct TArray<struct FFortItemQuantityPair>& OutWorldItems, struct TArray<struct FFortItemQuantityPair>& OutAccountItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetBuildingUpgradeCost (Underlying native function: GetBuildingUpgradeCost 0x8ce6898)
	void GetBuildingUpgradeCost(enum EOutpostBuildings& OutpostBuilding, struct TArray<struct FFortItemQuantityPair>& OutWorldItems, struct TArray<struct FFortItemQuantityPair>& OutAccountItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetBuildingMaxLevelFromDefinition (Underlying native function: GetBuildingMaxLevelFromDefinition 0x8ce65e0)
	int GetBuildingMaxLevelFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetBuildingMaxLevel (Underlying native function: GetBuildingMaxLevel 0x8ce63e0)
	int GetBuildingMaxLevel(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetBuildingLevelFromDefinition (Underlying native function: GetBuildingLevelFromDefinition 0x8ce6268)
	int GetBuildingLevelFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.GetBuildingLevel (Underlying native function: GetBuildingLevel 0x8ce60e8)
	int GetBuildingLevel(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.DepositPOSTResource (Underlying native function: DepositPOSTResource 0x8ce5cf4)
	void DepositPOSTResource(class UFortItemDefinition*& ResourceItem, int& Count); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostContext.CleanUpOnExit (Underlying native function: CleanUpOnExit 0x8ce5780)
	void CleanUpOnExit(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortOutpostContext.CanUpgradePOST (Underlying native function: CanUpgradePOST 0x8ce5740)
	bool CanUpgradePOST(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.CanUpgradeBuildingFromDefinition (Underlying native function: CanUpgradeBuildingFromDefinition 0x8ce5654)
	bool CanUpgradeBuildingFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding, bool& bLog); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOutpostContext.CanUpgradeBuilding (Underlying native function: CanUpgradeBuilding 0x8ce54a8)
	bool CanUpgradeBuilding(enum EOutpostBuildings& OutpostBuilding, bool& bLog); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

