// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianIdleCameraPawn.h"
#include "Camera/CameraComponent.h"

/**
 * 2D 俯视正交摄像机 Pawn 构造函数
 */
AXiuxianIdleCameraPawn::AXiuxianIdleCameraPawn()
{
	// 摄像机 Pawn 不需要每帧 Tick，PlayerController 和 UI 负责输入即可
	PrimaryActorTick.bCanEverTick = false;

	// 根组件：纯 SceneComponent，没有 Mesh —— 和 3D 空 Pawn 一样
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// 创建摄像机并挂到 Root 下
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(RootComponent);

	/**
	 * 【2D 俯视的标准旋转】
	 * Pitch = -90°：相机朝向 -Z，从头顶俯视 XY 平面。
	 * 3D 第三人称一般是 Pitch ≈ -10° ~ -20° 看角色后背，这里完全不同。
	 */
	CameraComponent->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));

	/**
	 * 【正交投影】
	 * 2D 放置/策略几乎必用 Orthographic；3D 开放世界才用 Perspective。
	 */
	CameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	CameraComponent->OrthoWidth = OrthoWidth;
}

void AXiuxianIdleCameraPawn::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// 编辑器里修改 OrthoWidth 时，同步到摄像机组件
	if (CameraComponent)
	{
		CameraComponent->OrthoWidth = OrthoWidth;
	}
}
