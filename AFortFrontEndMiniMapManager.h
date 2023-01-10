// Class /Script/FortniteGame.FortFrontEndMiniMapManager
// Size: 0x4e8
class AFortFrontEndMiniMapManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FVector ApolloMapMinLoc; // 0x290 (0x18)
	struct FVector ApolloMapMaxLoc; // 0x2a8 (0x18)
	struct FVector2D MapCameraOffset; // 0x2c0 (0x10)
	struct TArray<struct FFortChallengeMapPoiData> PoiDataConfigOverrides; // 0x2d0 (0x10)
	struct TArray<struct FString> ExcludedFromMapNameDisplayPOIs; // 0x2e0 (0x10)
	int MapLocationFontSizeOverride; // 0x2f0 (0x4)
	struct FLinearColor DefaultMapLocationFontColor[0x3]; // 0x2f4 (0x10) (ARRAY) 
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct FSlateFontInfo DefaultMapLocationFont; // 0x328 (0x58)
	uint32_t MobileMapLocationFontSizeOverride; // 0x380 (0x4)
	struct FGameplayTag SpybaseTag; // 0x384 (0x4)
	class UFortQuestItemDefinition* NamedLocationQuestItemDefinition; // 0x388 (0x8)
	class UFortQuestItemDefinition* POIQuestItemDefinition; // 0x390 (0x8)
	int MapLayerSize; // 0x398 (0x4)
	struct Fmargin MapMargin; // 0x39c (0x10)
	unsigned char unreflected_3ac[0x4]; // 0x3ac (0x4) 
	class UMaterialInterface* MapMaterial; // 0x3b0 (0x8)
	class UMaterialInterface* MapMaskMaterial; // 0x3b8 (0x8)
	float MapWorldScale; // 0x3c0 (0x4)
	unsigned char unreflected_3c4[0x4]; // 0x3c4 (0x4) 
	struct FVector2D CaptureResolution; // 0x3c8 (0x10)
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> MinimapLocationRenderDataPlayer1; // 0x3d8 (0x50)
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> MinimapLocationRenderDataPlayer2; // 0x428 (0x50)
	struct FSlateFontInfo MapLocationFont; // 0x478 (0x58)
	class UMaterialInstanceDynamic* MapMaterialMID; // 0x4d0 (0x8)
	class UMaterialInstanceDynamic* MapMaskMaterialMID; // 0x4d8 (0x8)
	unsigned char padding_4e0[0x8]; // 0x4e0 (0x8)
};

