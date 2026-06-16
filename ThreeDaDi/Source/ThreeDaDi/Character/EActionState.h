// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EActionState.generated.h"

/**
 * ============================================================================
 * EActionState —— 角色当前「行动状态」枚举
 * ============================================================================
 *
 * 用于描述角色在放置循环中处于哪一类行为阶段（挂机、探索、战斗等）。
 * 后续可由 ActionComponent、AI、UI 共同读写，驱动动画与界面显示。
 *
 * 【和 3D 项目的类比】
 *   类似 GAS 里的 GameplayTag / 角色 Locomotion 状态（Idle、Combat），
 *   但这里先用简单枚举占位，等框架稳定后再考虑是否升级成 Tag 或状态机。
 *
 * 【BlueprintType】
 *   蓝图可声明 EActionState 变量、作为函数参数/返回值，并在 Switch 节点里分支。
 *
 * 【enum class + uint8】
 *   UE5 推荐写法：类型安全、蓝图兼容、内存只占 1 字节。
 */
UENUM(BlueprintType)
enum class EActionState : uint8
{
	Idle        UMETA(DisplayName = "Idle"),        // 空闲，未执行任何持续行动
	Meditating  UMETA(DisplayName = "Meditating"),  // 修炼/挂机中（放置核心循环）
	Exploring   UMETA(DisplayName = "Exploring"),   // 探索中（移动、触发事件等）
	Fighting    UMETA(DisplayName = "Fighting"),    // 战斗中
	Dead        UMETA(DisplayName = "Dead"),        // 死亡，通常不可再发起行动
};
