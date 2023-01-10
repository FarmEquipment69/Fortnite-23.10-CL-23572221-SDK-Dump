// ScriptStruct /Script/ContextualAnimation.ContextualAnimSceneBindings
// Size: 0x28
struct FContextualAnimSceneBindings
{
	struct TWeakObjectPtr<class UContextualAnimSceneAsset> SceneAsset; // 0x0 (0x8)
	int SectionIdx; // 0x8 (0x4)
	int AnimSetIdx; // 0xc (0x4)
	struct TArray<struct FContextualAnimSceneBinding> Data; // 0x10 (0x10)
	struct TWeakObjectPtr<class UContextualAnimSceneInstance> SceneInstancePtr; // 0x20 (0x8)
};

