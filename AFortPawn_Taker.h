// Class /Script/FortniteGame.FortPawn_Taker
// Size: 0x3300
class AFortPawn_Taker : public AFortAIPawn
{
	float SlowShackleScale; // 0x32d8 (0x4)
	unsigned char bUseClimbLinks; // 0x32dc (0x1)
	unsigned char unreflected_32dd[0xb]; // 0x32dd (0xb) 
	struct TArray<struct FBuildingHitTime> BuildingCollisions; // 0x32e8 (0x10)
	unsigned char padding_32f8[0x8]; // 0x32f8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPawn_Taker.SetScalarParameterOnAllCharacterMIDs (Has no native function)
	void SetScalarParameterOnAllCharacterMIDs(struct FName& ParameterName, float& ScalarValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn_Taker.RestorePreviousMaterialOnCharacterMesh (Has no native function)
	void RestorePreviousMaterialOnCharacterMesh(float& ScalarValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn_Taker.OverrideMaterialAndCopyParametersOnCharacterMesh (Has no native function)
	void OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterialInterface*& NewMaterialToApply); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

