// Class /Script/FortniteUI.FortServerMessageWidget
// Size: 0x2d8
class UFortServerMessageWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d8[0x2d8]; 

	/* Functions */

	// Function /Script/FortniteUI.FortServerMessageWidget.SetServerMigrationDelegate (Underlying native function: SetServerMigrationDelegate 0xa699a74)
	void SetServerMigrationDelegate(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortServerMessageWidget.OnAlertBegin (Has no native function)
	void OnAlertBegin(int& SecondsRemainingStart, int& SecondsRemainingEnd, struct FText& AlertText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortServerMessageWidget.HandleServerAlert (Underlying native function: HandleServerAlert 0xa699038)
	void HandleServerAlert(int& TimeRemainingStart, int& TimeRemainingEnd); // (Final | Native | Protected)
};

