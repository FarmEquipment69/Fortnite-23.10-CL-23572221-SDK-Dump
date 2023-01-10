// ScriptStruct /Script/IKRig.TargetChainSettings
// Size: 0xa0
struct FTargetChainSettings
{
	struct FTargetChainFKSettings FK; // 0x0 (0x18)
	struct FTargetChainIKSettings IK; // 0x18 (0x70)
	struct FTargetChainSpeedPlantSettings SpeedPlanting; // 0x88 (0x14)
	unsigned char padding_9c[0x4]; // 0x9c (0x4)
};

