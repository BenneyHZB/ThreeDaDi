// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianCharacterBase.h"
#include "ActionComponent.h"
#include "CharacterStatsComponent.h"
#include "XiuxianIdleBehaviorComponent.h"

/**
 * XiuxianCharacterBase 构造函数
 *
 * 【CreateDefaultSubobject 要点（3D 开发者应该很熟悉）】
 *   - 只能在构造函数里调用
 *   - 名字（TEXT("ActionComponent")）会用于组件层级显示和某些序列化场景，保持稳定即可
 *   - 创建的组件会自动挂到 Owner Actor 上，并出现在组件列表里
 *
 * 【2D 角色还需要在蓝图 / 编辑器里配置的内容（本 C++ 不做）】
 *   - Sprite 组件使用的 Flipbook 资源
 *   - PaperZD Animation Blueprint（2D 动画状态机）
 *   - 碰撞体大小（PaperCharacter 自带 Capsule，但 2D 常要调半高/半径）
 *   这些和 3D 里配 SkeletalMesh + AnimBP 的角色蓝图是同一个思路。
 */
AXiuxianCharacterBase::AXiuxianCharacterBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ActionComponent = CreateDefaultSubobject<UActionComponent>(TEXT("ActionComponent"));
	StatsComponent = CreateDefaultSubobject<UCharacterStatsComponent>(TEXT("StatsComponent"));
	IdleBehaviorComponent = CreateDefaultSubobject<UXiuxianIdleBehaviorComponent>(TEXT("IdleBehaviorComponent"));
}
