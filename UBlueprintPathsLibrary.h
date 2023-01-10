// Class /Script/Engine.BlueprintPathsLibrary
// Size: 0x28
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.BlueprintPathsLibrary.VideoCaptureDir (Underlying native function: VideoCaptureDir 0x9c77530)
	static struct FString VideoCaptureDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ValidatePath (Underlying native function: ValidatePath 0x9c7730c)
	static void ValidatePath(struct FString& InPath, bool& bDidSucceed, struct FText& OutReason); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.Split (Underlying native function: Split 0x9c76e6c)
	static void Split(struct FString& InPath, struct FString& PathPart, struct FString& FilenamePart, struct FString& ExtensionPart); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.SourceConfigDir (Underlying native function: SourceConfigDir 0x9c74ca8)
	static struct FString SourceConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ShouldSaveToUserDir (Underlying native function: ShouldSaveToUserDir 0x9c76e48)
	static bool ShouldSaveToUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ShaderWorkingDir (Underlying native function: ShaderWorkingDir 0x9c76d14)
	static struct FString ShaderWorkingDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.SetProjectFilePath (Underlying native function: SetProjectFilePath 0x9c76bc4)
	static void SetProjectFilePath(struct FString& NewGameProjectFilePath); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPathsLibrary.SetExtension (Underlying native function: SetExtension 0x9c7693c)
	static struct FString SetExtension(struct FString& InPath, struct FString& InNewExtension); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ScreenShotDir (Underlying native function: ScreenShotDir 0x9c76748)
	static struct FString ScreenShotDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.SandboxesDir (Underlying native function: SandboxesDir 0x9c75cb4)
	static struct FString SandboxesDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.RootDir (Underlying native function: RootDir 0x9c75c70)
	static struct FString RootDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.RemoveDuplicateSlashes (Underlying native function: RemoveDuplicateSlashes 0x9c759bc)
	static void RemoveDuplicateSlashes(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectUserDir (Underlying native function: ProjectUserDir 0x9c75590)
	static struct FString ProjectUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectSavedDir (Underlying native function: ProjectSavedDir 0x9c75468)
	static struct FString ProjectSavedDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectPluginsDir (Underlying native function: ProjectPluginsDir 0x9c75334)
	static struct FString ProjectPluginsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectPersistentDownloadDir (Underlying native function: ProjectPersistentDownloadDir 0x9c75200)
	static struct FString ProjectPersistentDownloadDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectModsDir (Underlying native function: ProjectModsDir 0x9c750cc)
	static struct FString ProjectModsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectLogDir (Underlying native function: ProjectLogDir 0x9c75088)
	static struct FString ProjectLogDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectIntermediateDir (Underlying native function: ProjectIntermediateDir 0x9c75044)
	static struct FString ProjectIntermediateDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectDir (Underlying native function: ProjectDir 0x9c74f10)
	static struct FString ProjectDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectContentDir (Underlying native function: ProjectContentDir 0x9c74ddc)
	static struct FString ProjectContentDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectConfigDir (Underlying native function: ProjectConfigDir 0x9c74ca8)
	static struct FString ProjectConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProfilingDir (Underlying native function: ProfilingDir 0x9c74c64)
	static struct FString ProfilingDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.NormalizeFilename (Underlying native function: NormalizeFilename 0x9c7499c)
	static void NormalizeFilename(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.NormalizeDirectoryName (Underlying native function: NormalizeDirectoryName 0x9c746e8)
	static void NormalizeDirectoryName(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakeValidFileName (Underlying native function: MakeValidFileName 0x9c740bc)
	static struct FString MakeValidFileName(struct FString& InString, struct FString& InReplacementChar); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakeStandardFilename (Underlying native function: MakeStandardFilename 0x9c73e08)
	static void MakeStandardFilename(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakePlatformFilename (Underlying native function: MakePlatformFilename 0x9c73b54)
	static void MakePlatformFilename(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakePathRelativeTo (Underlying native function: MakePathRelativeTo 0x9c7377c)
	static bool MakePathRelativeTo(struct FString& InPath, struct FString& InRelativeTo, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.LaunchDir (Underlying native function: LaunchDir 0x9c72f20)
	static struct FString LaunchDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsSamePath (Underlying native function: IsSamePath 0x9c72cb4)
	static bool IsSamePath(struct FString& PathA, struct FString& PathB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsRestrictedPath (Underlying native function: IsRestrictedPath 0x9c72b60)
	static bool IsRestrictedPath(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsRelative (Underlying native function: IsRelative 0x9c72a0c)
	static bool IsRelative(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsProjectFilePathSet (Underlying native function: IsProjectFilePathSet 0x9c729e8)
	static bool IsProjectFilePathSet(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsDrive (Underlying native function: IsDrive 0x9c72894)
	static bool IsDrive(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.HasProjectPersistentDownloadDir (Underlying native function: HasProjectPersistentDownloadDir 0x2830cb8)
	static bool HasProjectPersistentDownloadDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetToolTipLocalizationPaths (Underlying native function: GetToolTipLocalizationPaths 0x9c72570)
	static struct TArray<struct FString> GetToolTipLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetRestrictedFolderNames (Underlying native function: GetRestrictedFolderNames 0x9c72544)
	static struct TArray<struct FString> GetRestrictedFolderNames(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetRelativePathToRoot (Underlying native function: GetRelativePathToRoot 0x9c724d4)
	static struct FString GetRelativePathToRoot(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetPropertyNameLocalizationPaths (Underlying native function: GetPropertyNameLocalizationPaths 0x9c724a8)
	static struct TArray<struct FString> GetPropertyNameLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetProjectFilePath (Underlying native function: GetProjectFilePath 0x9c72374)
	static struct FString GetProjectFilePath(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetPath (Underlying native function: GetPath 0x9c72200)
	static struct FString GetPath(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetInvalidFileSystemChars (Underlying native function: GetInvalidFileSystemChars 0x9c71e34)
	static struct FString GetInvalidFileSystemChars(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetGameLocalizationPaths (Underlying native function: GetGameLocalizationPaths 0x9c71e08)
	static struct TArray<struct FString> GetGameLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetExtension (Underlying native function: GetExtension 0x9c71c50)
	static struct FString GetExtension(struct FString& InPath, bool& bIncludeDot); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetEngineLocalizationPaths (Underlying native function: GetEngineLocalizationPaths 0x9c71c24)
	static struct TArray<struct FString> GetEngineLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetEditorLocalizationPaths (Underlying native function: GetEditorLocalizationPaths 0x9c71bf8)
	static struct TArray<struct FString> GetEditorLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetCleanFilename (Underlying native function: GetCleanFilename 0x9c71980)
	static struct FString GetCleanFilename(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetBaseFilename (Underlying native function: GetBaseFilename 0x9c717c8)
	static struct FString GetBaseFilename(struct FString& InPath, bool& bRemovePath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GeneratedConfigDir (Underlying native function: GeneratedConfigDir 0x9c71760)
	static struct FString GeneratedConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameUserDeveloperDir (Underlying native function: GameUserDeveloperDir 0x9c7162c)
	static struct FString GameUserDeveloperDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameSourceDir (Underlying native function: GameSourceDir 0x9c714f8)
	static struct FString GameSourceDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameDevelopersDir (Underlying native function: GameDevelopersDir 0x9c713c4)
	static struct FString GameDevelopersDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameAgnosticSavedDir (Underlying native function: GameAgnosticSavedDir 0x9c70ba0)
	static struct FString GameAgnosticSavedDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.FileExists (Underlying native function: FileExists 0x9c71270)
	static bool FileExists(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.FeaturePackDir (Underlying native function: FeaturePackDir 0x9c7113c)
	static struct FString FeaturePackDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnterprisePluginsDir (Underlying native function: EnterprisePluginsDir 0x9c71008)
	static struct FString EnterprisePluginsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnterpriseFeaturePackDir (Underlying native function: EnterpriseFeaturePackDir 0x9c70ed4)
	static struct FString EnterpriseFeaturePackDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnterpriseDir (Underlying native function: EnterpriseDir 0x9c70da0)
	static struct FString EnterpriseDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineVersionAgnosticUserDir (Underlying native function: EngineVersionAgnosticUserDir 0x9c70d5c)
	static struct FString EngineVersionAgnosticUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineUserDir (Underlying native function: EngineUserDir 0x9c70d18)
	static struct FString EngineUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineSourceDir (Underlying native function: EngineSourceDir 0x9c70be4)
	static struct FString EngineSourceDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineSavedDir (Underlying native function: EngineSavedDir 0x9c70ba0)
	static struct FString EngineSavedDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnginePluginsDir (Underlying native function: EnginePluginsDir 0x9c70a6c)
	static struct FString EnginePluginsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineIntermediateDir (Underlying native function: EngineIntermediateDir 0x9c70938)
	static struct FString EngineIntermediateDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineDir (Underlying native function: EngineDir 0x9c70804)
	static struct FString EngineDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineContentDir (Underlying native function: EngineContentDir 0x9c706d0)
	static struct FString EngineContentDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineConfigDir (Underlying native function: EngineConfigDir 0x9c7059c)
	static struct FString EngineConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.DirectoryExists (Underlying native function: DirectoryExists 0x9c70448)
	static bool DirectoryExists(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.DiffDir (Underlying native function: DiffDir 0x9c70404)
	static struct FString DiffDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.CreateTempFilename (Underlying native function: CreateTempFilename 0x9c70060)
	static struct FString CreateTempFilename(struct FString& Path, struct FString& Prefix, struct FString& Extension); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ConvertToSandboxPath (Underlying native function: ConvertToSandboxPath 0x9c6fdd0)
	static struct FString ConvertToSandboxPath(struct FString& InPath, struct FString& InSandboxName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ConvertRelativePathToFull (Underlying native function: ConvertRelativePathToFull 0x9c6f9d4)
	static struct FString ConvertRelativePathToFull(struct FString& InPath, struct FString& InBasePath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ConvertFromSandboxPath (Underlying native function: ConvertFromSandboxPath 0x9c6f418)
	static struct FString ConvertFromSandboxPath(struct FString& InPath, struct FString& InSandboxName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.Combine (Underlying native function: Combine 0x9c6e9e8)
	static struct FString Combine(struct TArray<struct FString>& InPaths); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.CollapseRelativeDirectories (Underlying native function: CollapseRelativeDirectories 0x9c6e730)
	static bool CollapseRelativeDirectories(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.CloudDir (Underlying native function: CloudDir 0x9c6e6ec)
	static struct FString CloudDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ChangeExtension (Underlying native function: ChangeExtension 0x9c6e428)
	static struct FString ChangeExtension(struct FString& InPath, struct FString& InNewExtension); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.BugItDir (Underlying native function: BugItDir 0x9c6e0b4)
	static struct FString BugItDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.AutomationTransientDir (Underlying native function: AutomationTransientDir 0x9c6ddb0)
	static struct FString AutomationTransientDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.AutomationLogDir (Underlying native function: AutomationLogDir 0x9c6dc7c)
	static struct FString AutomationLogDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.AutomationDir (Underlying native function: AutomationDir 0x9c6dc38)
	static struct FString AutomationDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

