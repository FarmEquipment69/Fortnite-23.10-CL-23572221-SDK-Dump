// Class /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface
// Size: 0x28
class IFortClientAnnouncement_ConversationCodeInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.StopConversation (Underlying native function: StopConversation 0x7f98c6c)
	void StopConversation(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversationFromSentenceIndex (Underlying native function: PlayConversationFromSentenceIndex 0x7f98294)
	bool PlayConversationFromSentenceIndex(int& StartingSentenceIndex); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversationFromSentence (Underlying native function: PlayConversationFromSentence 0x7f981e0)
	bool PlayConversationFromSentence(struct FFortConversationSentence& StartingSentence); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversation (Underlying native function: PlayConversation 0x7f981bc)
	bool PlayConversation(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingSentenceIndex (Underlying native function: IsPlayingSentenceIndex 0x7f97110)
	bool IsPlayingSentenceIndex(int& SentenceIndex); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingSentence (Underlying native function: IsPlayingSentence 0x7f9705c)
	bool IsPlayingSentence(struct FFortConversationSentence& Sentence); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingConversation (Underlying native function: IsPlayingConversation 0x7f96fc8)
	bool IsPlayingConversation(bool& bCheckAudioComponent); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

