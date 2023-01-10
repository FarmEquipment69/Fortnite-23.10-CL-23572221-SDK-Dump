// ScriptStruct /Script/FortniteGame.WeaponHudData
// Size: 0x68
struct FWeaponHudData
{
	struct FName KeyActionName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UInputAction* BoundAction; // 0x8 (0x8)
	struct FName GamepadActionName; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FText ActionDescription; // 0x18 (0x18)
	bool bVisible; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FGameplayTagContainer DisabledTags; // 0x38 (0x20)
	struct FString KeyActionId; // 0x58 (0x10)
};

