// ScriptStruct /Script/FortniteGame.VehicleTrickInfo
// Size: 0x198
struct FVehicleTrickInfo
{
	float LastOnGroundTime; // 0x0 (0x4)
	float mCreditDisabledTime; // 0x4 (0x4)
	int TrickScore; // 0x8 (0x4)
	unsigned char unreflected_c[0x90]; // 0xc (0x90) 
	int TrickAxisCount; // 0x9c (0x4)
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	float AirControlsAlpha; // 0xb8 (0x4)
	float AirDistance; // 0xbc (0x4)
	float AirDistanceSqrd; // 0xc0 (0x4)
	float AirTime; // 0xc4 (0x4)
	float AirHeight; // 0xc8 (0x4)
	float TimeAtLaunch; // 0xcc (0x4)
	struct FVector LocationAtLaunch; // 0xd0 (0x18)
	struct FVector ForwardVectorAtLaunch; // 0xe8 (0x18)
	struct FVector UpVectorAtLaunch; // 0x100 (0x18)
	struct FVector FlatForwardVectorAtLaunch; // 0x118 (0x18)
	struct FVector PrevForwardVec; // 0x130 (0x18)
	struct FVector PrevRightVec; // 0x148 (0x18)
	struct FVector PrevUpVec; // 0x160 (0x18)
	int PeterPanCount; // 0x178 (0x4)
	int StoopingSquirrelCount; // 0x17c (0x4)
	unsigned char bDidPeterPan; // 0x180 (0x1)
	unsigned char bDidStoopingSquirrel; // 0x180 (0x1)
	unsigned char bInAirTrick; // 0x180 (0x1)
	unsigned char bCreditTrick; // 0x180 (0x1)
	unsigned char bTrickDeactivated; // 0x180 (0x1)
	unsigned char bStuckLanding; // 0x180 (0x1)
	unsigned char bDoingRotationTrick; // 0x180 (0x1)
	unsigned char padding_181[0x17]; // 0x181 (0x17)
};

