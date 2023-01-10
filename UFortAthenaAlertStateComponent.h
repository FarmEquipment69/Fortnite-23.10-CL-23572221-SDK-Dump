// Class /Script/FortniteAI.FortAthenaAlertStateComponent
// Size: 0xa8
class UFortAthenaAlertStateComponent : public UActorComponent
{
	float StealthMeterTarget; // 0xa0 (0x4)
	float StealthMeterTargetTime; // 0xa4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTargetTime (Underlying native function: SetStealthMeterTargetTime 0x6e91b88)
	void SetStealthMeterTargetTime(float& InStealthMeterTargetTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTarget (Underlying native function: SetStealthMeterTarget 0xa19d158)
	void SetStealthMeterTarget(float& InStealthMeterTarget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAlertStateComponent.OnStealthMeterChanged (Underlying native function: OnStealthMeterChanged 0xa19c924)
	void OnStealthMeterChanged(class AFortAthenaAIBotController*& BotController, float& StealthMeterTarget, float& StealthMeterTargetTime); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTargetTime (Underlying native function: GetStealthMeterTargetTime 0x735bd40)
	float GetStealthMeterTargetTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTarget (Underlying native function: GetStealthMeterTarget 0x2e42d74)
	float GetStealthMeterTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

