// Class /Script/AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x28
class IAudioLinkBlueprintInterface : public IInterface
{

	/* Functions */

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.StopLink (Underlying native function: StopLink 0x26aab60)
	void StopLink(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound (Underlying native function: SetLinkSound 0x80ceb9c)
	void SetLinkSound(class USoundBase*& NewSound); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink (Underlying native function: PlayLink 0x9967cd4)
	void PlayLink(float& StartTime); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying (Underlying native function: IsLinkPlaying 0x7f981bc)
	bool IsLinkPlaying(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

