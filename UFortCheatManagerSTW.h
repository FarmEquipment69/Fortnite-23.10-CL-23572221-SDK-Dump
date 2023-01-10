// Class /Script/FortniteGame.FortCheatManagerSTW
// Size: 0x38
class UFortCheatManagerSTW : public UChildCheatManager
{
	unsigned char unreflected_38[0x38]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManagerSTW.UnlockAllZones (Underlying native function: UnlockAllZones 0x273fd14)
	void UnlockAllZones(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.TestUpgradeOutpostItem (Underlying native function: TestUpgradeOutpostItem 0x66e4ab4)
	void TestUpgradeOutpostItem(struct FString& ItemTemplateID); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.TestSetOutpostDefenseActive (Underlying native function: TestSetOutpostDefenseActive 0x6df775c)
	void TestSetOutpostDefenseActive(bool& bActive); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.TestOutpostUI (Underlying native function: TestOutpostUI 0x273fd14)
	void TestOutpostUI(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetWorldLevel (Underlying native function: SetWorldLevel 0x6df7bc0)
	void SetWorldLevel(float& Level); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetHordePlotExpansionSize (Underlying native function: SetHordePlotExpansionSize 0x8b105d0)
	void SetHordePlotExpansionSize(int& XSize, int& YSize, int& ZSize); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetHeroLevel (Underlying native function: SetHeroLevel 0x6e8edb4)
	void SetHeroLevel(int& Level); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetHeroClass (Underlying native function: SetHeroClass 0x8b136bc)
	void SetHeroClass(struct FString& NewHeroName, int& Level); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpUpgradeItem (Underlying native function: McpUpgradeItem 0x6ee971c)
	void McpUpgradeItem(struct FString& ItemToUpgrade); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpStorageTransfer (Underlying native function: McpStorageTransfer 0x8c946a0)
	void McpStorageTransfer(struct TArray<struct FString>& ItemIdsToMoveToOutpost, struct TArray<struct FString>& ItemIdsToMoveToTheater); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpSlotItem (Underlying native function: McpSlotItem 0x6ee971c)
	void McpSlotItem(struct FString& ItemToSlot); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpResetPersistence (Underlying native function: McpResetPersistence 0x273fd14)
	void McpResetPersistence(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpRemoveAllTestProfileMocks (Underlying native function: McpRemoveAllTestProfileMocks 0x273fd14)
	void McpRemoveAllTestProfileMocks(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpRecycleItem (Underlying native function: McpRecycleItem 0x6ee971c)
	void McpRecycleItem(struct FString& ItemToRecycle); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpOpenCardPack (Underlying native function: McpOpenCardPack 0x88c3144)
	void McpOpenCardPack(struct FString& CardPackItemId, int& SelectionIdx); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpHostGetAllPlayerCachedPersistence (Underlying native function: McpHostGetAllPlayerCachedPersistence 0x273fd14)
	void McpHostGetAllPlayerCachedPersistence(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetSchematicXP (Underlying native function: McpGetSchematicXP 0x273fd14)
	void McpGetSchematicXP(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetPersonnelXP (Underlying native function: McpGetPersonnelXP 0x273fd14)
	void McpGetPersonnelXP(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetHexMission (Underlying native function: McpGetHexMission 0x273fd14)
	void McpGetHexMission(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetCachedPersistence (Underlying native function: McpGetCachedPersistence 0x273fd14)
	void McpGetCachedPersistence(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpConvertItem (Underlying native function: McpConvertItem 0x88c3144)
	void McpConvertItem(struct FString& ItemToConvert, int& ConversionIdx); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpCompleteHexMission (Underlying native function: McpCompleteHexMission 0x273fd14)
	void McpCompleteHexMission(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpClaimAllResourceCollectors (Underlying native function: McpClaimAllResourceCollectors 0x6df775c)
	void McpClaimAllResourceCollectors(bool& bDebugPrint); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpClaimAllAvailableCollectionBookRewards (Underlying native function: McpClaimAllAvailableCollectionBookRewards 0x273fd14)
	void McpClaimAllAvailableCollectionBookRewards(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpApplyAlteration (Underlying native function: McpApplyAlteration 0x8b120c4)
	void McpApplyAlteration(struct FString& Schematic, struct FString& Alteration); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpAddTestStatsMock (Underlying native function: McpAddTestStatsMock 0x273fd14)
	void McpAddTestStatsMock(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.IronCityAutoAmplifierPlacement (Underlying native function: IronCityAutoAmplifierPlacement 0x6e8edb4)
	void IronCityAutoAmplifierPlacement(int& Value); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveUsefulThings (Underlying native function: GiveUsefulThings 0x6e8edb4)
	void GiveUsefulThings(int& NumOfUsefulThings); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveDeployablePlotAllIngredients (Underlying native function: GiveDeployablePlotAllIngredients 0x6e8edb4)
	void GiveDeployablePlotAllIngredients(int& NumIngredients); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveCheatInventory (Underlying native function: GiveCheatInventory 0x273fd14)
	void GiveCheatInventory(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveBluGlo (Underlying native function: GiveBluGlo 0x6e8edb4)
	void GiveBluGlo(int& Amount); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GetWorldLevel (Underlying native function: GetWorldLevel 0x273fd14)
	void GetWorldLevel(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GetWorldDifficulty (Underlying native function: GetWorldDifficulty 0x273fd14)
	void GetWorldDifficulty(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ForceUnlockHordeTiers (Underlying native function: ForceUnlockHordeTiers 0x6e8edb4)
	void ForceUnlockHordeTiers(int& MaxTierNumber); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ForceSetHeroRemoteCharacter (Underlying native function: ForceSetHeroRemoteCharacter 0x8b10d70)
	void ForceSetHeroRemoteCharacter(int& PartyMemberIndex, bool& bEnabled); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ForceHeroType (Underlying native function: ForceHeroType 0x6ee971c)
	void ForceHeroType(struct FString& HeroPersistentName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.EvolveHero (Underlying native function: EvolveHero 0x273fd14)
	void EvolveHero(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.DumpAppliedHomebaseEffectsWithCoreAttributes (Underlying native function: DumpAppliedHomebaseEffectsWithCoreAttributes 0x1832458)
	void DumpAppliedHomebaseEffectsWithCoreAttributes(); // (Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.DevSkipTutorial (Underlying native function: DevSkipTutorial 0x273fd14)
	void DevSkipTutorial(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ClearKeepSave (Underlying native function: ClearKeepSave 0x273fd14)
	void ClearKeepSave(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ChangeHeroClass (Underlying native function: ChangeHeroClass 0x6e8edb4)
	void ChangeHeroClass(int& Index); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ApplyWeaponAlteration (Underlying native function: ApplyWeaponAlteration 0x6ee971c)
	void ApplyWeaponAlteration(struct FString& AlterationName); // (Final | Exec | Native | Public)
};

