// Class /Script/FortniteGame.CosmeticPreviewInterface
// Size: 0x28
class ICosmeticPreviewInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.CosmeticPreviewInterface.PerformSpecialAction (Underlying native function: PerformSpecialAction 0x87b4b88)
	void PerformSpecialAction(struct FName& ActionName); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CosmeticPreviewInterface.GetSpecialPreviewActions (Underlying native function: GetSpecialPreviewActions 0x87b3da0)
	void GetSpecialPreviewActions(struct TArray<struct FName>& OutActionList); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CosmeticPreviewInterface.CustomizePreviewInstance (Underlying native function: CustomizePreviewInstance 0x2d76e48)
	void CustomizePreviewInstance(class UFortItemDefinition*& InItemDefinition); // (0x00000002 | Native | Event | Public | BlueprintEvent)
};

