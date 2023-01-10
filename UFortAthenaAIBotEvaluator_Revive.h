// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Revive
// Size: 0x268
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName ReviveTargetKeyName; // 0x230 (0x4)
	unsigned char unreflected_234[0x4]; // 0x234 (0x4) 
	class UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters; // 0x238 (0x8)
	class AFortPlayerPawnAthena* CurrentReviveTarget; // 0x240 (0x8)
	struct TArray<class AFortPlayerPawnAthena*> DBNOAllyPawns; // 0x248 (0x10)
	class UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet; // 0x258 (0x8)
	unsigned char padding_260[0x8]; // 0x260 (0x8)
};

