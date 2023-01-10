// Class /Script/FortniteGame.FortControllerComponent_LocalizationService
// Size: 0xb0
class UFortControllerComponent_LocalizationService : public UActorComponent
{
	unsigned char unreflected_b0[0xb0]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_LocalizationService.ServerRequestLocalizationDocument (Underlying native function: ServerRequestLocalizationDocument 0x845e088)
	void ServerRequestLocalizationDocument(struct FString& InDocumentID, struct FString& InLocale); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_LocalizationService.ClientLoadLocalizationDocument (Underlying native function: ClientLoadLocalizationDocument 0x845c730)
	void ClientLoadLocalizationDocument(struct FReplicatedLocalizedDocument& Document); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

