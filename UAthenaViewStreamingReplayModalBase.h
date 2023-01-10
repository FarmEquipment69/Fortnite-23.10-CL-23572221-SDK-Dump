// Class /Script/FortniteUI.AthenaViewStreamingReplayModalBase
// Size: 0x520
class UAthenaViewStreamingReplayModalBase : public UFortActivatablePanel
{
	class UEditableText* EditableTextSessionSearch; // 0x518 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaViewStreamingReplayModalBase.PlayStreamingDSSReplay (Underlying native function: PlayStreamingDSSReplay 0xa347e9c)
	void PlayStreamingDSSReplay(struct FString& GameSessionId); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaViewStreamingReplayModalBase.IsValidGameSessionId (Underlying native function: IsValidGameSessionId 0xa347904)
	bool IsValidGameSessionId(struct FString& GameSessionId); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

