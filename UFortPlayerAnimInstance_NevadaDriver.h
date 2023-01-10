// Class /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// Size: 0x1e50
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{
	class AFortNevadaVehicle* NevadaVehicle; // 0x1cd0 (0x8)
	float AnimLeftRight; // 0x1cd8 (0x4)
	float AnimForwardBackward; // 0x1cdc (0x4)
	struct FVector RootAttachmentLoc; // 0x1ce0 (0x18)
	struct FRotator RootAttachmentRot; // 0x1cf8 (0x18)
	int BoostCount; // 0x1d10 (0x4)
	int PreviousBoostCount; // 0x1d14 (0x4)
	bool bIsBoostingAgain; // 0x1d18 (0x1)
	bool bIsMoving; // 0x1d19 (0x1)
	unsigned char unreflected_1d1a[0x2]; // 0x1d1a (0x2) 
	float MinVehicleVelocityToBeMoving; // 0x1d1c (0x4)
	struct FName DriverSocketName; // 0x1d20 (0x4)
	struct FName RightHandAttachmentSocketName; // 0x1d24 (0x4)
	struct FName LeftHandAttachmentSocketName; // 0x1d28 (0x4)
	struct FName RightFootAttachmentSocketName; // 0x1d2c (0x4)
	struct FName LeftFootAttachementSocketName; // 0x1d30 (0x4)
	unsigned char unreflected_1d34[0x4]; // 0x1d34 (0x4) 
	struct FRotator RightHandRotationOffset; // 0x1d38 (0x18)
	struct FRotator LeftHandRotationOffset; // 0x1d50 (0x18)
	struct FRotator RightFootRotationOffset; // 0x1d68 (0x18)
	struct FRotator LeftFootRotationOffset; // 0x1d80 (0x18)
	struct FVector RootAttachmentOffset; // 0x1d98 (0x18)
	unsigned char padding_1db0[0xa0]; // 0x1db0 (0xa0)
};

