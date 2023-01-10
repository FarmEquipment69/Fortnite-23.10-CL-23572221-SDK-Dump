// Class /Script/FortniteGame.FortPlayerAnimInstance_OctopusDriver
// Size: 0x1cd0
class UFortPlayerAnimInstance_OctopusDriver : public UFortPlayerAnimInstance
{
	struct FFortAnimInput_VelocityImpact VelocityImpact; // 0x1a98 (0xf0)
	struct FVector SeatLocation; // 0x1b88 (0x18)
	struct FRotator HandRotationOffset; // 0x1ba0 (0x18)
	struct FRotator FootRotationOffset; // 0x1bb8 (0x18)
	struct FRotator SeatRotationPose; // 0x1bd0 (0x18)
	struct FVector HandAttachmentLocLeft; // 0x1be8 (0x18)
	struct FRotator HandAttachmentRotLeft; // 0x1c00 (0x18)
	struct FVector HandAttachmentLocRight; // 0x1c18 (0x18)
	struct FRotator HandAttachmentRotRight; // 0x1c30 (0x18)
	struct FVector FootAttachmentLocLeft; // 0x1c48 (0x18)
	struct FRotator FootAttachmentRotLeft; // 0x1c60 (0x18)
	struct FVector FootAttachmentLocRight; // 0x1c78 (0x18)
	struct FRotator FootAttachmentRotRight; // 0x1c90 (0x18)
	enum EFortCardinalDirection PivotDir; // 0x1ca8 (0x1)
	unsigned char unreflected_1ca9[0x3]; // 0x1ca9 (0x3) 
	float LowerVelocityTime; // 0x1cac (0x4)
	float LowerVelocityDuration; // 0x1cb0 (0x4)
	float FwdBwd; // 0x1cb4 (0x4)
	float LeftRight; // 0x1cb8 (0x4)
	float SeatSteerYaw; // 0x1cbc (0x4)
	float SeatSteerPitch; // 0x1cc0 (0x4)
	float SeatSteerStrength; // 0x1cc4 (0x4)
	unsigned char bIsLowerVelocity; // 0x1cc8 (0x1)
	unsigned char bWasLowerVelocity; // 0x1cc8 (0x1)
	unsigned char bShouldPlayGrappleFire; // 0x1cc8 (0x1)
	unsigned char bShouldApplyLeanAdditive; // 0x1cc8 (0x1)
	unsigned char bShouldPlayPivotTransition; // 0x1cc8 (0x1)
	unsigned char bHasDriver; // 0x1cc8 (0x1)
	unsigned char bIsBoosting; // 0x1cc8 (0x1)
	unsigned char bWantsEastWestPivot; // 0x1cc8 (0x1)
	unsigned char bWantsNorthSouthPivot; // 0x1cc9 (0x1)
	unsigned char bIsVehicleInAir; // 0x1cc9 (0x1)
	unsigned char bIsTowhookHolstered; // 0x1cc9 (0x1)
	unsigned char bIsTowhookExtending; // 0x1cc9 (0x1)
	unsigned char bIsTowhookAttached; // 0x1cc9 (0x1)
	unsigned char bEnterMovingInPlace; // 0x1cc9 (0x1)
	unsigned char padding_1cca[0x6]; // 0x1cca (0x6)
};

