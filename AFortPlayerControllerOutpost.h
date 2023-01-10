// Class /Script/FortniteGame.FortPlayerControllerOutpost
// Size: 0x3b10
class AFortPlayerControllerOutpost : public AFortPlayerControllerPvE
{
	class UFortOutpostItemDefinition* BuildingBeingUpgraded; // 0x3ae8 (0x8)
	int LevelBeforeUpgrade; // 0x3af0 (0x4)
	bool bOutpostRefundDialogPending; // 0x3af4 (0x1)
	unsigned char unreflected_3af5[0x3]; // 0x3af5 (0x3) 
	struct TArray<struct FFortDepositedResources> PostDepositedResources; // 0x3af8 (0x10)
	bool bIsOutpostOwnerInPIE; // 0x3b08 (0x1)
	unsigned char padding_3b09[0x7]; // 0x3b09 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.UpgradeBuildingByDefinition (Underlying native function: UpgradeBuildingByDefinition 0x8cea0a0)
	void UpgradeBuildingByDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.UpgradeBuilding (Underlying native function: UpgradeBuilding 0x8ce9f9c)
	void UpgradeBuilding(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ToggleOwnerInPIE (Underlying native function: ToggleOwnerInPIE 0x8ce9d40)
	void ToggleOwnerInPIE(); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerUpgradePOST (Underlying native function: ServerUpgradePOST 0x8ce968c)
	void ServerUpgradePOST(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerUpgradeBuilding (Underlying native function: ServerUpgradeBuilding 0x8ce95ec)
	void ServerUpgradeBuilding(class UFortOutpostItemDefinition*& BuildingToUpgrade); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerMoveItemToStorageVault (Underlying native function: ServerMoveItemToStorageVault 0x8ce9418)
	void ServerMoveItemToStorageVault(struct FFortItemEntry& NewlyStoredItem); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerMoveItemFromStorageVault (Underlying native function: ServerMoveItemFromStorageVault 0x8ce920c)
	void ServerMoveItemFromStorageVault(struct FFortItemEntry& NewlyCollectedItem); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerLeaveOutpostAsParty (Underlying native function: ServerLeaveOutpostAsParty 0x8ce8f4c)
	void ServerLeaveOutpostAsParty(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerDepositPOSTResource (Underlying native function: ServerDepositPOSTResource 0x8ce8e40)
	void ServerDepositPOSTResource(struct FGuid& ItemGuid, int& Count); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerCleanUpOnExit (Underlying native function: ServerCleanUpOnExit 0x8ce8df4)
	void ServerCleanUpOnExit(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.OnRep_PostDepositedResources (Underlying native function: OnRep_PostDepositedResources 0x8ce8c84)
	void OnRepPostDepositedResources(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.OnCleanUpOnExit (Has no native function)
	void OnCleanUpOnExit(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.LeaveOutpostAsParty (Underlying native function: LeaveOutpostAsParty 0x8ce88e0)
	void LeaveOutpostAsParty(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.IsOutpostOwner (Underlying native function: IsOutpostOwner 0x8ce88bc)
	bool IsOutpostOwner(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetOutpostCoreLevel (Underlying native function: GetOutpostCoreLevel 0x8ce78e4)
	int GetOutpostCoreLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetHighestEnduranceWaveReached (Underlying native function: GetHighestEnduranceWaveReached 0x8ce73b8)
	int GetHighestEnduranceWaveReached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingUpgradeCostFromDefinition (Underlying native function: GetBuildingUpgradeCostFromDefinition 0x8ce69fc)
	void GetBuildingUpgradeCostFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding, struct TArray<struct FFortItemQuantityPair>& OutWorldItems, struct TArray<struct FFortItemQuantityPair>& OutAccountItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingUpgradeCost (Underlying native function: GetBuildingUpgradeCost 0x8ce6750)
	void GetBuildingUpgradeCost(enum EOutpostBuildings& OutpostBuilding, struct TArray<struct FFortItemQuantityPair>& OutWorldItems, struct TArray<struct FFortItemQuantityPair>& OutAccountItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingMaxLevelFromDefinition (Underlying native function: GetBuildingMaxLevelFromDefinition 0x8ce6480)
	int GetBuildingMaxLevelFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingMaxLevel (Underlying native function: GetBuildingMaxLevel 0x8ce6354)
	int GetBuildingMaxLevel(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingLevelFromDefinition (Underlying native function: GetBuildingLevelFromDefinition 0x8ce6188)
	int GetBuildingLevelFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingLevel (Underlying native function: GetBuildingLevel 0x8ce605c)
	int GetBuildingLevel(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.DumpInventory (Underlying native function: DumpInventory 0x8ce5fb4)
	void DumpInventory(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ClientOnOutpostRefundOccurred (Underlying native function: ClientOnOutpostRefundOccurred 0x8ce5b98)
	void ClientOnOutpostRefundOccurred(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ClientOnBuildingLevelChanged (Underlying native function: ClientOnBuildingLevelChanged 0x8ce58e0)
	void ClientOnBuildingLevelChanged(class UFortOutpostItemDefinition*& UpgradedBuilding, int& InLevelBeforeUpgrade); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.CanUpgradeBuildingFromDefinition (Underlying native function: CanUpgradeBuildingFromDefinition 0x8ce5590)
	bool CanUpgradeBuildingFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding, bool& bLog); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.CanUpgradeBuilding (Underlying native function: CanUpgradeBuilding 0x8ce53e4)
	bool CanUpgradeBuilding(enum EOutpostBuildings& OutpostBuilding, bool& bLog); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

