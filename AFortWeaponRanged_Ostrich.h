// Class /Script/FortniteGame.FortWeaponRanged_Ostrich
// Size: 0x17f0
class AFortWeaponRanged_Ostrich : public AFortWeaponRangedForVehicle
{
	class UClass* ProjectileTemplate; // 0x15f8 (0x8)
	bool bRocketsOnCooldown; // 0x1600 (0x1)
	unsigned char unreflected_1601[0x7]; // 0x1601 (0x7) 
	bool bLocalChargingRockets; // 0x1608 (0x1)
	bool bRocketFireButtonDown; // 0x1609 (0x1)
	unsigned char unreflected_160a[0x2]; // 0x160a (0x2) 
	int RocketAmmoLocal; // 0x160c (0x4)
	int ServerLoadedRockets; // 0x1610 (0x4)
	bool bFiringRockets; // 0x1614 (0x1)
	bool bUseShotgunSecondBarrel; // 0x1615 (0x1)
	unsigned char unreflected_1616[0x2]; // 0x1616 (0x2) 
	float RocketFireTimer; // 0x1618 (0x4)
	float RocketChargeTimer; // 0x161c (0x4)
	struct FScalableFloat FireRate; // 0x1620 (0x28)
	struct FScalableFloat AutofireDelay; // 0x1648 (0x28)
	struct FScalableFloat RocketsCooldown; // 0x1670 (0x28)
	struct FScalableFloat TimeToLoadOneAmmoCharge; // 0x1698 (0x28)
	struct FScalableFloat AimPointCacheRange; // 0x16c0 (0x28)
	struct FScalableFloat MinRocketsForFiring; // 0x16e8 (0x28)
	struct FScalableFloat AmmoPerCharge; // 0x1710 (0x28)
	struct FScalableFloat MaxRockets; // 0x1738 (0x28)
	struct FName SecondaryFireMuzzleName; // 0x1760 (0x4)
	struct FName SecondaryFireTraceSocket; // 0x1764 (0x4)
	struct FName ShotgunSecondBarrelMuzzleName; // 0x1768 (0x4)
	struct FName StartLoadingSectionName; // 0x176c (0x4)
	class UAnimMontage* RocketChargingLoop; // 0x1770 (0x8)
	class UAnimMontage* RocketFullyChargedLoop; // 0x1778 (0x8)
	class UAnimMontage* RocketFire; // 0x1780 (0x8)
	class UAnimMontage* RocketFireSettle; // 0x1788 (0x8)
	class UAnimMontage* RocketCooldownLoop; // 0x1790 (0x8)
	class UAnimMontage* RocketCooldownReady; // 0x1798 (0x8)
	class UAnimMontage* ShotgunFireSecondBarrel; // 0x17a0 (0x8)
	struct TArray<struct FWeaponHudData> GamepadHudKeyActionData; // 0x17a8 (0x10)
	struct FGameplayTagContainer LoadRocketTag; // 0x17b8 (0x20)
	struct FTimerHandle* AutoFireTimer; // 0x17d8 (0x8)
	struct FTimerHandle* ReloadShotgunTimer; // 0x17e0 (0x8)
	struct FTimerHandle* ServerSideRocketCooldownTimer; // 0x17e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.ServerSetFiringRockets (Underlying native function: ServerSetFiringRockets 0x8e5c2dc)
	void ServerSetFiringRockets(bool& bNewFiring, int& NumToFire); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.ServerSetCharging (Underlying native function: ServerSetCharging 0x8e5c22c)
	void ServerSetCharging(bool& bNewCharging); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.PlayReloadAnim (Underlying native function: PlayReloadAnim 0x8e5c13c)
	void PlayReloadAnim(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnServerLoadSingleRocket (Underlying native function: OnServerLoadSingleRocket 0x8e5c0bc)
	void OnServerLoadSingleRocket(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnServerActivateSecondaryFire (Underlying native function: OnServerActivateSecondaryFire 0x8e5bdb0)
	void OnServerActivateSecondaryFire(class UFortGameplayAbility*& SecondaryFire, struct FVector& LaunchPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRocketLauncherSettle (Has no native function)
	void OnRocketLauncherSettle(class USceneComponent*& AttachToMesh, struct FName& AttachToSocket); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRocketFiringStarted (Has no native function)
	void OnRocketFiringStarted(class USceneComponent*& AttachToMesh, struct FName& AttachToSocket); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRocketFired (Has no native function)
	void OnRocketFired(class USceneComponent*& AttachToMesh, struct FName& AttachToSocket); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRep_RocketsCooldown (Underlying native function: OnRep_RocketsCooldown 0x8e5bd34)
	void OnRepRocketsCooldown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnLoadedRockets (Has no native function)
	void OnLoadedRockets(int& NumRocketsLoaded); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.LoadShotgunAmmo (Underlying native function: LoadShotgunAmmo 0x8e5b5f4)
	void LoadShotgunAmmo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetTimeToLoadOneAmmoCharge (Underlying native function: GetTimeToLoadOneAmmoCharge 0x8e5afc0)
	float GetTimeToLoadOneAmmoCharge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetRocketsCooldown (Underlying native function: GetRocketsCooldown 0x8e5af20)
	float GetRocketsCooldown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetMinRocketsForFiring (Underlying native function: GetMinRocketsForFiring 0x8e5ae90)
	int GetMinRocketsForFiring(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetMaxRockets (Underlying native function: GetMaxRockets 0x8e5ae5c)
	int GetMaxRockets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetFireRate (Underlying native function: GetFireRate 0x8e5ade0)
	float GetFireRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetAutofireDelay (Underlying native function: GetAutofireDelay 0x8e5ac0c)
	float GetAutofireDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetAmmoPerCharge (Underlying native function: GetAmmoPerCharge 0x8e5abd8)
	int GetAmmoPerCharge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetAimPointCacheRange (Underlying native function: GetAimPointCacheRange 0x8e5aba4)
	float GetAimPointCacheRange(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

