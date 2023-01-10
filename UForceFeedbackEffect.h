// Class /Script/Engine.ForceFeedbackEffect
// Size: 0x50
class UForceFeedbackEffect : public UObject
{
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; // 0x28 (0x10)
	struct TArray<class UInputDeviceProperty*> DeviceProperties; // 0x38 (0x10)
	float Duration; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

