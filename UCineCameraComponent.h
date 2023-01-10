// Class /Script/CinematicCamera.CineCameraComponent
// Size: 0xb40
class UCineCameraComponent : public UCameraComponent
{
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa30 (0xc)
	struct FCameraFilmbackSettings Filmback; // 0xa3c (0xc)
	struct FCameraLensSettings LensSettings; // 0xa48 (0x1c)
	unsigned char unreflected_a64[0x4]; // 0xa64 (0x4) 
	struct FCameraFocusSettings FocusSettings; // 0xa68 (0x60)
	struct FPlateCropSettings CropSettings; // 0xac8 (0x4)
	float CurrentFocalLength; // 0xacc (0x4)
	float CurrentAperture; // 0xad0 (0x4)
	float CurrentFocusDistance; // 0xad4 (0x4)
	unsigned char bOverrideCustomNearClippingPlane; // 0xad8 (0x1)
	unsigned char unreflected_ad9[0x3]; // 0xad9 (0x3) 
	float CustomNearClippingPlane; // 0xadc (0x4)
	unsigned char unreflected_ae0[0x8]; // 0xae0 (0x8) 
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xae8 (0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xaf8 (0x10)
	struct FString DefaultFilmbackPresetName; // 0xb08 (0x10)
	struct FString DefaultFilmbackPreset; // 0xb18 (0x10)
	struct FString DefaultLensPresetName; // 0xb28 (0x10)
	float DefaultLensFocalLength; // 0xb38 (0x4)
	float DefaultLensFStop; // 0xb3c (0x4)

	/* Functions */

	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings (Underlying native function: SetLensSettings 0x99639a4)
	void SetLensSettings(struct FCameraLensSettings& NewLensSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName (Underlying native function: SetLensPresetByName 0x99637b8)
	void SetLensPresetByName(struct FString& InPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings (Underlying native function: SetFocusSettings 0x9963708)
	void SetFocusSettings(struct FCameraFocusSettings& NewFocusSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName (Underlying native function: SetFilmbackPresetByName 0x996351c)
	void SetFilmbackPresetByName(struct FString& InPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback (Underlying native function: SetFilmback 0x9963458)
	void SetFilmback(struct FCameraFilmbackSettings& NewFilmback); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength (Underlying native function: SetCurrentFocalLength 0x9962e5c)
	void SetCurrentFocalLength(float& InFocalLength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture (Underlying native function: SetCurrentAperture 0x9962dd0)
	void SetCurrentAperture(float& NewCurrentAperture); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings (Underlying native function: SetCropSettings 0x9962d34)
	void SetCropSettings(struct FPlateCropSettings& NewCropSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName (Underlying native function: SetCropPresetByName 0x9962b40)
	void SetCropPresetByName(struct FString& InPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView (Underlying native function: GetVerticalFieldOfView 0x9962b18)
	float GetVerticalFieldOfView(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy (Underlying native function: GetLensPresetsCopy 0x9962a3c)
	static struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName (Underlying native function: GetLensPresetName 0x99629c0)
	struct FString GetLensPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView (Underlying native function: GetHorizontalFieldOfView 0x99627a0)
	float GetHorizontalFieldOfView(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy (Underlying native function: GetFilmbackPresetsCopy 0x99626dc)
	static struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName (Underlying native function: GetFilmbackPresetName 0x996262c)
	struct FString GetFilmbackPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName (Underlying native function: GetDefaultFilmbackPresetName 0x99622f4)
	struct FString GetDefaultFilmbackPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName (Underlying native function: GetCropPresetName 0x9962118)
	struct FString GetCropPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

