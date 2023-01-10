// Class /Script/FortniteGame.FortPhysicsSimulationLibrary
// Size: 0x28
class UFortPhysicsSimulationLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.WakeUp (Underlying native function: WakeUp 0x1e7eccc)
	static bool WakeUp(class AActor*& PhysicsObject, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.StopSimulatingPhysicsObject (Underlying native function: StopSimulatingPhysicsObject 0x8b0f2e8)
	static void StopSimulatingPhysicsObject(class AActor*& PhysicsObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.StartSimulatingPhysicsObject (Underlying native function: StartSimulatingPhysicsObject 0x8b0f1ec)
	static void StartSimulatingPhysicsObject(class AActor*& PhysicsObject, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.SetPhysicsLinearVelocity (Underlying native function: SetPhysicsLinearVelocity 0x8b0ef5c)
	static void SetPhysicsLinearVelocity(class AActor*& PhysicsObject, struct FVector& NewVel, bool& bAddToCurrent, struct FName& BoneName, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.SetPhysicsAngularVelocity (Underlying native function: SetPhysicsAngularVelocity 0x8b0edc8)
	static void SetPhysicsAngularVelocity(class AActor*& PhysicsObject, struct FVector& NewAngVel, bool& bAddToCurrent, struct FName& BoneName, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.SetImpactInstigatorForPhysicsObject (Underlying native function: SetImpactInstigatorForPhysicsObject 0x8b0ea7c)
	static void SetImpactInstigatorForPhysicsObject(class AActor*& PhysicsObject, class AActor*& Instigator); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.SetEnableImpulseOnDamageForPhysicsObject (Underlying native function: SetEnableImpulseOnDamageForPhysicsObject 0x8b0e8b4)
	static void SetEnableImpulseOnDamageForPhysicsObject(class AActor*& PhysicsObject, bool& bEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.PutToSleep (Underlying native function: PutToSleep 0x8b0e63c)
	static void PutToSleep(class AActor*& PhysicsObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.PerformPhysicsObjectValidationChecks (Underlying native function: PerformPhysicsObjectValidationChecks 0x8b0e54c)
	static bool PerformPhysicsObjectValidationChecks(class AActor*& PhysicsObject, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.OverridePhysicsReplicationErrorCorrection (Underlying native function: OverridePhysicsReplicationErrorCorrection 0x8b0e420)
	static void OverridePhysicsReplicationErrorCorrection(class AActor*& PhysicsObject, struct FRigidBodyErrorCorrection& NewErrorCorrection); // (Final | 0x00000002 | Native | Static | Public)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.KmHToCmS (Underlying native function: KmHToCmS 0x8b0dcb8)
	static float KmHToCmS(float& KmH); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.IsPhysicsObjectEmbeddedInLandscape (Underlying native function: IsPhysicsObjectEmbeddedInLandscape 0x8b0dc38)
	static bool IsPhysicsObjectEmbeddedInLandscape(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.IsPhysicsObjectActiveInSimulation (Underlying native function: IsPhysicsObjectActiveInSimulation 0x8b0dbb8)
	static bool IsPhysicsObjectActiveInSimulation(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetPhysicsObjectType (Underlying native function: GetPhysicsObjectType 0x8b0d004)
	static enum EFortPhysicsObjectType GetPhysicsObjectType(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetPhysicsObjectSimSize (Underlying native function: GetPhysicsObjectSimSize 0x8b0cf84)
	static enum EFortPhysicsSimSize GetPhysicsObjectSimSize(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetPhysicsBodyCenter (Underlying native function: GetPhysicsBodyCenter 0x8b0cd7c)
	static struct FVector GetPhysicsBodyCenter(class AActor*& InActor, float& OptionalVelocityModificationRatio, struct FVector& OptionalVelocity); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetMass (Underlying native function: GetMass 0x8b0ca9c)
	static float GetMass(class AActor*& InActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetImpulseVectorForDirectHit (Underlying native function: GetImpulseVectorForDirectHit 0x8b0c9b8)
	static struct FVector GetImpulseVectorForDirectHit(struct FVector& ImpactNormal, float& ImpulseStrength); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetDesiredLateralMoveDirectionFromInput (Underlying native function: GetDesiredLateralMoveDirectionFromInput 0x8b0c804)
	static struct FVector GetDesiredLateralMoveDirectionFromInput(struct FVector& DriverCameraForward, float& ForwardAlpha, float& RightAlpha); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetDamageInstigatorForPhysicsCollision (Underlying native function: GetDamageInstigatorForPhysicsCollision 0x8b0c784)
	static class AActor* GetDamageInstigatorForPhysicsCollision(class AActor*& InActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetBoxExtent (Underlying native function: GetBoxExtent 0x8b0c6f0)
	static struct FVector GetBoxExtent(class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.GetBodyBounds (Underlying native function: GetBodyBounds 0x8b0c5d0)
	static void GetBodyBounds(class UPrimitiveComponent*& PrimitiveComponent, struct FBox& OutBodyBox, struct FVector& OutBoxExtent); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.DoesPhysicsObjectMeetSizeRequirement (Underlying native function: DoesPhysicsObjectMeetSizeRequirement 0x8b0c224)
	static bool DoesPhysicsObjectMeetSizeRequirement(class AActor*& PhysicsObject, enum EFortPhysicsSimSize& SizeRequirement); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.DoesPhysicsObjectHaveGravity (Underlying native function: DoesPhysicsObjectHaveGravity 0x8b0c1a4)
	static bool DoesPhysicsObjectHaveGravity(class AActor*& PhysicsObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeVelocityFromImpulse (Underlying native function: ComputeVelocityFromImpulse 0x8b0bf24)
	static struct FVector ComputeVelocityFromImpulse(class UPrimitiveComponent*& PrimitiveComponent, struct FVector& Impulse); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeTurningAngularAccel (Underlying native function: ComputeTurningAngularAccel 0x8b0bd8c)
	static struct FVector ComputeTurningAngularAccel(struct FVector& TargetForward, struct FVector& BodyForward, struct FVector& BodyRight, float& YawForce); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeTorqueForTargetRotation (Underlying native function: ComputeTorqueForTargetRotation 0x8b0b8dc)
	static struct FVector ComputeTorqueForTargetRotation(class AActor*& PhysicsObject, struct FRotator& TargetRotation, float& Stiffness, float& Damping, float& MaxAccel); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeTemperedImpulse (Underlying native function: ComputeTemperedImpulse 0x8b0b7ec)
	static struct FVector ComputeTemperedImpulse(class AActor*& PhysicsObject, struct FVector& Impulse); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeSpringDampedAngularAccel (Underlying native function: ComputeSpringDampedAngularAccel 0x8b0b5dc)
	static struct FVector ComputeSpringDampedAngularAccel(struct FVector& Target, struct FVector& Current, struct FVector& AngVelocityWorld, float& Stiffness, float& Damping, float& MaxAccel); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeLinearDrag (Underlying native function: ComputeLinearDrag 0x8b0b480)
	static struct FVector ComputeLinearDrag(struct FVector& LinearVelocity, float& MaxDragSpeed, float& FirstOrderDragCoef, float& SecondOrderDragCoef); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeLinearAccel (Underlying native function: ComputeLinearAccel 0x8b0b308)
	static struct FVector ComputeLinearAccel(struct FVector& CurrentLinearVelocity, struct FVector& TargetDirection, float& MaxLinearVelocity, float& AccelForce); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ComputeAngularDrag (Underlying native function: ComputeAngularDrag 0x8b0b058)
	static struct FVector ComputeAngularDrag(struct FVector& BodyUp, struct FVector& BodyRight, struct FVector& BodyForward, struct FVector& AngularVelocity, float& PitchAngularDrag, float& YawAngularDrag, float& RollAngularDrag, float& DragMultiplier); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.CmSToKmH (Underlying native function: CmSToKmH 0x8b0afc8)
	static float CmSToKmH(float& CmS); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ClearPhysicsReplicationErrorCorrection (Underlying native function: ClearPhysicsReplicationErrorCorrection 0x8b0af04)
	static void ClearPhysicsReplicationErrorCorrection(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.ClearImpactInstigatorFromPhysicsObject (Underlying native function: ClearImpactInstigatorFromPhysicsObject 0x8b0ae2c)
	static void ClearImpactInstigatorFromPhysicsObject(class AActor*& PhysicsObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.CanActorSimulatePhysics (Underlying native function: CanActorSimulatePhysics 0x8b0ad78)
	static bool CanActorSimulatePhysics(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.AddPhysicsTorque (Underlying native function: AddPhysicsTorque 0x8b0a490)
	static void AddPhysicsTorque(class AActor*& PhysicsObject, struct FVector& Torque, struct FName& BoneName, bool& bAccelChange, class AActor*& Instigator, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.AddPhysicsImpulseAtLocation (Underlying native function: AddPhysicsImpulseAtLocation 0x8b0a210)
	static void AddPhysicsImpulseAtLocation(class AActor*& PhysicsObject, struct FVector& Impulse, struct FVector& Location, bool& bTempered, struct FName& BoneName, bool& bVelChange, class AActor*& Instigator, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.AddPhysicsImpulse (Underlying native function: AddPhysicsImpulse 0x8b09fe0)
	static void AddPhysicsImpulse(class AActor*& PhysicsObject, struct FVector& Impulse, bool& bTempered, struct FName& BoneName, bool& bVelChange, class AActor*& Instigator, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.AddPhysicsForceAtLocation (Underlying native function: AddPhysicsForceAtLocation 0x8b09df4)
	static void AddPhysicsForceAtLocation(class AActor*& PhysicsObject, struct FVector& Force, struct FVector& Location, struct FName& BoneName, class AActor*& Instigator, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.AddPhysicsForce (Underlying native function: AddPhysicsForce 0x8b09c18)
	static void AddPhysicsForce(class AActor*& PhysicsObject, struct FVector& Force, struct FName& BoneName, bool& bAccelChange, class AActor*& Instigator, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsSimulationLibrary.AddPhysicsAngularImpulse (Underlying native function: AddPhysicsAngularImpulse 0x8b09a3c)
	static void AddPhysicsAngularImpulse(class AActor*& PhysicsObject, struct FVector& AngularImpulse, struct FName& BoneName, bool& bVelChange, class AActor*& Instigator, struct FPhysicsSimValidateObject& ValidationChecks); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)
};

