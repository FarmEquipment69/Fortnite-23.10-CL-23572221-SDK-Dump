// Class /Script/FortniteGame.FortAthenaAntelopeVehicle
// Size: 0x1cd0
class AFortAthenaAntelopeVehicle : public AFortAthenaSKMotorVehicle
{
	struct FVector LeanPositionBack; // 0x1a38 (0x18)
	struct FVector LeanPositionTargetBack; // 0x1a50 (0x18)
	unsigned char unreflected_1a68[0x18]; // 0x1a68 (0x18) 
	struct FVector LeanPositionFront; // 0x1a80 (0x18)
	float LeanPositionFrontMaxLag; // 0x1a98 (0x4)
	float LeanPositionFrontLagCoefficient; // 0x1a9c (0x4)
	unsigned char unreflected_1aa0[0x48]; // 0x1aa0 (0x48) 
	struct FVector BackLeanSocketPosition; // 0x1ae8 (0x18)
	float LeanImpulseScaleBack; // 0x1b00 (0x4)
	unsigned char unreflected_1b04[0x4]; // 0x1b04 (0x4) 
	struct FVector BounceOffsetBack; // 0x1b08 (0x18)
	class UCurveFloat* BounceCurve; // 0x1b20 (0x8)
	struct TArray<struct FLinearColor> BoostSlideColors; // 0x1b28 (0x10)
	float HandBrakeSkidParam; // 0x1b38 (0x4)
	float BoostParam; // 0x1b3c (0x4)
	float MovementParam; // 0x1b40 (0x4)
	float BatteryParam; // 0x1b44 (0x4)
	float RumbleIntensity; // 0x1b48 (0x4)
	bool bBoostCameraActive; // 0x1b4c (0x1)
	bool bLocalPlayerADS; // 0x1b4d (0x1)
	unsigned char unreflected_1b4e[0x2]; // 0x1b4e (0x2) 
	class ULegacyCameraShake* DriverCameraShake; // 0x1b50 (0x8)
	class ULegacyCameraShake* PassengerCameraShake; // 0x1b58 (0x8)
	class AFortPlayerPawn* LocalPlayerPawn; // 0x1b60 (0x8)
	class UParticleSystemComponent* PSCBoostFlames; // 0x1b68 (0x8)
	float CachedSkidValue; // 0x1b70 (0x4)
	unsigned char unreflected_1b74[0x4]; // 0x1b74 (0x4) 
	class UFortVehicleAudioVoice* CachedAudioEngineRevUp; // 0x1b78 (0x8)
	class UFortVehicleAudioVoice* CachedAudioSkid; // 0x1b80 (0x8)
	class UFortVehicleAudioVoice* CachedAudioScrape; // 0x1b88 (0x8)
	class UFortVehicleAudioVoice* CachedAudioWind; // 0x1b90 (0x8)
	class UFortVehicleAudioVoice* CachedAudioBoost; // 0x1b98 (0x8)
	class UFortVehicleAudioVoice* CachedAudioHandbrakeSkid; // 0x1ba0 (0x8)
	class UFortVehicleAudioVoice* CachedAudioBoostCharge; // 0x1ba8 (0x8)
	class UFortVehicleAudioVoice* CachedAudioEngineIdle; // 0x1bb0 (0x8)
	bool bOutOfRangeAudioParamsSet; // 0x1bb8 (0x1)
	bool bBudgetBasedAudioParamsCleared; // 0x1bb9 (0x1)
	unsigned char unreflected_1bba[0x6]; // 0x1bba (0x6) 
	class UMaterialInstanceDynamic* BoostMeterMID; // 0x1bc0 (0x8)
	class UMaterialInstanceDynamic* BodyMID; // 0x1bc8 (0x8)
	class UParticleSystemComponent* PSCATVEngineReady; // 0x1bd0 (0x8)
	class UParticleSystem* PSSputteringFlamesTemplate; // 0x1bd8 (0x8)
	bool bHaveTriggeredBoostFX; // 0x1be0 (0x1)
	bool bIsUsingSputteringFlamesTemplate; // 0x1be1 (0x1)
	bool bAreWheelsIced; // 0x1be2 (0x1)
	unsigned char unreflected_1be3[0x1]; // 0x1be3 (0x1) 
	int RenderingDetailMode; // 0x1be4 (0x4)
	float CacheWheelsBackOpacity; // 0x1be8 (0x4)
	float CacheWheelsFrontOpacity; // 0x1bec (0x4)
	class UMaterialInstanceDynamic* WheelBlursFront; // 0x1bf0 (0x8)
	class UMaterialInstanceDynamic* WheelBlursBack; // 0x1bf8 (0x8)
	class UStaticMeshComponent* WheelBlurBL; // 0x1c00 (0x8)
	class UStaticMeshComponent* WheelBlurBR; // 0x1c08 (0x8)
	class UStaticMeshComponent* WheelBlurFL; // 0x1c10 (0x8)
	class UStaticMeshComponent* WheelBlurFR; // 0x1c18 (0x8)
	unsigned char unreflected_1c20[0x4]; // 0x1c20 (0x4) 
	bool bIsBoosting; // 0x1c24 (0x1)
	unsigned char unreflected_1c25[0x1b]; // 0x1c25 (0x1b) 
	enum ENaturalSlideState NaturalSlideState; // 0x1c40 (0x1)
	unsigned char unreflected_1c41[0xf]; // 0x1c41 (0xf) 
	float BounceForceBack; // 0x1c50 (0x4)
	unsigned char unreflected_1c54[0x24]; // 0x1c54 (0x24) 
	class UParticleSystemComponent* PSCWheelDust; // 0x1c78 (0x8)
	class UParticleSystemComponent* PSCWheelSlide; // 0x1c80 (0x8)
	class UParticleSystemComponent* PSCTrailLeft; // 0x1c88 (0x8)
	class UParticleSystemComponent* PSCTrailRight; // 0x1c90 (0x8)
	bool bPlayingBoostFX; // 0x1c98 (0x1)
	bool bPlayingBoostFXForward; // 0x1c99 (0x1)
	unsigned char unreflected_1c9a[0x2]; // 0x1c9a (0x2) 
	float BoostFXTime; // 0x1c9c (0x4)
	float BoostFXFOVOffset; // 0x1ca0 (0x4)
	unsigned char unreflected_1ca4[0x4]; // 0x1ca4 (0x4) 
	class UCurveFloat* BoostFXStrengthCurve; // 0x1ca8 (0x8)
	class UCurveFloat* BoostFXRumbleStrengthCurve; // 0x1cb0 (0x8)
	unsigned char unreflected_1cb8[0x8]; // 0x1cb8 (0x8) 
	class UFortAntelopeVehicleConfigs* FortAntelopeVehicleConfigs; // 0x1cc0 (0x8)
	unsigned char padding_1cc8[0x8]; // 0x1cc8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.SmashedThroughBuildingPiece (Has no native function)
	void SmashedThroughBuildingPiece(struct FVector& ImpactPoint, struct FVector& ImpactNormal, class ABuildingActor*& BuildingHitActor); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.SetSkidActive (Underlying native function: SetSkidActive 0x7fed978)
	void SetSkidActive(bool& bActive); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.NaturalSlideEnd (Has no native function)
	void NaturalSlideEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.NaturalSlideBegin (Has no native function)
	void NaturalSlideBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsSmashing (Underlying native function: IsSmashing 0x7fec4e4)
	bool IsSmashing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsPassivelyExpendingBoost (Underlying native function: IsPassivelyExpendingBoost 0x7fec2a0)
	bool IsPassivelyExpendingBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsNaturalSliding (Underlying native function: IsNaturalSliding 0x7fec284)
	bool IsNaturalSliding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsLocalPlayerRiding (Underlying native function: IsLocalPlayerRiding 0x7fec24c)
	bool IsLocalPlayerRiding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsLeaningOrBouncingBack (Underlying native function: IsLeaningOrBouncingBack 0x7fec214)
	bool IsLeaningOrBouncingBack(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsInBoostSmashForgivenessPeriod (Underlying native function: IsInBoostSmashForgivenessPeriod 0x7fec1a8)
	bool IsInBoostSmashForgivenessPeriod(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.IsAccumulatingBoost (Underlying native function: IsAccumulatingBoost 0x7fec104)
	bool IsAccumulatingBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.GetBoostAccumulated (Underlying native function: GetBoostAccumulated 0x7feb6d8)
	float GetBoostAccumulated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.ClearBoostAccumulated (Underlying native function: ClearBoostAccumulated 0x7feb464)
	void ClearBoostAccumulated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.CacheWheelBlurStaticMeshes (Underlying native function: CacheWheelBlurStaticMeshes 0x7feb1e4)
	void CacheWheelBlurStaticMeshes(class UStaticMeshComponent*& InBL, class UStaticMeshComponent*& InBR, class UStaticMeshComponent*& InFL, class UStaticMeshComponent*& InFR); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.CacheParticleComponentPointers (Underlying native function: CacheParticleComponentPointers 0x7feae88)
	void CacheParticleComponentPointers(class UParticleSystemComponent*& WheelDust, class UParticleSystemComponent*& WheelSlide, class UParticleSystemComponent*& TrailLeft, class UParticleSystemComponent*& TrailRight, class UParticleSystemComponent*& InEngineReady); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.CacheBoostSM (Underlying native function: CacheBoostSM 0x7feadfc)
	void CacheBoostSM(class UStaticMeshComponent*& InBoost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.CacheAudioPointers (Underlying native function: CacheAudioPointers 0x7fea9b4)
	void CacheAudioPointers(class UFortVehicleAudioVoice*& InAudioEngineRevUp, class UFortVehicleAudioVoice*& InAudioSkid, class UFortVehicleAudioVoice*& InAudioScrape, class UFortVehicleAudioVoice*& InAudioWind, class UFortVehicleAudioVoice*& InAudioBoost, class UFortVehicleAudioVoice*& InAudioHandbrakeSkid, class UFortVehicleAudioVoice*& InAudioBoostCharge, class UFortVehicleAudioVoice*& InAudioEngineIdle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.BoostFailed (Has no native function)
	void BoostFailed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.BoostEnd (Has no native function)
	void BoostEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaAntelopeVehicle.BoostBegin (Has no native function)
	void BoostBegin(); // (Event | Public | BlueprintEvent)
};

