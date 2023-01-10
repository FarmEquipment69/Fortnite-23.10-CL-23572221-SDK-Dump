// ScriptStruct /Script/FortniteGame.AbilityKitItem
// Size: 0x10
struct FAbilityKitItem
{
	class UFortItemDefinition* Item; // 0x0 (0x8)
	int Quantity; // 0x8 (0x4)
	struct TEnumAsByte<EFortReplenishmentType> Replenishment; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

