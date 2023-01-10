// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
// Size: 0x258
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{
	struct FMulticastInlineDelegate OnVictoryCrownStatusChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnHasWonCrownInMatch; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnHasWonRoyalRoyale; // 0xc0 (0x10)
	unsigned char unreflected_d0[0x18]; // 0xd0 (0x18) 
	struct TWeakObjectPtr<class UFortWorldItemDefinition> CrownInventoryItemClass; // 0xe8 (0x28)
	bool bWonCrownInMatch; // 0x110 (0x1)
	bool bWonRoyalRoyale; // 0x111 (0x1)
	unsigned char unreflected_112[0x6]; // 0x112 (0x6) 
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x118 (0x8)
	struct TWeakObjectPtr<class UFortMontageItemDefinitionBase> RoyalRoyaleEmoteItemDefinition; // 0x120 (0x28)
	class UDataTable* VictoryCrownPlaylistData; // 0x148 (0x8)
	struct FGameplayTagContainer SourceTagsForRoyalRoyale; // 0x150 (0x20)
	struct FVictoryCrownAccountData VictoryCrownAccountData; // 0x170 (0x10)
	struct FScalableFloat InitialGrantDelay; // 0x180 (0x28)
	unsigned char unreflected_1a8[0xa8]; // 0x1a8 (0xa8) 
	bool bKillFeedBroadcastReady; // 0x250 (0x1)
	unsigned char padding_251[0x7]; // 0x251 (0x7)

	/* Functions */

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale (Underlying native function: OnRep_WonRoyalRoyale 0x7461c58)
	void OnRepWonRoyalRoyale(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch (Underlying native function: OnRep_WonCrownInMatch 0x7461c24)
	void OnRepWonCrownInMatch(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized (Underlying native function: OnAthenaProfileInitialized 0x273fd14)
	void OnAthenaProfileInitialized(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory (Underlying native function: IsCrownInPlayerInventory 0x7461bf8)
	bool IsCrownInPlayerInventory(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale (Underlying native function: HasWonRoyalRoyale 0x7461b54)
	bool HasWonRoyalRoyale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch (Underlying native function: HasWonCrownInMatch 0x7461b3c)
	bool HasWonCrownInMatch(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged (Underlying native function: HandlePawnChanged 0x7461990)
	void HandlePawnChanged(class APawn*& OldPawn, class APawn*& NewPawn); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft (Underlying native function: HandleExitAircraft 0x74618f8)
	void HandleExitAircraft(class AController*& ExitingController); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft (Underlying native function: HandleEnterAircraft 0x74618e4)
	void HandleEnterAircraft(); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount (Underlying native function: GetVictoryCrownsBestowedCount 0x29aa4a0)
	int GetVictoryCrownsBestowedCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount (Underlying native function: GetRoyalRoyaleAchievedCount 0x7461708)
	int GetRoyalRoyaleAchievedCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory (Underlying native function: GetCrownInPlayerInventory 0x74616e4)
	class UFortWorldItem* GetCrownInPlayerInventory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount (Underlying native function: DebugForceSetRoyalRoyaleAchievedCount 0x6e8edb4)
	void DebugForceSetRoyalRoyaleAchievedCount(int& NewRoyalRoyaleCount); // (Final | Exec | Native | Public)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData (Underlying native function: CacheAccountItemData 0x273fd14)
	void CacheAccountItemData(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem (Underlying native function: AuthoritySquadHasSeenCrownItem 0x7461620)
	bool AuthoritySquadHasSeenCrownItem(class UFortItem*& CrownItem, bool& bDropped); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem (Underlying native function: AuthorityHasSquadHeldCrownItem 0x7461590)
	bool AuthorityHasSquadHeldCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem (Underlying native function: AuthorityHasSquadDroppedCrownItem 0x7461500)
	bool AuthorityHasSquadDroppedCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem (Underlying native function: AuthorityHasHeldCrownItem 0x7461470)
	bool AuthorityHasHeldCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem (Underlying native function: AuthorityHasDroppedCrownItem 0x74613e0)
	bool AuthorityHasDroppedCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)
};

