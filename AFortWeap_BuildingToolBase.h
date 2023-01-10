// Class /Script/FortniteGame.FortWeap_BuildingToolBase
// Size: 0x1058
class AFortWeap_BuildingToolBase : public AFortWeapon
{
	class UStaticMeshComponent* PencilMeshComponent; // 0x1028 (0x8)
	struct FName BlueprintPaperSocket; // 0x1030 (0x4)
	struct FName BlueprintPencilSocket; // 0x1034 (0x4)
	class AFortPlayerController* InstigatorController; // 0x1038 (0x8)
	class AFortAthenaAIBotController* InstigatorBotController; // 0x1040 (0x8)
	unsigned char padding_1048[0x10]; // 0x1048 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWeap_BuildingToolBase.GetPencilMeshComponent (Underlying native function: GetPencilMeshComponent 0x8e0c8e4)
	class UStaticMeshComponent* GetPencilMeshComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

