// Class /Script/ChaosCaching.ChaosCacheManager
// Size: 0x330
class AChaosCacheManager : public AActor
{
	class UChaosCacheCollection* CacheCollection; // 0x288 (0x8)
	enum ECacheMode CacheMode; // 0x290 (0x1)
	enum EStartMode StartMode; // 0x291 (0x1)
	unsigned char unreflected_292[0x2]; // 0x292 (0x2) 
	float StartTime; // 0x294 (0x4)
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	struct TArray<struct FObservedComponent> ObservedComponents; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x80]; // 0x2b0 (0x80)

	/* Functions */

	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponentByCache (Underlying native function: TriggerComponentByCache 0x7d5e648)
	void TriggerComponentByCache(struct FName& InCacheName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponent (Underlying native function: TriggerComponent 0x7d5e5c8)
	void TriggerComponent(class UPrimitiveComponent*& InComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerAll (Underlying native function: TriggerAll 0x7d5e5b4)
	void TriggerAll(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ChaosCaching.ChaosCacheManager.SetStartTime (Underlying native function: SetStartTime 0x7d5e524)
	void SetStartTime(float& InStartTime); // (Final | Native | Public)

	// Function /Script/ChaosCaching.ChaosCacheManager.ResetSingleTransform (Underlying native function: ResetSingleTransform 0x7d5e4a4)
	void ResetSingleTransform(int& InIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms (Underlying native function: ResetAllComponentTransforms 0x7d5e490)
	void ResetAllComponentTransforms(); // (Final | Native | Public | BlueprintCallable)
};

