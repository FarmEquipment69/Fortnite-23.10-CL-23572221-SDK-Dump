// Class /Script/FortniteGame.FortCarriedObjectHolderInterface
// Size: 0x28
class IFortCarriedObjectHolderInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.OnCarriedObjectDetach (Underlying native function: OnCarriedObjectDetach 0x7dc9040)
	void OnCarriedObjectDetach(class AActor*& DetachedObject); // (Native | Public)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.OnCarriedObjectAttach (Underlying native function: OnCarriedObjectAttach 0x7dc90c0)
	void OnCarriedObjectAttach(class AActor*& AttachedObject); // (Native | Public)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.GetCarriedObjectAttachmentInfo (Underlying native function: GetCarriedObjectAttachmentInfo 0x840e500)
	void GetCarriedObjectAttachmentInfo(struct FCarriedObjectAttachmentInfo& OutAttachInfo); // (Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.GetAttachmentComponent (Underlying native function: GetAttachmentComponent 0x840e178)
	class USceneComponent* GetAttachmentComponent(struct FName& SocketName); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.CanHoldObject (Underlying native function: CanHoldObject 0x7db7db4)
	bool CanHoldObject(class AActor*& CarriableObject); // (Native | Public | Const)
};

