// Class /Script/FortniteUI.AthenaBroadcastKillFeedBase
// Size: 0x2f0
class UAthenaBroadcastKillFeedBase : public UFortHUDElementWidget
{
	class UFortDynamicEntryBox* KillFeedEntryBox; // 0x2d0 (0x8)
	float TimeToShowEntry; // 0x2d8 (0x4)
	unsigned char padding_2dc[0x14]; // 0x2dc (0x14)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBroadcastKillFeedBase.OnToggleShowKillFeed (Underlying native function: OnToggleShowKillFeed 0xa4403a8)
	void OnToggleShowKillFeed(bool& bShowKillFeed); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastKillFeedBase.OnTimelineScrubbed (Underlying native function: OnTimelineScrubbed 0xa44009c)
	void OnTimelineScrubbed(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastKillFeedBase.AddKillFeedEntry (Underlying native function: AddKillFeedEntry 0xa43b59c)
	void AddKillFeedEntry(struct FAthenaBroadcastKillFeedEntryInfo& KillFeedEntryInfo); // (Final | Native | Private | HasOutParms)
};

