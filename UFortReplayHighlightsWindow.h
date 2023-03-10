// Class /Script/FortniteUI.FortReplayHighlightsWindow
// Size: 0x528
class UFortReplayHighlightsWindow : public UFortActivatablePanel
{
	class UClass* HighlightItemClass; // 0x518 (0x8)
	class UVerticalBox* VerticalBoxItemContainer; // 0x520 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortReplayHighlightsWindow.HandleReplayHighlightsAvailable (Underlying native function: HandleReplayHighlightsAvailable 0x2bd0370)
	void HandleReplayHighlightsAvailable(class AFortReplaySpectator*& Sender, bool& bIsAvailable); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReplayHighlightsWindow.HandleHighlightItemPlayEvent (Underlying native function: HandleHighlightItemPlayEvent 0xa45c31c)
	void HandleHighlightItemPlayEvent(class UFortReplayHighlightItemBase*& Sender); // (Final | Native | Private)
};

