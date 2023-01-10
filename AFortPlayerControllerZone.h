// Class /Script/FortniteGame.FortPlayerControllerZone
// Size: 0x3960
class AFortPlayerControllerZone : public AFortPlayerControllerGameplay
{
	struct FMulticastInlineDelegate OnBeginSkydiving; // 0x3300 (0x10)
	struct FMulticastInlineDelegate OnEndSkydiving; // 0x3310 (0x10)
	struct FMulticastInlineDelegate OnBeginSkydivingFromBus; // 0x3320 (0x10)
	struct FMulticastInlineDelegate OnEndSkydivingFromBus; // 0x3330 (0x10)
	struct FMulticastInlineDelegate OnVehicleSeatTransitionTargetIndexChange; // 0x3340 (0x10)
	struct FMulticastInlineDelegate OnStartedRespawn; // 0x3350 (0x10)
	bool bDontChangeReticleColorForEnemy; // 0x3360 (0x1)
	unsigned char unreflected_3361[0x3]; // 0x3361 (0x3) 
	float LastVehicleSeatSwitchTime; // 0x3364 (0x4)
	unsigned char unreflected_3368[0x8]; // 0x3368 (0x8) 
	class APawn* PlayerToSpectateOnDeath; // 0x3370 (0x8)
	unsigned char unreflected_3378[0x8]; // 0x3378 (0x8) 
	struct TSet<struct FGuid> GadgetTrackedAttributeItemInstanceIds; // 0x3380 (0x50)
	unsigned char unreflected_33d0[0x78]; // 0x33d0 (0x78) 
	class UFortControllerComponent_TriggerHaptics* TriggerHapticsComponent; // 0x3448 (0x8)
	struct TArray<class UObject*> InstantSlideInputSources; // 0x3450 (0x10)
	class UInputComponent* DeathInputComponent; // 0x3460 (0x8)
	class UInputComponent* RemoteControlledPawnInputComponent; // 0x3468 (0x8)
	unsigned char unreflected_3470[0x10]; // 0x3470 (0x10) 
	bool bUseDeferredFireInputs; // 0x3480 (0x1)
	unsigned char unreflected_3481[0x37]; // 0x3481 (0x37) 
	struct FFortPlayerDeathReport PlayerDeathReport; // 0x34b8 (0x98)
	bool bClientNotifiedOfPawnDied; // 0x3550 (0x1)
	bool bEnterCameraModeOnDeath; // 0x3551 (0x1)
	enum ELeecherStatus PlayerLeecherStatus; // 0x3552 (0x1)
	unsigned char unreflected_3553[0x1d]; // 0x3553 (0x1d) 
	struct FMulticastInlineDelegate OnPossessedPawnDied; // 0x3570 (0x10)
	unsigned char unreflected_3580[0xc0]; // 0x3580 (0xc0) 
	struct TScriptInterface<class IFortHUDTargetUnderReticleInterface> HUDTargetUnderReticle; // 0x3640 (0x10)
	struct TArray<struct FUniqueNetIdRepl> RejoinablePartyMembers; // 0x3650 (0x10)
	unsigned char unreflected_3660[0x10]; // 0x3660 (0x10) 
	float LastScoreEarnedTime; // 0x3670 (0x4)
	unsigned char unreflected_3674[0x1c]; // 0x3674 (0x1c) 
	int VehicleSeatTransitionTargetIndex; // 0x3690 (0x4)
	unsigned char unreflected_3694[0x14]; // 0x3694 (0x14) 
	struct FString PurchaseNotificationId; // 0x36a8 (0x10)
	unsigned char unreflected_36b8[0x18]; // 0x36b8 (0x18) 
	struct FString VoiceChatChannel; // 0x36d0 (0x10)
	unsigned char unreflected_36e0[0x90]; // 0x36e0 (0x90) 
	float VoiceChatCachedTokenLifetimeSeconds; // 0x3770 (0x4)
	unsigned char unreflected_3774[0x1c]; // 0x3774 (0x1c) 
	struct TArray<class AActor*> DesyncNotifyList; // 0x3790 (0x10)
	unsigned char unreflected_37a0[0x68]; // 0x37a0 (0x68) 
	bool bJetpackExecuteToggle; // 0x3808 (0x1)
	bool bAllowMovementCancellableActionsWithIceFeet; // 0x3809 (0x1)
	bool bAllowMovementCancellableActionsDuringInputWithIceFeet; // 0x380a (0x1)
	unsigned char unreflected_380b[0x1]; // 0x380b (0x1) 
	float MoveForwardOnlyEmoteCancelBackwardsThreshold; // 0x380c (0x4)
	float MoveForwardOnlyEmoteCancelStrafeThreshold; // 0x3810 (0x4)
	unsigned char unreflected_3814[0x4]; // 0x3814 (0x4) 
	struct FScalableFloat MovementCancellableActionLeashLength; // 0x3818 (0x28)
	struct FVector MovementCancellableActionLeashLocation; // 0x3840 (0x18)
	struct FVector MovementCancellableActionStartingLeashLocation; // 0x3858 (0x18)
	struct FScalableFloat UpdateSurfaceTypeMinimumLength; // 0x3870 (0x28)
	struct FScalableFloat UpdateSurfaceTypeMinimumDelay; // 0x3898 (0x28)
	unsigned char unreflected_38c0[0x18]; // 0x38c0 (0x18) 
	class UClass* MovementCancellableActionComponentClass; // 0x38d8 (0x8)
	unsigned char padding_38e0[0x80]; // 0x38e0 (0x80)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerZone.TestVehicleVelocity (Underlying native function: TestVehicleVelocity 0x6e8f5f8)
	void TestVehicleVelocity(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.SpectateOnDeath (Underlying native function: SpectateOnDeath 0x8b9d8a0)
	void SpectateOnDeath(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.SetVehicleHealth (Underlying native function: SetVehicleHealth 0x6df7bc0)
	void SetVehicleHealth(float& NewHealth); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerVoiceChatRequestJoinToken (Underlying native function: ServerVoiceChatRequestJoinToken 0x8b9d01c)
	void ServerVoiceChatRequestJoinToken(int& RequestId, struct FString& ChannelName); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSubmitGameplayVote (Underlying native function: ServerSubmitGameplayVote 0x8b9cf54)
	void ServerSubmitGameplayVote(enum EFortVoteType& VoteType, int& VoteDecision); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSpectatePlayerState (Underlying native function: ServerSpectatePlayerState 0x8b9ce5c)
	void ServerSpectatePlayerState(class AFortPlayerStateZone*& PlayerToSpectate, bool& bAllowStateChange); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSpectateActor (Underlying native function: ServerSpectateActor 0x8b9cd64)
	void ServerSpectateActor(class AActor*& NewViewTarget, bool& bAllowStateChange); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSetVehicleHealth (Underlying native function: ServerSetVehicleHealth 0x8b9ccdc)
	void ServerSetVehicleHealth(float& NewHealth); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSetShouldDisablePlayerTeleportingDuringMissionResults (Underlying native function: ServerSetShouldDisablePlayerTeleportingDuringMissionResults 0x8b9ccc4)
	void ServerSetShouldDisablePlayerTeleportingDuringMissionResults(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSendPartyJoinInfoToPlayer (Underlying native function: ServerSendPartyJoinInfoToPlayer 0x8b9ca44)
	void ServerSendPartyJoinInfoToPlayer(struct FUniqueNetIdRepl& RecipientId, struct FString& JoinInfoStr); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSendLoadoutConfig (Underlying native function: ServerSendLoadoutConfig 0x8b9c96c)
	void ServerSendLoadoutConfig(int& LoadoutSeed, struct TArray<unsigned char>& Loadout); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerRequestSeatChange (Underlying native function: ServerRequestSeatChange 0x8b9c8e8)
	void ServerRequestSeatChange(int& TargetSeatIndex); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerRequestLoadoutRefresh (Underlying native function: ServerRequestLoadoutRefresh 0x8b9c864)
	void ServerRequestLoadoutRefresh(bool& bForceResfresh); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerPurchaseCatalogEntry (Underlying native function: ServerPurchaseCatalogEntry 0x8b9c038)
	void ServerPurchaseCatalogEntry(struct FString& GameNamespace, struct FString& OfferId, struct FString& DevName, struct FCatalogItemPrice& Price, struct FString& AppStoreOfferId, struct FString& EpicOfferId, int& Quantity, int& ExpectedPrice, struct FString& NotificationId); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerEndGameplayVote (Underlying native function: ServerEndGameplayVote 0x8b9bfb4)
	void ServerEndGameplayVote(enum EFortVoteType& VoteType); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerDetachFromRemoteControlledPawn (Underlying native function: ServerDetachFromRemoteControlledPawn 0x8b9bf9c)
	void ServerDetachFromRemoteControlledPawn(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerDestroyFromRemoteControlledPawn (Underlying native function: ServerDestroyFromRemoteControlledPawn 0x8b9bf84)
	void ServerDestroyFromRemoteControlledPawn(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerDebugSendTagDiscrepancyRequest (Underlying native function: ServerDebugSendTagDiscrepancyRequest 0x8b9bf38)
	void ServerDebugSendTagDiscrepancyRequest(); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerBeginGameplayVote (Underlying native function: ServerBeginGameplayVote 0x8b9b92c)
	void ServerBeginGameplayVote(enum EFortVoteType& VoteType, struct FFortVoteConfig& VoteConfig); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerAttemptExitVehicle (Underlying native function: ServerAttemptExitVehicle 0x8b9b82c)
	void ServerAttemptExitVehicle(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerActivateMission (Underlying native function: ServerActivateMission 0x8b9b674)
	void ServerActivateMission(); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.RewindVehicle (Underlying native function: RewindVehicle 0x6e8f5f8)
	void RewindVehicle(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ResurrectPlayer (Underlying native function: ResurrectPlayer 0x8b9b818)
	void ResurrectPlayer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.RespawnPlayer (Underlying native function: RespawnPlayer 0x8b9b800)
	void RespawnPlayer(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ResetExecuteJetpackToggle (Underlying native function: ResetExecuteJetpackToggle 0x8b9b6ac)
	void ResetExecuteJetpackToggle(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.PushDeathInputComponent (Underlying native function: PushDeathInputComponent 0x8b9b648)
	void PushDeathInputComponent(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.PopDeathInputComponent (Underlying native function: PopDeathInputComponent 0x8b9b614)
	void PopDeathInputComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.OnRep_VoiceChatChannel (Underlying native function: OnRep_VoiceChatChannel 0x8b9b088)
	void OnRepVoiceChatChannel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.KillAllVehicles (Underlying native function: KillAllVehicles 0x66e4ab4)
	void KillAllVehicles(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsUsingAnonymousMode (Underlying native function: IsUsingAnonymousMode 0x8b9ac0c)
	bool IsUsingAnonymousMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsUsingAnonymousCharacterMode (Underlying native function: IsUsingAnonymousCharacterMode 0x8b9abd0)
	bool IsUsingAnonymousCharacterMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsShowingSeasonLevel (Underlying native function: IsShowingSeasonLevel 0x8b9ab94)
	bool IsShowingSeasonLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsClientNotifiedOfPawnDied (Underlying native function: IsClientNotifiedOfPawnDied 0x8b9a964)
	bool IsClientNotifiedOfPawnDied(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.GetVehicleSeatTransitionTargetIndex (Underlying native function: GetVehicleSeatTransitionTargetIndex 0x8b9a584)
	int GetVehicleSeatTransitionTargetIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.DumpPhysicsVehicleBuffer (Underlying native function: DumpPhysicsVehicleBuffer 0x6e8f5f8)
	void DumpPhysicsVehicleBuffer(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.DisableRangedWeaponScopeFX (Underlying native function: DisableRangedWeaponScopeFX 0x8b99cd4)
	void DisableRangedWeaponScopeFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientVoiceChatSendJoinToken (Underlying native function: ClientVoiceChatSendJoinToken 0x8b9985c)
	void ClientVoiceChatSendJoinToken(int& RequestId, bool& bSuccess, struct FString& Error, struct FString& Token, struct FString& ChannelName); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientUpdatePlaylistFlags (Underlying native function: ClientUpdatePlaylistFlags 0x8b997c8)
	void ClientUpdatePlaylistFlags(struct TArray<unsigned char>& Buffer); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientSendPartyJoinInfoToPlayer (Underlying native function: ClientSendPartyJoinInfoToPlayer 0x8b99670)
	void ClientSendPartyJoinInfoToPlayer(struct FString& JoinInfoStr); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientPresentGameplayVote (Underlying native function: ClientPresentGameplayVote 0x8b99510)
	void ClientPresentGameplayVote(uint32_t& Payload); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnZoneEndScoreReports (Underlying native function: ClientOnZoneEndScoreReports 0x8b99480)
	void ClientOnZoneEndScoreReports(struct TArray<struct FFortPlayerScoreReport>& ScoreReports); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnSpawned (Underlying native function: ClientOnPawnSpawned 0x8b99468)
	void ClientOnPawnSpawned(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnRevived (Underlying native function: ClientOnPawnRevived 0x8b993e4)
	void ClientOnPawnRevived(class AController*& EventInstigator); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnDied (Underlying native function: ClientOnPawnDied 0x8b9932c)
	void ClientOnPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientHandlePurchaseCatalogEntryFailure (Underlying native function: ClientHandlePurchaseCatalogEntryFailure 0x8b99314)
	void ClientHandlePurchaseCatalogEntryFailure(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientHandleCatalogOutOfDate (Underlying native function: ClientHandleCatalogOutOfDate 0x8b992fc)
	void ClientHandleCatalogOutOfDate(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientDebugRecieveTagDiscrepancyResponse (Underlying native function: ClientDebugRecieveTagDiscrepancyResponse 0x8b99128)
	void ClientDebugRecieveTagDiscrepancyResponse(struct TArray<unsigned char>& CompressedTags1, struct TArray<unsigned char>& CompressedTags2, struct TArray<unsigned char>& CompressedTags3, struct TArray<unsigned char>& CompressedTags4); // (Final | Net | NetReliable | Native | Event | Private | NetClient | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientClearDeathNotification (Underlying native function: ClientClearDeathNotification 0x8b9905c)
	void ClientClearDeathNotification(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientAckLoadoutConfig (Underlying native function: ClientAckLoadoutConfig 0x8b98efc)
	void ClientAckLoadoutConfig(int& LoadoutSeed); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.AreResurrectionAndRespawnTimeRemainingValid (Underlying native function: AreResurrectionAndRespawnTimeRemainingValid 0x8b98b0c)
	bool AreResurrectionAndRespawnTimeRemainingValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.AllowLoadoutRefresh (Underlying native function: AllowLoadoutRefresh 0x273fd14)
	void AllowLoadoutRefresh(); // (Final | Native | Public | BlueprintCallable)
};

