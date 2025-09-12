// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_job : ModuleRules
{
	public UE5_job(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
