// Class /Script/FortniteGame.CreativePowerBarComponent
// Size: 0xb8
class UCreativePowerBarComponent : public UActorComponent
{
	float StartTime; // 0xa0 (0x4)
	bool bLoop; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	class UCurveFloat* PowerCurve; // 0xa8 (0x8)
	unsigned char padding_b0[0x8]; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CreativePowerBarComponent.StopInterpolation (Underlying native function: StopInterpolation 0x84fc288)
	void StopInterpolation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.SetPowerCurve (Underlying native function: SetPowerCurve 0x84fbc14)
	void SetPowerCurve(class UCurveFloat*& NewPowerCurve); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.SetLooping (Underlying native function: SetLooping 0x84fbb10)
	void SetLooping(bool& bLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.ServerSetStopTime (Underlying native function: ServerSetStopTime 0x84fb348)
	void ServerSetStopTime(float& ServerStopTime); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.CreativePowerBarComponent.ResumeInterpolation (Underlying native function: ResumeInterpolation 0x84fb294)
	void ResumeInterpolation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.IsInterpolationPaused (Underlying native function: IsInterpolationPaused 0x84f9d48)
	bool IsInterpolationPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativePowerBarComponent.InitializePowerBar (Underlying native function: InitializePowerBar 0x84f9b68)
	void InitializePowerBar(bool& bLoops, float& ChangeRate, class UCurveFloat*& NewPowerCurve); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.GetPowerPercentage (Underlying native function: GetPowerPercentage 0x84f9504)
	float GetPowerPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

