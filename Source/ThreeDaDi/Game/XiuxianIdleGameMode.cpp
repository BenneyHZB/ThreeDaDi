// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianIdleGameMode.h"
#include "XiuxianIdleCameraPawn.h"
#include "XiuxianIdleHUD.h"
#include "XiuxianIdlePlayerController.h"

/**
 * GameMode 构造函数 —— 绑定本 Demo 的三大核心类
 *
 * 这三行和 3D 项目里 GameMode 构造函数写 PlayerControllerClass / DefaultPawnClass 完全一样，
 * 只是类名换成了适合 2D 放置 Demo 的实现。
 */
AXiuxianIdleGameMode::AXiuxianIdleGameMode()
{
	// 处理输入、鼠标投射、点击检测
	PlayerControllerClass = AXiuxianIdlePlayerController::StaticClass();

	// 屏幕调试信息（鼠标坐标等）；正式 UI 以后可换成 UMG Widget
	HUDClass = AXiuxianIdleHUD::StaticClass();

	// 2D 俯视正交摄像机 —— 放置游戏先「看场景」，不是先「扮演角色」
	DefaultPawnClass = AXiuxianIdleCameraPawn::StaticClass();
}
