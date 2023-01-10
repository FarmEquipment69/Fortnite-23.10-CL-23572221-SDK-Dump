// Class /Script/FortniteGame.FortInGameMapManagerAthena
// Size: 0x930
class AFortInGameMapManagerAthena : public AFortInGameMapManager
{
	unsigned char bDrawMapLocationsIfFogged; // 0x900 (0x1)
	unsigned char bDrawSpecialActorIconsIfFogged; // 0x900 (0x1)
	unsigned char bDrawSquadPinsIfFogged; // 0x900 (0x1)
	unsigned char bDrawMapIndicatorsIfFogged; // 0x900 (0x1)
	unsigned char bDrawEliminationsIfFogged; // 0x900 (0x1)
	unsigned char unreflected_901[0x17]; // 0x901 (0x17) 
	class UMaterialInterface* MapMaskMaterial; // 0x918 (0x8)
	class UMaterialInstanceDynamic* MapMaskMaterialMID; // 0x920 (0x8)
	unsigned char padding_928[0x8]; // 0x928 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortInGameMapManagerAthena.OnEndSkydivingFromBus (Underlying native function: OnEndSkydivingFromBus 0x80cf714)
	void OnEndSkydivingFromBus(class AFortPlayerControllerZone*& FortPC); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortInGameMapManagerAthena.OnBeginSkydivingFromBus (Underlying native function: OnBeginSkydivingFromBus 0x80cf690)
	void OnBeginSkydivingFromBus(class AFortPlayerControllerZone*& FortPC); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortInGameMapManagerAthena.OnAthenaPlayerControllerEndPlay (Underlying native function: OnAthenaPlayerControllerEndPlay 0x80cf5c8)
	void OnAthenaPlayerControllerEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortInGameMapManagerAthena.HandlePlayerTeamIndexChanged (Underlying native function: HandlePlayerTeamIndexChanged 0x29fce3c)
	void HandlePlayerTeamIndexChanged(); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortInGameMapManagerAthena.HandleLocalPlayerStateSet (Underlying native function: HandleLocalPlayerStateSet 0x80cf5a0)
	void HandleLocalPlayerStateSet(); // (Final | Native | Public)
};

