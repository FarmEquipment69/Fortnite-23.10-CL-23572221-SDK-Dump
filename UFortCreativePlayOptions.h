// Class /Script/FortniteUI.FortCreativePlayOptions
// Size: 0x548
class UFortCreativePlayOptions : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x18]; // 0x518 (0x18) 
	class UFortCreativeServersView* ViewCreativeOptionsServers; // 0x530 (0x8)
	class UCommonButtonLegacy* ButtonPlay; // 0x538 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x540 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePlayOptions.ShouldShowImportPlatformFriendsOption (Underlying native function: ShouldShowImportPlatformFriendsOption 0xa5367f4)
	bool ShouldShowImportPlatformFriendsOption(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePlayOptions.ImportPlatformFriends (Underlying native function: ImportPlatformFriends 0xa53585c)
	void ImportPlatformFriends(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePlayOptions.HandleCancelClicked (Underlying native function: HandleCancelClicked 0x662c1a4)
	void HandleCancelClicked(); // (Final | Native | Private | BlueprintCallable)
};

