// Class /Script/FortniteGame.KeepItemContainer
// Size: 0x1150
class AKeepItemContainer : public ABuildingContainer
{
	unsigned char unreflected_10e0[0x4]; // 0x10e0 (0x4) 
	int HostUpgradeLevel; // 0x10e4 (0x4)
	struct TArray<struct TWeakObjectPtr<class AFortPlayerState>> SearchedBy; // 0x10e8 (0x10)
	enum EKeepContainerType ContainerType; // 0x10f8 (0x1)
	bool bUseDefaultLootLogic; // 0x10f9 (0x1)
	bool bResetThisWhenKeepResets; // 0x10fa (0x1)
	unsigned char unreflected_10fb[0x1]; // 0x10fb (0x1) 
	struct FName ContainerNameKey; // 0x10fc (0x4)
	class UDataTable* ContainerDataTable; // 0x1100 (0x8)
	bool bShowChoiceUI; // 0x1108 (0x1)
	unsigned char unreflected_1109[0x7]; // 0x1109 (0x7) 
	struct TArray<enum EFortItemType> ItemsInChoiceUI; // 0x1110 (0x10)
	unsigned char unreflected_1120[0x10]; // 0x1120 (0x10) 
	enum EFortRarity BestAvailableRarity; // 0x1130 (0x1)
	unsigned char unreflected_1131[0x3]; // 0x1131 (0x3) 
	int MaxItems; // 0x1134 (0x4)
	unsigned char padding_1138[0x18]; // 0x1138 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.KeepItemContainer.RestoreLoot (Underlying native function: RestoreLoot 0x1b0bc18)
	void RestoreLoot(); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.KeepItemContainer.ResetContainer (Underlying native function: ResetContainer 0x6df70d4)
	void ResetContainer(class AFortPlayerController*& FortPC); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.KeepItemContainer.OnRep_SearchedBy (Underlying native function: OnRep_SearchedBy 0x8c64e50)
	void OnRepSearchedBy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.KeepItemContainer.OnRep_HostUpgradeLevel (Underlying native function: OnRep_HostUpgradeLevel 0x8c64bec)
	void OnRepHostUpgradeLevel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.KeepItemContainer.InitializeContainer (Underlying native function: InitializeContainer 0x8c6437c)
	void InitializeContainer(int& InitUpgradeLevel); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.KeepItemContainer.GetLootTierOverride (Underlying native function: GetLootTierOverride 0x8c63a08)
	int GetLootTierOverride(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.KeepItemContainer.GetContainerNameAndLevelKey (Underlying native function: GetContainerNameAndLevelKey 0x8c63498)
	struct FName GetContainerNameAndLevelKey(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

