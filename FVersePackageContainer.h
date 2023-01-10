// ScriptStruct /Script/Solaris.VersePackageContainer
// Size: 0x78
struct FVersePackageContainer
{
	struct FString Name; // 0x0 (0x10)
	struct FString ModuleId; // 0x10 (0x10)
	struct FString DirPath; // 0x20 (0x10)
	struct FVersePackageContainerSettings Settings; // 0x30 (0x38)
	struct TArray<struct FVerseSourceFile> SourceFiles; // 0x68 (0x10)
};

