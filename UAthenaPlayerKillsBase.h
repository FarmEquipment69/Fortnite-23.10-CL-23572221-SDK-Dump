// Class /Script/FortniteUI.AthenaPlayerKillsBase
// Size: 0x2e8
class UAthenaPlayerKillsBase : public UFortHUDElementWidget
{
	class UTextBlock* KillsText; // 0x2d0 (0x8)
	class UObject* KillsSource; // 0x2d8 (0x8)
	bool bCustomKillSource; // 0x2e0 (0x1)
	unsigned char padding_2e1[0x7]; // 0x2e1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPlayerKillsBase.SetKillsSourcePlayerState (Underlying native function: SetKillsSourcePlayerState 0x25326d4)
	void SetKillsSourcePlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaPlayerKillsBase.SetKillsSourcePlayerController (Underlying native function: SetKillsSourcePlayerController 0xa311444)
	void SetKillsSourcePlayerController(class AFortPlayerControllerAthena*& InPlayerController); // (Final | Native | Public | BlueprintCallable)
};

