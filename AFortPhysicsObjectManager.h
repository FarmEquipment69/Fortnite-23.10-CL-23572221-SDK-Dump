// Class /Script/FortniteGame.FortPhysicsObjectManager
// Size: 0x2d0
class AFortPhysicsObjectManager : public AActor
{
	struct TArray<class UFortPhysicsObjectComponent*> PhysicsObjects; // 0x288 (0x10)
	struct TArray<class UFortPhysicsObjectComponent*> PhysicsObjectsAwake; // 0x298 (0x10)
	unsigned char unreflected_2a8[0x18]; // 0x2a8 (0x18) 
	struct TArray<struct FFortPhysicsObjectActivationData> PhysicsObjectActivationQueue; // 0x2c0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsObjectManager.GetPhysicsObjectManager (Underlying native function: GetPhysicsObjectManager 0x8b0cea4)
	static bool GetPhysicsObjectManager(class UObject*& WorldContextObject, class AFortPhysicsObjectManager*& Manager); // (Final | Native | Static | Public | HasOutParms)
};

