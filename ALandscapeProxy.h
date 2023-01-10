// Class /Script/Landscape.LandscapeProxy
// Size: 0x5d0
class ALandscapeProxy : public APartitionActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class ULandscapeSplinesComponent* SplineComponent; // 0x290 (0x8)
	struct FGuid LandscapeGuid; // 0x298 (0x10)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials; // 0x2a8 (0x10)
	struct FIntPoint* LandscapeSectionOffset; // 0x2b8 (0x8)
	int MaxLODLevel; // 0x2c0 (0x4)
	float ComponentScreenSizeToUseSubSections; // 0x2c4 (0x4)
	float Lod0ScreenSize; // 0x2c8 (0x4)
	float LOD0DistributionSetting; // 0x2cc (0x4)
	float LODDistributionSetting; // 0x2d0 (0x4)
	int StaticLightingLOD; // 0x2d4 (0x4)
	class UPhysicalMaterial* DefaultPhysMaterial; // 0x2d8 (0x8)
	float StreamingDistanceMultiplier; // 0x2e0 (0x4)
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	class UMaterialInterface* LandscapeMaterial; // 0x2e8 (0x8)
	unsigned char unreflected_2f0[0x20]; // 0x2f0 (0x20) 
	class UMaterialInterface* LandscapeHoleMaterial; // 0x310 (0x8)
	struct TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x318 (0x10)
	bool bSetCreateRuntimeVirtualTextureVolumes; // 0x328 (0x1)
	bool bVirtualTextureRenderWithQuad; // 0x329 (0x1)
	bool bVirtualTextureRenderWithQuadHQ; // 0x32a (0x1)
	unsigned char unreflected_32b[0x1]; // 0x32b (0x1) 
	int VirtualTextureNumLods; // 0x32c (0x4)
	int VirtualTextureLodBias; // 0x330 (0x4)
	enum ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x334 (0x1)
	unsigned char unreflected_335[0x3]; // 0x335 (0x3) 
	float NegativeZBoundsExtension; // 0x338 (0x4)
	float PositiveZBoundsExtension; // 0x33c (0x4)
	struct TArray<class ULandscapeComponent*> LandscapeComponents; // 0x340 (0x10)
	struct TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x350 (0x10)
	struct TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x360 (0x10)
	class ULandscapeNaniteComponent* NaniteComponent; // 0x370 (0x8)
	unsigned char unreflected_378[0x64]; // 0x378 (0x64) 
	bool bHasLandscapeGrass; // 0x3dc (0x1)
	unsigned char unreflected_3dd[0x3]; // 0x3dd (0x3) 
	float StaticLightingResolution; // 0x3e0 (0x4)
	unsigned char CastShadow; // 0x3e4 (0x1)
	unsigned char bCastDynamicShadow; // 0x3e4 (0x1)
	unsigned char bCastStaticShadow; // 0x3e4 (0x1)
	unsigned char bCastContactShadow; // 0x3e4 (0x1)
	unsigned char unreflected_3e5[0x3]; // 0x3e5 (0x3) 
	unsigned char bCastFarShadow; // 0x3e8 (0x1)
	unsigned char unreflected_3e9[0x3]; // 0x3e9 (0x3) 
	unsigned char bCastHiddenShadow; // 0x3ec (0x1)
	unsigned char unreflected_3ed[0x3]; // 0x3ed (0x3) 
	unsigned char bCastShadowAsTwoSided; // 0x3f0 (0x1)
	unsigned char unreflected_3f1[0x3]; // 0x3f1 (0x3) 
	unsigned char bAffectDistanceFieldLighting; // 0x3f4 (0x1)
	struct FLightingChannels LightingChannels; // 0x3f5 (0x1)
	unsigned char unreflected_3f6[0x2]; // 0x3f6 (0x2) 
	unsigned char bUseMaterialPositionOffsetInStaticLighting; // 0x3f8 (0x1)
	unsigned char bRenderCustomDepth; // 0x3f8 (0x1)
	unsigned char unreflected_3f9[0x3]; // 0x3f9 (0x3) 
	enum ERendererStencilMask CustomDepthStencilWriteMask; // 0x3fc (0x1)
	unsigned char unreflected_3fd[0x3]; // 0x3fd (0x3) 
	int CustomDepthStencilValue; // 0x400 (0x4)
	float LDMaxDrawDistance; // 0x404 (0x4)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x408 (0x18)
	int CollisionMipLevel; // 0x420 (0x4)
	int SimpleCollisionMipLevel; // 0x424 (0x4)
	float CollisionThickness; // 0x428 (0x4)
	unsigned char unreflected_42c[0x4]; // 0x42c (0x4) 
	struct FBodyInstance BodyInstance; // 0x430 (0x188)
	unsigned char bGenerateOverlapEvents; // 0x5b8 (0x1)
	unsigned char bBakeMaterialPositionOffsetIntoCollision; // 0x5b8 (0x1)
	unsigned char unreflected_5b9[0x3]; // 0x5b9 (0x3) 
	int ComponentSizeQuads; // 0x5bc (0x4)
	int SubsectionSizeQuads; // 0x5c0 (0x4)
	int NumSubsections; // 0x5c4 (0x4)
	unsigned char bUsedForNavigation; // 0x5c8 (0x1)
	unsigned char bFillCollisionUnderLandscapeForNavmesh; // 0x5c8 (0x1)
	unsigned char unreflected_5c9[0x3]; // 0x5c9 (0x3) 
	bool bUseDynamicMaterialInstance; // 0x5cc (0x1)
	enum ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x5cd (0x1)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x5ce (0x1)
	bool bHasLayersContent; // 0x5cf (0x1)

	/* Functions */

	// Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType (Underlying native function: SetVirtualTextureRenderPassType 0x9760118)
	void SetVirtualTextureRenderPassType(enum ERuntimeVirtualTextureMainPassType& InType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue (Underlying native function: SetLandscapeMaterialVectorParameterValue 0x9760050)
	void SetLandscapeMaterialVectorParameterValue(struct FName& ParameterName, struct FLinearColor& Value); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue (Underlying native function: SetLandscapeMaterialTextureParameterValue 0x975ff8c)
	void SetLandscapeMaterialTextureParameterValue(struct FName& ParameterName, class UTexture*& Value); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue (Underlying native function: SetLandscapeMaterialScalarParameterValue 0x975fec4)
	void SetLandscapeMaterialScalarParameterValue(struct FName& ParameterName, float& Value); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget (Underlying native function: LandscapeExportHeightmapToRenderTarget 0x975fde0)
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D*& InRenderTarget, bool& InExportHeightIntoRGChannel, bool& InExportLandscapeProxies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.GetLandscapeActor (Underlying native function: GetLandscapeActor 0x975fdb8)
	class ALandscape* GetLandscapeActor(); // (Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial (Underlying native function: EditorSetLandscapeMaterial 0x6df70d4)
	void EditorSetLandscapeMaterial(class UMaterialInterface*& NewLandscapeMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline (Underlying native function: EditorApplySpline 0x975fabc)
	void EditorApplySpline(class USplineComponent*& InSplineComponent, float& StartWidth, float& EndWidth, float& StartSideFalloff, float& EndSideFalloff, float& StartRoll, float& EndRoll, int& NumSubdivisions, bool& bRaiseHeights, bool& bLowerHeights, class ULandscapeLayerInfoObject*& PaintLayer, struct FName& EditLayerName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor (Underlying native function: ChangeLODDistanceFactor 0x736251c)
	void ChangeLODDistanceFactor(float& InLODDistanceFactor); // (Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections (Underlying native function: ChangeComponentScreenSizeToUseSubSections 0x975fa34)
	void ChangeComponentScreenSizeToUseSubSections(float& InComponentScreenSizeToUseSubSections); // (Native | Public | BlueprintCallable)
};

