// Class /Script/FortniteGame.FortGameplayFeedbackEventData
// Size: 0x40
class UFortGameplayFeedbackEventData : public UDataAsset
{
	struct TArray<struct FGameplayFeedbackEventInfo> FeedbackEventInfos; // 0x30 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayFeedbackEventData.PostFeedbackEventMessage (Underlying native function: PostFeedbackEventMessage 0x87b4f2c)
	static void PostFeedbackEventMessage(class AActor*& EventSourceActor, struct FGameplayFeedbackEventParams& EventParams, struct TMap<struct FString, struct FText>& AdditionalArgs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayFeedbackEventData.PostFeedbackEventFromGameMessage (Underlying native function: PostFeedbackEventFromGameMessage 0x87b4cf8)
	static void PostFeedbackEventFromGameMessage(class AActor*& EventSourceActor, struct FAthenaGameMessageData& MsgData, struct FUniqueNetIdRepl& InstigatorPlayerId, struct TMap<struct FString, struct FText>& AdditionalArgs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

