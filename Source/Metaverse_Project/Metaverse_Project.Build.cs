// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Metaverse_Project : ModuleRules
{
	public Metaverse_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
