// Class /Script/FortniteUI.FortFriendCodeListBase
// Size: 0x540
class UFortFriendCodeListBase : public UFortActivatablePanel
{
	struct TArray<struct FFriendCode> BacchusFriendCodes; // 0x518 (0x10)
	class UClass* FriendCodeEntryClass; // 0x528 (0x8)
	class UDynamicEntryBox* EntryBoxFriendCodes; // 0x530 (0x8)
	class URichTextBlock* WarningText; // 0x538 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortFriendCodeListBase.JustDesc (Underlying native function: JustDesc 0xa5f5ff8)
	void JustDesc(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFriendCodeListBase.DescAndURL (Underlying native function: DescAndURL 0xa5f478c)
	void DescAndURL(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFriendCodeListBase.CloseAndPopDialog (Underlying native function: CloseAndPopDialog 0xa5f4764)
	void CloseAndPopDialog(); // (Final | Native | Public | BlueprintCallable)
};

