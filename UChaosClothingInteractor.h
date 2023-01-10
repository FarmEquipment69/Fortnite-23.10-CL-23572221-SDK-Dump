// Class /Script/ChaosCloth.ChaosClothingInteractor
// Size: 0x40
class UChaosClothingInteractor : public UClothingInteractor
{
	unsigned char unreflected_40[0x40]; 

	/* Functions */

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetWind (Underlying native function: SetWind 0x27a09a0)
	void SetWind(struct FVector2D& Drag, struct FVector2D& Lift, float& AirDensity, struct FVector& WindVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale (Underlying native function: SetVelocityScale 0x27a0880)
	void SetVelocityScale(struct FVector& LinearVelocityScale, float& AngularVelocityScale, float& FictitiousAngularScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetPressure (Underlying native function: SetPressure 0x7d47be8)
	void SetPressure(struct FVector2D& Pressure); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear (Underlying native function: SetMaterialLinear 0x7d47aec)
	void SetMaterialLinear(float& EdgeStiffness, float& BendingStiffness, float& AreaStiffness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterial (Underlying native function: SetMaterial 0x2a6ad88)
	void SetMaterial(struct FVector2D& EdgeStiffness, struct FVector2D& BendingStiffness, struct FVector2D& AreaStiffness); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear (Underlying native function: SetLongRangeAttachmentLinear 0x7d47a28)
	void SetLongRangeAttachmentLinear(float& TetherStiffness, float& TetherScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment (Underlying native function: SetLongRangeAttachment 0x27a0ba4)
	void SetLongRangeAttachment(struct FVector2D& TetherStiffness, struct FVector2D& TetherScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity (Underlying native function: SetGravity 0x27a08dc)
	void SetGravity(float& GravityScale, bool& bIsGravityOverridden, struct FVector& GravityOverride); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping (Underlying native function: SetDamping 0x27a0ae0)
	void SetDamping(float& DampingCoefficient, float& LocalDampingCoefficient); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision (Underlying native function: SetCollision 0x2a2914c)
	void SetCollision(float& CollisionThickness, float& FrictionCoefficient, bool& bUseCCD, float& SelfCollisionThickness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetBackstop (Underlying native function: SetBackstop 0x7d47950)
	void SetBackstop(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear (Underlying native function: SetAnimDriveLinear 0x7d478cc)
	void SetAnimDriveLinear(float& AnimDriveStiffness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive (Underlying native function: SetAnimDrive 0x2b12d94)
	void SetAnimDrive(struct FVector2D& AnimDriveStiffness, struct FVector2D& AnimDriveDamping); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics (Underlying native function: SetAerodynamics 0x7d477c0)
	void SetAerodynamics(float& DragCoefficient, float& LiftCoefficient, struct FVector& WindVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport (Underlying native function: ResetAndTeleport 0x7d476fc)
	void ResetAndTeleport(bool& bReset, bool& bTeleport); // (Final | Native | Public | BlueprintCallable)
};

