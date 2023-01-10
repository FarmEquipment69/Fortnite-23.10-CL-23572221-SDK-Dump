// Class /Script/FortniteGame.FortPlayspaceMembershipActorComponent
// Size: 0xb8
class UFortPlayspaceMembershipActorComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnFortPlayspaceMembershipChanged; // 0xa0 (0x10)
	struct TWeakObjectPtr<class APlayspace> BoundPlayspace; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.OnRep_BoundPlayspace (Underlying native function: OnRep_BoundPlayspace 0x5938670)
	void OnRepBoundPlayspace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.GetBoundPlayspaceComponent (Underlying native function: GetBoundPlayspaceComponent 0x59385c0)
	class UPlayspaceComponent* GetBoundPlayspaceComponent(class UClass*& ComponentClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.GetBoundPlayspaceByClass (Underlying native function: GetBoundPlayspaceByClass 0x5938510)
	class APlayspace* GetBoundPlayspaceByClass(class UClass*& PlayspaceClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.GetBoundPlayspace (Underlying native function: GetBoundPlayspace 0x5938490)
	class APlayspace* GetBoundPlayspace(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.AttemptToBindToPlayspace (Underlying native function: AttemptToBindToPlayspace 0x5938470)
	void AttemptToBindToPlayspace(); // (Final | Native | Protected)
};

