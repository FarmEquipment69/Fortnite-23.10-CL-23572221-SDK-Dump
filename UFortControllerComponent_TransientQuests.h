// Class /Script/FortniteGame.FortControllerComponent_TransientQuests
// Size: 0x330
class UFortControllerComponent_TransientQuests : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	struct FMulticastInlineDelegate OnUrgentQuestTimeExpired; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnUrgentQuestFailed; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnPlayerDuelEventStarted; // 0xd0 (0x10)
	class AFortPlayerStateAthena* TrackedHunterBountyTarget; // 0xe0 (0x8)
	int TrackedHunterBountyTargetDistance; // 0xe8 (0x4)
	int TrackedHunterBountyTargetPrice; // 0xec (0x4)
	class AFortPlayerStateAthena* TrackedProtectorBountyTarget; // 0xf0 (0x8)
	class AFortPlayerStateAthena* TrackedPrimaryHunter; // 0xf8 (0x8)
	unsigned char unreflected_100[0x8]; // 0x100 (0x8) 
	struct TArray<class AFortPlayerStateAthena*> TrackedBountyHunters; // 0x108 (0x10)
	class UFortUrgentQuestItemDefinition* ProtectorQuestToGrant; // 0x118 (0x8)
	class UFortUrgentQuestItemDefinition* TargetQuestToGrant; // 0x120 (0x8)
	unsigned char unreflected_128[0x68]; // 0x128 (0x68) 
	struct TArray<struct FUrgentQuestData> ActiveUrgentQuests; // 0x190 (0x10)
	unsigned char unreflected_1a0[0x40]; // 0x1a0 (0x40) 
	struct FMulticastInlineDelegate OnUrgentQuestStarted; // 0x1e0 (0x10)
	struct FMulticastInlineDelegate OnUrgentQuestDataChanged; // 0x1f0 (0x10)
	struct FMulticastInlineDelegate OnUrgentQuestEnded; // 0x200 (0x10)
	unsigned char unreflected_210[0x30]; // 0x210 (0x30) 
	struct TMap<struct FGameplayAbilitySpecHandle, class UFortQuestItemDefinition_Athena*> AbilityHandleQuestDefinitions; // 0x240 (0x50)
	unsigned char padding_290[0xa0]; // 0x290 (0xa0)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.StopPlayerBountyThreatLevelUpdates (Underlying native function: StopPlayerBountyThreatLevelUpdates 0x7fbe784)
	void StopPlayerBountyThreatLevelUpdates(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.StartQueueForPlayerDuelEvent (Underlying native function: StartQueueForPlayerDuelEvent 0x7fbe654)
	void StartQueueForPlayerDuelEvent(struct FUrgentQuestData& UrgentQuestData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.SetUrgentQuestDescriptionOverride (Underlying native function: SetUrgentQuestDescriptionOverride 0x7fbe520)
	void SetUrgentQuestDescriptionOverride(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& OverrideTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ServerRemoveSharedQuest (Underlying native function: ServerRemoveSharedQuest 0x7fbe240)
	void ServerRemoveSharedQuest(class UFortQuestItemDefinition_Athena*& QuestDefAthenaToRemove); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ServerPinSharedQuest (Underlying native function: ServerPinSharedQuest 0x7fbe1bc)
	void ServerPinSharedQuest(class UFortQuestItemDefinition_Athena*& QuestDefAthenaToPin); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | Const)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnUrgentQuestTimeExpired__DelegateSignature (Has no native function)
	void OnUrgentQuestTimeExpiredDelegateSignature(struct FUrgentQuestData& UrgentQuestData); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnUrgentQuestStarted__DelegateSignature (Has no native function)
	void OnUrgentQuestStartedDelegateSignature(struct FUrgentQuestData& UrgentQuestData, float& EventTimeRemaining); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnUrgentQuestFailed__DelegateSignature (Has no native function)
	void OnUrgentQuestFailedDelegateSignature(class AFortPlayerStateAthena*& PlayerStateAthena, struct FUrgentQuestData& UrgentQuestData); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnUrgentQuestEnded__DelegateSignature (Has no native function)
	void OnUrgentQuestEndedDelegateSignature(class AFortPlayerStateAthena*& PlayerStateAthena, struct FGameplayTag& UrgentQuestTag); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnUrgentQuestDataChanged__DelegateSignature (Has no native function)
	void OnUrgentQuestDataChangedDelegateSignature(struct FUrgentQuestData& UrgentQuestData); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.OnRep_TrackedHunterBountyTargetDistance (Underlying native function: OnRep_TrackedHunterBountyTargetDistance 0x7fbdea0)
	void OnRepTrackedHunterBountyTargetDistance(); // (Final | Native | Private)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnPlayerDuelEventStarted__DelegateSignature (Has no native function)
	void OnPlayerDuelEventStartedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnPlayerBountyThreatLevelUpdated__DelegateSignature (Has no native function)
	void OnPlayerBountyThreatLevelUpdatedDelegateSignature(enum EPlayerBountyThreatLevel& PlayerBountyThreatLevel); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_TransientQuests.OnPlayerBountyThreatLevelEnded__DelegateSignature (Has no native function)
	void OnPlayerBountyThreatLevelEndedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.GrantTransientQuest (Underlying native function: GrantTransientQuest 0x7fbca3c)
	void GrantTransientQuest(class UFortQuestItemDefinition_Athena*& QuestDefAthenaToGrant, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.GetTrackedHunterBountyTargetPrice (Underlying native function: GetTrackedHunterBountyTargetPrice 0x7ca39ac)
	int GetTrackedHunterBountyTargetPrice(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.GetTrackedHunterBountyTargetDistance (Underlying native function: GetTrackedHunterBountyTargetDistance 0x7ca39c4)
	int GetTrackedHunterBountyTargetDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.EndQueueForPlayerDuelEvent (Underlying native function: EndQueueForPlayerDuelEvent 0x7fbc634)
	void EndQueueForPlayerDuelEvent(struct FGameplayTag& EventTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientSetBountyTargetNPCIcon (Underlying native function: ClientSetBountyTargetNPCIcon 0x7fbc40c)
	void ClientSetBountyTargetNPCIcon(struct TWeakObjectPtr<class UTexture2D>& NPCIcon); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientSetBountyHunterNPCIcon (Underlying native function: ClientSetBountyHunterNPCIcon 0x7fbc354)
	void ClientSetBountyHunterNPCIcon(struct TWeakObjectPtr<class UTexture2D>& NPCIcon); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientRemoveTransientQuest (Underlying native function: ClientRemoveTransientQuest 0x7fbc2d0)
	void ClientRemoveTransientQuest(class UFortQuestItemDefinition_Athena*& QuestItemDefAthena); // (Final | Net | NetReliable | Native | Event | Private | NetClient | Const)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientRemoveThreatLevelBind (Underlying native function: ClientRemoveThreatLevelBind 0x6dd0d50)
	void ClientRemoveThreatLevelBind(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientPinSharedQuest (Underlying native function: ClientPinSharedQuest 0x71e7fb4)
	void ClientPinSharedQuest(class UFortQuestItemDefinition_Athena*& QuestItemDefAthena); // (Final | Net | NetReliable | Native | Event | Private | NetClient | Const)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientHandleSharedQuestUpdated (Underlying native function: ClientHandleSharedQuestUpdated 0x7fbbbdc)
	void ClientHandleSharedQuestUpdated(struct FUniqueNetIdRepl& PlayerId, class UFortQuestItemDefinition_Athena*& QuestDefAthena, struct FName& BackendName, int& StatValue, int& Delta); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientHandleSharedQuestsForLeavingPlayer (Underlying native function: ClientHandleSharedQuestsForLeavingPlayer 0x7fbbdc0)
	void ClientHandleSharedQuestsForLeavingPlayer(struct FUniqueNetIdRepl& LeavingPlayerId); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientHandleSharedQuestRemoved (Underlying native function: ClientHandleSharedQuestRemoved 0x7fbbac4)
	void ClientHandleSharedQuestRemoved(struct FUniqueNetIdRepl& PlayerId, class UFortQuestItemDefinition_Athena*& QuestDefAthena); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientHandleSharedQuestPinned (Underlying native function: ClientHandleSharedQuestPinned 0x7fbb9ac)
	void ClientHandleSharedQuestPinned(struct FUniqueNetIdRepl& PlayerId, class UFortQuestItemDefinition_Athena*& QuestDefAthena); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientHandleSharedQuestGranted (Underlying native function: ClientHandleSharedQuestGranted 0x7fbb644)
	void ClientHandleSharedQuestGranted(struct FUniqueNetIdRepl& PlayerId, class UFortQuestItemDefinition_Athena*& QuestDefAthena, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena, struct FString& Bucket, struct TArray<struct FString>& Playlists, struct FDateTime*& Expiration, struct TArray<int>& AchievedCounts); // (Final | Net | NetReliable | Native | Event | Private | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientHandleSharedQuestAutoCompleted (Underlying native function: ClientHandleSharedQuestAutoCompleted 0x7fbb5c0)
	void ClientHandleSharedQuestAutoCompleted(class UFortQuestItemDefinition_Athena*& QuestDefAthena); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientGrantTransientQuest (Underlying native function: ClientGrantTransientQuest 0x7fbb4f8)
	void ClientGrantTransientQuest(class UFortQuestItemDefinition_Athena*& QuestItemDefAthena, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientBroadcastOnUrgentQuestStarted (Underlying native function: ClientBroadcastOnUrgentQuestStarted 0x7fbb408)
	void ClientBroadcastOnUrgentQuestStarted(struct FUrgentQuestData& UrgentQuestData, float& EventTimeRemaining); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientBroadcastOnUrgentQuestEnded (Underlying native function: ClientBroadcastOnUrgentQuestEnded 0x7fbb384)
	void ClientBroadcastOnUrgentQuestEnded(struct FGameplayTag& EventTag); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.ClientBroadcastOnPlayerBountyThreatLevelUpdated (Underlying native function: ClientBroadcastOnPlayerBountyThreatLevelUpdated 0x7fbb300)
	void ClientBroadcastOnPlayerBountyThreatLevelUpdated(enum EPlayerBountyThreatLevel& NewPlayerBountyThreatLevel); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.CleanupCompletedQuest (Underlying native function: CleanupCompletedQuest 0x7fbb280)
	void CleanupCompletedQuest(class UFortQuestItemDefinition_Athena*& CompletedQuestDefAthena); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_TransientQuests.CheckIfQuestIsBounty (Underlying native function: CheckIfQuestIsBounty 0x7fbb1cc)
	bool CheckIfQuestIsBounty(struct FGameplayTag& UrgentQuestTag); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

