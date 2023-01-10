// Class /Script/AudioGameplayVolume.AudioGameplayVolume
// Size: 0x2f0
class AAudioGameplayVolume : public AVolume
{
	class UAudioGameplayVolumeComponent* AGVComponent; // 0x2c0 (0x8)
	bool bEnabled; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x7]; // 0x2c9 (0x7) 
	struct FMulticastInlineDelegate OnListenerEnterEvent; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnListenerExitEvent; // 0x2e0 (0x10)

	/* Functions */

	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.SetEnabled (Underlying native function: SetEnabled 0x7b064e0)
	void SetEnabled(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled (Underlying native function: OnRep_bEnabled 0x6f4981c)
	void OnRepbEnabled(); // (Native | Protected)

	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnListenerExit (Underlying native function: OnListenerExit 0x7b064c8)
	void OnListenerExit(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter (Underlying native function: OnListenerEnter 0x6ca340c)
	void OnListenerEnter(); // (Native | Event | Public | BlueprintEvent)
};

