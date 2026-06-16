// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "XiuxianIdleGameMode.generated.h"

/**
 * ============================================================================
 * AXiuxianIdleGameMode —— 修仙放置 Demo 的 GameMode
 * ============================================================================
 *
 * 【GameMode 在 UE 里的角色（和 3D 完全相同）】
 * GameMode 只存在于服务端逻辑（单机时就是本地），负责定义「这一局用什么规则」：
 *   - 用哪个 PlayerController
 *   - 用哪个 HUD
 *   - 玩家默认 Pawn 是什么
 *   - 重生规则、队伍规则等（本 Demo 暂未涉及）
 *
 * 【2D 放置游戏的特殊选择：DefaultPawn 是摄像机而不是角色】
 * 3D 第三人称：DefaultPawnClass = 带 Mesh 的 Character，摄像机在 SpringArm 上
 * 2D 放置 Demo：DefaultPawnClass = 纯摄像机 Pawn（XiuxianIdleCameraPawn）
 *   玩家用鼠标点场景，而不是 WASD 控制角色移动——所以 Pawn 先做成「观察摄像机」。
 *   将来正式版可能会改成 DefaultPawn = 玩家角色，或同时存在摄像机 + 可控角色。
 *
 * 【配置入口】
 * Config/DefaultEngine.ini 里有一行：
 *   GlobalDefaultGameMode=/Script/ThreeDaDi.XiuxianIdleGameMode
 * 这样打开任意地图都会默认使用本 GameMode（除非地图本身覆盖了 GameMode）。
 */
UCLASS()
class THREEDADI_API AXiuxianIdleGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AXiuxianIdleGameMode();
};
