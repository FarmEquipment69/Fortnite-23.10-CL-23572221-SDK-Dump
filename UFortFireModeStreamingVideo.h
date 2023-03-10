// Class /Script/FortniteUI.FortFireModeStreamingVideo
// Size: 0x50
class UFortFireModeStreamingVideo : public UObject
{
	class UMediaPlayer* MediaPlayer; // 0x28 (0x8)
	class UFortStreamMediaSource* MediaSource; // 0x30 (0x8)
	unsigned char padding_38[0x18]; // 0x38 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortFireModeStreamingVideo.OnSuccessfulURL (Underlying native function: OnSuccessfulURL 0xa2a3130)
	void OnSuccessfulURL(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortFireModeStreamingVideo.OnFailedURL (Underlying native function: OnFailedURL 0xa2a2fc0)
	void OnFailedURL(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortFireModeStreamingVideo.HandleMediaPlayerPlaybackResumed (Underlying native function: HandleMediaPlayerPlaybackResumed 0xa2a2fa8)
	void HandleMediaPlayerPlaybackResumed(); // (Final | Native | Private)
};

