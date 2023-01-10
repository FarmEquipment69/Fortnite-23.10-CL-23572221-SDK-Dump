// Class /Script/FortniteUI.AthenaSpectateMatchModalBase
// Size: 0x568
class UAthenaSpectateMatchModalBase : public UFortActivatablePanel
{
	unsigned char unreflected_568[0x568]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.JoinGameSession (Underlying native function: JoinGameSession 0xa43f02c)
	void JoinGameSession(struct FString& GameSessionIdStr); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.JoinFriendSession (Underlying native function: JoinFriendSession 0xa43eed8)
	void JoinFriendSession(struct FString& FriendName); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.IsGameSessionString (Underlying native function: IsGameSessionString 0xa43ed60)
	bool IsGameSessionString(struct FString& String); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.GetFriendNames (Underlying native function: GetFriendNames 0xa43cadc)
	void GetFriendNames(struct TArray<struct FString>& FriendNames); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.BuildFriendNameIdMap (Underlying native function: BuildFriendNameIdMap 0xa43b644)
	void BuildFriendNameIdMap(); // (Final | Native | Protected | BlueprintCallable)
};

