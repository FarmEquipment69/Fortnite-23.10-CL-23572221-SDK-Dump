// Class /Script/Engine.CheatManager
// Size: 0x88
class UCheatManager : public UObject
{
	class ADebugCameraController* DebugCameraControllerRef; // 0x28 (0x8)
	class UClass* DebugCameraControllerClass; // 0x30 (0x8)
	unsigned char unreflected_38[0x40]; // 0x38 (0x40) 
	struct TArray<class UCheatManagerExtension*> CheatManagerExtensions; // 0x78 (0x10)

	/* Functions */

	// Function /Script/Engine.CheatManager.Walk (Underlying native function: Walk 0x13eec30)
	void Walk(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.ViewSelf (Underlying native function: ViewSelf 0x9b045ac)
	void ViewSelf(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ViewPlayer (Underlying native function: ViewPlayer 0x9b04454)
	void ViewPlayer(struct FString& S); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ViewClass (Underlying native function: ViewClass 0x9b043d0)
	void ViewClass(class UClass*& DesiredClass); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ViewActor (Underlying native function: ViewActor 0x9b0434c)
	void ViewActor(struct FName& ActorName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.UpdateSafeArea (Underlying native function: UpdateSafeArea 0x9b04330)
	void UpdateSafeArea(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet (Underlying native function: ToggleServerStatReplicatorUpdateStatNet 0x9b042e8)
	void ToggleServerStatReplicatorUpdateStatNet(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite (Underlying native function: ToggleServerStatReplicatorClientOverwrite 0x9b042a0)
	void ToggleServerStatReplicatorClientOverwrite(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleDebugCamera (Underlying native function: ToggleDebugCamera 0x9b04288)
	void ToggleDebugCamera(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleAILogging (Underlying native function: ToggleAILogging 0x9b04270)
	void ToggleAILogging(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.TestCollisionDistance (Underlying native function: TestCollisionDistance 0x6a49250)
	void TestCollisionDistance(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.Teleport (Underlying native function: Teleport 0x2871e0c)
	void Teleport(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.Summon (Underlying native function: Summon 0x9b04118)
	void Summon(struct FString& ClassName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.StreamLevelOut (Underlying native function: StreamLevelOut 0x9b04094)
	void StreamLevelOut(struct FName& PackageName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.StreamLevelIn (Underlying native function: StreamLevelIn 0x9b04010)
	void StreamLevelIn(struct FName& PackageName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.SpawnServerStatReplicator (Underlying native function: SpawnServerStatReplicator 0x9b03fe0)
	void SpawnServerStatReplicator(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.Slomo (Underlying native function: Slomo 0x6e54d4c)
	void Slomo(float& NewTimeDilation); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.SetWorldOrigin (Underlying native function: SetWorldOrigin 0x9b03fcc)
	void SetWorldOrigin(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.SetMouseSensitivityToDefault (Underlying native function: SetMouseSensitivityToDefault 0x9b03fb4)
	void SetMouseSensitivityToDefault(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ServerToggleAILogging (Underlying native function: ServerToggleAILogging 0x9b03f68)
	void ServerToggleAILogging(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.CheatManager.ReceiveInitCheatManager (Has no native function)
	void ReceiveInitCheatManager(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.CheatManager.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.CheatManager.PlayersOnly (Underlying native function: PlayersOnly 0x9b03f50)
	void PlayersOnly(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.OnPlayerEndPlayed (Underlying native function: OnPlayerEndPlayed 0x9b03e08)
	void OnPlayerEndPlayed(class AActor*& Player, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/Engine.CheatManager.OnlyLoadLevel (Underlying native function: OnlyLoadLevel 0x9b03ecc)
	void OnlyLoadLevel(struct FName& PackageName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.LogLoc (Underlying native function: LogLoc 0x9b03df0)
	void LogLoc(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.InvertMouse (Underlying native function: InvertMouse 0x66b848c)
	void InvertMouse(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.God (Underlying native function: God 0x66e6c10)
	void God(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.Ghost (Underlying native function: Ghost 0x66b6494)
	void Ghost(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.GetPlayerController (Underlying native function: GetPlayerController 0x9b03da4)
	class APlayerController* GetPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CheatManager.FreezeFrame (Underlying native function: FreezeFrame 0x6ffba1c)
	void FreezeFrame(float& Delay); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.Fly (Underlying native function: Fly 0x70832d4)
	void Fly(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.FlushLog (Underlying native function: FlushLog 0x9b03d8c)
	void FlushLog(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.EnableDebugCamera (Underlying native function: EnableDebugCamera 0x66b7770)
	void EnableDebugCamera(); // (Native | Protected | BlueprintCallable)

	// Function /Script/Engine.CheatManager.DumpVoiceMutingState (Underlying native function: DumpVoiceMutingState 0x6e70aa8)
	void DumpVoiceMutingState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DumpPartyState (Underlying native function: DumpPartyState 0x6e70ac0)
	void DumpPartyState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DumpOnlineSessionState (Underlying native function: DumpOnlineSessionState 0x6e70b04)
	void DumpOnlineSessionState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DumpChatState (Underlying native function: DumpChatState 0x6e70dc0)
	void DumpChatState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DisableDebugCamera (Underlying native function: DisableDebugCamera 0x9b03d74)
	void DisableDebugCamera(); // (Native | Protected | BlueprintCallable)

	// Function /Script/Engine.CheatManager.DestroyTarget (Underlying native function: DestroyTarget 0x9b03d5c)
	void DestroyTarget(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.DestroyServerStatReplicator (Underlying native function: DestroyServerStatReplicator 0x9b03d48)
	void DestroyServerStatReplicator(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DestroyPawns (Underlying native function: DestroyPawns 0x9b03cc4)
	void DestroyPawns(class UClass*& aClass); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DestroyAllPawnsExceptTarget (Underlying native function: DestroyAllPawnsExceptTarget 0x7e70ff4)
	void DestroyAllPawnsExceptTarget(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DestroyAll (Underlying native function: DestroyAll 0x9b03c40)
	void DestroyAll(class UClass*& aClass); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepSize (Underlying native function: DebugCapsuleSweepSize 0x9b03b78)
	void DebugCapsuleSweepSize(float& HalfHeight, float& Radius); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepPawn (Underlying native function: DebugCapsuleSweepPawn 0x6e70a90)
	void DebugCapsuleSweepPawn(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepComplex (Underlying native function: DebugCapsuleSweepComplex 0x87956ec)
	void DebugCapsuleSweepComplex(bool& bTraceComplex); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepClear (Underlying native function: DebugCapsuleSweepClear 0x6e70ba0)
	void DebugCapsuleSweepClear(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepChannel (Underlying native function: DebugCapsuleSweepChannel 0x9b03af4)
	void DebugCapsuleSweepChannel(struct TEnumAsByte<ECollisionChannel>& Channel); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepCapture (Underlying native function: DebugCapsuleSweepCapture 0x9b03adc)
	void DebugCapsuleSweepCapture(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweep (Underlying native function: DebugCapsuleSweep 0x9b03ac4)
	void DebugCapsuleSweep(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DamageTarget (Underlying native function: DamageTarget 0x9b03a3c)
	void DamageTarget(float& DamageAmount); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.CheatScript (Underlying native function: CheatScript 0x9b038cc)
	void CheatScript(struct FString& ScriptName); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ChangeSize (Underlying native function: ChangeSize 0x99e7bc8)
	void ChangeSize(float& F); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.BugItStringCreator (Underlying native function: BugItStringCreator 0x9b03598)
	void BugItStringCreator(struct FVector& ViewLocation, struct FRotator& ViewRotation, struct FString& GoString, struct FString& LocString); // (Exec | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/Engine.CheatManager.BugItGo (Underlying native function: BugItGo 0x9b033c4)
	void BugItGo(float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.BugIt (Underlying native function: BugIt 0x9b0326c)
	void BugIt(struct FString& ScreenShotDescription); // (Exec | Native | Public)
};

