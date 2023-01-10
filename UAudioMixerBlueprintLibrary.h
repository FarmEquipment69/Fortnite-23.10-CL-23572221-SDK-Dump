// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache (Underlying native function: TrimAudioCache 0x9985ce8)
	static float TrimAudioCache(float& InMegabytesToFree); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice (Underlying native function: SwapAudioOutputDevice 0x9985af0)
	static void SwapAudioOutputDevice(class UObject*& WorldContextObject, struct FString& NewDeviceId, struct FDelegate& OnCompletedDeviceSwap); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput (Underlying native function: StopRecordingOutput 0x99854ec)
	static class USoundWave* StopRecordingOutput(class UObject*& WorldContextObject, enum EAudioRecordingExportType& ExportType, struct FString& Name, struct FString& Path, class USoundSubmix*& SubmixToRecord, class USoundWave*& ExistingSoundWaveToOverwrite); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus (Underlying native function: StopAudioBus 0x99852f4)
	static void StopAudioBus(class UObject*& WorldContextObject, class UAudioBus*& AudioBus); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput (Underlying native function: StopAnalyzingOutput 0x9985220)
	static void StopAnalyzingOutput(class UObject*& WorldContextObject, class USoundSubmix*& SubmixToStopAnalyzing); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput (Underlying native function: StartRecordingOutput 0x9985120)
	static void StartRecordingOutput(class UObject*& WorldContextObject, float& ExpectedDuration, class USoundSubmix*& SubmixToRecord); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus (Underlying native function: StartAudioBus 0x9984d90)
	static void StartAudioBus(class UObject*& WorldContextObject, class UAudioBus*& AudioBus); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput (Underlying native function: StartAnalyzingOutput 0x9984b84)
	static void StartAnalyzingOutput(class UObject*& WorldContextObject, class USoundSubmix*& SubmixToAnalyze, enum EFFTSize& FFTSize, enum EFFTPeakInterpolationMethod& InterpolationMethod, enum EFFTWindowType& WindowType, float& HopSize, enum EAudioSpectrumType& SpectrumType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride (Underlying native function: SetSubmixEffectChainOverride 0x998445c)
	static void SetSubmixEffectChainOverride(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, struct TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float& FadeTimeSec); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry (Underlying native function: SetBypassSourceEffectChainEntry 0x998380c)
	static void SetBypassSourceEffectChainEntry(class UObject*& WorldContextObject, class USoundEffectSourcePresetChain*& PresetChain, int& EntryIndex, bool& bBypassed); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput (Underlying native function: ResumeRecordingOutput 0x9983470)
	static void ResumeRecordingOutput(class UObject*& WorldContextObject, class USoundSubmix*& SubmixToPause); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect (Underlying native function: ReplaceSubmixEffect 0x9982ed0)
	static void ReplaceSubmixEffect(class UObject*& WorldContextObject, class USoundSubmix*& InSoundSubmix, int& SubmixChainIndex, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix (Underlying native function: ReplaceSoundEffectSubmix 0x9982ed0)
	static void ReplaceSoundEffectSubmix(class UObject*& WorldContextObject, class USoundSubmix*& InSoundSubmix, int& SubmixChainIndex, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex (Underlying native function: RemoveSubmixEffectPresetAtIndex 0x9982dd8)
	static void RemoveSubmixEffectPresetAtIndex(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, int& SubmixChainIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset (Underlying native function: RemoveSubmixEffectPreset 0x9982ce0)
	static void RemoveSubmixEffectPreset(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex (Underlying native function: RemoveSubmixEffectAtIndex 0x9982dd8)
	static void RemoveSubmixEffectAtIndex(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, int& SubmixChainIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect (Underlying native function: RemoveSubmixEffect 0x9982ce0)
	static void RemoveSubmixEffect(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain (Underlying native function: RemoveSourceEffectFromPresetChain 0x9982b08)
	static void RemoveSourceEffectFromPresetChain(class UObject*& WorldContextObject, class USoundEffectSourcePresetChain*& PresetChain, int& EntryIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect (Underlying native function: RemoveMasterSubmixEffect 0x9982a34)
	static void RemoveMasterSubmixEffect(class UObject*& WorldContextObject, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback (Underlying native function: PrimeSoundForPlayback 0x9982894)
	static void PrimeSoundForPlayback(class USoundWave*& SoundWave, struct FDelegate& OnLoadCompletion); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback (Underlying native function: PrimeSoundCueForPlayback 0x9982828)
	static void PrimeSoundCueForPlayback(class USoundCue*& SoundCue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput (Underlying native function: PauseRecordingOutput 0x9982774)
	static void PauseRecordingOutput(class UObject*& WorldContextObject, class USoundSubmix*& SubmixToPause); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings (Underlying native function: MakePresetSpectralAnalysisBandSettings 0x9982534)
	static struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum EAudioSpectrumBandPresetType& InBandPresetType, int& InNumBands, int& InAttackTimeMsec, int& InReleaseTimeMsec); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings (Underlying native function: MakeMusicalSpectralAnalysisBandSettings 0x99823a4)
	static struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int& InNumSemitones, enum EMusicalNoteName& InStartingMusicalNote, int& InStartingOctave, int& InAttackTimeMsec, int& InReleaseTimeMsec); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings (Underlying native function: MakeFullSpectrumSpectralAnalysisBandSettings 0x99821e8)
	static struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int& InNumBands, float& InMinimumFrequency, float& InMaximumFrequency, int& InAttackTimeMsec, int& InReleaseTimeMsec); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive (Underlying native function: IsAudioBusActive 0x9981f50)
	static bool IsAudioBusActive(class UObject*& WorldContextObject, class UAudioBus*& AudioBus); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies (Underlying native function: GetPhaseForFrequencies 0x9981a54)
	static void GetPhaseForFrequencies(class UObject*& WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, class USoundSubmix*& SubmixToAnalyze); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain (Underlying native function: GetNumberOfEntriesInSourceEffectChain 0x9981944)
	static int GetNumberOfEntriesInSourceEffectChain(class UObject*& WorldContextObject, class USoundEffectSourcePresetChain*& PresetChain); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies (Underlying native function: GetMagnitudeForFrequencies 0x9981710)
	static void GetMagnitudeForFrequencies(class UObject*& WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, class USoundSubmix*& SubmixToAnalyze); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName (Underlying native function: GetCurrentAudioOutputDeviceName 0x9980edc)
	static void GetCurrentAudioOutputDeviceName(class UObject*& WorldContextObject, struct FDelegate& OnObtainCurrentDeviceEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices (Underlying native function: GetAvailableAudioOutputDevices 0x9980d74)
	static void GetAvailableAudioOutputDevices(class UObject*& WorldContextObject, struct FDelegate& OnObtainDevicesEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString (Underlying native function: Conv_AudioOutputDeviceInfoToString 0x9980164)
	static struct FString ConvAudioOutputDeviceInfoToString(struct FAudioOutputDeviceInfo& Info); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects (Underlying native function: ClearSubmixEffects 0x99800a4)
	static void ClearSubmixEffects(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride (Underlying native function: ClearSubmixEffectChainOverride 0x997ffa4)
	static void ClearSubmixEffectChainOverride(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, float& FadeTimeSec); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects (Underlying native function: ClearMasterSubmixEffects 0x997ff30)
	static void ClearMasterSubmixEffects(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect (Underlying native function: AddSubmixEffect 0x997fc80)
	static int AddSubmixEffect(class UObject*& WorldContextObject, class USoundSubmix*& SoundSubmix, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain (Underlying native function: AddSourceEffectToPresetChain 0x997fab8)
	static void AddSourceEffectToPresetChain(class UObject*& WorldContextObject, class USoundEffectSourcePresetChain*& PresetChain, struct FSourceEffectChainEntry& Entry); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect (Underlying native function: AddMasterSubmixEffect 0x997f93c)
	static void AddMasterSubmixEffect(class UObject*& WorldContextObject, class USoundEffectSubmixPreset*& SubmixEffectPreset); // (Final | Native | Static | Public | BlueprintCallable)
};

