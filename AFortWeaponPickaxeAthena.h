// Class /Script/FortniteGame.FortWeaponPickaxeAthena
// Size: 0x1270
class AFortWeaponPickaxeAthena : public AFortWeapon
{
	class UFXSystemComponent* SwingVFX; // 0x1028 (0x8)
	class UFXSystemComponent* IdleVFX; // 0x1030 (0x8)
	class UFXSystemComponent* AnimTrailsPSC; // 0x1038 (0x8)
	class UParticleSystem* AnimTrailsPSCTemplate; // 0x1040 (0x8)
	class UNiagaraSystem* AnimTrailsNiagaraAsset; // 0x1048 (0x8)
	bool bUseAnimTrailsPSC; // 0x1050 (0x1)
	unsigned char unreflected_1051[0x3]; // 0x1051 (0x3) 
	struct FName AnimTrailsFirstSocketName; // 0x1054 (0x4)
	struct FName AnimTrailsSecondSocketName; // 0x1058 (0x4)
	float AnimTrailsWidth; // 0x105c (0x4)
	struct FName IdleFXSocketName; // 0x1060 (0x4)
	struct FName SwingFXSocketName; // 0x1064 (0x4)
	class USoundBase* GenericImpactSound; // 0x1068 (0x8)
	class UMaterialInstanceDynamic* Material0MID; // 0x1070 (0x8)
	bool bWatchKills; // 0x1078 (0x1)
	unsigned char unreflected_1079[0x3]; // 0x1079 (0x3) 
	float WatchedKills; // 0x107c (0x4)
	bool bCandyCaneKillReaction; // 0x1080 (0x1)
	unsigned char unreflected_1081[0x7]; // 0x1081 (0x7) 
	class USoundBase* CQCEnemyAudio; // 0x1088 (0x8)
	struct TArray<class UAnimMontage*> PokeAnimationsToCheckForOnImpact; // 0x1090 (0x10)
	class UAnimMontage* PickaxeHarvestingMontage; // 0x10a0 (0x8)
	class UAthenaPickaxeItemDefinition* CachedCosmeticItemDefinition; // 0x10a8 (0x8)
	unsigned char unreflected_10b0[0x8]; // 0x10b0 (0x8) 
	struct TWeakObjectPtr<class USkeletalMesh> SoftFallbackMesh; // 0x10b8 (0x28)
	class USkeletalMesh* LoadedFallbackMesh; // 0x10e0 (0x8)
	struct FFortAthenaLoadout CosmeticData; // 0x10e8 (0x178)
	struct FName FrontendFXParameterName; // 0x1260 (0x4)
	struct FPickaxeFXAttachmentRules IdleFXAttachmentRules; // 0x1264 (0x3)
	struct FPickaxeFXAttachmentRules SwingFXAttachmentRules; // 0x1267 (0x3)
	unsigned char padding_126a[0x6]; // 0x126a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.OnRep_CosmeticData (Underlying native function: OnRep_CosmeticData 0x25553d8)
	void OnRepCosmeticData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetUseAnimTrailsPSC (Underlying native function: GetUseAnimTrailsPSC 0x29195d0)
	bool GetUseAnimTrailsPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetSwingVFXComponent (Underlying native function: GetSwingVFXComponent 0x2766f84)
	class UFXSystemComponent* GetSwingVFXComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetSwingPSC (Underlying native function: GetSwingPSC 0x818007c)
	class UParticleSystemComponent* GetSwingPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetSwingFXSocketName (Underlying native function: GetSwingFXSocketName 0x817ffdc)
	struct FName GetSwingFXSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetIdleVFXComponent (Underlying native function: GetIdleVFXComponent 0x26b8ff0)
	class UFXSystemComponent* GetIdleVFXComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetIdlePSC (Underlying native function: GetIdlePSC 0x284f778)
	class UParticleSystemComponent* GetIdlePSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetIdleFXSocketName (Underlying native function: GetIdleFXSocketName 0x817f644)
	struct FName GetIdleFXSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailVFXComponent (Underlying native function: GetAnimTrailVFXComponent 0x2d89428)
	class UFXSystemComponent* GetAnimTrailVFXComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsWidth (Underlying native function: GetAnimTrailsWidth 0x2a8c2a8)
	float GetAnimTrailsWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsSecondSocketName (Underlying native function: GetAnimTrailsSecondSocketName 0x2a8c290)
	struct FName GetAnimTrailsSecondSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsPSCTemplate (Underlying native function: GetAnimTrailsPSCTemplate 0x2a8c2c0)
	class UParticleSystem* GetAnimTrailsPSCTemplate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsPSC (Underlying native function: GetAnimTrailsPSC 0x283e19c)
	class UFXSystemComponent* GetAnimTrailsPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsNiagaraAsset (Underlying native function: GetAnimTrailsNiagaraAsset 0x2a8c2d8)
	class UNiagaraSystem* GetAnimTrailsNiagaraAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsFirstSocketName (Underlying native function: GetAnimTrailsFirstSocketName 0x2a8c278)
	struct FName GetAnimTrailsFirstSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.CreateAnimTrailFX (Underlying native function: CreateAnimTrailFX 0x817f0ac)
	class UFXSystemComponent* CreateAnimTrailFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.BP_GetCosmeticData (Underlying native function: BP_GetCosmeticData 0x817e8a4)
	struct FFortAthenaLoadout BPGetCosmeticData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.AttachesAnimTrailsToWeapon (Underlying native function: AttachesAnimTrailsToWeapon 0x286289c)
	bool AttachesAnimTrailsToWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

