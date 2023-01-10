// Class /Script/FortniteGame.FortQuestIndicatorData
// Size: 0xd0
class UFortQuestIndicatorData : public UDataAsset
{
	class UDataTable* QuestTagToLocationDataTable; // 0x30 (0x8)
	struct TWeakObjectPtr<class UTexture2D> DefaultQuestIcon; // 0x38 (0x28)
	class UDataTable* QuestTagToIconDataTable; // 0x60 (0x8)
	struct TMap<enum EFortQuestObjectiveStatEvent, struct TWeakObjectPtr<class UTexture2D>> QuestOjectiveTypeToIconMap; // 0x68 (0x50)
	class UDataTable* QuestTagToCategoryDataTable; // 0xb8 (0x8)
	struct TArray<struct FFortChallengeMapPoiData> ChallengeMapPoiData; // 0xc0 (0x10)
};

