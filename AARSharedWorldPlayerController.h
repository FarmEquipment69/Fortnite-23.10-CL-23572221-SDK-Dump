// Class /Script/AugmentedReality.ARSharedWorldPlayerController
// Size: 0x850
class AARSharedWorldPlayerController : public APlayerController
{
	unsigned char unreflected_850[0x850]; 

	/* Functions */

	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving (Underlying native function: ServerMarkReadyForReceiving 0x95e23e8)
	void ServerMarkReadyForReceiving(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData (Underlying native function: ClientUpdatePreviewImageData 0x95de38c)
	void ClientUpdatePreviewImageData(int& Offset, struct TArray<unsigned char>& Buffer); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData (Underlying native function: ClientUpdateARWorldData 0x95de28c)
	void ClientUpdateARWorldData(int& Offset, struct TArray<unsigned char>& Buffer); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld (Underlying native function: ClientInitSharedWorld 0x95de1a4)
	void ClientInitSharedWorld(int& PreviewImageSize, int& ARWorldDataSize); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)
};

