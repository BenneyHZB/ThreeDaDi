// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

/**
 * ThreeDaDi 模块编译规则（UnrealBuildTool）
 *
 * 每次新增 .h 所在子目录时，若 #include 不想写长路径，需把目录加进 PublicIncludePaths。
 * 每次使用其他模块的类（如 APaperZDCharacter）时，需把对应模块加进 PublicDependencyModuleNames。
 */
public class ThreeDaDi : ModuleRules
{
	public ThreeDaDi(ReadOnlyTargetRules Target) : base(Target)
	{
		// 显式 PCH：UE5 推荐，加快编译；和 3D 项目一致
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		/**
		 * 公共头文件搜索路径：
		 *   Game      —— Demo 用 GameMode / HUD / Camera / PlayerController
		 *   Character —— 角色基类、ActionComponent 等核心框架
		 * 效果：代码里可 #include "XiuxianCharacterBase.h" 而不写 "Character/XiuxianCharacterBase.h"
		 */
		PublicIncludePaths.AddRange(new string[] {
			System.IO.Path.Combine(ModuleDirectory, "Game"),
			System.IO.Path.Combine(ModuleDirectory, "Character"),
			System.IO.Path.Combine(ModuleDirectory, "UI")
		});
	
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput", // 输入增强系统；将来接 2D 快捷键 / 手柄与 3D 相同

			/**
			 * 【2D 专用模块 —— 3D 项目里通常没有这两项】
			 * Paper2D  ：精灵、Flipbook、TileMap 等 2D 资源与 APaperCharacter
			 * PaperZD  ：2D 动画蓝图、APaperZDCharacter、Notify（Marketplace 插件）
			 * 必须在 ThreeDaDi.uproject 里启用 PaperZD 插件，否则链接阶段会找不到符号。
			 */
			"Paper2D",
			"PaperZD"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore",
			"UMG" // WBP_MainHUD / ProgressBar / Button 等 UMG 控件
		});
	}
}
