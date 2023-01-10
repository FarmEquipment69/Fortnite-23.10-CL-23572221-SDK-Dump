// Class /Script/FortniteUI.AthenaPinnedQuestInfo
// Size: 0x2e8
class UAthenaPinnedQuestInfo : public UFortHUDElementWidget
{
	class UFortLazyImage* LazyImagePinColor; // 0x2d0 (0x8)
	unsigned char unreflected_2d8[0x8]; // 0x2d8 (0x8) 
	int NumAllowedQuestDescCharacters; // 0x2e0 (0x4)
	unsigned char padding_2e4[0x4]; // 0x2e4 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPinnedQuestInfo.HandleQuestUpdate (Underlying native function: HandleQuestUpdate 0xa37598c)
	void HandleQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& bDisplayStatusUpdate, bool& bDisplayAnnouncementUpdate); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaPinnedQuestInfo.HandlePinnedQuestChanged (Underlying native function: HandlePinnedQuestChanged 0xa3758f0)
	void HandlePinnedQuestChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaPinnedQuestInfo.HandleCurrentQuestsChanged (Underlying native function: HandleCurrentQuestsChanged 0xa374f34)
	void HandleCurrentQuestsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaPinnedQuestInfo.BP_OnSetPinnedQuestInfo (Has no native function)
	void BPOnSetPinnedQuestInfo(int& Achieved, int& Required, enum EFortRarity& Rarity, struct FText& Description); // (Event | Protected | HasOutParms | BlueprintEvent)
};

