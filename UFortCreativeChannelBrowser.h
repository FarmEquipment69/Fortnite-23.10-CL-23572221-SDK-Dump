// Class /Script/FortniteUI.FortCreativeChannelBrowser
// Size: 0x3c8
class UFortCreativeChannelBrowser : public UCommonActivatableWidget
{
	unsigned char unreflected_3c8[0x3c8]; 

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeChannelBrowser.ShouldShowChannelDetails (Underlying native function: ShouldShowChannelDetails 0xa501738)
	bool ShouldShowChannelDetails(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeChannelBrowser.RequestCloseUI (Underlying native function: RequestCloseUI 0xa5002f4)
	void RequestCloseUI(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeChannelBrowser.GetSortedDeviceMap (Underlying native function: GetSortedDeviceMap 0xa4fb268)
	static struct TMap<class AActor*, struct FText> GetSortedDeviceMap(struct TMap<class AActor*, struct FText>& InDeviceMap); // (Final | Native | Static | Protected | HasOutParms | BlueprintCallable)
};

