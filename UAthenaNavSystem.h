// Class /Script/FortniteAI.AthenaNavSystem
// Size: 0x1928
class UAthenaNavSystem : public UFortNavSystem
{
	unsigned char unreflected_1788[0x8]; // 0x1788 (0x8) 
	struct TArray<struct FNavDataSetVariantSettings> NavDataSetVariants; // 0x1790 (0x10)
	unsigned char bUseNavDataSetVariants; // 0x17a0 (0x1)
	unsigned char bMarkBuildingFoundationDirty; // 0x17a0 (0x1)
	unsigned char bSupportRuntimeNavmeshDisabling; // 0x17a0 (0x1)
	unsigned char unreflected_17a1[0x3]; // 0x17a1 (0x3) 
	float NavGenerationObserverCheckInterval; // 0x17a4 (0x4)
	unsigned char unreflected_17a8[0x20]; // 0x17a8 (0x20) 
	struct TArray<struct FBoxNavInvoker> BoxInvokers; // 0x17c8 (0x10)
	unsigned char unreflected_17d8[0x138]; // 0x17d8 (0x138) 
	struct TArray<struct FBox> NavOctTreeInclusionBounds; // 0x1910 (0x10)
	unsigned char padding_1920[0x8]; // 0x1920 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.AthenaNavSystem.UnregisterNavGenerationObserver (Underlying native function: UnregisterNavGenerationObserver 0xa172750)
	static void UnregisterNavGenerationObserver(class USceneComponent*& Component); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaNavSystem.RegisterNavGenerationObserver (Underlying native function: RegisterNavGenerationObserver 0xa172100)
	static void RegisterNavGenerationObserver(class USceneComponent*& Component, struct FDelegate& Event); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaNavSystem.IsInitialNavigationLockActive (Underlying native function: IsInitialNavigationLockActive 0xa17166c)
	static bool IsInitialNavigationLockActive(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

