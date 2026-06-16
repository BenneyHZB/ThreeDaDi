// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "ActionComponent.h"
#include "CharacterStatsComponent.h"
#include "XiuxianIdleBehaviorComponent.h"
#include "XiuxianCharacterBase.generated.h"

/**
 * ============================================================================
 * AXiuxianCharacterBase —— 全游戏 2D 角色基类
 * ============================================================================
 *
 * 【3D → 2D 最关键的一行继承】
 *   3D 项目常见：class AMyHero : public ACharacter  （带 Capsule + SkeletalMesh + AnimBP）
 *   2D 本项目：  class AXiuxianCharacterBase : public APaperZDCharacter
 *
 * APaperZDCharacter 的继承链（了解即可）：
 *   APaperZDCharacter → APaperCharacter → ACharacter → APawn → AActor
 *
 * 【Paper2D / PaperZD 和 3D 资源的区别】
 *   - 3D：StaticMesh / SkeletalMesh + Material + AnimBP（骨骼动画）
 *   - 2D：PaperSprite / PaperFlipbook（序列帧翻页动画）+ PaperZD AnimBP（2D 版状态机）
 *   - PaperZD 插件在 Paper2D 基础上提供了「2D 动画蓝图 + Notify」，类似 3D 的 AnimGraph。
 *
 * 【本类的职责（框架层）】
 *   1. 作为所有可行动角色的 C++ 根类（玩家 / 怪物 / 传承角色都从这里派生）
 *   2. 统一挂载 Action / Stats / IdleBehavior 组件
 *   3. 具体玩法数值由 IdleBehavior 驱动，本类不直接写逻辑
 *
 * 【UCLASS 修饰符说明】
 *   Abstract      —— 抽象类，不能在编辑器里直接放置实例，只能被继承（和 C++ abstract 类似）
 *   Blueprintable —— 允许在内容浏览器里「创建蓝图子类」
 *   BlueprintType —— 允许把此类作为蓝图变量 / 函数参数类型使用
 */
UCLASS(Abstract, Blueprintable, BlueprintType, ClassGroup = (Custom))
class THREEDADI_API AXiuxianCharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	/**
	 * 构造函数必须接收 FObjectInitializer 并传给 Super。
	 * 这是 UE 创建 Actor 子对象的固定模式——和 3D Character 一模一样。
	 * PaperZD 父类会在 ObjectInitializer 阶段创建 AnimationComponent 等 2D 专用组件。
	 */
	AXiuxianCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * 获取行动组件。
	 *
	 * BlueprintPure：蓝图里当作「纯函数」节点，无执行引脚，无副作用。
	 * 同时 ActionComponent 成员也标了 BlueprintReadOnly，蓝图可以直接拖线访问。
	 * 提供 Getter 是为了 C++ 侧调用更明确，也方便以后加校验逻辑。
	 */
	UFUNCTION(BlueprintPure, Category = "Character|Actions")
	UActionComponent* GetActionComponent() const { return ActionComponent; }

	/** 获取数值组件（血、经验、等级）。 */
	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	UCharacterStatsComponent* GetStatsComponent() const { return StatsComponent; }

	/** 放置玩法驱动（打坐加经验、战斗扣血、寿元、日志）。 */
	UFUNCTION(BlueprintPure, Category = "Character|Gameplay")
	UXiuxianIdleBehaviorComponent* GetIdleBehaviorComponent() const { return IdleBehaviorComponent; }

protected:
	/**
	 * 行动组件实例。
	 *
	 * VisibleAnywhere  —— 编辑器细节面板可见（方便调试）
	 * BlueprintReadOnly —— 蓝图可读不可写（避免蓝图误改引用）
	 * AllowPrivateAccess —— 允许蓝图访问 protected 成员（否则只能走 Getter）
	 *
	 * 在 .cpp 构造函数里用 CreateDefaultSubobject 创建，这是 UE 的「默认子对象」机制，
	 * 和 3D 里 CreateDefaultSubobject<UCapsuleComponent> 是同一套 API。
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Actions", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UActionComponent> ActionComponent;

	/** 血量 / 经验 / 等级；UI 订阅其委托自动刷新。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCharacterStatsComponent> StatsComponent;

	/** 打坐/战斗/寿元/日志等行为逻辑。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Gameplay", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UXiuxianIdleBehaviorComponent> IdleBehaviorComponent;
};
