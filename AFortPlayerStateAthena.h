// Class /Script/FortniteGame.FortPlayerStateAthena
// Size: 0x18b0
class AFortPlayerStateAthena : public AFortPlayerStateZone
{
	unsigned char unreflected_f40[0x14]; // 0xf40 (0x14) 
	int PersonalLobbyAction; // 0xf54 (0x4)
	struct FFortRespawnData RespawnData; // 0xf58 (0x40)
	unsigned char unreflected_f98[0x18]; // 0xf98 (0x18) 
	enum ETeamMemberState ReplicatedTeamMemberState; // 0xfb0 (0x1)
	enum ETeamMemberState TeamMemberState; // 0xfb1 (0x1)
	unsigned char unreflected_fb2[0x2]; // 0xfb2 (0x2) 
	float TeamMemberStateRepTime; // 0xfb4 (0x4)
	unsigned char unreflected_fb8[0x20]; // 0xfb8 (0x20) 
	struct FMulticastInlineDelegate OnTeamIndexChangedDelegate; // 0xfd8 (0x10)
	struct FMulticastInlineDelegate OnSquadIdChangedDelegate; // 0xfe8 (0x10)
	unsigned char unreflected_ff8[0x48]; // 0xff8 (0x48) 
	bool bHasWonAGame; // 0x1040 (0x1)
	unsigned char unreflected_1041[0x3]; // 0x1041 (0x3) 
	int TeamKillScore; // 0x1044 (0x4)
	struct TMap<class UAthenaGadgetItemDefinition*, int> KillsWhileAthenaGadgetEquippedMap; // 0x1048 (0x50)
	struct TMap<struct FString, float> DamageDealtToBigHealthProps; // 0x1098 (0x50)
	unsigned char TeamIndex; // 0x10e8 (0x1)
	unsigned char unreflected_10e9[0x3]; // 0x10e9 (0x3) 
	int TeamScorePlacement; // 0x10ec (0x4)
	int TeamScore; // 0x10f0 (0x4)
	int Place; // 0x10f4 (0x4)
	int DownScore; // 0x10f8 (0x4)
	int KillScore; // 0x10fc (0x4)
	int SeasonLevelUIDisplay; // 0x1100 (0x4)
	unsigned char unreflected_1104[0x4]; // 0x1104 (0x4) 
	int HumanKillScore; // 0x1108 (0x4)
	unsigned char unreflected_110c[0x40]; // 0x110c (0x40) 
	int AIKillCount; // 0x114c (0x4)
	unsigned char unreflected_1150[0x4]; // 0x1150 (0x4) 
	int NumChestsOpened; // 0x1154 (0x4)
	unsigned char unreflected_1158[0x4]; // 0x1158 (0x4) 
	int NumAmmoCansOpened; // 0x115c (0x4)
	unsigned char unreflected_1160[0x4]; // 0x1160 (0x4) 
	int NumSupplyDropsOpened; // 0x1164 (0x4)
	unsigned char unreflected_1168[0x4]; // 0x1168 (0x4) 
	int NumLlamasOpened; // 0x116c (0x4)
	unsigned char unreflected_1170[0x4]; // 0x1170 (0x4) 
	int NumForagedItemsConsumed; // 0x1174 (0x4)
	unsigned char unreflected_1178[0x4]; // 0x1178 (0x4) 
	int NumMinutesAlive; // 0x117c (0x4)
	unsigned char unreflected_1180[0x4]; // 0x1180 (0x4) 
	int NumBronzeCoinsCollected; // 0x1184 (0x4)
	unsigned char unreflected_1188[0x4]; // 0x1188 (0x4) 
	int NumSilverCoinsCollected; // 0x118c (0x4)
	unsigned char unreflected_1190[0x4]; // 0x1190 (0x4) 
	int NumGoldCoinsCollected; // 0x1194 (0x4)
	unsigned char unreflected_1198[0x4]; // 0x1198 (0x4) 
	int TotalPlayerScore; // 0x119c (0x4)
	struct FMulticastInlineDelegate PointsAddedToScore; // 0x11a0 (0x10)
	struct FMulticastInlineDelegate TeamScoreChanged; // 0x11b0 (0x10)
	struct FMulticastInlineDelegate TeamPlacementChanged; // 0x11c0 (0x10)
	struct FMulticastInlineDelegate PlaceChanged; // 0x11d0 (0x10)
	struct FMulticastInlineDelegate TeamAverageDamageChanged; // 0x11e0 (0x10)
	struct FMulticastInlineDelegate MatchAbandonStateChanged; // 0x11f0 (0x10)
	unsigned char unreflected_1200[0xa0]; // 0x1200 (0xa0) 
	unsigned char StormSurgeEffectCount; // 0x12a0 (0x1)
	unsigned char unreflected_12a1[0x1]; // 0x12a1 (0x1) 
	uint16_t TeamAverageDamageDealt; // 0x12a2 (0x2)
	unsigned char SquadId; // 0x12a4 (0x1)
	unsigned char bThankedBusDriver; // 0x12a5 (0x1)
	unsigned char bDidNotThankBusDriver; // 0x12a5 (0x1)
	unsigned char bUsingAnonymousMode; // 0x12a5 (0x1)
	unsigned char bUsingAnonymousCharacterMode; // 0x12a5 (0x1)
	unsigned char bShowingSeasonLevel; // 0x12a5 (0x1)
	unsigned char unreflected_12a6[0x2]; // 0x12a6 (0x2) 
	struct FText PlayerNameCustomOverride; // 0x12a8 (0x18)
	unsigned char bHidingOtherPlayersNames; // 0x12c0 (0x1)
	unsigned char unreflected_12c1[0x77]; // 0x12c1 (0x77) 
	bool bIsTalking; // 0x1338 (0x1)
	bool bIsMuted; // 0x1339 (0x1)
	unsigned char unreflected_133a[0x216]; // 0x133a (0x216) 
	struct FMulticastInlineDelegate OnPersistenceErrorTypeChanged; // 0x1550 (0x10)
	unsigned char unreflected_1560[0x20]; // 0x1560 (0x20) 
	struct FDetailedMetricInformation MetricInformation; // 0x1580 (0x10)
	struct FSimpleMetricInformation SimpleMetricInformation; // 0x1590 (0x78)
	int SecondsAlive; // 0x1608 (0x4)
	int TimeOfPawnCreation; // 0x160c (0x4)
	unsigned char unreflected_1610[0x4]; // 0x1610 (0x4) 
	bool bIsDisconnected; // 0x1614 (0x1)
	unsigned char unreflected_1615[0x3b]; // 0x1615 (0x3b) 
	class UTexture2D* GameModeIcon; // 0x1650 (0x8)
	struct FDeathInfo DeathInfo; // 0x1658 (0xa0)
	struct FChangeTeamInfo ChangeTeamInfo; // 0x16f8 (0x28)
	unsigned char unreflected_1720[0x60]; // 0x1720 (0x60) 
	struct FFortResurrectionData ResurrectionChipAvailable; // 0x1780 (0x28)
	bool bResurrectingNow; // 0x17a8 (0x1)
	bool bRespawningFromRespawnData; // 0x17a9 (0x1)
	unsigned char unreflected_17aa[0x2]; // 0x17aa (0x2) 
	int RebootCounter; // 0x17ac (0x4)
	struct TWeakObjectPtr<class ABuildingGameplayActorSpawnMachine> InteractingRebootVan; // 0x17b0 (0x8)
	unsigned char unreflected_17b8[0x4]; // 0x17b8 (0x4) 
	enum EMatchAbandonState MatchAbandonState; // 0x17bc (0x1)
	unsigned char unreflected_17bd[0x1]; // 0x17bd (0x1) 
	unsigned char bIsAnAthenaGameParticipant; // 0x17be (0x1)
	unsigned char bIsContributingToOverbudgetHeatmap; // 0x17be (0x1)
	unsigned char unreflected_17bf[0x1]; // 0x17bf (0x1) 
	struct FUniqueNetIdRepl BotUniqueId; // 0x17c0 (0x30)
	bool bPreserveSquad; // 0x17f0 (0x1)
	unsigned char unreflected_17f1[0x1f]; // 0x17f1 (0x1f) 
	enum EKeepPlayingTogetherVotingStatus KeepPlayingTogetherVotingStatus; // 0x1810 (0x1)
	unsigned char unreflected_1811[0x1f]; // 0x1811 (0x1f) 
	struct FString KeepPlayingTogetherMatchmakingRegion; // 0x1830 (0x10)
	unsigned char unreflected_1840[0x18]; // 0x1840 (0x18) 
	unsigned char InitialSquadSize; // 0x1858 (0x1)
	unsigned char SquadSizeIncrements; // 0x1859 (0x1)
	unsigned char SquadSizeDecrements; // 0x185a (0x1)
	unsigned char unreflected_185b[0x45]; // 0x185b (0x45) 
	class UFortPlayerStateComponent_AthenaQuests* PlayerStateAthenaQuestsComponent; // 0x18a0 (0x8)
	enum ECreativePersistenceErrorTypes PersistenceErrorType; // 0x18a8 (0x1)
	unsigned char padding_18a9[0x7]; // 0x18a9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateAthena.ToDeathCause (Underlying native function: ToDeathCause 0x815fd14)
	static enum EDeathCause ToDeathCause(struct FGameplayTagContainer& InTags, bool& bWasDBNO); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateAthena.SetIsContributingToOverbudgetHeatmap (Underlying native function: SetIsContributingToOverbudgetHeatmap 0x815f734)
	void SetIsContributingToOverbudgetHeatmap(bool& bContributingToOverbudget); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ServerSetKeepPlayingTogetherMatchmakingRegion (Underlying native function: ServerSetKeepPlayingTogetherMatchmakingRegion 0x815f3e4)
	void ServerSetKeepPlayingTogetherMatchmakingRegion(struct FString& NewRegion); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Server_TogglePreserveSquad (Underlying native function: Server_TogglePreserveSquad 0x815f6e8)
	void ServerTogglePreserveSquad(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Server_SetKeepPlayingTogetherVotingStatus (Underlying native function: Server_SetKeepPlayingTogetherVotingStatus 0x815f64c)
	void ServerSetKeepPlayingTogetherVotingStatus(enum EKeepPlayingTogetherVotingStatus& NewStatus); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Server_SetCanEditCreativeIsland (Underlying native function: Server_SetCanEditCreativeIsland 0x815f53c)
	void ServerSetCanEditCreativeIsland(bool& bCanEdit, struct TArray<struct FString>& WhiteList); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnSquadSpecificContainerSpawned (Underlying native function: OnSquadSpecificContainerSpawned 0x815f274)
	void OnSquadSpecificContainerSpawned(class ABuildingContainer*& SpawnedContainer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnSquadSpecificContainerDestroyed (Underlying native function: OnSquadSpecificContainerDestroyed 0x815f1e8)
	void OnSquadSpecificContainerDestroyed(class ABuildingContainer*& DestroyedContainer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateAthena.OnSimplePlayerMetricInformationUpdated__DelegateSignature (Has no native function)
	void OnSimplePlayerMetricInformationUpdatedDelegateSignature(class APlayerState*& Client, struct FSimpleMetricInformation& Information); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TotalPlayerScore (Underlying native function: OnRep_TotalPlayerScore 0x815f018)
	void OnRepTotalPlayerScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ThankedBusDriver (Underlying native function: OnRep_ThankedBusDriver 0x27cc4c8)
	void OnRepThankedBusDriver(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamScorePlacement (Underlying native function: OnRep_TeamScorePlacement 0x815efc8)
	void OnRepTeamScorePlacement(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamScore (Underlying native function: OnRep_TeamScore 0x815ef94)
	void OnRepTeamScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamKillScore (Underlying native function: OnRep_TeamKillScore 0x2426a30)
	void OnRepTeamKillScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamIndex (Underlying native function: OnRep_TeamIndex 0x24feb84)
	void OnRepTeamIndex(unsigned char& OldVal); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamAverageDamageDealt (Underlying native function: OnRep_TeamAverageDamageDealt 0x815ef1c)
	void OnRepTeamAverageDamageDealt(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_StormSurgeEffectCount (Underlying native function: OnRep_StormSurgeEffectCount 0x815ef08)
	void OnRepStormSurgeEffectCount(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_SquadId (Underlying native function: OnRep_SquadId 0x1598d88)
	void OnRepSquadId(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_SimpleMetricInformation (Underlying native function: OnRep_SimpleMetricInformation 0x815eea8)
	void OnRepSimpleMetricInformation(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_SeasonLevelUIDisplay (Underlying native function: OnRep_SeasonLevelUIDisplay 0x2576900)
	void OnRepSeasonLevelUIDisplay(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ResurrectionChipReplicated (Underlying native function: OnRep_ResurrectionChipReplicated 0x2594a74)
	void OnRepResurrectionChipReplicated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ResurrectingNow (Underlying native function: OnRep_ResurrectingNow 0x26782dc)
	void OnRepResurrectingNow(bool& bPreviousResurrectingNow); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ReplicatedTeamMemberState (Underlying native function: OnRep_ReplicatedTeamMemberState 0x27b5f0c)
	void OnRepReplicatedTeamMemberState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_RebootCounter (Underlying native function: OnRep_RebootCounter 0x148d448)
	void OnRepRebootCounter(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_PreserveSquad (Underlying native function: OnRep_PreserveSquad 0x815ee84)
	void OnRepPreserveSquad(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_Place (Underlying native function: OnRep_Place 0x2152b04)
	void OnRepPlace(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_PersistenceErrorType (Underlying native function: OnRep_PersistenceErrorType 0x815ee4c)
	void OnRepPersistenceErrorType(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumSupplyDropsOpened (Underlying native function: OnRep_NumSupplyDropsOpened 0x815ee38)
	void OnRepNumSupplyDropsOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumSilverCoinsCollected (Underlying native function: OnRep_NumSilverCoinsCollected 0x815ee24)
	void OnRepNumSilverCoinsCollected(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumMinutesAlive (Underlying native function: OnRep_NumMinutesAlive 0x815ee10)
	void OnRepNumMinutesAlive(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumLlamasOpened (Underlying native function: OnRep_NumLlamasOpened 0x815edfc)
	void OnRepNumLlamasOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumGoldCoinsCollected (Underlying native function: OnRep_NumGoldCoinsCollected 0x815ede8)
	void OnRepNumGoldCoinsCollected(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumForagedItemsConsumed (Underlying native function: OnRep_NumForagedItemsConsumed 0x815edd4)
	void OnRepNumForagedItemsConsumed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumChestsOpened (Underlying native function: OnRep_NumChestsOpened 0x815edc0)
	void OnRepNumChestsOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumBronzeCoinsCollected (Underlying native function: OnRep_NumBronzeCoinsCollected 0x815edac)
	void OnRepNumBronzeCoinsCollected(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumAmmoCansOpened (Underlying native function: OnRep_NumAmmoCansOpened 0x815ed98)
	void OnRepNumAmmoCansOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_MetricInformation (Underlying native function: OnRep_MetricInformation 0x815ed70)
	void OnRepMetricInformation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_MatchAbandonState (Underlying native function: OnRep_MatchAbandonState 0x815ecd8)
	void OnRepMatchAbandonState(enum EMatchAbandonState& PrevMatchAbandonState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_Kills (Underlying native function: OnRep_Kills 0xe8860c)
	void OnRepKills(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_KeepPlayingTogetherVotingStatus (Underlying native function: OnRep_KeepPlayingTogetherVotingStatus 0x1adf198)
	void OnRepKeepPlayingTogetherVotingStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_KeepPlayingTogetherMatchmakingRegion (Underlying native function: OnRep_KeepPlayingTogetherMatchmakingRegion 0x23e12bc)
	void OnRepKeepPlayingTogetherMatchmakingRegion(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_IsContributingToOverbudgetHeatmap (Underlying native function: OnRep_IsContributingToOverbudgetHeatmap 0x815ec8c)
	void OnRepIsContributingToOverbudgetHeatmap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_InteractingRebootVan (Underlying native function: OnRep_InteractingRebootVan 0x815ec6c)
	void OnRepInteractingRebootVan(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_Downs (Underlying native function: OnRep_Downs 0x273fd14)
	void OnRepDowns(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_DidNotThankBusDriver (Underlying native function: OnRep_DidNotThankBusDriver 0x815ec58)
	void OnRepDidNotThankBusDriver(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_DeathInfo (Underlying native function: OnRep_DeathInfo 0x25c3310)
	void OnRepDeathInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ChangeTeamInfo (Underlying native function: OnRep_ChangeTeamInfo 0x815ec10)
	void OnRepChangeTeamInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_AIKills (Underlying native function: OnRep_AIKills 0x815ebfc)
	void OnRepAIKills(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateAthena.OnPlayerMetricInformationUpdated__DelegateSignature (Has no native function)
	void OnPlayerMetricInformationUpdatedDelegateSignature(class APlayerState*& Client, struct FDetailedMetricInformation& Information); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnInteractionEventOccurred (Underlying native function: OnInteractionEventOccurred 0x815eb44)
	void OnInteractionEventOccurred(struct FGameplayTagContainer& InteractionTargetTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateAthena.NetMulticastTriggerCustomFeedMessageWithContext (Underlying native function: NetMulticastTriggerCustomFeedMessageWithContext 0x815ea50)
	void NetMulticastTriggerCustomFeedMessageWithContext(struct FGameplayTag& CustomFeedMessageGeneratorID, struct FCustomFeedMessageContext& Context); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.NetMulticastTriggerCustomFeedMessage (Underlying native function: NetMulticastTriggerCustomFeedMessage 0x815e9cc)
	void NetMulticastTriggerCustomFeedMessage(struct FGameplayTag& CustomFeedMessageGeneratorID); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsSquadDead (Underlying native function: IsSquadDead 0x815e89c)
	bool IsSquadDead(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsResurrectionChipAvailable (Underlying native function: IsResurrectionChipAvailable 0x815e804)
	bool IsResurrectionChipAvailable(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsResurrectingNow (Underlying native function: IsResurrectingNow 0x815e7ec)
	bool IsResurrectingNow(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsRespawningWithRespawnData (Underlying native function: IsRespawningWithRespawnData 0x815e7d4)
	bool IsRespawningWithRespawnData(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsInSquad (Underlying native function: IsInSquad 0x815e3cc)
	bool IsInSquad(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsDisconnected (Underlying native function: IsDisconnected 0x815dec4)
	bool IsDisconnected(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetTransientQuestsComponent (Underlying native function: GetTransientQuestsComponent 0x815d1a8)
	class UFortControllerComponent_TransientQuests* GetTransientQuestsComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetTeam (Underlying native function: GetTeam 0x815cff8)
	unsigned char GetTeam(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetSquadMemberIndex (Underlying native function: GetSquadMemberIndex 0x815cfd4)
	int GetSquadMemberIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetSquadID (Underlying native function: GetSquadID 0x815cfbc)
	unsigned char GetSquadID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetSocialAvatarBrush (Underlying native function: GetSocialAvatarBrush 0x815cdf8)
	struct TWeakObjectPtr<class UTexture2D> GetSocialAvatarBrush(bool& bSmallImage); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetResurrectionChipExpirationLength (Underlying native function: GetResurrectionChipExpirationLength 0x815cde0)
	float GetResurrectionChipExpirationLength(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetRemainingResurrectionChipExpirationTime (Underlying native function: GetRemainingResurrectionChipExpirationTime 0x815cda0)
	float GetRemainingResurrectionChipExpirationTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetPinColorBySquadMemberIndex (Underlying native function: GetPinColorBySquadMemberIndex 0x815cc60)
	static struct FLinearColor GetPinColorBySquadMemberIndex(int& SquadIndex); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetPinColor (Underlying native function: GetPinColor 0x815cc28)
	struct FLinearColor GetPinColor(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetKillScore (Underlying native function: GetKillScore 0x815c870)
	int GetKillScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetInventoriesRequiredWithNoPersistence (Underlying native function: GetInventoriesRequiredWithNoPersistence 0x815c83c)
	bool GetInventoriesRequiredWithNoPersistence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetInventoriesInNonPersistenceMode (Underlying native function: GetInventoriesInNonPersistenceMode 0x815c820)
	bool GetInventoriesInNonPersistenceMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetInventoriesInLocalOnlyMode (Underlying native function: GetInventoriesInLocalOnlyMode 0x815c804)
	bool GetInventoriesInLocalOnlyMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetDeathInfo (Underlying native function: GetDeathInfo 0x815c6a4)
	struct FDeathInfo GetDeathInfo(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetCurrentPersistenceErrorType (Underlying native function: GetCurrentPersistenceErrorType 0x815c68c)
	enum ECreativePersistenceErrorTypes GetCurrentPersistenceErrorType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateAthena.DynamicPersistenceErrorChange__DelegateSignature (Has no native function)
	void DynamicPersistenceErrorChangeDelegateSignature(class AFortPlayerStateAthena*& FortPlayerState, enum ECreativePersistenceErrorTypes& NewValue); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportTournamentStatUpdate (Underlying native function: ClientReportTournamentStatUpdate 0x815bf04)
	void ClientReportTournamentStatUpdate(struct FFortTournamentStatInfo& TournamentStatInfo); // (Net | NetReliable | Native | Event | Public | NetClient | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportTeamKill (Underlying native function: ClientReportTeamKill 0x815be80)
	void ClientReportTeamKill(int& TeamKills); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportKill (Underlying native function: ClientReportKill 0x815bdfc)
	void ClientReportKill(class AFortPlayerStateAthena*& Player); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportDBNO (Underlying native function: ClientReportDBNO 0x815bd78)
	void ClientReportDBNO(class AFortPlayerStateAthena*& Player); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientNotifyMatchEntered (Underlying native function: ClientNotifyMatchEntered 0x815bc94)
	void ClientNotifyMatchEntered(struct FEventTournamentIds& EventIds); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientAddKillFeedErrorMessage (Underlying native function: ClientAddKillFeedErrorMessage 0x815bc04)
	void ClientAddKillFeedErrorMessage(struct TArray<struct FFortCreativeMessageDispatcherErrorMessage>& ErrorMessages); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Client_OnNewLevel (Underlying native function: Client_OnNewLevel 0x815c064)
	void ClientOnNewLevel(int& NewLevel); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.CanEditCreativeIsland (Underlying native function: CanEditCreativeIsland 0x815baec)
	bool CanEditCreativeIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.CanBeResurrected (Underlying native function: CanBeResurrected 0x815bac8)
	bool CanBeResurrected(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

