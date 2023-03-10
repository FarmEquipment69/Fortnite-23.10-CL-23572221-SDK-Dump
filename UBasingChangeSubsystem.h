// Class /Script/FortniteGame.BasingChangeSubsystem
// Size: 0x80
class UBasingChangeSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_80[0x80]; 

	/* Functions */

	// Function /Script/FortniteGame.BasingChangeSubsystem.NotifyPawnBasedOnActor (Underlying native function: NotifyPawnBasedOnActor 0x7db4bb4)
	void NotifyPawnBasedOnActor(class AFortPawn*& Pawn, class AActor*& BasedActor); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BasingChangeSubsystem.GetBasingChangeSubsystem (Underlying native function: GetBasingChangeSubsystem 0x7db49c8)
	static class UBasingChangeSubsystem* GetBasingChangeSubsystem(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

