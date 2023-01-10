// Class /Script/FortniteGame.FortRemoteControlledPawnAthena
// Size: 0x52a0
class AFortRemoteControlledPawnAthena : public AFortPlayerPawnAthena
{
	bool bCurrentlyDelayingLaunch; // 0x5218 (0x1)
	unsigned char unreflected_5219[0x3]; // 0x5219 (0x3) 
	float ServerFuseStartTime; // 0x521c (0x4)
	unsigned char RCTeam; // 0x5220 (0x1)
	unsigned char unreflected_5221[0x3]; // 0x5221 (0x3) 
	struct TWeakObjectPtr<class AFortPlayerPawnAthena> ControllingPlayerPawn; // 0x5224 (0x8)
	struct TWeakObjectPtr<class AFortPlayerPawnAthena> SpectateReturnPlayerPawn; // 0x522c (0x8)
	unsigned char unreflected_5234[0x4]; // 0x5234 (0x4) 
	class UFortAbilitySystemComponent* OverrideAbilitySystemComponent; // 0x5238 (0x8)
	float TriggeredHealthThreshold; // 0x5240 (0x4)
	unsigned char unreflected_5244[0x4]; // 0x5244 (0x4) 
	struct TArray<struct FFortGameplayEffectContainerSpec> EffectContainerSpecToApplyOnKills; // 0x5248 (0x10)
	class UFortRemoteControlPawnSet* RemoteControlPawnSet; // 0x5258 (0x8)
	bool bTriggeredForDestroy; // 0x5260 (0x1)
	unsigned char unreflected_5261[0x3]; // 0x5261 (0x3) 
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x5264 (0x8)
	unsigned char unreflected_526c[0x4]; // 0x526c (0x4) 
	class UClass* RemoteControlledPawnDefaultCameraClass; // 0x5270 (0x8)
	class UClass* RemoteControlledPawnTriggeredCameraClass; // 0x5278 (0x8)
	class UClass* ControllingPlayerEffect; // 0x5280 (0x8)
	struct FActiveGameplayEffectHandle* ControllingPlayerEffectHandle; // 0x5288 (0x8)
	bool bIsKeyboardTurnPressed; // 0x5290 (0x1)
	bool bIsKeyboardLookPressed; // 0x5291 (0x1)
	unsigned char padding_5292[0xe]; // 0x5292 (0xe)

	/* Functions */

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.TriggerDestroyRemoteControlPawn (Underlying native function: TriggerDestroyRemoteControlPawn 0x8c2bec8)
	void TriggerDestroyRemoteControlPawn(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.SetupRemoteControlPawn (Underlying native function: SetupRemoteControlPawn 0x8c2b9d4)
	void SetupRemoteControlPawn(class AFortPlayerControllerAthena*& InFortPC, class AFortPlayerPawnAthena*& InControllingPawn, struct TEnumAsByte<EFortCustomMovement>& CustomMovementType, struct TArray<struct FFortGameplayEffectContainerSpec>& EffectContainerSpecOnKill); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnTriggeredHealthThreshold (Underlying native function: OnTriggeredHealthThreshold 0x8c2a800)
	void OnTriggeredHealthThreshold(float& PreviousTriggeredHealthThreshold, float& CurrentTriggeredHealthThreshold); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_TriggeredHealthThreshold (Underlying native function: OnRep_TriggeredHealthThreshold 0x8c2a560)
	void OnRepTriggeredHealthThreshold(float& PreviousTriggeredHealthThreshold); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_TriggeredForDestroy (Underlying native function: OnRep_TriggeredForDestroy 0x8c2a53c)
	void OnRepTriggeredForDestroy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_OverrideAbilitySystemComponent (Underlying native function: OnRep_OverrideAbilitySystemComponent 0x8c2a300)
	void OnRepOverrideAbilitySystemComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_ControllingPlayerPawn (Underlying native function: OnRep_ControllingPlayerPawn 0x8c2a2b0)
	void OnRepControllingPlayerPawn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnDoKill (Underlying native function: OnDoKill 0x8c2a050)
	void OnDoKill(); // (BlueprintAuthorityOnly | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnClientSetupRemoteControlPawn (Underlying native function: OnClientSetupRemoteControlPawn 0x8c29fb8)
	void OnClientSetupRemoteControlPawn(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnCapsuleTouch (Underlying native function: OnCapsuleTouch 0x8c29df0)
	void OnCapsuleTouch(class UPrimitiveComponent*& HitComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.IsCurrentlyDelayingLaunch (Underlying native function: IsCurrentlyDelayingLaunch 0x8c29780)
	bool IsCurrentlyDelayingLaunch(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.HandleControllingPlayerOutOfHealth (Underlying native function: HandleControllingPlayerOutOfHealth 0x8c287e8)
	void HandleControllingPlayerOutOfHealth(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.GetOutOfHealthExplodeDelay (Underlying native function: GetOutOfHealthExplodeDelay 0x8c2838c)
	float GetOutOfHealthExplodeDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.GetLaunchDelay (Underlying native function: GetLaunchDelay 0x8c28278)
	float GetLaunchDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.GetFuseLength (Underlying native function: GetFuseLength 0x8c28258)
	float GetFuseLength(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.BeginCapsuleOverlap (Underlying native function: BeginCapsuleOverlap 0x8067700)
	void BeginCapsuleOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)
};

