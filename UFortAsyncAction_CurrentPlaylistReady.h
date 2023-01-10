// Class /Script/FortniteGame.FortAsyncAction_CurrentPlaylistReady
// Size: 0x48
class UFortAsyncAction_CurrentPlaylistReady : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnReady; // 0x30 (0x10)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_CurrentPlaylistReady.PlaylistDataReadyAsync (Underlying native function: PlaylistDataReadyAsync 0x1832f44)
	static class UFortAsyncAction_CurrentPlaylistReady* PlaylistDataReadyAsync(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_CurrentPlaylistReady.HandlePlaylistLoaded (Underlying native function: HandlePlaylistLoaded 0x7f96e70)
	void HandlePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | 0x00000002 | Native | Private | HasOutParms)
};

