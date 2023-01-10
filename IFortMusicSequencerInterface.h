// Class /Script/FortniteGame.FortMusicSequencerInterface
// Size: 0x28
class IFortMusicSequencerInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMusicSequencerInterface.OnHitByMusicSequencer (Underlying native function: OnHitByMusicSequencer 0x80ceb9c)
	void OnHitByMusicSequencer(class AController*& InstigatedBy); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicSequencerInterface.GetMusicSequencerHitSoundLocation (Underlying native function: GetMusicSequencerHitSoundLocation 0x8384578)
	struct FVector GetMusicSequencerHitSoundLocation(class AController*& InstigatedBy); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMusicSequencerInterface.GetMusicSequencerHitSound (Underlying native function: GetMusicSequencerHitSound 0x8384344)
	void GetMusicSequencerHitSound(class AController*& InstigatedBy, class USoundBase*& sound, int& SoundIndex, class USoundAttenuation*& Attenuation, struct TSet<class USoundConcurrency*>& Concurrency); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

