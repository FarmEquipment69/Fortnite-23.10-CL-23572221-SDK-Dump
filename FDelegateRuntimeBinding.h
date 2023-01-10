// ScriptStruct /Script/UMG.DelegateRuntimeBinding
// Size: 0x48
struct FDelegateRuntimeBinding
{
	struct FString ObjectName; // 0x0 (0x10)
	struct FName PropertyName; // 0x10 (0x4)
	struct FName FunctionName; // 0x14 (0x4)
	struct FDynamicPropertyPath SourcePath; // 0x18 (0x28)
	enum EBindingKind Kind; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

