using UnrealBuildTool;

public class AlienAITarget : TargetRules
{
	public AlienAITarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("AlienAI");
	}
}
