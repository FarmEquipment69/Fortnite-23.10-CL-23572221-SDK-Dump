// Class /Script/FortniteGame.FortCreativeRealEstatePlotItem
// Size: 0x1e0
class UFortCreativeRealEstatePlotItem : public UFortAccountItem
{
	int IslandIndex; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FString IslandInfoLocale; // 0x110 (0x10)
	struct FString IslandTitle; // 0x120 (0x10)
	struct FString IslandTagline; // 0x130 (0x10)
	struct TArray<struct FString> DescriptionTags; // 0x140 (0x10)
	struct FOnlineLinkId IslandLinkId; // 0x150 (0x18)
	struct FString ModerationCode; // 0x168 (0x10)
	struct FString VkProjectId; // 0x178 (0x10)
	struct FString VkModuleId; // 0x188 (0x10)
	bool bIsPromoted; // 0x198 (0x1)
	bool bShouldHeartify; // 0x199 (0x1)
	unsigned char unreflected_19a[0x6]; // 0x19a (0x6) 
	struct FString IslandIntroduction; // 0x1a0 (0x10)
	struct FDateTime* LastPublishedDate; // 0x1b0 (0x8)
	struct FDateTime* LastUsedDate; // 0x1b8 (0x8)
	struct FFortCreativePlotPermissionData PermissionData; // 0x1c0 (0x18)
	struct FDateTime* DeletedAt; // 0x1d8 (0x8)
};

