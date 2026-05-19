using UnrealBuildTool;

public class AlienAIServerTarget : TargetRules
{
	public AlienAIServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("AlienAI");
	}
}
