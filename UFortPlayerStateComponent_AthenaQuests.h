// Class /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests
// Size: 0x1f0
class UFortPlayerStateComponent_AthenaQuests : public UFortPlayerStateComponent_Quests
{
	unsigned char unreflected_1f0[0x1f0]; 

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.OnSpectatorUrgentQuest__DelegateSignature (Has no native function)
	void OnSpectatorUrgentQuestDelegateSignature(struct FUrgentQuestData& UrgentQuestData, float& EventTimeRemaining); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.OnSpectatorEndUrgentQuest__DelegateSignature (Has no native function)
	void OnSpectatorEndUrgentQuestDelegateSignature(struct FGameplayTag& UrgentQuestEventTag); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.OnSpectatorClearUrgentQuests__DelegateSignature (Has no native function)
	void OnSpectatorClearUrgentQuestsDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.OnNoLongerTargetingBotUrgentQuest__DelegateSignature (Has no native function)
	void OnNoLongerTargetingBotUrgentQuestDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.HandleNoLongerTargetingBotUrgentQuest (Underlying native function: HandleNoLongerTargetingBotUrgentQuest 0x84959a4)
	void HandleNoLongerTargetingBotUrgentQuest(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.HandleMatchRewardNotification (Underlying native function: HandleMatchRewardNotification 0x8495754)
	void HandleMatchRewardNotification(struct FAthenaRewardResult& MatchRewardData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.ClientSpectatorShowUrgentQuestMessage (Underlying native function: ClientSpectatorShowUrgentQuestMessage 0x84954a8)
	void ClientSpectatorShowUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.ClientSpectatorShowUrgentQuestEntry (Underlying native function: ClientSpectatorShowUrgentQuestEntry 0x849540c)
	void ClientSpectatorShowUrgentQuestEntry(struct FUrgentQuestData& UrgentQuestData); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.ClientSpectatorFailUrgentQuestMessage (Underlying native function: ClientSpectatorFailUrgentQuestMessage 0x8495320)
	void ClientSpectatorFailUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& FailedEventTag); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.ClientSpectatorCompleteUrgentQuestMessage (Underlying native function: ClientSpectatorCompleteUrgentQuestMessage 0x8495234)
	void ClientSpectatorCompleteUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& CompletedEventTag); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateComponent_AthenaQuests.ClientSpectatorClearUrgentQuestEntries (Underlying native function: ClientSpectatorClearUrgentQuestEntries 0x14211f8)
	void ClientSpectatorClearUrgentQuestEntries(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)
};

