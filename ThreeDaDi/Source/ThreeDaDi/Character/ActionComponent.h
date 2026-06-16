// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EActionState.h"
#include "ActionComponent.generated.h"

/** 动态多播委托：状态从 OldState 变为 NewState 时触发，蓝图可绑定。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionStateChanged, EActionState, OldState, EActionState, NewState);

/**
 * ============================================================================
 * UActionComponent —— 角色「行动」组件（纯框架，无玩法逻辑）
 * ============================================================================
 *
 * 【本类职责】
 *   1. 存储当前行动状态（EActionState）
 *   2. 提供 SetActionState / GetActionState 供 C++ 与蓝图读写
 *   3. 状态变化时广播 OnActionStateChanged，供 UI、动画、AI 等订阅
 *
 * 【和 3D 项目的类比】
 *   类似一个极简的「状态持有者 + 变更通知器」，不包含 GAS 里的效果、冷却、代价等玩法。
 *   3D 里你也可能用 Delegate 通知 UI 换血条样式；这里用同样模式通知「角色从 Idle 切到 Fighting」。
 *
 * 【不包含的内容（刻意不做）】
 *   修炼产出、探索随机事件、战斗伤害、死亡判定等玩法逻辑 —— 由后续系统调用 SetActionState 驱动。
 *
 * 【2D 放置游戏的典型订阅方（后续）】
 *   - PaperZD AnimBP：根据状态切 Flipbook
 *   - UMG：显示「修炼中 / 战斗中」
 *   - AI Controller：决定何时 SetActionState(Exploring)
 */
UCLASS(ClassGroup = (Custom), BlueprintType, meta = (BlueprintSpawnableComponent))
class THREEDADI_API UActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UActionComponent();

	/** 写入新状态；若与当前相同则跳过，避免无意义广播。 */
	UFUNCTION(BlueprintCallable, Category = "Character|Actions")
	void SetActionState(EActionState NewState);

	/** 读取当前状态，无副作用。 */
	UFUNCTION(BlueprintPure, Category = "Character|Actions")
	EActionState GetActionState() const { return CurrentActionState; }

	/**
	 * 状态变化时广播（OldState, NewState）。
	 * BlueprintAssignable：蓝图里可 Bind Event；C++ 里可 AddDynamic / AddUObject。
	 */
	UPROPERTY(BlueprintAssignable, Category = "Character|Actions")
	FOnActionStateChanged OnActionStateChanged;

protected:
	/** 当前行动状态，默认 Idle。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Actions", meta = (AllowPrivateAccess = "true"))
	EActionState CurrentActionState = EActionState::Idle;
};
