// Class /Script/FortniteGame.PrimitiveModularCrosstalkInterface
// Size: 0x28
class IPrimitiveModularCrosstalkInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.UnbindObjectCallbacksFromAllTaggedDelegates (Underlying native function: UnbindObjectCallbacksFromAllTaggedDelegates 0x7dd0fe8)
	void UnbindObjectCallbacksFromAllTaggedDelegates(class UObject*& Object); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.UnbindNoParamEventFromTaggedDelegate (Underlying native function: UnbindNoParamEventFromTaggedDelegate 0x7dd0f18)
	void UnbindNoParamEventFromTaggedDelegate(struct FName& DelegateTag, class UObject*& Object); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTaggedStringPayload (Underlying native function: SendTaggedStringPayload 0x7dd0c58)
	void SendTaggedStringPayload(struct FName& tag, struct FString& Payload); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTaggedObjectPayload (Underlying native function: SendTaggedObjectPayload 0x7dd0b88)
	void SendTaggedObjectPayload(struct FName& tag, class UObject*& Payload); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTaggedIntPayload (Underlying native function: SendTaggedIntPayload 0x7dd0ab8)
	void SendTaggedIntPayload(struct FName& tag, int& Payload); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTagAsPayload (Underlying native function: SendTagAsPayload 0x7dd0a2c)
	void SendTagAsPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.GetTaggedStringPayload (Underlying native function: GetTaggedStringPayload 0x7dd0594)
	struct FString GetTaggedStringPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.GetTaggedObjectPayload (Underlying native function: GetTaggedObjectPayload 0x7dd04f8)
	class UObject* GetTaggedObjectPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.GetTaggedIntPayload (Underlying native function: GetTaggedIntPayload 0x7dd045c)
	int GetTaggedIntPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.BindNoParamEventToTaggedDelegate (Underlying native function: BindNoParamEventToTaggedDelegate 0x7dd01b8)
	void BindNoParamEventToTaggedDelegate(struct FName& DelegateTag, class UObject*& Object, struct FName& CallbackEventName); // (Native | Public | HasOutParms | BlueprintCallable)
};

