// Class /Script/FortniteGame.FortDaySequenceActor
// Size: 0x4e8
class AFortDaySequenceActor : public ADaySequenceActor
{
	unsigned char unreflected_358[0x8]; // 0x358 (0x8) 
	struct TMap<struct FString, struct FFortScalabilityDaySequenceData> ScalabilitySequenceAssets; // 0x360 (0x50)
	class USceneComponent* SunRootComponent; // 0x3b0 (0x8)
	class UDirectionalLightComponent* SunComponent; // 0x3b8 (0x8)
	class UExponentialHeightFogComponent* ExponentialHeightFogComponent; // 0x3c0 (0x8)
	class UStaticMeshComponent* SkyDomeComponent; // 0x3c8 (0x8)
	class USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x3d0 (0x8)
	class USkyLightComponent* SkyLightComponent; // 0x3d8 (0x8)
	class UVolumetricCloudComponent* VolumetricCloudComponent; // 0x3e0 (0x8)
	class UNiagaraComponent* SunFlareComponent; // 0x3e8 (0x8)
	struct FVector LightDirection; // 0x3f0 (0x18)
	struct FFortDayPhaseData DayPhaseInfo[0x4]; // 0x408 (0x4) (ARRAY) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x418 (0x8)
	class UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance; // 0x420 (0x8)
	class UMaterialInterface* OutlinePostProcessMaterial; // 0x428 (0x8)
	class UMaterialInstanceDynamic* OutlinePostProcessMID; // 0x430 (0x8)
	bool bUseSunAngle; // 0x438 (0x1)
	bool bUseSunDivergence; // 0x439 (0x1)
	unsigned char unreflected_43a[0x2]; // 0x43a (0x2) 
	float SunAngle; // 0x43c (0x4)
	float SunLightHorizonClamp; // 0x440 (0x4)
	bool bUseSkyLightCubeMapBlending; // 0x444 (0x1)
	unsigned char unreflected_445[0x3]; // 0x445 (0x3) 
	float SkyLightCubeMapBlend; // 0x448 (0x4)
	unsigned char unreflected_44c[0x4]; // 0x44c (0x4) 
	struct TArray<class UTextureCube*> SkyLightCubeMaps; // 0x450 (0x10)
	unsigned char padding_460[0x88]; // 0x460 (0x88)

	/* Functions */

	// Function /Script/FortniteGame.FortDaySequenceActor.UpdateScalabilitySequences (Has no native function)
	void UpdateScalabilitySequences(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortDaySequenceActor.TEMPHACK_TickTimeOfDay (Has no native function)
	void TEMPHACKTickTimeOfDay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortDaySequenceActor.OnTimeOfDayManagerVisibilitySet (Has no native function)
	void OnTimeOfDayManagerVisibilitySet(bool& bVisible); // (Event | Protected | BlueprintEvent)
};

