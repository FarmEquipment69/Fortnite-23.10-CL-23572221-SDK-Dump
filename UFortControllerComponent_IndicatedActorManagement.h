// Class /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement
// Size: 0x308
class UFortControllerComponent_IndicatedActorManagement : public UFortControllerComponent
{
	struct FIndicatedActorInfoArray IndicatedActorList; // 0xa0 (0x120)
	struct TArray<struct FIndicatedActorInfoEntry> DeferredIndicatedActorList; // 0x1c0 (0x10)
	struct FStenciledActorInfoArray StenciledActorList; // 0x1d0 (0x120)
	struct TArray<struct FStenciledActorInfoEntry> DeferredStenciledActorList; // 0x2f0 (0x10)
	unsigned char padding_300[0x8]; // 0x300 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveGroupFromStenciledList (Underlying native function: RemoveGroupFromStenciledList 0x735a8fc)
	void RemoveGroupFromStenciledList(struct FString& GroupIdentifier, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveGroupFromIndicatedList (Underlying native function: RemoveGroupFromIndicatedList 0x735a8fc)
	void RemoveGroupFromIndicatedList(struct FString& GroupIdentifier, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveActorFromStenciledList (Underlying native function: RemoveActorFromStenciledList 0x6d23b2c)
	void RemoveActorFromStenciledList(class AActor*& StenciledActor, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveActorFromIndicatedList (Underlying native function: RemoveActorFromIndicatedList 0x6d23b2c)
	void RemoveActorFromIndicatedList(class AActor*& IndicatedActor, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.OnHardCoreBeaconPlayerPawnPossessed (Underlying native function: OnHardCoreBeaconPlayerPawnPossessed 0x6df70d4)
	void OnHardCoreBeaconPlayerPawnPossessed(class APawn*& PossessedPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.OnHardCoreBeaconPlayerPawnDied (Underlying native function: OnHardCoreBeaconPlayerPawnDied 0x845d664)
	void OnHardCoreBeaconPlayerPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.AddActorsToStenciledList (Underlying native function: AddActorsToStenciledList 0x845c074)
	void AddActorsToStenciledList(struct TArray<class AActor*>& StenciledActors, struct FStenciledActorData& Data, bool& bAddAsUnique, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry); // (Final | 0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.AddActorsToIndicatedList (Underlying native function: AddActorsToIndicatedList 0x845be68)
	void AddActorsToIndicatedList(struct TArray<class AActor*>& IndicatedActors, struct FIndicatedActorData& Data, bool& bAddAsUnique, bool& bAllowOwningPlayer, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry); // (Final | 0x00000002 | Native | Public | HasOutParms)
};

