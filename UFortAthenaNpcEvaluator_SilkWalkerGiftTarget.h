// Class /Script/SilkWalkerRuntime.FortAthenaNpcEvaluator_SilkWalkerGiftTarget
// Size: 0xf0
class UFortAthenaNpcEvaluator_SilkWalkerGiftTarget : public UFortAthenaAIBotEvaluator
{
	struct FName GiftTargetActorName; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct FName GiftTargetStatusKeyName; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	float MinGiftRadius; // 0x98 (0x4)
	float MaxGiftRadius; // 0x9c (0x4)
	struct FGameplayTagContainer UndesiredTags; // 0xa0 (0x20)
	struct FGameplayTagContainer DesiredTags; // 0xc0 (0x20)
	struct TWeakObjectPtr<class AFortGameModeAthena> CachedGameMode; // 0xe0 (0x8)
	struct TWeakObjectPtr<class UFortGameStateComponent_AffiliationManager> CachedAffiliationManager; // 0xe8 (0x8)
};

