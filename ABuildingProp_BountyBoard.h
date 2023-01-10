// Class /Script/FortniteGame.BuildingProp_BountyBoard
// Size: 0x10b8
class ABuildingProp_BountyBoard : public ABuildingProp_ConversationCompatible
{
	bool bAllowGrantMultipleBountiesToSingleSquad; // 0xf40 (0x1)
	unsigned char unreflected_f41[0x3]; // 0xf41 (0x3) 
	float InteractionTextRefreshRate; // 0xf44 (0x4)
	struct FScalableFloat NumberOfPlayersToSelectFrom; // 0xf48 (0x28)
	struct FScalableFloat bAllowBountiesOnFriendlies; // 0xf70 (0x28)
	struct FGameplayTagQuery TargetFilter; // 0xf98 (0x48)
	struct FText NoBountiesAvailableInteractionText; // 0xfe0 (0x18)
	struct FText BountyInProgressInteractionText; // 0xff8 (0x18)
	struct FText FailedInteractionTextToUse; // 0x1010 (0x18)
	struct FLinearColor InteractSubTextColor; // 0x1028 (0x10)
	struct TArray<class AFortPlayerPawn*> PawnsInInteractRange; // 0x1038 (0x10)
	unsigned char unreflected_1048[0x10]; // 0x1048 (0x10) 
	struct TSet<class AFortPlayerStateAthena*> PlayersGrantedBountySet; // 0x1058 (0x50)
	struct TArray<class AFortPlayerStateAthena*> PlayersGrantedBounty; // 0x10a8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.StopUpdatingInteractionText (Underlying native function: StopUpdatingInteractionText 0x6df70d4)
	void StopUpdatingInteractionText(class AActor*& TriggeredActor); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.StartUpdatingInteractionText (Underlying native function: StartUpdatingInteractionText 0x6df70d4)
	void StartUpdatingInteractionText(class AActor*& TriggeredActor); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.OnRep_PlayersGrantedBounty (Underlying native function: OnRep_PlayersGrantedBounty 0x1a4539c)
	void OnRepPlayersGrantedBounty(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.OnLocalPlayerGrantedBounty (Has no native function)
	void OnLocalPlayerGrantedBounty(class AFortPlayerStateAthena*& HunterPlayerState, struct FUrgentQuestData& UrgentQuestData); // (BlueprintCosmetic | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.OnBountyStarted (Has no native function)
	void OnBountyStarted(struct TArray<class AFortPlayerStateAthena*>& HunterPlayerStates); // (BlueprintAuthorityOnly | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.OnBountyEnded (Has no native function)
	void OnBountyEnded(class AFortPlayerStateAthena*& HunterPlayerState, struct FGameplayTag& UrgentQuestTag); // (BlueprintAuthorityOnly | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.NotifyBountyEnded (Underlying native function: NotifyBountyEnded 0x8386e68)
	void NotifyBountyEnded(class AFortPlayerStateAthena*& HunterPlayerState, struct FGameplayTag& UrgentQuestTag); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingProp_BountyBoard.MulticastSetInteractionText (Underlying native function: MulticastSetInteractionText 0x2b2a410)
	void MulticastSetInteractionText(struct TArray<struct FPawnBountyInteractionInfo>& PawnBountyInteractionInfo); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)
};

