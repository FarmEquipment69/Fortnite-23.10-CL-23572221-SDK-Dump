// Class /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes
// Size: 0x420
class AFortAthenaMutator_CreativeModifyEmotes : public AFortAthenaMutator
{
	unsigned char unreflected_420[0x420]; 

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.RemoveVolumeToModify (Underlying native function: RemoveVolumeToModify 0x81fba64)
	void RemoveVolumeToModify(class AFortVolume*& VolumeToRemove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.RemoveEmotesFromPlayerState (Underlying native function: RemoveEmotesFromPlayerState 0x81fb9a8)
	void RemoveEmotesFromPlayerState(class APlayerState*& PlayerState, struct TArray<struct FName>& CategoriesToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.RemoveEmoteFromCategory (Underlying native function: RemoveEmoteFromCategory 0x81fb870)
	void RemoveEmoteFromCategory(struct FEmoteActionBinding& EmoteToRemove, struct FName& CategoryName, class AFortVolume*& VolumeToModify); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.RemoveEmoteCategory (Underlying native function: RemoveEmoteCategory 0x81fb7a4)
	void RemoveEmoteCategory(struct FName& CategoryName, class AFortVolume*& VolumeToModify); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.RemoveBlockedEmoteTag (Underlying native function: RemoveBlockedEmoteTag 0x81fb624)
	void RemoveBlockedEmoteTag(struct FGameplayTag& TagToRemove, class AFortVolume*& VolumeToModify); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.RemoveBlockedEmote (Underlying native function: RemoveBlockedEmote 0x81fb2c0)
	void RemoveBlockedEmote(struct FString& EmoteToRemove, class AFortVolume*& VolumeToModify); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.OnPlayerExitedVolume (Underlying native function: OnPlayerExitedVolume 0x81faa3c)
	void OnPlayerExitedVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.OnPlayerEnteredVolume (Underlying native function: OnPlayerEnteredVolume 0x81fa974)
	void OnPlayerEnteredVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddVolumeToModify (Underlying native function: AddVolumeToModify 0x81f7850)
	void AddVolumeToModify(class AFortVolume*& NewVolumeToModify); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddUniqueEmoteCategory (Underlying native function: AddUniqueEmoteCategory 0x81f73f8)
	bool AddUniqueEmoteCategory(struct FName& CategoryName, struct FText& CategoryTitle, struct FText& CategoryTitleMultipage, bool& bExclusive, class AFortVolume*& VolumeToModify); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddEmoteToCategory (Underlying native function: AddEmoteToCategory 0x81f7120)
	bool AddEmoteToCategory(struct FString& EmoteTemplateID, struct FName& CategoryName, class AFortVolume*& VolumeToModify, struct FEmoteActionBinding& OutCreatedEmote); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddEmotesToPlayersInVolume (Underlying native function: AddEmotesToPlayersInVolume 0x6df70d4)
	void AddEmotesToPlayersInVolume(class AFortVolume*& VolumeToModify); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddEmotesForPlayer (Underlying native function: AddEmotesForPlayer 0x81f7374)
	void AddEmotesForPlayer(class APlayerState*& PlayerState); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddBlockedEmoteTag (Underlying native function: AddBlockedEmoteTag 0x81f6e58)
	void AddBlockedEmoteTag(struct FGameplayTag& TagToBlock, class AFortVolume*& VolumeToModify); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativeModifyEmotes.AddBlockedEmote (Underlying native function: AddBlockedEmote 0x81f6b48)
	void AddBlockedEmote(struct FString& EmoteToBlock, class AFortVolume*& VolumeToModify); // (Final | Native | Public | BlueprintCallable)
};

