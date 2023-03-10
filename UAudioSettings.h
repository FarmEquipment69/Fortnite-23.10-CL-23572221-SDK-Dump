// Class /Script/Engine.AudioSettings
// Size: 0x190
class UAudioSettings : public UDeveloperSettings
{
	struct FSoftObjectPath DefaultSoundClassName; // 0x30 (0x18)
	struct FSoftObjectPath DefaultMediaSoundClassName; // 0x48 (0x18)
	struct FSoftObjectPath DefaultSoundConcurrencyName; // 0x60 (0x18)
	struct FSoftObjectPath DefaultBaseSoundMix; // 0x78 (0x18)
	struct FSoftObjectPath VoiPSoundClass; // 0x90 (0x18)
	struct FSoftObjectPath MasterSubmix; // 0xa8 (0x18)
	struct FSoftObjectPath BaseDefaultSubmix; // 0xc0 (0x18)
	struct FSoftObjectPath ReverbSubmix; // 0xd8 (0x18)
	struct FSoftObjectPath EQSubmix; // 0xf0 (0x18)
	enum EVoiceSampleRate VoiPSampleRate; // 0x108 (0x4)
	enum EDefaultAudioCompressionType DefaultAudioCompressionType; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	float DefaultReverbSendLevel; // 0x110 (0x4)
	int MaximumConcurrentStreams; // 0x114 (0x4)
	float GlobalMinPitchScale; // 0x118 (0x4)
	float GlobalMaxPitchScale; // 0x11c (0x4)
	struct TArray<struct FAudioQualitySettings> QualityLevels; // 0x120 (0x10)
	unsigned char bAllowPlayWhenSilent; // 0x130 (0x1)
	unsigned char bDisableMasterEQ; // 0x130 (0x1)
	unsigned char bAllowCenterChannel3DPanning; // 0x130 (0x1)
	unsigned char unreflected_131[0x3]; // 0x131 (0x3) 
	uint32_t NumStoppingSources; // 0x134 (0x4)
	enum EPanningMethod PanningMethod; // 0x138 (0x1)
	enum EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x139 (0x1)
	unsigned char unreflected_13a[0x6]; // 0x13a (0x6) 
	struct FString DialogueFilenameFormat; // 0x140 (0x10)
	struct TArray<struct FSoundDebugEntry> DebugSounds; // 0x150 (0x10)
	struct TArray<struct FDefaultAudioBusSettings> DefaultAudioBuses; // 0x160 (0x10)
	class USoundClass* DefaultSoundClass; // 0x170 (0x8)
	class USoundClass* DefaultMediaSoundClass; // 0x178 (0x8)
	class USoundConcurrency* DefaultSoundConcurrency; // 0x180 (0x8)
	unsigned char padding_188[0x8]; // 0x188 (0x8)
};

