// Class /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
// Size: 0x48
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition; // 0x38 (0x8)
	struct FGameplayTag CreativeRoyaleVolumeTag; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)

	/* Functions */

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad (Underlying native function: TeleportToPlotAferLoad 0x6f63dc0)
	void TeleportToPlotAferLoad(); // (Final | Native | Protected | Const)

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone (Underlying native function: CreativeRoyaleTeleportToEditZone 0x273fd14)
	void CreativeRoyaleTeleportToEditZone(); // (Final | Exec | Native | Public | Const)

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile (Underlying native function: CreativeRoyaleResetIslandFile 0x6f63b10)
	void CreativeRoyaleResetIslandFile(); // (Final | Exec | Native | Public | Const)

	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot (Underlying native function: CreativeRoyaleLoadEditPlot 0x273fd14)
	void CreativeRoyaleLoadEditPlot(); // (Final | Exec | Native | Public | Const)
};

