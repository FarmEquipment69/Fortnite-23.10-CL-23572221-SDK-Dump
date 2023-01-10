// ScriptStruct /Script/VkEngineTypes.VkModuleDoc
// Size: 0xf8
struct FVkModuleDoc
{
	struct FString ModuleId; // 0x0 (0x10)
	struct FDateTime* Created; // 0x10 (0x8)
	struct FDateTime* Updated; // 0x18 (0x8)
	struct FVkNamedId Author; // 0x20 (0x20)
	struct FString ProjectID; // 0x40 (0x10)
	struct FString ModuleName; // 0x50 (0x10)
	struct FString ContentType; // 0x60 (0x10)
	struct TMap<enum EConsumerRole, bool> Relevance; // 0x70 (0x50)
	struct FString AliasForModuleId; // 0xc0 (0x10)
	struct FJsonObjectWrapper Meta; // 0xd0 (0x20)
	int LatestVersion; // 0xf0 (0x4)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)
};

