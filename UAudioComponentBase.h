// Class /Script/VGameplayRst.AudioComponentBase
// Size: 0xa0
class UAudioComponentBase : public UEntityActorComponent
{
	class UVerseAssetPtr* SoundAsset; // 0x90 (0x8)
	struct FActiveSoundInfo* ActiveSoundInfo; // 0x98 (0x8)

	/* Functions */

	// Function /Script/VGameplayRst.AudioComponentBase.OnRep_SoundAsset (Underlying native function: OnRep_SoundAsset 0x6ce321c)
	void OnRepSoundAsset(); // (Final | Native | Protected)

	// Function /Script/VGameplayRst.AudioComponentBase.OnRep_ActiveSoundInfo (Underlying native function: OnRep_ActiveSoundInfo 0x6ce2f88)
	void OnRepActiveSoundInfo(); // (Final | Native | Protected)
};

