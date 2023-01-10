// Class /Script/SaveTheWorldUI.FortExpeditionExpiresWidget
// Size: 0x2a0
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UFortExpeditionItem> Item; // 0x290 (0x8)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.SetData (Underlying native function: SetData 0x6ffb078)
	void SetData(class UFortExpeditionItem*& InItem); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated (Underlying native function: OnExpeditionExpirationUpdated 0x71e81dc)
	void OnExpeditionExpirationUpdated(); // (Native | Event | Protected | BlueprintEvent)
};

