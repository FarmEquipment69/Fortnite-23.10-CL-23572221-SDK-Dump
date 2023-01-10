// ScriptStruct /Script/VkEngineTypes.VkProjectDoc
// Size: 0xe0
struct FVkProjectDoc
{
	struct FString ProjectID; // 0x0 (0x10)
	struct FDateTime* Created; // 0x10 (0x8)
	struct FVkNamedId Author; // 0x18 (0x20)
	enum EVkOwnerType OwnerType; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FVkNamedId Owner; // 0x40 (0x20)
	struct FJsonObjectWrapper Meta; // 0x60 (0x20)
	struct FJsonObjectWrapper SysMeta; // 0x80 (0x20)
	struct FVkPublishedLink LiveLink; // 0xa0 (0x40)
};

