// ScriptStruct /Script/FortniteGame.SpecialActorRepData
// Size: 0x240
struct FSpecialActorRepData : FFastArraySerializerItem
{
	struct FName SpecialActorID; // 0xc (0x4)
	struct FGameplayTag CategoryTag; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class AActor* SpecialActor; // 0x18 (0x8)
	class APlayerState* PlayerState; // 0x20 (0x8)
	float ReplicationInterval; // 0x28 (0x4)
	float ReplicationIntervalDeviation; // 0x2c (0x4)
	float NextReplicationTime; // 0x30 (0x4)
	float LastActorNotRelevantTime; // 0x34 (0x4)
	bool bActorIsRelevant; // 0x38 (0x1)
	bool bWasActorRelevantLastUpdate; // 0x39 (0x1)
	int16_t ReplicatedTransformIndex; // 0x3a (0x2)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector CurrentLocation; // 0x40 (0x18)
	float CurrentYaw; // 0x58 (0x4)
	int8_t MinimapIconBrushIndex; // 0x5c (0x1)
	int8_t MinimapScaleIndex; // 0x5d (0x1)
	int8_t FullScreenMapIconBrushIndex; // 0x5e (0x1)
	int8_t FullScreenMapScaleIndex; // 0x5f (0x1)
	int8_t CompassIconBrushIndex; // 0x60 (0x1)
	int8_t CompassScaleIndex; // 0x61 (0x1)
	bool bDrawCompassIcon; // 0x62 (0x1)
	bool bDrawCompassDistanceText; // 0x63 (0x1)
	struct FElevationArrowData ElevationArrowData; // 0x64 (0x1c)
	bool bReplicateHealth; // 0x80 (0x1)
	bool bReplicateShield; // 0x81 (0x1)
	unsigned char RenderOnMapDuringPhases; // 0x82 (0x1)
	unsigned char unreflected_83[0x1]; // 0x83 (0x1) 
	float CurrentHealth; // 0x84 (0x4)
	float MaxHealth; // 0x88 (0x4)
	float CurrentShield; // 0x8c (0x4)
	float MaxShield; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FText DisplayName; // 0x98 (0x18)
	float RenderDistance; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct FGameplayTagContainer RenderTags; // 0xb8 (0x20)
	struct FGameplayTag SeasonItemTag; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FSlateBrush SeasonItemInteractedBrush; // 0xe0 (0xc0)
	float AddedToClientTime; // 0x1a0 (0x4)
	unsigned char unreflected_1a4[0x4]; // 0x1a4 (0x4) 
	struct TArray<struct FSpecialActorSingleStatData> TrackedStats; // 0x1a8 (0x10)
	float LastLocationReplicationTime; // 0x1b8 (0x4)
	float PrevLocationReplicatedTime; // 0x1bc (0x4)
	struct FVector_NetQuantize InitialRepLocation; // 0x1c0 (0x18)
	struct FVector LastRepLocation; // 0x1d8 (0x18)
	struct FVector PrevRepLocation; // 0x1f0 (0x18)
	struct FVector LerpStartLocation; // 0x208 (0x18)
	float LastYawReplicationTime; // 0x220 (0x4)
	float PrevYawReplicatedTime; // 0x224 (0x4)
	float InitialRepYaw; // 0x228 (0x4)
	float LastRepYaw; // 0x22c (0x4)
	float PrevRepYaw; // 0x230 (0x4)
	float LerpStartYaw; // 0x234 (0x4)
	unsigned char padding_238[0x8]; // 0x238 (0x8)
};

