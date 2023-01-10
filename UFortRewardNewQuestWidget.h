// Class /Script/SaveTheWorldUI.FortRewardNewQuestWidget
// Size: 0x2b8
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortRewardNewQuestWidget.IsValidConversation (Underlying native function: IsValidConversation 0x7245a54)
	bool IsValidConversation(class UFortConversation*& Conversation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNewQuestWidget.GetDataFromSentence (Underlying native function: GetDataFromSentence 0x72435f4)
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, struct FText& Text, class UTexture2D*& TalkingHeadTexture); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

