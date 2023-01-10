// Class /Script/FortniteGame.FortProjectEditComponent
// Size: 0x420
class UFortProjectEditComponent : public UFortProjectPlayComponent
{
	unsigned char unreflected_158[0x60]; // 0x158 (0x60) 
	int DeltasPeriodicSaveIntervalSeconds; // 0x1b8 (0x4)
	unsigned char unreflected_1bc[0x254]; // 0x1bc (0x254) 
	class UDeltaFileSaveHandler* DeltasSaveHandler; // 0x410 (0x8)
	unsigned char padding_418[0x8]; // 0x418 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectEditComponent.OnAnyPlayerLoggedIn (Underlying native function: OnAnyPlayerLoggedIn 0x8495dd4)
	void OnAnyPlayerLoggedIn(class APlayerController*& PlayerController); // (Final | Native | Private)
};

