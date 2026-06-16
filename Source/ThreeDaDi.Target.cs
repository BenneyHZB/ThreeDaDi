// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

/**
 * 游戏打包目标（TargetType.Game）
 *
 * 编译命令示例：
 *   Build.bat ThreeDaDi Win64 Development
 * 产出：ThreeDaDi.exe（Shipping 配置下给玩家运行的版本）
 *
 * 和 3D 项目一样：一个 .uproject 通常有 Game Target + Editor Target 两个 Target 文件。
 */
public class ThreeDaDiTarget : TargetRules
{
	public ThreeDaDiTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;

		// 本 Target 只编译 ThreeDaDi 这一个游戏模块（主模块）
		ExtraModuleNames.Add("ThreeDaDi");
	}
}
