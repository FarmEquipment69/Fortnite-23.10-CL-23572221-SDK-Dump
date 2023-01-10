// ScriptStruct /Script/FortniteGame.AddToInventoryVerbMessage
// Size: 0xa8
struct FAddToInventoryVerbMessage : FVerbMessage
{
	int Amount; // 0x68 (0x4)
	struct FGuid ItemGuid; // 0x6c (0x10)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FSubjectTagsPair Item; // 0x80 (0x28)
};

