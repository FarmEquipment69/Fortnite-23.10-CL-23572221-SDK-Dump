// Class /Script/FortniteGame.FortQuestManagerComponent_Campaign
// Size: 0x210
class UFortQuestManagerComponent_Campaign : public UFortQuestManagerComponent
{
	struct FMulticastInlineDelegate OnDailyQuestRerolled; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnQuestSeen; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnPinnedQuestsChanged; // 0x48 (0x10)
	unsigned char unreflected_58[0x18]; // 0x58 (0x18) 
	struct FMulticastInlineDelegate OnQuestRewardClaimed; // 0x70 (0x10)
	unsigned char unreflected_80[0x18]; // 0x80 (0x18) 
	struct FMulticastInlineDelegate OnNoQuestRewardsToClaim; // 0x98 (0x10)
	unsigned char unreflected_a8[0x50]; // 0xa8 (0x50) 
	struct TMap<struct FName, class UFortQuestCategory*> CurrentCategorizedQuestsMap; // 0xf8 (0x50)
	enum EQuestMapScreenMode QuestMapMode; // 0x148 (0x1)
	unsigned char unreflected_149[0x7]; // 0x149 (0x7) 
	struct TArray<class UDataTable*> EventQuestDataTables; // 0x150 (0x10)
	struct TArray<class UFortQuestItem*> UncategorizedQuests; // 0x160 (0x10)
	unsigned char unreflected_170[0x9]; // 0x170 (0x9) 
	bool bBlockStWQuestCompletion; // 0x179 (0x1)
	unsigned char unreflected_17a[0x26]; // 0x17a (0x26) 
	struct TMap<struct FName, struct FUpdatingQuestsByObjectiveInfo> UpdatingQuestsByObjective; // 0x1a0 (0x50)
	struct TArray<struct FPrimaryMissionQuestData> PrimaryMissionObjectives; // 0x1f0 (0x10)
	unsigned char padding_200[0x10]; // 0x200 (0x10)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Campaign.SimpleDynamicMulticastDelegate__DelegateSignature (Has no native function)
	void SimpleDynamicMulticastDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.SetQuestPinned (Underlying native function: SetQuestPinned 0x8c2b5a4)
	bool SetQuestPinned(class UFortQuestItem*& Quest, bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.SetQuestMapMode (Underlying native function: SetQuestMapMode 0x8c2b528)
	void SetQuestMapMode(enum EQuestMapScreenMode& NewQuestMapMode); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.RerollDailyQuest (Underlying native function: RerollDailyQuest 0x8c2ae14)
	void RerollDailyQuest(class UFortQuestItem*& QuestToDiscard); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.PopNextPendingFeatureUnlock (Underlying native function: PopNextPendingFeatureUnlock 0x8c2ac94)
	struct FString PopNextPendingFeatureUnlock(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Campaign.OnQuestSeen__DelegateSignature (Has no native function)
	void OnQuestSeenDelegateSignature(class UFortQuestItem*& Quest); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Campaign.OnQuestRewardClaimed__DelegateSignature (Has no native function)
	void OnQuestRewardClaimedDelegateSignature(class UFortQuestItem*& Quest, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Campaign.OnDailyQuestRerolled__DelegateSignature (Has no native function)
	void OnDailyQuestRerolledDelegateSignature(class UFortQuestItem*& NewQuest); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.MarkQuestsSeen (Underlying native function: MarkQuestsSeen 0x8c29d48)
	void MarkQuestsSeen(bool& bOnlyMarkPendingSeenQuests); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.MarkQuestSeen (Underlying native function: MarkQuestSeen 0x8c29cc8)
	void MarkQuestSeen(class UFortQuestItem*& Quest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.IsThisAnEventQuest (Underlying native function: IsThisAnEventQuest 0x8c298b4)
	bool IsThisAnEventQuest(class UFortQuestItemDefinition*& QuestDefinition, struct FString& MatchQuestEventFlag, class UDataTable*& QuestTable); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.IsPendingFeatureUnlockNotification (Underlying native function: IsPendingFeatureUnlockNotification 0x8c29898)
	bool IsPendingFeatureUnlockNotification(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.IsMainQuest (Underlying native function: IsMainQuest 0x8c297bc)
	bool IsMainQuest(class UFortQuestItem*& Quest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.HasUnseenQuests (Underlying native function: HasUnseenQuests 0x8c2973c)
	bool HasUnseenQuests(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.HasUnsavedPrimaryMissionProgress (Underlying native function: HasUnsavedPrimaryMissionProgress 0x8c296fc)
	bool HasUnsavedPrimaryMissionProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.HasQuestBeenSeenLocally (Underlying native function: HasQuestBeenSeenLocally 0x71cfc30)
	bool HasQuestBeenSeenLocally(class UFortQuestItem*& Quest); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.HandleQuestObjectiveUpdated (Underlying native function: HandleQuestObjectiveUpdated 0x8c289e0)
	void HandleQuestObjectiveUpdated(class AFortPlayerController*& QuestOwner, class UFortQuestItemDefinition*& QuestDef, struct FName& BackendName, int& CompletionCount, int& DeltaChange, class AFortPlayerState*& AssistingPlayer, enum EFortQuestObjectiveStatEvent& StatEvent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GrantFirstDailyQuest (Underlying native function: GrantFirstDailyQuest 0x8c287d4)
	void GrantFirstDailyQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetUnseenQuestCount (Underlying native function: GetUnseenQuestCount 0x8c287b0)
	int GetUnseenQuestCount(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetRemainingQuestPoolRerolls (Underlying native function: GetRemainingQuestPoolRerolls 0x8c28610)
	int GetRemainingQuestPoolRerolls(struct FString& PoolName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetRemainingDailyQuestRerolls (Underlying native function: GetRemainingDailyQuestRerolls 0x8c285ec)
	int GetRemainingDailyQuestRerolls(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetQuestsFromCategory (Underlying native function: GetQuestsFromCategory 0x8c28508)
	void GetQuestsFromCategory(class UFortQuestCategory*& category, struct TArray<class UFortQuestItem*>& QuestList); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetQuestMapMode (Underlying native function: GetQuestMapMode 0x8c284f0)
	enum EQuestMapScreenMode GetQuestMapMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetQuestCategory (Underlying native function: GetQuestCategory 0x8c28460)
	class UFortQuestCategory* GetQuestCategory(class UFortQuestItem*& QuestItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetPinnedQuests (Underlying native function: GetPinnedQuests 0x8c283ac)
	void GetPinnedQuests(struct TArray<class UFortQuestItem*>& OutPinnedQuestItems); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetNextUnseenQuest (Underlying native function: GetNextUnseenQuest 0x8c282fc)
	class UFortQuestItem* GetNextUnseenQuest(enum EFortQuestType& QuestType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetMainQuest (Underlying native function: GetMainQuest 0x8c282a4)
	class UFortQuestItem* GetMainQuest(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.GetCurrentQuestsCategories (Underlying native function: GetCurrentQuestsCategories 0x8c28030)
	void GetCurrentQuestsCategories(struct TArray<class UFortQuestCategory*>& Categories); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.ClaimSelectedQuestReward (Underlying native function: ClaimSelectedQuestReward 0x8c27e24)
	void ClaimSelectedQuestReward(class UFortQuestItem*& Quest, int& RewardIndex); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Campaign.ClaimQuestReward (Underlying native function: ClaimQuestReward 0x8c27da4)
	void ClaimQuestReward(class UFortQuestItem*& Quest); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)
};

