// Class /Script/Engine.AmbientSound
// Size: 0x290
class AAmbientSound : public AActor
{
	class UAudioComponent* AudioComponent; // 0x288 (0x8)

	/* Functions */

	// Function /Script/Engine.AmbientSound.Stop (Underlying native function: Stop 0x9a82948)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AmbientSound.Play (Underlying native function: Play 0x9a82764)
	void Play(float& StartTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AmbientSound.FadeOut (Underlying native function: FadeOut 0x9a82554)
	void FadeOut(float& FadeOutDuration, float& FadeVolumeLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AmbientSound.FadeIn (Underlying native function: FadeIn 0x9a82480)
	void FadeIn(float& FadeInDuration, float& FadeVolumeLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AmbientSound.AdjustVolume (Underlying native function: AdjustVolume 0x9a823b0)
	void AdjustVolume(float& AdjustVolumeDuration, float& AdjustVolumeLevel); // (Final | Native | Public | BlueprintCallable)
};

