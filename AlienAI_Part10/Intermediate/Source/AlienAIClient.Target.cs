using UnrealBuildTool;

public class AlienAIClientTarget : TargetRules
{
	public AlienAIClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("AlienAI");
	}
}
