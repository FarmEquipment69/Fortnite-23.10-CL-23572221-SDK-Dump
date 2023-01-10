// Class /Script/FortniteUI.FortPortalHUDDetails
// Size: 0x3b0
class UFortPortalHUDDetails : public UFortActorIndicatorWidget
{
	unsigned char unreflected_378[0x8]; // 0x378 (0x8) 
	class UAthenaMarkerPointer* MarkerPointer; // 0x380 (0x8)
	unsigned char unreflected_388[0x20]; // 0x388 (0x20) 
	class UCommonActivatableWidgetSwitcher* MobileInfoMatchmakingSwitcher; // 0x3a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPortalHUDDetails.SetCachedWorldPos (Underlying native function: SetCachedWorldPos 0xa5b250c)
	void SetCachedWorldPos(struct FVector& InWorldPos); // (Final | 0x00000002 | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortPortalHUDDetails.SetActiveMatchmakingTextIndex (Underlying native function: SetActiveMatchmakingTextIndex 0xa5b229c)
	void SetActiveMatchmakingTextIndex(int& newIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPortalHUDDetails.SetActiveContextInfo (Underlying native function: SetActiveContextInfo 0xa5b221c)
	void SetActiveContextInfo(class UFortInteractContextInfo*& ActiveContextInfo); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPortalHUDDetails.HandleMatchmakingComplete (Underlying native function: HandleMatchmakingComplete 0xa5afb0c)
	void HandleMatchmakingComplete(bool& Success); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortPortalHUDDetails.GetActiveContextInfo (Underlying native function: GetActiveContextInfo 0x81407d4)
	class UFortInteractContextInfo* GetActiveContextInfo(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortPortalHUDDetails.ClearCachedWorldPos (Underlying native function: ClearCachedWorldPos 0xa5aeaac)
	void ClearCachedWorldPos(); // (Final | 0x00000002 | Native | Protected | BlueprintCallable)
};

