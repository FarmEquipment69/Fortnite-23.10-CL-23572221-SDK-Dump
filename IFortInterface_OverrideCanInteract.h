// Class /Script/FortniteGame.FortInterface_OverrideCanInteract
// Size: 0x28
class IFortInterface_OverrideCanInteract : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortInterface_OverrideCanInteract.ShouldSuppressInteractionWidget (Underlying native function: ShouldSuppressInteractionWidget 0x7dbff68)
	bool ShouldSuppressInteractionWidget(class UFortControllerComponent_Interaction*& PCInteractionComponent, struct TScriptInterface<class IFortInteractInterface>& ObjectBeingInteractedWithInterface, struct FInteractionType& InteractionType); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInterface_OverrideCanInteract.ShouldSuppressDisplayInteraction (Underlying native function: ShouldSuppressDisplayInteraction 0x7dbfdfc)
	bool ShouldSuppressDisplayInteraction(class UFortControllerComponent_Interaction*& PCInteractionComponent, struct TScriptInterface<class IFortInteractInterface>& ObjectBeingInteractedWithInterface, struct FInteractionType& InteractionType); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInterface_OverrideCanInteract.ShouldOverrideCanInteract (Underlying native function: ShouldOverrideCanInteract 0x7dbfc3c)
	bool ShouldOverrideCanInteract(bool& bOutCanInteract, class UFortControllerComponent_Interaction*& PCInteractionComponent, struct TScriptInterface<class IFortInteractInterface>& ObjectBeingInteractedWithInterface, struct FInteractionType& InteractionType); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

