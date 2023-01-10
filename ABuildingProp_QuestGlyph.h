// Class /Script/FortniteGame.BuildingProp_QuestGlyph
// Size: 0xf38
class ABuildingProp_QuestGlyph : public ABuildingProp_Quest
{
	class UFortQuestItemDefinition* QuestDef; // 0xef8 (0x8)
	struct FLinearColor InteractSubTextColor; // 0xf00 (0x10)
	struct FLinearColor InteractSubTextColorUnlocked; // 0xf10 (0x10)
	bool bShowContextInfo; // 0xf20 (0x1)
	bool bContextInfoUnlocked; // 0xf21 (0x1)
	unsigned char unreflected_f22[0x2]; // 0xf22 (0x2) 
	float ActivationRange; // 0xf24 (0x4)
	struct TArray<class UFortMontageItemDefinitionBase*> GlyphActivationEmotes; // 0xf28 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_QuestGlyph.OnTriggeringEmote (Has no native function)
	void OnTriggeringEmote(class AFortPlayerController*& FortPC, class UFortMontageItemDefinitionBase*& EmoteAsset, struct FGameplayTagContainer& FilteredQuestMetaDataTags); // (Event | Public | HasOutParms | BlueprintEvent)
};

