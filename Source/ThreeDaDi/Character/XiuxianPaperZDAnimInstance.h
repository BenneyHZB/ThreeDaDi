// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDAnimInstance.h"
#include "EActionState.h"
#include "XiuxianPaperZDAnimInstance.generated.h"

class UActionComponent;

/**
 * ============================================================================
 * UXiuxianPaperZDAnimInstance —— 本项目 PaperZD 动画实例基类
 * ============================================================================
 *
 * 【给 3D 开发者的对照】
 *   3D：AnimInstance 里常有 Speed、IsInAir 等变量，在 NativeUpdateAnimation 里从 Character 同步。
 *   2D PaperZD：没有 UAnimInstance::NativeUpdateAnimation，改用 OnInit / OnTick（PaperZD 自定义生命周期）。
 *
 * 【本类做什么】
 *   1. 从 Owner（AXiuxianCharacterBase）的 ActionComponent 读取 EActionState
 *   2. 写入蓝图可读变量 ActionState，供 AnimGraph / 状态机 Switch 使用
 *   3. 订阅 OnActionStateChanged，状态一变立刻更新 ActionState（不必等下一帧）
 *
 * 【蓝图怎么用】
 *   1. 内容浏览器 → 动画 → PaperZD Animation Blueprint
 *   2. Class Settings → Parent Class 选 XiuxianPaperZDAnimInstance
 *   3. 在图里直接读 ActionState，或用 PaperZD 的 Select By Enum 节点分支 Flipbook
 *   4. 把该 AnimBP 赋给 XiuxianCharacterBase 蓝图上的 PaperZD Animation Component
 *
 * 【刻意不做】
 *   不根据 ActionState 自动播动画 —— 具体 Flipbook / 状态机连线留在你的 AnimBP 里。
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class THREEDADI_API UXiuxianPaperZDAnimInstance : public UPaperZDAnimInstance
{
	GENERATED_BODY()

public:
	UXiuxianPaperZDAnimInstance();

	/**
	 * 当前行动状态，与 ActionComponent 保持同步。
	 * AnimBP 里当普通变量用即可（只读）。
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Character|Actions", meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::Idle;

	/** 与 ActionState 相同，方便蓝图当纯函数节点拉线。 */
	UFUNCTION(BlueprintPure, Category = "Character|Actions")
	EActionState GetActionState() const { return ActionState; }

protected:
	/** PaperZD 初始化回调（等价于 3D 的 NativeInitializeAnimation）。 */
	virtual void OnInit_Implementation() override;

	/** 每帧回调；用于 Owner 晚于 AnimInstance 就绪时的兜底绑定。 */
	virtual void OnTick_Implementation(float DeltaTime) override;

	/** UObject 销毁前解绑委托，避免野指针。 */
	virtual void BeginDestroy() override;

	/** 从 Owner 查找 ActionComponent 并绑定 OnActionStateChanged。 */
	void BindToActionComponent();

	/** 从 ActionComponent 拉取最新状态写入 ActionState。 */
	void SyncActionStateFromComponent();

	/** ActionComponent 状态变化委托回调。 */
	UFUNCTION()
	void HandleActionStateChanged(EActionState OldState, EActionState NewState);

	/** 缓存 ActionComponent，避免每帧 GetOwningActor + GetActionComponent。 */
	UPROPERTY(Transient)
	TWeakObjectPtr<UActionComponent> CachedActionComponent;
};
