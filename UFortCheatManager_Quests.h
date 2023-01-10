// Class /Script/FortniteGame.FortCheatManager_Quests
// Size: 0xc0
class UFortCheatManager_Quests : public UChildCheatManager
{
	unsigned char unreflected_c0[0xc0]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManager_Quests.UnpinQuest (Underlying native function: UnpinQuest 0x273fd14)
	void UnpinQuest(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.TeleportToBountyTarget (Underlying native function: TeleportToBountyTarget 0x273fd14)
	void TeleportToBountyTarget(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.SendQuestEvent (Underlying native function: SendQuestEvent 0x8bdef38)
	void SendQuestEvent(struct FName& Type, struct FString& TargetTag, struct FString& SourceTag, struct FString& ContextTag, int& Count); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.RemoveSharedQuest (Underlying native function: RemoveSharedQuest 0x6e8f5f8)
	void RemoveSharedQuest(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.QueryRebootData (Underlying native function: QueryRebootData 0x273fd14)
	void QueryRebootData(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.PinQuest (Underlying native function: PinQuest 0x6e8f5f8)
	void PinQuest(struct FString& QuestMcpId); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.OnXPEvent (Underlying native function: OnXPEvent 0x8bdd9a8)
	void OnXPEvent(struct FXPEventInfo& XPEvent); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogSquadSharedQuestData (Underlying native function: LogSquadSharedQuestData 0x273fd14)
	void LogSquadSharedQuestData(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogRebootData (Underlying native function: LogRebootData 0x273fd14)
	void LogRebootData(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogQuestInfo (Underlying native function: LogQuestInfo 0x6ee971c)
	void LogQuestInfo(struct FString& QuestName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogPinnedQuest (Underlying native function: LogPinnedQuest 0x273fd14)
	void LogPinnedQuest(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogCurrentQuests (Underlying native function: LogCurrentQuests 0x273fd14)
	void LogCurrentQuests(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogActiveTransientQuests (Underlying native function: LogActiveTransientQuests 0x273fd14)
	void LogActiveTransientQuests(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ListChallenges (Underlying native function: ListChallenges 0x66e4ab4)
	void ListChallenges(struct FString& Filter); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ListActiveQuestContextTags (Underlying native function: ListActiveQuestContextTags 0x273fd14)
	void ListActiveQuestContextTags(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantWorldProcessorQuest (Underlying native function: GrantWorldProcessorQuest 0x6e8f5f8)
	void GrantWorldProcessorQuest(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantQuestTransientlyNoTrack (Underlying native function: GrantQuestTransientlyNoTrack 0x6ee971c)
	void GrantQuestTransientlyNoTrack(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantQuestTransiently (Underlying native function: GrantQuestTransiently 0x6ee971c)
	void GrantQuestTransiently(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantQuestToReleventSpatialQuestManagers (Underlying native function: GrantQuestToReleventSpatialQuestManagers 0x5a84640)
	void GrantQuestToReleventSpatialQuestManagers(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantProcessorQuest (Underlying native function: GrantProcessorQuest 0x6e8f5f8)
	void GrantProcessorQuest(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantAccolade (Underlying native function: GrantAccolade 0x88c3144)
	void GrantAccolade(struct FString& AccoladeName, int& AccoladeIndex); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GiveAthenaXpAtLocation (Underlying native function: GiveAthenaXpAtLocation 0x88c2c10)
	void GiveAthenaXpAtLocation(float& XpAmount, struct FString& DesiredPriority); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GiveAthenaXp (Underlying native function: GiveAthenaXp 0x8bdbc88)
	void GiveAthenaXp(float& XpAmount); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ForceCompleteAccolades (Underlying native function: ForceCompleteAccolades 0x735f718)
	void ForceCompleteAccolades(float& TimerDelay, bool& bSkipAcknowledgements); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.EnableQuestStateLogging (Underlying native function: EnableQuestStateLogging 0x8bdabe4)
	void EnableQuestStateLogging(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.DisableQuestStateLogging (Underlying native function: DisableQuestStateLogging 0x8bdab74)
	void DisableQuestStateLogging(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CompleteAllSquadMemberQuestsByName (Underlying native function: CompleteAllSquadMemberQuestsByName 0x6e90d24)
	void CompleteAllSquadMemberQuestsByName(struct FString& QuestPartialName); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CompleteAllQuestsByName (Underlying native function: CompleteAllQuestsByName 0x6e90d24)
	void CompleteAllQuestsByName(struct FString& QuestPartialName); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CompleteAccoladesByDisplayName (Underlying native function: CompleteAccoladesByDisplayName 0x6e8f5f8)
	void CompleteAccoladesByDisplayName(struct FString& DisplayNameSearchString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CheckObjectiveStatUsage (Underlying native function: CheckObjectiveStatUsage 0x273fd14)
	void CheckObjectiveStatUsage(); // (Final | Exec | Native | Public)
};

