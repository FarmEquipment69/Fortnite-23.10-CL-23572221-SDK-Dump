// ScriptStruct /Script/SmartObjectsModule.SmartObjectRequestFilter
// Size: 0xc0
struct FSmartObjectRequestFilter
{
	struct FGameplayTagContainer UserTags; // 0x0 (0x20)
	struct FGameplayTagQuery ActivityRequirements; // 0x20 (0x48)
	class UClass* BehaviorDefinitionClass; // 0x68 (0x8)
	struct TArray<class UClass*> BehaviorDefinitionClasses; // 0x70 (0x10)
	unsigned char padding_80[0x40]; // 0x80 (0x40)
};

