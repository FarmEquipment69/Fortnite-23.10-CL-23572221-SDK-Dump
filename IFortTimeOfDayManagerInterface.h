// Class /Script/FortniteGame.FortTimeOfDayManagerInterface
// Size: 0x28
class IFortTimeOfDayManagerInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.UnregisterForWeatherComponentSetEvent (Underlying native function: UnregisterForWeatherComponentSetEvent 0x877cab4)
	void UnregisterForWeatherComponentSetEvent(struct FDelegate& DelegateSignature); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.UnregisterForDayPhaseChangedEvent (Underlying native function: UnregisterForDayPhaseChangedEvent 0x28a8d5c)
	void UnregisterForDayPhaseChangedEvent(class UObject*& EventReceiver); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDaySpeedFactor (Underlying native function: SetTimeOfDaySpeedFactor 0x877c844)
	bool SetTimeOfDaySpeedFactor(float& NewTimeOfDaySpeedFactor, bool& bForceSet); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDaySpeed (Underlying native function: SetTimeOfDaySpeed 0x877c7ac)
	bool SetTimeOfDaySpeed(float& InTimeOfDaySpeed); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDayManagerVisibility (Underlying native function: SetTimeOfDayManagerVisibility 0x19b9ab0)
	void SetTimeOfDayManagerVisibility(bool& bVisible); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDay (Underlying native function: SetTimeOfDay 0x877c714)
	bool SetTimeOfDay(float& InTimeOfDay); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.RegisterForWeatherComponentSetEvent (Underlying native function: RegisterForWeatherComponentSetEvent 0x2d6c9cc)
	void RegisterForWeatherComponentSetEvent(struct FDelegate& DelegateSignature); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.RegisterForDayPhaseChangedEvent (Underlying native function: RegisterForDayPhaseChangedEvent 0x23d8af8)
	void RegisterForDayPhaseChangedEvent(struct FDelegate& DelegateSignature, bool& bMakeInitialCall); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.IsVisible (Underlying native function: IsVisible 0x877bbbc)
	bool IsVisible(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetWeatherComponent (Underlying native function: GetWeatherComponent 0x2fd2a3c)
	class UFortTimeOfDayWeatherComponent* GetWeatherComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetTimePerCycle (Underlying native function: GetTimePerCycle 0x877b900)
	float GetTimePerCycle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetTimeOfDaySpeed (Underlying native function: GetTimeOfDaySpeed 0x877b8d8)
	float GetTimeOfDaySpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetTimeOfDay (Underlying native function: GetTimeOfDay 0x877b8b0)
	float GetTimeOfDay(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetPreviousDayPhase (Underlying native function: GetPreviousDayPhase 0x7db7c24)
	enum EFortDayPhase GetPreviousDayPhase(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetHeightFogComponent (Underlying native function: GetHeightFogComponent 0x877b794)
	class UExponentialHeightFogComponent* GetHeightFogComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetDirectionalLightComponent (Underlying native function: GetDirectionalLightComponent 0x877b66c)
	class UDirectionalLightComponent* GetDirectionalLightComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetDefaultTimeOfDaySpeed (Underlying native function: GetDefaultTimeOfDaySpeed 0x877b5c4)
	float GetDefaultTimeOfDaySpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetCurrentDayPhase (Underlying native function: GetCurrentDayPhase 0x877b5a0)
	enum EFortDayPhase GetCurrentDayPhase(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.FastForwardToTime_ByDuration (Underlying native function: FastForwardToTime_ByDuration 0x877b4a0)
	void FastForwardToTimeByDuration(float& FastForwardTimeOfDay, float& FastForwardDuration, float& RestoreSpeed); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.FastForwardToTime (Underlying native function: FastForwardToTime 0x877b3a0)
	void FastForwardToTime(float& FastForwardTimeOfDay, float& FastForwardSpeed, float& RestoreSpeed); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

