using UnrealBuildTool;

public class AlienAIEditorTarget : TargetRules
{
	public AlienAIEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("AlienAI");
	}
}
