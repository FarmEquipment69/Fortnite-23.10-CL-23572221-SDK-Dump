// Class /Script/FortniteGame.AthenaQuestCategoryManager
// Size: 0xc0
class UAthenaQuestCategoryManager : public UObject
{
	struct TArray<class UQuestCategoryData*> QuestCategoryList; // 0x28 (0x10)
	unsigned char padding_38[0x88]; // 0x38 (0x88)

	/* Functions */

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleTransientQuestStarted (Underlying native function: HandleTransientQuestStarted 0x8bdc4ec)
	void HandleTransientQuestStarted(class UFortQuestItem*& QuestItem, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleTransientQuestRemoved (Underlying native function: HandleTransientQuestRemoved 0x8bdc1ac)
	void HandleTransientQuestRemoved(class UFortQuestItem*& QuestItem); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleTransientQuestAdded (Underlying native function: HandleTransientQuestAdded 0x8bdc12c)
	void HandleTransientQuestAdded(class UFortQuestItem*& QuestItem); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleTeamMemberLeavingGame (Underlying native function: HandleTeamMemberLeavingGame 0x8bdbf98)
	void HandleTeamMemberLeavingGame(struct FUniqueNetIdRepl& LeavingPlayerId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleRebuildEvent (Underlying native function: HandleRebuildEvent 0x8bdbf84)
	void HandleRebuildEvent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleQuestsCompleted (Underlying native function: HandleQuestsCompleted 0x8bdbef4)
	void HandleQuestsCompleted(struct TArray<class UFortQuestItem*>& Quests); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandleQuestManagerCreated (Underlying native function: HandleQuestManagerCreated 0x8bdbe30)
	void HandleQuestManagerCreated(enum ESubGame& SubGame, class UFortMcpProfileSubgame*& McpProfile); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaQuestCategoryManager.HandlePlayerProfileInit (Underlying native function: HandlePlayerProfileInit 0x25ef7f0)
	void HandlePlayerProfileInit(); // (Final | Native | Private)
};

