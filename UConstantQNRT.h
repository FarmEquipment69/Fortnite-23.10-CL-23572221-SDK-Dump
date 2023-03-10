// Class /Script/AudioSynesthesia.ConstantQNRT
// Size: 0x80
class UConstantQNRT : public UAudioSynesthesiaNRT
{
	class UConstantQNRTSettings* Settings; // 0x78 (0x8)

	/* Functions */

	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime (Underlying native function: GetNormalizedChannelConstantQAtTime 0x6e37924)
	void GetNormalizedChannelConstantQAtTime(float& InSeconds, int& InChannel, struct TArray<float>& OutConstantQ); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime (Underlying native function: GetChannelConstantQAtTime 0x6e3744c)
	void GetChannelConstantQAtTime(float& InSeconds, int& InChannel, struct TArray<float>& OutConstantQ); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

