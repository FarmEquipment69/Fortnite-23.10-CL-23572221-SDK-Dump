// Class /Script/FortniteGame.BuildingPropAtlas
// Size: 0x10d0
class ABuildingPropAtlas : public ABuildingProp
{
	class UPrimitiveComponent* Ring1Comp; // 0xef8 (0x8)
	class UPrimitiveComponent* Ring2Comp; // 0xf00 (0x8)
	class UPrimitiveComponent* Ring3Comp; // 0xf08 (0x8)
	class UMaterialInstanceDynamic* RingTransitionMID; // 0xf10 (0x8)
	class UAudioComponent* PortalAudioComp; // 0xf18 (0x8)
	unsigned char padding_f20[0x1b0]; // 0xf20 (0x1b0)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropAtlas.StopRingSpinning (Underlying native function: StopRingSpinning 0x8c673b4)
	void StopRingSpinning(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.SetupAnimationTransition (Underlying native function: SetupAnimationTransition 0x8c66e04)
	void SetupAnimationTransition(class UMaterialInstanceDynamic*& Mid, struct FName& ParamName, float& InTransitionTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.SetupAnimationSpeed (Underlying native function: SetupAnimationSpeed 0x8c66ca4)
	void SetupAnimationSpeed(float& InActivationTime, float& InTotalDefenseTime, float& InAnimSpeedStart, float& InAnimSpeedEnd); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.RestoreRingsHierarchy (Underlying native function: RestoreRingsHierarchy 0x8c65fc8)
	void RestoreRingsHierarchy(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.PlayRingsReset (Underlying native function: PlayRingsReset 0x8c65b6c)
	void PlayRingsReset(float& AnimDuration); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.PlayRingSpinning (Underlying native function: PlayRingSpinning 0x8c658a4)
	void PlayRingSpinning(struct FRotator& Ring1RateMin, struct FRotator& Ring1RateMax, struct FRotator& Ring2Rate, struct FRotator& Ring3Rate); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.PlayRingsIdleLoop (Underlying native function: PlayRingsIdleLoop 0x8c65a88)
	void PlayRingsIdleLoop(float& AnimDuration, float& Ring1ZOffset); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.PlayRingDamage (Underlying native function: PlayRingDamage 0x8c65764)
	void PlayRingDamage(float& DurationMin, float& DurationMax, float& MagnitudeMin, float& MagnitudeMax); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.OnRingSpinningLoop (Has no native function)
	void OnRingSpinningLoop(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingPropAtlas.InitializeRings (Underlying native function: InitializeRings 0x8c643fc)
	void InitializeRings(class UPrimitiveComponent*& InRing1Comp, class UPrimitiveComponent*& InRing2Comp, class UPrimitiveComponent*& InRing3Comp); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.InitializeAudio (Underlying native function: InitializeAudio 0x8c642e8)
	void InitializeAudio(class UAudioComponent*& InPortalLoopingComp); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropAtlas.GetDefenseProgress (Underlying native function: GetDefenseProgress 0x8c6351c)
	float GetDefenseProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingPropAtlas.GetDefenseAnimSpeed (Underlying native function: GetDefenseAnimSpeed 0x8c63504)
	float GetDefenseAnimSpeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

