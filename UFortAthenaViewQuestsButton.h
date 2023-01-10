// Class /Script/FortniteUI.FortAthenaViewQuestsButton
// Size: 0x1440
class UFortAthenaViewQuestsButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1440[0x1440]; 

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HasUnseenQuests (Underlying native function: HasUnseenQuests 0xa5f5d74)
	bool HasUnseenQuests(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandleUnseenQuestsChanged (Has no native function)
	void HandleUnseenQuestsChanged(bool& bHasUnseenQuests); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0xa5f5cf8)
	void HandleToggleFullscreenMap(bool& bVisible); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandlePlaylistChanged (Underlying native function: HandlePlaylistChanged 0xa5f5aa4)
	void HandlePlaylistChanged(struct FPlaylistData& PlaylistData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandleOwningPanelActivated (Underlying native function: HandleOwningPanelActivated 0xa5f558c)
	void HandleOwningPanelActivated(); // (Final | Native | Private)
};

