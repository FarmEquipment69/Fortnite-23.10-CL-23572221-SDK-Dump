// ScriptStruct /Script/VkEngineTypes.VkProjectInfoSlim
// Size: 0x68
struct FVkProjectInfoSlim
{
	enum EVkOwnerType OwnerType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVkNamedId Owner; // 0x8 (0x20)
	unsigned char unreflected_28[0x20]; // 0x28 (0x20) 
	struct FJsonObjectWrapper SysMeta; // 0x48 (0x20)
};

