// Class /Script/TankRuntime.FortTankVehicle
// Size: 0x1bb0
class AFortTankVehicle : public AFortTreadVehicle
{
	unsigned char unreflected_1980[0x70]; // 0x1980 (0x70) 
	struct FMulticastInlineDelegate OnTankRepairedDelegate; // 0x19f0 (0x10)
	struct FName BarrelSocketName; // 0x1a00 (0x4)
	unsigned char unreflected_1a04[0x4]; // 0x1a04 (0x4) 
	class UCapsuleComponent* BarrelCollision; // 0x1a08 (0x8)
	class UStaticMeshComponent* UnderVehicleCollision; // 0x1a10 (0x8)
	struct TArray<struct FServerSocketTransformOverride> SocketOverrideArray; // 0x1a18 (0x10)
	struct TMap<struct FName, struct FTransform> SocketTransformOverrideMap; // 0x1a28 (0x50)
	class USkeletalMeshComponent* CachedSkeletalMeshComponent; // 0x1a78 (0x8)
	class AFortVehicleAudioController* CachedVehicleAudioController; // 0x1a80 (0x8)
	enum EVisibilityBasedAnimTickOption DefaultServerVisibilityBasedAnimTickOption; // 0x1a88 (0x1)
	bool DefaultServerSkeletalMeshTickEnabled; // 0x1a89 (0x1)
	unsigned char unreflected_1a8a[0x2]; // 0x1a8a (0x2) 
	struct FName YawPivotSocketName; // 0x1a8c (0x4)
	struct FName PitchPivotSocketName; // 0x1a90 (0x4)
	unsigned char unreflected_1a94[0x4]; // 0x1a94 (0x4) 
	class ULegacyCameraShake* DriverCameraShakeInstance; // 0x1a98 (0x8)
	class ULegacyCameraShake* AcceleratingCameraShakeInstance; // 0x1aa0 (0x8)
	unsigned char unreflected_1aa8[0x8]; // 0x1aa8 (0x8) 
	class UNiagaraComponent* CachedNiagaraComponentRoadAndExhaust; // 0x1ab0 (0x8)
	struct FString RoadAndExhaustNiagaraComponentName; // 0x1ab8 (0x10)
	struct FString RoadAndExhaustPeelOutLeftName; // 0x1ac8 (0x10)
	struct FString RoadAndExhaustPeelOutRightName; // 0x1ad8 (0x10)
	struct FString RoadAndExhaustVehicleSpeedName; // 0x1ae8 (0x10)
	struct FString RoadAndExhaustSlideDirectionName; // 0x1af8 (0x10)
	float RoadAndExhaustMinSpeedForDust; // 0x1b08 (0x4)
	unsigned char unreflected_1b0c[0x4]; // 0x1b0c (0x4) 
	struct FString RoadAndExhaustDustColorLerpName; // 0x1b10 (0x10)
	float RoadAndExhaustDustColorLerpOffRoad; // 0x1b20 (0x4)
	float RoadAndExhaustDustColorLerpOnRoad; // 0x1b24 (0x4)
	struct FString RoadAndExhaustDustAlphaMultiplierName; // 0x1b28 (0x10)
	float RoadAndExhaustDustAlphaMultiplierOffRoad; // 0x1b38 (0x4)
	float RoadAndExhaustDustAlphaMultiplierOnRoad; // 0x1b3c (0x4)
	struct FString RoadAndExhaustDustFrontLeftName; // 0x1b40 (0x10)
	struct FString RoadAndExhaustDustFrontRightName; // 0x1b50 (0x10)
	struct FString RoadAndExhaustDustMiddleLeftName; // 0x1b60 (0x10)
	struct FString RoadAndExhaustDustMiddleRightName; // 0x1b70 (0x10)
	struct FString RoadAndExhaustDustRearLeftName; // 0x1b80 (0x10)
	struct FString RoadAndExhaustDustRearRightName; // 0x1b90 (0x10)
	struct FString RoadAndExhaustIsOnDirtName; // 0x1ba0 (0x10)
};

