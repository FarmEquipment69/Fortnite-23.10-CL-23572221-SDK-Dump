// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
// Size: 0x660
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{
	unsigned char unreflected_5c0[0x18]; // 0x5c0 (0x18) 
	int AmountOfCreatorLinkEntriesQueried; // 0x5d8 (0x4)
	int ProcessedCreatorLinkEntries; // 0x5dc (0x4)
	class UCommonButtonBase* ButtonMobileClose; // 0x5e0 (0x8)
	class UCommonButtonBase* ButtonMobileAccept; // 0x5e8 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x5f0 (0x8)
	class UCommonButtonBase* ButtonJoinAsSpectator; // 0x5f8 (0x8)
	class UCommonButtonBase* ButtonMobileShowGameDetails; // 0x600 (0x8)
	int AmountOfEntriesQueried; // 0x608 (0x4)
	unsigned char padding_60c[0x54]; // 0x60c (0x54)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnPlayerQueueTypeChanged (Has no native function)
	void OnPlayerQueueTypeChanged(enum EPlayerQueueType& PlayerQueueType); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator (Has no native function)
	void OnNoContentFoundForCreator(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished (Has no native function)
	void OnCreatorActivitiesQueryFinished(); // (Event | Protected | BlueprintEvent)
};

