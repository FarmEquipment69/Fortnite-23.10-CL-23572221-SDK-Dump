// ScriptStruct /Script/VkEngineTypes.VkModuleVersionDoc
// Size: 0x170
struct FVkModuleVersionDoc
{
	struct FString ModuleId; // 0x0 (0x10)
	int Version; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString ProjectID; // 0x18 (0x10)
	enum EVkModuleAccess Access; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FDateTime* Created; // 0x30 (0x8)
	struct FVkNamedId Author; // 0x38 (0x20)
	struct FJsonObjectWrapper Meta; // 0x58 (0x20)
	struct TArray<struct FVkModuleVersionRef> Dependencies; // 0x78 (0x10)
	struct FVkJobOutput StagedFiles; // 0x88 (0x40)
	struct FVkBuildVersion SourceVersion; // 0xc8 (0x18)
	struct FString ContentType; // 0xe0 (0x10)
	struct TMap<enum EConsumerRole, bool> Relevance; // 0xf0 (0x50)
	struct FString ArtifactKey; // 0x140 (0x10)
	struct FString Checksum; // 0x150 (0x10)
	struct TArray<struct FVkArtifactOption> Artifacts; // 0x160 (0x10)
};

