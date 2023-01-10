// Class /Script/FortniteGame.FortMediaEventsSubsystem
// Size: 0xd0
class UFortMediaEventsSubsystem : public UEngineSubsystem
{
	unsigned char unreflected_30[0x80]; // 0x30 (0x80) 
	struct FMulticastInlineDelegate OnMediaSourceSelected; // 0xb0 (0x10)
	struct FMulticastInlineDelegate MediaSourceReturn; // 0xc0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.ToggleFullScreenPiP (Underlying native function: ToggleFullScreenPiP 0x87183a4)
	void ToggleFullScreenPiP(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.SuspendExternalMediaControllers (Underlying native function: SuspendExternalMediaControllers 0x871838c)
	void SuspendExternalMediaControllers(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.SetExternalMediaControllerEnabled (Underlying native function: SetExternalMediaControllerEnabled 0x8717dfc)
	void SetExternalMediaControllerEnabled(bool& InEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.ResumeExternalMediaControllers (Underlying native function: ResumeExternalMediaControllers 0x8717d64)
	void ResumeExternalMediaControllers(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.RequestExternalMediaControllerMediaSource (Underlying native function: RequestExternalMediaControllerMediaSource 0x8717c6c)
	void RequestExternalMediaControllerMediaSource(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.EnableFullScreenPiPOption (Underlying native function: EnableFullScreenPiPOption 0x871384c)
	void EnableFullScreenPiPOption(bool& bEnable); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.ClearStreamAssets (Underlying native function: ClearStreamAssets 0x87134c8)
	void ClearStreamAssets(struct FString& StreamAssetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.CanEnablePartnerPiP (Underlying native function: CanEnablePartnerPiP 0x8713490)
	bool CanEnablePartnerPiP(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.BroadcastStreamAssets (Underlying native function: BroadcastStreamAssets 0x8713364)
	void BroadcastStreamAssets(struct FFortMediaEventsStreamAssets& InAssets); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

