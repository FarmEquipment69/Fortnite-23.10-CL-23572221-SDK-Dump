// Class /Script/CommonConversationRuntime.ConversationTaskNode
// Size: 0x80
class UConversationTaskNode : public UConversationNodeWithLinks
{
	struct TArray<class UConversationSubNode*> SubNodes; // 0x68 (0x10)
	bool bIgnoreRequirementsWhileAdvancingConversations; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)

	/* Functions */

	// Function /Script/CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied (Underlying native function: IsRequirementSatisfied 0x6d28b50)
	enum EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context); // (BlueprintAuthorityOnly | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor (Underlying native function: GetNodeBodyColor 0x6d28950)
	bool GetNodeBodyColor(struct FLinearColor& BodyColor); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/CommonConversationRuntime.ConversationTaskNode.GatherStaticExtraData (Underlying native function: GatherStaticExtraData 0x6d283d0)
	void GatherStaticExtraData(struct FConversationContext& Context, struct TArray<struct FConversationNodeParameterPair>& InOutExtraData); // (BlueprintAuthorityOnly | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode (Underlying native function: ExecuteTaskNode 0x6d28118)
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context); // (BlueprintAuthorityOnly | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects (Underlying native function: ExecuteClientEffects 0x6d28064)
	void ExecuteClientEffects(struct FConversationContext& Context); // (BlueprintCosmetic | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

