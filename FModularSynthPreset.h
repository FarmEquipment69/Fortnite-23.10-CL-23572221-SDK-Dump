// ScriptStruct /Script/Synthesis.ModularSynthPreset
// Size: 0xe0
struct FModularSynthPreset : FTableRowBase
{
	unsigned char bEnablePolyphony; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	enum ESynth1OscType Osc1Type; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float Osc1Gain; // 0x10 (0x4)
	float Osc1Octave; // 0x14 (0x4)
	float Osc1Semitones; // 0x18 (0x4)
	float Osc1Cents; // 0x1c (0x4)
	float Osc1PulseWidth; // 0x20 (0x4)
	enum ESynth1OscType Osc2Type; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	float Osc2Gain; // 0x28 (0x4)
	float Osc2Octave; // 0x2c (0x4)
	float Osc2Semitones; // 0x30 (0x4)
	float Osc2Cents; // 0x34 (0x4)
	float Osc2PulseWidth; // 0x38 (0x4)
	float Portamento; // 0x3c (0x4)
	unsigned char bEnableUnison; // 0x40 (0x1)
	unsigned char bEnableOscillatorSync; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float Spread; // 0x44 (0x4)
	float Pan; // 0x48 (0x4)
	float LFO1Frequency; // 0x4c (0x4)
	float LFO1Gain; // 0x50 (0x4)
	enum ESynthLFOType LFO1Type; // 0x54 (0x1)
	enum ESynthLFOMode LFO1Mode; // 0x55 (0x1)
	enum ESynthLFOPatchType LFO1PatchType; // 0x56 (0x1)
	unsigned char unreflected_57[0x1]; // 0x57 (0x1) 
	float LFO2Frequency; // 0x58 (0x4)
	float LFO2Gain; // 0x5c (0x4)
	enum ESynthLFOType LFO2Type; // 0x60 (0x1)
	enum ESynthLFOMode LFO2Mode; // 0x61 (0x1)
	enum ESynthLFOPatchType LFO2PatchType; // 0x62 (0x1)
	unsigned char unreflected_63[0x1]; // 0x63 (0x1) 
	float GainDb; // 0x64 (0x4)
	float AttackTime; // 0x68 (0x4)
	float DecayTime; // 0x6c (0x4)
	float SustainGain; // 0x70 (0x4)
	float ReleaseTime; // 0x74 (0x4)
	enum ESynthModEnvPatch ModEnvPatchType; // 0x78 (0x1)
	enum ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79 (0x1)
	unsigned char unreflected_7a[0x2]; // 0x7a (0x2) 
	unsigned char bInvertModulationEnvelope; // 0x7c (0x1)
	unsigned char bInvertModulationEnvelopeBias; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	float ModulationEnvelopeDepth; // 0x80 (0x4)
	float ModulationEnvelopeAttackTime; // 0x84 (0x4)
	float ModulationEnvelopeDecayTime; // 0x88 (0x4)
	float ModulationEnvelopeSustainGain; // 0x8c (0x4)
	float ModulationEnvelopeReleaseTime; // 0x90 (0x4)
	unsigned char bLegato; // 0x94 (0x1)
	unsigned char bRetrigger; // 0x94 (0x1)
	unsigned char unreflected_95[0x3]; // 0x95 (0x3) 
	float FilterFrequency; // 0x98 (0x4)
	float FilterQ; // 0x9c (0x4)
	enum ESynthFilterType FilterType; // 0xa0 (0x1)
	enum ESynthFilterAlgorithm FilterAlgorithm; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x2]; // 0xa2 (0x2) 
	unsigned char bStereoDelayEnabled; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	enum ESynthStereoDelayMode StereoDelayMode; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	float StereoDelayTime; // 0xac (0x4)
	float StereoDelayFeedback; // 0xb0 (0x4)
	float StereoDelayWetlevel; // 0xb4 (0x4)
	float StereoDelayRatio; // 0xb8 (0x4)
	unsigned char bChorusEnabled; // 0xbc (0x1)
	unsigned char unreflected_bd[0x3]; // 0xbd (0x3) 
	float ChorusDepth; // 0xc0 (0x4)
	float ChorusFeedback; // 0xc4 (0x4)
	float ChorusFrequency; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct TArray<struct FEpicSynth1Patch> Patches; // 0xd0 (0x10)
};

