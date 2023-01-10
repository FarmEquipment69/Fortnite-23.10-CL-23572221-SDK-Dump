// Class /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
// Size: 0x410
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	class USoundSourceBus* SourceBus; // 0x3c0 (0x8)
	class USoundClass* SoundClass; // 0x3c8 (0x8)
	struct FDataTableRowHandle HoldToSkipAction; // 0x3d0 (0x10)
	class UCommonButtonLegacy* ButtonSkip; // 0x3e0 (0x8)
	float SkipButtonTimeout; // 0x3e8 (0x4)
	float LastInteractionTime; // 0x3ec (0x4)
	bool bControlsVisible; // 0x3f0 (0x1)
	unsigned char unreflected_3f1[0xf]; // 0x3f1 (0xf) 
	class UAudioComponent* SoundComponent; // 0x400 (0x8)
	unsigned char padding_408[0x8]; // 0x408 (0x8)

	/* Functions */

	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress (Underlying native function: OnSkipButtonActionProgress 0x6f801dc)
	void OnSkipButtonActionProgress(float& HeldPercent); // (Final | Native | Private)

	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete (Underlying native function: OnSkipButtonActionComplete 0x6f801c8)
	void OnSkipButtonActionComplete(); // (Final | Native | Private)
};

