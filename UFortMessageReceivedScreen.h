// Class /Script/FortniteUI.FortMessageReceivedScreen
// Size: 0x538
class UFortMessageReceivedScreen : public UFortActivatablePanel
{
	struct FMulticastInlineDelegate OnMessageClosed; // 0x518 (0x10)
	class UFortGiftBoxItem* GiftBoxItem; // 0x528 (0x8)
	class UCommonLazyImage* GiftBoxImage; // 0x530 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMessageReceivedScreen.OnGiftBoxSet (Has no native function)
	void OnGiftBoxSet(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.FortMessageReceivedScreen.OnFinalGiftingComplete__DelegateSignature (Has no native function)
	void OnFinalGiftingCompleteDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortMessageReceivedScreen.GetTournamentTitleFromCMS (Underlying native function: GetTournamentTitleFromCMS 0xa6c5edc)
	bool GetTournamentTitleFromCMS(struct FString& DisplayDataId, struct FString& OutTitle); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMessageReceivedScreen.GetHeaderAssetString (Underlying native function: GetHeaderAssetString 0xa6c57dc)
	struct FText GetHeaderAssetString(struct FString& Param); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMessageReceivedScreen.GetBodyAssetString (Underlying native function: GetBodyAssetString 0xa6c54dc)
	struct FText GetBodyAssetString(struct FString& Param); // (Final | Native | Protected | BlueprintCallable)
};

