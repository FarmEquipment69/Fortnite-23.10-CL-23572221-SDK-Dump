// Class /Script/FortniteGame.FortConversionControlItemDefinition
// Size: 0x460
class UFortConversionControlItemDefinition : public UFortAccountItemDefinition
{
	struct FString LootTierGroup; // 0x420 (0x10)
	struct FDataTableRowHandle ConversionPointsToTierCosts; // 0x430 (0x10)
	bool bConsumedOnConversion; // 0x440 (0x1)
	unsigned char unreflected_441[0x7]; // 0x441 (0x7) 
	struct FText RewardName; // 0x448 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetTierFromSacrificePoints (Underlying native function: GetTierFromSacrificePoints 0x8ce85e8)
	bool GetTierFromSacrificePoints(int& SacrificePoints, enum EFortRarity& CalculatedTier); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetRewardName (Underlying native function: GetRewardName 0x8ce844c)
	struct FText GetRewardName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetRequiredItemQuantity (Underlying native function: GetRequiredItemQuantity 0x8ce8378)
	int GetRequiredItemQuantity(int& SacrificePoints); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetRequiredItemDefinition (Underlying native function: GetRequiredItemDefinition 0x8ce8354)
	class UFortAccountItemDefinition* GetRequiredItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetRequiredCatalysts (Underlying native function: GetRequiredCatalysts 0x8ce8304)
	struct FGameplayTagContainer GetRequiredCatalysts(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetPointsForTier (Underlying native function: GetPointsForTier 0x8ce8210)
	int GetPointsForTier(enum EFortRarity& InTier); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetMaxConversionTier (Underlying native function: GetMaxConversionTier 0x8ce7510)
	enum EFortRarity GetMaxConversionTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversionControlItemDefinition.GetFirstConversionTier (Underlying native function: GetFirstConversionTier 0x8ce7310)
	enum EFortRarity GetFirstConversionTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

