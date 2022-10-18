// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyCProject00 : ModuleRules
{
	public MyCProject00(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PublicIncludePaths.Add(ModuleDirectory);
	}
}
