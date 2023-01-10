// Class /Script/FortniteUI.CobaltAlertWidgetBase
// Size: 0x368
class UCobaltAlertWidgetBase : public UCobaltWidgetBase
{
	unsigned char LastViewedTeam; // 0x360 (0x1)
	unsigned char padding_361[0x7]; // 0x361 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.CobaltAlertWidgetBase.UpdateAlertUI (Underlying native function: UpdateAlertUI 0xa3fcc80)
	void UpdateAlertUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CobaltAlertWidgetBase.OnUpdateTieBreakerUI (Has no native function)
	void OnUpdateTieBreakerUI(bool& bHasTieBreaker); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltAlertWidgetBase.OnRoundComplete (Underlying native function: OnRoundComplete 0xa3fbf74)
	void OnRoundComplete(struct TArray<unsigned char>& WinningTeams); // (Final | Native | Protected | HasOutParms)
};

