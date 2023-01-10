// Class /Script/FortniteUI.FortSeasonPassLevelInfo
// Size: 0x60
class UFortSeasonPassLevelInfo : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class AFortPlayerController* FortPC; // 0x30 (0x8)
	class UAthenaSeasonItemDefinition* SeasonData; // 0x38 (0x8)
	struct TArray<class UFortItem*> FreeRewards; // 0x40 (0x10)
	struct TArray<class UFortItem*> PaidRewards; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.IsPaidUnlocked (Underlying native function: IsPaidUnlocked 0xa79c788)
	bool IsPaidUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.IsPaidClaimed (Underlying native function: IsPaidClaimed 0xa79c788)
	bool IsPaidClaimed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.IsFreeUnlocked (Underlying native function: IsFreeUnlocked 0xa79c764)
	bool IsFreeUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.IsFreeClaimed (Underlying native function: IsFreeClaimed 0xa79c764)
	bool IsFreeClaimed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.GetSeasonPassMaxLevel (Underlying native function: GetSeasonPassMaxLevel 0xa79c6a8)
	int GetSeasonPassMaxLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.GetRewardItems (Underlying native function: GetRewardItems 0xa79c4dc)
	struct TArray<class UFortItem*> GetRewardItems(enum EAthenaSeasonRewardTrack& Track); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.GetNumRewardItems (Underlying native function: GetNumRewardItems 0xa79c3f8)
	int GetNumRewardItems(enum EAthenaSeasonRewardTrack& Track); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.GetLevelProgress (Underlying native function: GetLevelProgress 0xa79c3d0)
	float GetLevelProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.GetLevel (Underlying native function: GetLevel 0x7083368)
	int GetLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonPassLevelInfo.ContainsChaseReward (Underlying native function: ContainsChaseReward 0xa79baa0)
	bool ContainsChaseReward(enum EAthenaSeasonRewardTrack& Track); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

