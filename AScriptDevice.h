// Class /Script/VerseDevices.ScriptDevice
// Size: 0xf48
class AScriptDevice : public ABuildingProp
{
	class UVerseCreativeDevice* Script; // 0xef8 (0x8)
	unsigned char unreflected_f00[0x8]; // 0xf00 (0x8) 
	class UVerseCreativeDevice* ScriptInstance; // 0xf08 (0x8)
	unsigned char padding_f10[0x38]; // 0xf10 (0x38)

	/* Functions */

	// Function /Script/VerseDevices.ScriptDevice.SetEnabled (Underlying native function: SetEnabled 0x697b948)
	void SetEnabled(bool& bInEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/VerseDevices.ScriptDevice.HandlePreMinigameStartedSetup (Underlying native function: HandlePreMinigameStartedSetup 0x697b870)
	void HandlePreMinigameStartedSetup(); // (Final | Native | Public)

	// Function /Script/VerseDevices.ScriptDevice.HandleMinigameEndGame (Underlying native function: HandleMinigameEndGame 0x697b770)
	void HandleMinigameEndGame(class AFortPlayerController*& PlayerController, enum EFortMinigameEnd& EndMethod, enum EFortMinigameState& NextState); // (Final | Native | Public)
};

