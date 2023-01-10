// Class /Script/FortniteGame.AthenaBattleBusItemDefinition
// Size: 0x8a0
class UAthenaBattleBusItemDefinition : public UAthenaCosmeticItemDefinition
{
	struct TWeakObjectPtr<class USoundBase> IgnitionSound; // 0x7b0 (0x28)
	struct TWeakObjectPtr<class USoundBase> LobbyLoopingMusic; // 0x7d8 (0x28)
	struct TWeakObjectPtr<class USoundBase> LobbyLoopingSound; // 0x800 (0x28)
	struct TWeakObjectPtr<class USoundBase> FlightLoopingMusic; // 0x828 (0x28)
	struct TWeakObjectPtr<class USoundBase> FlightLoopingSound; // 0x850 (0x28)
	struct TWeakObjectPtr<class UClass> BusPrefabClass; // 0x878 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.AthenaBattleBusItemDefinition.GetLobbyLoopingSound (Underlying native function: GetLobbyLoopingSound 0x84d570c)
	class USoundBase* GetLobbyLoopingSound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBattleBusItemDefinition.GetLobbyLoopingMusic (Underlying native function: GetLobbyLoopingMusic 0x84d56dc)
	class USoundBase* GetLobbyLoopingMusic(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBattleBusItemDefinition.GetIgnitionSound (Underlying native function: GetIgnitionSound 0x84d5674)
	class USoundBase* GetIgnitionSound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBattleBusItemDefinition.GetFlightLoopingSound (Underlying native function: GetFlightLoopingSound 0x84d5610)
	class USoundBase* GetFlightLoopingSound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBattleBusItemDefinition.GetFlightLoopingMusic (Underlying native function: GetFlightLoopingMusic 0x84d55e0)
	class USoundBase* GetFlightLoopingMusic(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBattleBusItemDefinition.GetBusPrefabClass (Underlying native function: GetBusPrefabClass 0x84d50bc)
	struct TWeakObjectPtr<class UClass> GetBusPrefabClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

