// Class /Script/FortniteUI.FortCreativeDynamicUIDirector
// Size: 0x360
class AFortCreativeDynamicUIDirector : public ADynamicUIDirectorBase
{
	struct TMap<struct FGameplayTag, class UDynamicUIScene*> CreativeScenesMap; // 0x2a8 (0x50)
	struct TMap<struct FGameplayTag, class UDynamicUIScene*> ActiveScenesMap; // 0x2f8 (0x50)
	unsigned char padding_348[0x18]; // 0x348 (0x18)
};

