// Class /Script/STW_LagerRuntime.FortQuestLivingWorldVolume
// Size: 0x5d8
class AFortQuestLivingWorldVolume : public AFortAthenaLivingWorldVolume
{
	struct FGameplayTagContainer NoPlayerNeedsQuestFilterTags; // 0x588 (0x20)
	struct FGameplayTagContainer PlayerNeedsQuestFilterTags; // 0x5a8 (0x20)
	class UFortQuestItemDefinition* RequiredQuest; // 0x5c8 (0x8)
	unsigned char padding_5d0[0x8]; // 0x5d0 (0x8)

	/* Functions */

	// Function /Script/STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated (Underlying native function: HandlePIEQuestsUpdated 0x273fd14)
	void HandlePIEQuestsUpdated(); // (Final | Native | Protected)
};

