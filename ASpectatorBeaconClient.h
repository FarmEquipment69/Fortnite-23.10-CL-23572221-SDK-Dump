// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x410
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
	unsigned char unreflected_318[0x30]; // 0x318 (0x30) 
	struct FString DestSessionId; // 0x348 (0x10)
	struct FSpectatorReservation PendingReservation; // 0x358 (0x88)
	enum ESpectatorClientRequestType RequestType; // 0x3e0 (0x1)
	bool bPendingReservationSent; // 0x3e1 (0x1)
	bool bCancelReservation; // 0x3e2 (0x1)
	unsigned char padding_3e3[0x2d]; // 0x3e3 (0x2d)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest (Underlying native function: ServerReservationRequest 0x6aa56c8)
	void ServerReservationRequest(struct FString& SessionId, struct FSpectatorReservation& Reservation); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest (Underlying native function: ServerCancelReservationRequest 0x6a912d4)
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& Spectator); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates (Underlying native function: ClientSendReservationUpdates 0x6aa4b0c)
	void ClientSendReservationUpdates(int& NumRemainingReservations); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull (Underlying native function: ClientSendReservationFull 0x670562c)
	void ClientSendReservationFull(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse (Underlying native function: ClientReservationResponse 0x6aa4a88)
	void ClientReservationResponse(struct TEnumAsByte<ESpectatorReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse (Underlying native function: ClientCancelReservationResponse 0x6aa49ec)
	void ClientCancelReservationResponse(struct TEnumAsByte<ESpectatorReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)
};

