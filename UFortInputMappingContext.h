// Class /Script/FortniteGame.FortInputMappingContext
// Size: 0xa8
class UFortInputMappingContext : public UInputMappingContext
{
	struct FName Name; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FText DisplayName; // 0x60 (0x18)
	struct TArray<struct FName> DefaultAutomaticActivationEvents; // 0x78 (0x10)
	struct FGameplayTagContainer ActivationEvents; // 0x88 (0x20)
};

