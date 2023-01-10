// Class /Script/FortniteAI.FortAIComponent_Telemetry
// Size: 0x108
class UFortAIComponent_Telemetry : public UActorComponent
{
	class AFortAIPawn* PossessedPawn; // 0xa0 (0x8)
	class AAthenaAIController* CachedAIController; // 0xa8 (0x8)
	class AController* DeathInstigator; // 0xb0 (0x8)
	struct TArray<class UFortItemDefinition*> GrabbedPickups; // 0xb8 (0x10)
	struct TArray<class UFortItemDefinition*> DroppedPickups; // 0xc8 (0x10)
	class UFortAthenaAIRuntimeParameters_AIAnalytic* AnalyticRuntimeParameters; // 0xd8 (0x8)
	struct TArray<class UFortAthenaAITelemetryData*> TelemetryData; // 0xe0 (0x10)
	unsigned char padding_f0[0x18]; // 0xf0 (0x18)

	/* Functions */

	// Function /Script/FortniteAI.FortAIComponent_Telemetry.OnTetheredFollowerChanged (Underlying native function: OnTetheredFollowerChanged 0xa06e38c)
	void OnTetheredFollowerChanged(class AFortPawn*& NewFollower, class AFortPawn*& OldFollower); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortAIComponent_Telemetry.OnPawnDied (Underlying native function: OnPawnDied 0xa06d948)
	void OnPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteAI.FortAIComponent_Telemetry.OnDidDamage (Underlying native function: OnDidDamage 0xa06d58c)
	void OnDidDamage(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteAI.FortAIComponent_Telemetry.GetOrCreateTelemetryData (Underlying native function: GetOrCreateTelemetryData 0xa06c2ac)
	class UFortAthenaAITelemetryData* GetOrCreateTelemetryData(class UClass*& TelemetryDataClass); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

