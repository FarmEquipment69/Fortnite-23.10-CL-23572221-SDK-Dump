// Class /Script/FortniteUI.AthenaReplayActionFeedScreenBase
// Size: 0x568
class UAthenaReplayActionFeedScreenBase : public UFortActivatablePanel
{
	class UCommonListView* ListViewEntries; // 0x518 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x520 (0x8)
	unsigned char padding_528[0x40]; // 0x528 (0x40)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReplayActionFeedScreenBase.OnReplayEventsUpdated (Underlying native function: OnReplayEventsUpdated 0xa43fdb0)
	void OnReplayEventsUpdated(enum EPlayEventType& Type); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaReplayActionFeedScreenBase.HandlePlayerBecameRelevant (Underlying native function: HandlePlayerBecameRelevant 0xa43db94)
	void HandlePlayerBecameRelevant(class AFortPlayerState*& FortPlayerState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaReplayActionFeedScreenBase.HandleCloseActionFeed (Underlying native function: HandleCloseActionFeed 0xa43d718)
	void HandleCloseActionFeed(); // (Final | Native | Protected | BlueprintCallable)
};

