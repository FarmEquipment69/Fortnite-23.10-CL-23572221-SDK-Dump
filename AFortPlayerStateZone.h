// Class /Script/FortniteGame.FortPlayerStateZone
// Size: 0xf40
class AFortPlayerStateZone : public AFortPlayerState
{
	struct FMulticastInlineDelegate OnCurrentPawnChanged; // 0xb50 (0x10)
	unsigned char unreflected_b60[0x18]; // 0xb60 (0x18) 
	struct TWeakObjectPtr<class AFortPlayerStateZone> SpectatingTarget; // 0xb78 (0x8)
	struct FFortSpectatorZoneArray Spectators; // 0xb80 (0x120)
	unsigned char unreflected_ca0[0x10]; // 0xca0 (0x10) 
	struct FMulticastInlineDelegate OnSpectatorsRemovedEvent; // 0xcb0 (0x10)
	struct FMulticastInlineDelegate OnSpectatorCountChangedEvent; // 0xcc0 (0x10)
	struct FMulticastInlineDelegate OnSpectatingTargetChangedEvent; // 0xcd0 (0x10)
	struct FMulticastInlineDelegate OnBeginSpectatingEvent; // 0xce0 (0x10)
	unsigned char unreflected_cf0[0x18]; // 0xcf0 (0x18) 
	enum EFortKickReason KickedFromSessionReason; // 0xd08 (0x1)
	unsigned char unreflected_d09[0x3]; // 0xd09 (0x3) 
	struct FReplicatedStatValues* RSZoneOld[0x23]; // 0xd0c (0x8) (ARRAY) 
	unsigned char unreflected_e24[0x4]; // 0xe24 (0x4) 
	class AFortCarriedObject* CarriedObject; // 0xe28 (0x8)
	int NumRejoins; // 0xe30 (0x4)
	int OldTotalScoreStat; // 0xe34 (0x4)
	unsigned char unreflected_e38[0x18]; // 0xe38 (0x18) 
	bool bInvincibleDueToUI; // 0xe50 (0x1)
	unsigned char unreflected_e51[0x3]; // 0xe51 (0x3) 
	float CurrentHealth; // 0xe54 (0x4)
	float MaxHealth; // 0xe58 (0x4)
	float CurrentShield; // 0xe5c (0x4)
	float MaxShield; // 0xe60 (0x4)
	float CurrentOvershield; // 0xe64 (0x4)
	float MaxOvershield; // 0xe68 (0x4)
	float CurrentSignalInStorm; // 0xe6c (0x4)
	float MaxSignalInStorm; // 0xe70 (0x4)
	bool bOvershieldBarVisible; // 0xe74 (0x1)
	unsigned char unreflected_e75[0x3]; // 0xe75 (0x3) 
	struct FMulticastInlineDelegate OnOvershieldVisibilityChanged; // 0xe78 (0x10)
	unsigned char unreflected_e88[0x8]; // 0xe88 (0x8) 
	struct TArray<struct FAccumulatedItemEntry> AccumulatedItems; // 0xe90 (0x10)
	struct FMulticastInlineDelegate OnAccumulatedItemsChanged; // 0xea0 (0x10)
	struct TArray<struct FSimulatedAttributeEntry> SimulatedAttributes; // 0xeb0 (0x10)
	unsigned char unreflected_ec0[0x8]; // 0xec0 (0x8) 
	class UFortGadgetItemDefinition* PendingDestroyedGadgetItemDefinition; // 0xec8 (0x8)
	unsigned char bInAircraft; // 0xed0 (0x1)
	unsigned char bHasEverSkydivedFromBus; // 0xed0 (0x1)
	unsigned char bHasEverSkydivedFromBusAndLanded; // 0xed0 (0x1)
	unsigned char unreflected_ed1[0x7]; // 0xed1 (0x7) 
	struct TArray<class UFortItemDefinition*> QuickbarEquippedItems; // 0xed8 (0x10)
	unsigned char padding_ee8[0x58]; // 0xee8 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateZone.ShouldOvershieldBarBeVisible (Underlying native function: ShouldOvershieldBarBeVisible 0x8bbeb74)
	bool ShouldOvershieldBarBeVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.SetOvershieldBarVisible (Underlying native function: SetOvershieldBarVisible 0x8bbea70)
	void SetOvershieldBarVisible(bool& NewVisible); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateZone.ServerSetInAircraft (Underlying native function: ServerSetInAircraft 0x8bbe8ec)
	void ServerSetInAircraft(bool& bNewInAircraft); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_SpectatingTarget (Underlying native function: OnRep_SpectatingTarget 0x8bbe634)
	void OnRepSpectatingTarget(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_QuickbarEquippedItems (Underlying native function: OnRep_QuickbarEquippedItems 0x2e16a00)
	void OnRepQuickbarEquippedItems(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_OvershieldBarVisisble (Underlying native function: OnRep_OvershieldBarVisisble 0x8bbe56c)
	void OnRepOvershieldBarVisisble(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_NumRejoins (Underlying native function: OnRep_NumRejoins 0x8bbe558)
	void OnRepNumRejoins(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_AccumulatedItems (Underlying native function: OnRep_AccumulatedItems 0x8bbe384)
	void OnRepAccumulatedItems(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.MulticastTriggerOnGadgetTrackedAttributeDestroyedFX (Underlying native function: MulticastTriggerOnGadgetTrackedAttributeDestroyedFX 0x8bbdb00)
	void MulticastTriggerOnGadgetTrackedAttributeDestroyedFX(class UFortGadgetItemDefinition*& GadgetItemDefinition); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.IsPlayerDead (Underlying native function: IsPlayerDead 0x23afa94)
	bool IsPlayerDead(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.HasEverSkydivedFromBusAndLanded (Underlying native function: HasEverSkydivedFromBusAndLanded 0x8bbda84)
	bool HasEverSkydivedFromBusAndLanded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.HasEverSkydivedFromBus (Underlying native function: HasEverSkydivedFromBus 0x8bbda68)
	bool HasEverSkydivedFromBus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetSpectatorCount (Underlying native function: GetSpectatorCount 0x8bbd9f0)
	int GetSpectatorCount(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetSimulatedAttributeValue (Underlying native function: GetSimulatedAttributeValue 0x8bbd8bc)
	float GetSimulatedAttributeValue(struct FGameplayAttribute& Attribute, float& DefaultValue); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetPlayerNameForStreaming (Underlying native function: GetPlayerNameForStreaming 0x8bbd818)
	struct FString GetPlayerNameForStreaming(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetOvershields (Underlying native function: GetOvershields 0x8bbd674)
	void GetOvershields(float& Overshield, float& OvershieldMax); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetNumOfAccumulatedItem (Underlying native function: GetNumOfAccumulatedItem 0x8bbd5e4)
	int GetNumOfAccumulatedItem(class UFortWorldItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetNumOfAccumulatedBluGlo (Underlying native function: GetNumOfAccumulatedBluGlo 0x8bbd5c0)
	int GetNumOfAccumulatedBluGlo(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetHealthAndShields (Underlying native function: GetHealthAndShields 0x8bbd41c)
	void GetHealthAndShields(float& Health, float& HealthMax, float& Shield, float& ShieldMax); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

