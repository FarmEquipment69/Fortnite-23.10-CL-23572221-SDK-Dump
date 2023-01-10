// Class /Script/FortniteGame.FortMinigameStatsComponent
// Size: 0x300
class UFortMinigameStatsComponent : public UActorComponent
{
	struct TArray<class UClass*> AvailableStats; // 0xa0 (0x10)
	struct TArray<class UFortMinigameStatFilter*> LoadedStats; // 0xb0 (0x10)
	struct TArray<class UClass*> TrackedStats; // 0xc0 (0x10)
	struct TArray<class UClass*> ScoreboardStats; // 0xd0 (0x10)
	struct TArray<class UFortMinigameStatFilter*> TrackedStatObjects; // 0xe0 (0x10)
	struct TArray<class UFortMinigameStatFilter*> ScoreboardStatObjects; // 0xf0 (0x10)
	struct TArray<class UFortMinigameStatFilter*> PersistentStatList; // 0x100 (0x10)
	struct TArray<int> ScoreboardColumnOrder; // 0x110 (0x10)
	enum EFortMinigameTimeAliveTeamTrackingMethod TimeAliveTeamTrackingMethod; // 0x120 (0x1)
	unsigned char unreflected_121[0x7]; // 0x121 (0x7) 
	struct FFortMinigameStatCollection RoundStats; // 0x128 (0x30)
	struct FFortMinigameStatCollection GameStats; // 0x158 (0x30)
	struct FMulticastInlineDelegate OnScoreboardColumnOrderUpdated; // 0x188 (0x10)
	struct TArray<struct FString> StatNamesInUse; // 0x198 (0x10)
	struct TArray<struct FGameplayTag> PlayerDefinedStatGameplayTagsInUse; // 0x1a8 (0x10)
	struct FPlayerDefinedStatFilterArray PlayerDefinedStatEntries; // 0x1b8 (0x120)
	struct TArray<class UFortMinigamePlayerDefinedStatFilter*> PlayerDefinedStatInstances; // 0x2d8 (0x10)
	enum EFortMinigameTimeAliveStartPoint TimeAliveStartPoint; // 0x2e8 (0x1)
	unsigned char padding_2e9[0x17]; // 0x2e9 (0x17)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetTrackedStats (Underlying native function: SetTrackedStats 0x88ca2c8)
	void SetTrackedStats(struct TArray<class UClass*>& InTrackedStats); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetTimeAliveTeamTrackingMethod (Underlying native function: SetTimeAliveTeamTrackingMethod 0x88c9f98)
	void SetTimeAliveTeamTrackingMethod(enum EFortMinigameTimeAliveTeamTrackingMethod& InTimeAliveTeamTrackingMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetTimeAliveStartPoint (Underlying native function: SetTimeAliveStartPoint 0x88c9f0c)
	void SetTimeAliveStartPoint(enum EFortMinigameTimeAliveStartPoint& InTimeAliveStartPoint); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetStatForPlayerId (Underlying native function: SetStatForPlayerId 0x88c9d6c)
	void SetStatForPlayerId(struct FUniqueNetIdRepl& InPlayerID, class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetStatForPlayerBucket (Underlying native function: SetStatForPlayerBucket 0x88c9c30)
	void SetStatForPlayerBucket(int& BucketIndex, class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetStatForPlayer (Underlying native function: SetStatForPlayer 0x88c9af4)
	void SetStatForPlayer(class AFortPlayerState*& InPlayer, class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetStatForGroup (Underlying native function: SetStatForGroup 0x88c99f8)
	void SetStatForGroup(class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetScoreboardColumnOrder (Underlying native function: SetScoreboardColumnOrder 0x88c9874)
	void SetScoreboardColumnOrder(struct TArray<int>& InScoreboardColumnOrder); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.SetPersistentStatList (Underlying native function: SetPersistentStatList 0x88c9468)
	void SetPersistentStatList(struct TArray<class UFortMinigameStatFilter*>& InPersistentStatList); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.OnRep_TrackedStats (Underlying native function: OnRep_TrackedStats 0x88c7e0c)
	void OnRepTrackedStats(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.OnRep_StatsChanged (Underlying native function: OnRep_StatsChanged 0x88c7df8)
	void OnRepStatsChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.NotifyStatEvent (Underlying native function: NotifyStatEvent 0x88c76a0)
	void NotifyStatEvent(enum EFortQuestObjectiveStatEvent& Type, class UObject*& TargetObject, class AController*& PlayerController, struct FGameplayTagContainer& TargetTags, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, int& Count); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.IsStatPersistent (Underlying native function: IsStatPersistent 0x88c6a44)
	bool IsStatPersistent(class UClass*& InFilterClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetTrackedStatsForScoreboardColumns (Underlying native function: GetTrackedStatsForScoreboardColumns 0x88c59dc)
	void GetTrackedStatsForScoreboardColumns(struct TArray<class UFortMinigameStatFilter*>& OutScoreboardColumnSortedTrackedStats, bool& bOnlyPersistentStats); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetTrackedStat (Underlying native function: GetTrackedStat 0x88c5704)
	class UFortMinigameStatFilter* GetTrackedStat(enum EFortQuestObjectiveStatEvent& Type, class UObject*& TargetObject, class AFortPlayerController*& PlayerController, struct FGameplayTagContainer& TargetTags, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, int& OutIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetTimeAliveStartPoint (Underlying native function: GetTimeAliveStartPoint 0x88c56ec)
	enum EFortMinigameTimeAliveStartPoint GetTimeAliveStartPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetStatForPlayerId (Underlying native function: GetStatForPlayerId 0x88c52a8)
	int GetStatForPlayerId(struct FUniqueNetIdRepl& PlayerId, class UFortMinigameStatFilter*& InFilter, bool& bGameTotal); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetStatForPlayerBucket (Underlying native function: GetStatForPlayerBucket 0x88c5158)
	int GetStatForPlayerBucket(int& BucketIndex, class UFortMinigameStatFilter*& InFilter, bool& bGameTotal, bool& bIncludeInactivePlayers); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetStatForPlayer (Underlying native function: GetStatForPlayer 0x88c504c)
	int GetStatForPlayer(class AFortPlayerState*& InPlayer, class UFortMinigameStatFilter*& InFilter, bool& bGameTotal); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetStatForGroup (Underlying native function: GetStatForGroup 0x88c4f88)
	int GetStatForGroup(class UFortMinigameStatFilter*& InFilter, bool& bGameTotal); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetScoreboardColumnOrder (Underlying native function: GetScoreboardColumnOrder 0x88c4868)
	void GetScoreboardColumnOrder(struct TArray<int>& OutScoreboardColumnOrder); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.GetLoadedStatFromClass (Underlying native function: GetLoadedStatFromClass 0x88c3bd8)
	class UFortMinigameStatFilter* GetLoadedStatFromClass(class UClass*& InFilterClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.BroadcastStatsChangedDelegate (Underlying native function: BroadcastStatsChangedDelegate 0x88c2398)
	void BroadcastStatsChangedDelegate(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AddStatToPlayerBucket (Underlying native function: AddStatToPlayerBucket 0x88c1bd4)
	void AddStatToPlayerBucket(int& BucketIndex, class UFortMinigameStatFilter*& InFilter, int& InValue); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AddStatToPlayer (Underlying native function: AddStatToPlayer 0x6efd408)
	void AddStatToPlayer(class AFortPlayerState*& InPlayer, class UFortMinigameStatFilter*& InFilter, int& InValue); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AddStatToGroup (Underlying native function: AddStatToGroup 0x7e484e4)
	void AddStatToGroup(class UFortMinigameStatFilter*& InFilter, int& InValue); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AccumulateStatForPlayerId (Underlying native function: AccumulateStatForPlayerId 0x88c0d68)
	void AccumulateStatForPlayerId(struct FUniqueNetIdRepl& InPlayerID, class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AccumulateStatForPlayerBucket (Underlying native function: AccumulateStatForPlayerBucket 0x88c0c2c)
	void AccumulateStatForPlayerBucket(int& BucketIndex, class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AccumulateStatForPlayer (Underlying native function: AccumulateStatForPlayer 0x88c0a98)
	void AccumulateStatForPlayer(class AFortPlayerState*& InPlayer, class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameStatsComponent.AccumulateStatForGroup (Underlying native function: AccumulateStatForGroup 0x88c0954)
	void AccumulateStatForGroup(class UFortMinigameStatFilter*& InFilter, int& InValue, bool& bGameTotal); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

