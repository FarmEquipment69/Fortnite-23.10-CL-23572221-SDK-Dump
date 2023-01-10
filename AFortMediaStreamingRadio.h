// Class /Script/FortniteGame.FortMediaStreamingRadio
// Size: 0x2c8
class AFortMediaStreamingRadio : public AActor
{
	class UMediaSoundComponent* SoundComponent; // 0x288 (0x8)
	struct TArray<struct FString> StationIDs; // 0x290 (0x10)
	class UMediaPlayer* MediaPlayer; // 0x2a0 (0x8)
	class UFortMediaPlayerCtrl* MediaPlayerController; // 0x2a8 (0x8)
	class UFortStreamMediaSource* MediaSource; // 0x2b0 (0x8)
	float MediaStartTimeFromInit; // 0x2b8 (0x4)
	unsigned char padding_2bc[0xc]; // 0x2bc (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaStreamingRadio.Stop (Underlying native function: Stop 0x8868d4c)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.Start (Underlying native function: Start 0x8868cb8)
	void Start(int& StationIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnSuccessfulURL (Underlying native function: OnSuccessfulURL 0x8868434)
	void OnSuccessfulURL(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnMediaOpened (Underlying native function: OnMediaOpened 0x88682d4)
	void OnMediaOpened(struct FString& String); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnMediaClosed (Underlying native function: OnMediaClosed 0x59d3d60)
	void OnMediaClosed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnFailedURL (Underlying native function: OnFailedURL 0x886800c)
	void OnFailedURL(struct FString& URL); // (Final | Native | Private)
};

