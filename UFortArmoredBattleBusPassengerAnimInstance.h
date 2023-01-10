// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
// Size: 0x1b60
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstance
{
	struct FRotator PreviousVehicleRotator; // 0x1a98 (0x18)
	float SmoothedVehicleYawRate; // 0x1ab0 (0x4)
	int PawnSeat; // 0x1ab4 (0x4)
	bool bIsFrontTurretPassenger; // 0x1ab8 (0x1)
	bool bIsRearTurretPassenger; // 0x1ab9 (0x1)
	unsigned char unreflected_1aba[0x2]; // 0x1aba (0x2) 
	float Speed; // 0x1abc (0x4)
	float YawDelta; // 0x1ac0 (0x4)
	float TurretYaw; // 0x1ac4 (0x4)
	float TurretPitch; // 0x1ac8 (0x4)
	unsigned char unreflected_1acc[0x4]; // 0x1acc (0x4) 
	struct FRotator TurretYawRotator; // 0x1ad0 (0x18)
	float SlopeRollDegreeAngle; // 0x1ae8 (0x4)
	float SlopePitchDegreeAngle; // 0x1aec (0x4)
	struct FVector HandAttachL; // 0x1af0 (0x18)
	struct FVector HandAttachR; // 0x1b08 (0x18)
	struct TEnumAsByte<ERelativeTransformSpace> TransformSpace; // 0x1b20 (0x1)
	unsigned char unreflected_1b21[0x3]; // 0x1b21 (0x3) 
	float UpdateYawDeltaSmoothedLerpRate; // 0x1b24 (0x4)
	int TurretPassengerFront; // 0x1b28 (0x4)
	int TurretPassengerRear; // 0x1b2c (0x4)
	struct FName FrontFootBoneName; // 0x1b30 (0x4)
	struct FName RearFootBoneName; // 0x1b34 (0x4)
	struct FName GunHandAttachBoneNameFrontLeft; // 0x1b38 (0x4)
	struct FName GunHandAttachBoneNameRearLeft; // 0x1b3c (0x4)
	struct FName GunHandAttachBoneNameFrontRight; // 0x1b40 (0x4)
	struct FName GunHandAttachBoneNameRearRight; // 0x1b44 (0x4)
	struct FName PassengerBoneNameFront; // 0x1b48 (0x4)
	struct FName PassengerBoneNameRear; // 0x1b4c (0x4)
	float TurretPitchDegMin; // 0x1b50 (0x4)
	float TurretPitchDegMax; // 0x1b54 (0x4)
	float LocalPlayerTurretPitchEaseRate; // 0x1b58 (0x4)
	unsigned char padding_1b5c[0x4]; // 0x1b5c (0x4)

	/* Functions */

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed (Underlying native function: UpdateYawDeltaSmoothed 0x6eb0868)
	void UpdateYawDeltaSmoothed(class AFortAthenaVehicle*& VehicleActor, struct FName& SocketName, struct FRotator& NewRotation, float& SmoothedYawValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate (Underlying native function: UpdateSmoothedVehicleYawRate 0x6eb0440)
	void UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle*& VehicleActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues (Underlying native function: UpdateHandPositionsSlopeValues 0x6eb03c0)
	void UpdateHandPositionsSlopeValues(class USkeletalMeshComponent*& BusMeshComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation (Underlying native function: UnrotateHandAttachLocation 0x6eb0268)
	struct FVector UnrotateHandAttachLocation(struct FVector& HandLocation, struct FVector& FootLocation, struct FRotator& FootRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform (Underlying native function: GetPassengerTransform 0x6eaff90)
	struct FTransform GetPassengerTransform(class USkeletalMeshComponent*& BusMeshComponent); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation (Underlying native function: GetHandAttachLocation 0x6eafe80)
	struct FVector GetHandAttachLocation(class USkeletalMeshComponent*& BusMeshComponent, struct FName& FrontHandAttachBoneName, struct FName& RearHandAttachBoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform (Underlying native function: GetFootAttachTransform 0x6eafda4)
	struct FTransform GetFootAttachTransform(class USkeletalMeshComponent*& BusMeshComponent); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain (Underlying native function: GenerateCharacterPitchAndYawForSlopedTerrain 0x6eafc38)
	void GenerateCharacterPitchAndYawForSlopedTerrain(class AFortAthenaVehicle*& VehicleActor, float& TurretYaw, float& TurretPitch, struct FRotator& PawnYawRotator); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

