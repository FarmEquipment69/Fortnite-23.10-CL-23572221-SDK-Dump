// Class /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
// Size: 0x2b8
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnAllExpeditionsCollected; // 0x290 (0x10)
	class UCommonTileView* RewardsTileView; // 0x2a0 (0x8)
	bool bPendingCollection; // 0x2a8 (0x1)
	unsigned char padding_2a9[0xf]; // 0x2a9 (0xf)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI (Underlying native function: RefreshRewardsUI 0x721c46c)
	void RefreshRewardsUI(class UFortExpeditionItem*& Expedition, bool& bExpeditionSucceeded, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward (Underlying native function: ProcessNextReward 0x721c458)
	void ProcessNextReward(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted (Underlying native function: HandleCollectionExpeditionCompleted 0x721b4f8)
	void HandleCollectionExpeditionCompleted(bool& bMcpSuccess, class UFortExpeditionItem*& Expedition, bool& bExpeditionSuccess, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (Final | Native | Protected | HasOutParms)
};

