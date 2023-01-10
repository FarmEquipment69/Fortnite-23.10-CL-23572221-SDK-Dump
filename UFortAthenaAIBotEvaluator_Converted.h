// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Converted
// Size: 0x288
class UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName ShouldMoveTowardsConverterName; // 0x230 (0x4)
	struct FName ShouldTeleportTowardsConverterName; // 0x234 (0x4)
	struct FName ConvertedAllowPatrolAroundName; // 0x238 (0x4)
	struct FName ConvertedAllowScanAroundWhenWaitingName; // 0x23c (0x4)
	struct FName ConvertedDestinationName; // 0x240 (0x4)
	struct FName CrouchExecutionStatusName; // 0x244 (0x4)
	struct FVector TeleportLocationProjectionExtent; // 0x248 (0x18)
	unsigned char unreflected_260[0x8]; // 0x260 (0x8) 
	class AFortPawn* ConverterPawn; // 0x268 (0x8)
	class UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters; // 0x270 (0x8)
	unsigned char padding_278[0x10]; // 0x278 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent (Underlying native function: OnUnconvertedEvent 0xa1ba71c)
	void OnUnconvertedEvent(class AFortPawn*& UnconvertedPawn, enum EUnconvertReason& UnconvertReason); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent (Underlying native function: OnConvertedEvent 0xa1ba518)
	void OnConvertedEvent(class AFortPawn*& InstigatorPawn, class AFortPawn*& ConvertedPawn); // (Final | Native | Protected)
};

