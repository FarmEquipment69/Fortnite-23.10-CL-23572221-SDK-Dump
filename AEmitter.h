// Class /Script/Engine.Emitter
// Size: 0x2d8
class AEmitter : public AActor
{
	class UParticleSystemComponent* ParticleSystemComponent; // 0x288 (0x8)
	unsigned char bDestroyOnSystemFinish; // 0x290 (0x1)
	unsigned char bPostUpdateTickGroup; // 0x290 (0x1)
	unsigned char bCurrentlyActive; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x298 (0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x2b8 (0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/Engine.Emitter.ToggleActive (Underlying native function: ToggleActive 0x9cd8b90)
	void ToggleActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetVectorParameter (Underlying native function: SetVectorParameter 0x9cd8ab8)
	void SetVectorParameter(struct FName& ParameterName, struct FVector& Param); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetTemplate (Underlying native function: SetTemplate 0x6f495ec)
	void SetTemplate(class UParticleSystem*& NewTemplate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetMaterialParameter (Underlying native function: SetMaterialParameter 0x9cd89f4)
	void SetMaterialParameter(struct FName& ParameterName, class UMaterialInterface*& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetFloatParameter (Underlying native function: SetFloatParameter 0x9cd8928)
	void SetFloatParameter(struct FName& ParameterName, float& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetColorParameter (Underlying native function: SetColorParameter 0x9cd885c)
	void SetColorParameter(struct FName& ParameterName, struct FLinearColor& Param); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetActorParameter (Underlying native function: SetActorParameter 0x9cd8794)
	void SetActorParameter(struct FName& ParameterName, class AActor*& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.OnRep_bCurrentlyActive (Underlying native function: OnRep_bCurrentlyActive 0x1598df4)
	void OnRepbCurrentlyActive(); // (Native | Public)

	// Function /Script/Engine.Emitter.OnParticleSystemFinished (Underlying native function: OnParticleSystemFinished 0x2a1b124)
	void OnParticleSystemFinished(class UParticleSystemComponent*& FinishedComponent); // (Native | Public)

	// Function /Script/Engine.Emitter.IsActive (Underlying native function: IsActive 0x9cd8764)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Emitter.Deactivate (Underlying native function: Deactivate 0x9cd8730)
	void Deactivate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.Activate (Underlying native function: Activate 0x9cd871c)
	void Activate(); // (Final | Native | Public | BlueprintCallable)
};

