// Class /Script/FortniteGame.FortSkyTubePhysicsComponent
// Size: 0x2c0
class UFortSkyTubePhysicsComponent : public UGameFrameworkComponent
{
	float MaxTubeSpeed; // 0xa0 (0x4)
	float MaxTubeAcceleration; // 0xa4 (0x4)
	bool bMagnetizeWhenNotInSkytube; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct FMulticastInlineDelegate OnEnteredSkyTube; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnChangedSkyTube; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnExitedSkyTube; // 0xd0 (0x10)
	unsigned char unreflected_e0[0x8]; // 0xe0 (0x8) 
	class AFortSkyTube* SkyTube; // 0xe8 (0x8)
	struct TWeakObjectPtr<class AFortSkyTube> PrevSkyTube; // 0xf0 (0x8)
	unsigned char unreflected_f8[0x30]; // 0xf8 (0x30) 
	bool bInSkyTube; // 0x128 (0x1)
	bool bMagnetized; // 0x129 (0x1)
	unsigned char unreflected_12a[0x6]; // 0x12a (0x6) 
	struct FSkyTubeSplineComponentData SplineComponentData; // 0x130 (0xd0)
	struct FSkyTubeMagnetismVelocityDebugData DebugData; // 0x200 (0xc0)

	/* Functions */

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.SetMagnetization (Underlying native function: SetMagnetization 0x860b89c)
	void SetMagnetization(bool& bInMagnetized); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.OnRep_SkyTube (Underlying native function: OnRep_SkyTube 0x860ad44)
	void OnRepSkyTube(class AFortSkyTube*& PreviousSkyTube); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.OnRep_Magnetized (Underlying native function: OnRep_Magnetized 0x6df775c)
	void OnRepMagnetized(bool& bPreviousMagnetized); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.IsSkyTubeForceEnabled (Underlying native function: IsSkyTubeForceEnabled 0x860a4f4)
	bool IsSkyTubeForceEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.IsMagnetized (Underlying native function: IsMagnetized 0x860a3f4)
	bool IsMagnetized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.IsInSkyTube (Underlying native function: IsInSkyTube 0x860a3d8)
	bool IsInSkyTube(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.ExitSkyTube (Underlying native function: ExitSkyTube 0x86087fc)
	void ExitSkyTube(class AFortSkyTube*& InSkyTube); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.EnterSkyTube (Underlying native function: EnterSkyTube 0x8608714)
	void EnterSkyTube(class AFortSkyTube*& InSkyTube); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSkyTubePhysicsComponent.ComputeAccelerations (Underlying native function: ComputeAccelerations 0x8608468)
	void ComputeAccelerations(float& DeltaTime, class UPrimitiveComponent*& PrimComp, struct FVector& OutLinearAcceleration, struct FVector& OutAngularAccelerationRad); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

