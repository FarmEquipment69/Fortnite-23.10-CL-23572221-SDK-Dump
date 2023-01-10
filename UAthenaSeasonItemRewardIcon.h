// Class /Script/FortniteUI.AthenaSeasonItemRewardIcon
// Size: 0x268
class UAthenaSeasonItemRewardIcon : public UUserWidget
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaSeasonItemRewardIcon.OnInitializeSeriesReward (Has no native function)
	void OnInitializeSeriesReward(class UFortItemSeriesDefinition*& SeriesData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSeasonItemRewardIcon.OnInitializeReward (Has no native function)
	void OnInitializeReward(class UFortItem*& RewardItem, struct TWeakObjectPtr<class UTexture2D>& RewardTexture, bool& bHasAdditionalStylesToDisplay, int& RewardLevel, bool& bRequiresBattlePass); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSeasonItemRewardIcon.InitializeReward (Underlying native function: InitializeReward 0xa77ff1c)
	void InitializeReward(class UFortItem*& RewardItem, struct TWeakObjectPtr<class UTexture2D>& RewardTexture, bool& bHasAdditionalStylesToDisplay, int& RewardLevel, bool& bRequiresBattlePass); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

