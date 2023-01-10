// Class /Script/FortniteAI.AthenaAIBlueprintLibrary
// Size: 0x28
class UAthenaAIBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.MakeBotGroupsTakeEachOtherAsTargets (Underlying native function: MakeBotGroupsTakeEachOtherAsTargets 0xa19bf50)
	static void MakeBotGroupsTakeEachOtherAsTargets(struct TArray<class AActor*>& GroupA, struct TArray<class AActor*>& GroupB, enum EPerceptionState& PerceptionState, float& ForgetTime, float& ForgetDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.KillBots (Underlying native function: KillBots 0xa19ba68)
	static void KillBots(class UObject*& WorldContextObject, bool& bKillPlayers, bool& bKillNoneParticipants, unsigned char& TeamIndex, class AActor*& BotOwner); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.JoinTeam (Underlying native function: JoinTeam 0xa19b91c)
	static void JoinTeam(class UObject*& WorldContextObject, class AController*& SourceTeamController, class AController*& DestinationTeamController); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.IsWeaponSupported (Underlying native function: IsWeaponSupported 0xa19b784)
	static bool IsWeaponSupported(class UObject*& WorldContextObject, class AFortWeapon*& FortWeapon); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.IsItemDefinitionSupported (Underlying native function: IsItemDefinitionSupported 0xa19b434)
	static bool IsItemDefinitionSupported(class UObject*& WorldContextObject, class UFortItemDefinition*& FortItemDef); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIServicePlayerBots (Underlying native function: GetAIServicePlayerBots 0xa19b288)
	static class UAthenaAIServicePlayerBots* GetAIServicePlayerBots(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceLoot (Underlying native function: GetAIServiceLoot 0xa19b1b4)
	static class UAthenaAIServiceLoot* GetAIServiceLoot(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceCreativePlayerBots (Underlying native function: GetAIServiceCreativePlayerBots 0xa19b134)
	static class UAthenaAIServiceCreativePlayerBots* GetAIServiceCreativePlayerBots(class UObject*& WorldContextObject); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIPopulationTracker (Underlying native function: GetAIPopulationTracker 0xa19b09c)
	static class UAthenaAIPopulationTracker* GetAIPopulationTracker(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.AthenaSpawnAIFromClass (Underlying native function: AthenaSpawnAIFromClass 0xa19a54c)
	static class APawn* AthenaSpawnAIFromClass(class UObject*& WorldContextObject, class UClass*& PawnClass, class UBehaviorTree*& BehaviorTree, struct FVector& Location, struct FRotator& Rotation, bool& bNoCollisionFail, class AActor*& Owner); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.AIPawnFromGAHasLuringPickupAsGoal (Underlying native function: AIPawnFromGAHasLuringPickupAsGoal 0xa19a3e0)
	static bool AIPawnFromGAHasLuringPickupAsGoal(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTag& GameplayTag, float& MaxLifetime, enum EFortPickupSpawnSource& RequiredPickupSpawnSource); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

