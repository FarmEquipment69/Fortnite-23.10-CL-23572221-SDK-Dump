// Class /Script/FortniteUI.FortCommunityVotingManager
// Size: 0x130
class UFortCommunityVotingManager : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct TArray<class UFortMtxOfferData*> CachedDisplayAssets; // 0x40 (0x10)
	unsigned char padding_50[0xe0]; // 0x50 (0xe0)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingManager.RefreshVotingTimer (Underlying native function: RefreshVotingTimer 0xa3cdb28)
	void RefreshVotingTimer(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingManager.RefreshVotes (Underlying native function: RefreshVotes 0xa3cdaa8)
	void RefreshVotes(bool& IsIncrementing); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortCommunityVotingManager.RefreshRevealTimer (Underlying native function: RefreshRevealTimer 0xa3cda14)
	void RefreshRevealTimer(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingManager.RefreshNewVoteTimer (Underlying native function: RefreshNewVoteTimer 0xa3cd9ec)
	void RefreshNewVoteTimer(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingManager.OnVotingTimerEnd (Underlying native function: OnVotingTimerEnd 0xa3cd80c)
	void OnVotingTimerEnd(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingManager.OnVotingStateChanged (Underlying native function: OnVotingStateChanged 0xa3cd7f8)
	void OnVotingStateChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingManager.OnRevealTimerEnd (Underlying native function: OnRevealTimerEnd 0xa3cd7d0)
	void OnRevealTimerEnd(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingManager.OnNewVoteTimerEnd (Underlying native function: OnNewVoteTimerEnd 0xa3cd7bc)
	void OnNewVoteTimerEnd(); // (Final | Native | Private)
};

