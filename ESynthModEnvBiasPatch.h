// Enum /Script/Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
  PatchToNone = 0,
  PatchToOscFreq = 1,
  PatchToFilterFreq = 2,
  PatchToFilterQ = 3,
  PatchToLFO1Gain = 4,
  PatchToLFO2Gain = 5,
  PatchToLFO1Freq = 6,
  PatchToLFO2Freq = 7,
  Count = 8,
  ESynthModEnvBiasPatch_MAX = 9
};