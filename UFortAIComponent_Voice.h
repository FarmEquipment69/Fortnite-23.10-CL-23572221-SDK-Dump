// Class /Script/FortniteAI.FortAIComponent_Voice
// Size: 0xa8
class UFortAIComponent_Voice : public UActorComponent
{
	class UFortTaggedSoundBank* VoiceSoundBank; // 0xa0 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAIComponent_Voice.SetVoiceSoundBank (Underlying native function: SetVoiceSoundBank 0xa09f7c8)
	void SetVoiceSoundBank(class UFortTaggedSoundBank*& InSoundBank); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIComponent_Voice.GetVoiceSoundBank (Underlying native function: GetVoiceSoundBank 0x26e160c)
	class UFortTaggedSoundBank* GetVoiceSoundBank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

