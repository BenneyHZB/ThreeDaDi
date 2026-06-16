// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

/**
 * 编辑器目标（TargetType.Editor）
 *
 * 日常开发双击 .uproject 打开编辑器时，编译的是 ThreeDaDiEditor Target。
 * 产出：UnrealEditor-ThreeDaDi.dll，由 UnrealEditor.exe 加载。
 *
 * 和 3D C++ 项目相同：改 C++ 后 Ctrl+Alt+F11 热重载，或关闭编辑器重新编译。
 */
public class ThreeDaDiEditorTarget : TargetRules
{
	public ThreeDaDiEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;

		ExtraModuleNames.Add("ThreeDaDi");
	}
}
