// ScriptStruct /Script/SmartObjectsModule.SmartObjectSlotDefinition
// Size: 0xe0
struct FSmartObjectSlotDefinition
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FGameplayTagContainer RuntimeTags; // 0x8 (0x20)
	struct FGameplayTagQuery UserTagFilter; // 0x28 (0x48)
	struct FGameplayTagContainer ActivityTags; // 0x70 (0x20)
	struct FVector Offset; // 0x90 (0x18)
	struct FRotator Rotation; // 0xa8 (0x18)
	struct TArray<struct FInstancedStruct> Data; // 0xc0 (0x10)
	struct TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions; // 0xd0 (0x10)
};

