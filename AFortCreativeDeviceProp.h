// Class /Script/FortniteGame.FortCreativeDeviceProp
// Size: 0xf08
class AFortCreativeDeviceProp : public ABuildingProp
{
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	bool bSuppressPlayTimeSimpleInteractionWidgetForTouch; // 0xf00 (0x1)
	unsigned char padding_f01[0x7]; // 0xf01 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeDeviceProp.LinkIdToString (Underlying native function: LinkIdToString 0x85504a8)
	static struct FString LinkIdToString(struct FOnlineLinkId& LinkString); // (Final | Native | Static | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.CreateLinkIdWithVersion (Underlying native function: CreateLinkIdWithVersion 0x854bf00)
	static struct FOnlineLinkId CreateLinkIdWithVersion(struct FString& LinkString, int& Version); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.CreateLinkId (Underlying native function: CreateLinkId 0x854bc4c)
	static struct FOnlineLinkId CreateLinkId(struct FString& LinkString); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.BPCanInteractNativeHelper (Underlying native function: BPCanInteractNativeHelper 0x595e250)
	static bool BPCanInteractNativeHelper(class AFortPawn*& InteractingPawn, class UFortActorOptionsComponent*& ToyOptionsComponent, class UFortMinigameProgressComponent*& MinigameProgressComponent); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.BP_ShouldSuppressInteractionWidget (Has no native function)
	bool BPShouldSuppressInteractionWidget(); // (Event | Protected | BlueprintEvent | Const)
};

