// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianIdlePlayerController.h"
#include "XiuxianCharacterBase.h"
#include "XiuxianMainHUDWidget.h"
#include "Blueprint/UserWidget.h"

/**
 * PlayerController 构造函数 —— 启用鼠标相关默认行为
 */
AXiuxianIdlePlayerController::AXiuxianIdlePlayerController()
{
	// 显示鼠标光标（3D  FPS 常隐藏，2D 放置/策略必须显示）
	bShowMouseCursor = true;

	// 允许 Actor 接收点击 / 悬停蓝图事件（如 OnClicked）
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	DefaultMouseCursor = EMouseCursor::Default;
}

void AXiuxianIdlePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// BeginPlay 再设一次，避免被别的系统覆盖（Demo 里求稳）
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	/**
	 * 【FInputModeGameAndUI】
	 * GameAndUI：游戏和 UI 都能收输入 —— 放置游戏既要点点场景，也要点界面。
	 * HideCursorDuringCapture(false)：鼠标捕获时不隐藏光标。
	 * DoNotLock：不锁鼠标到视口中心（3D FPS 会用 LockOnCapture）。
	 *
	 * 若将来全屏 UMG 菜单，可临时改成 FInputModeUIOnly。
	 */
	SetInputMode(FInputModeGameAndUI()
		.SetHideCursorDuringCapture(false)
		.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock));

	CreateMainHUD();
}

AXiuxianCharacterBase* AXiuxianIdlePlayerController::GetProtagonistCharacter() const
{
	if (IsValid(ProtagonistOverride))
	{
		return ProtagonistOverride;
	}

	return Cast<AXiuxianCharacterBase>(GetPawn());
}

void AXiuxianIdlePlayerController::CreateMainHUD()
{
	if (MainHUDWidget || !MainHUDWidgetClass)
	{
		return;
	}

	MainHUDWidget = CreateWidget<UXiuxianMainHUDWidget>(this, MainHUDWidgetClass);
	if (MainHUDWidget)
	{
		MainHUDWidget->AddToViewport(0); // ZOrder 0：底层常驻 HUD
	}
}

/**
 * 鼠标屏幕坐标 → 与 Z=PlaneZ 水平面求交
 *
 * 数学步骤（和 3D 里 Deproject + PlaneIntersection 一样）：
 *   1. DeprojectMousePositionToWorld → 射线起点 P0、方向 D
 *   2. 平面 z = PlaneZ，解 P0.z + t*D.z = PlaneZ → t
 *   3. 交点 = P0 + t*D
 *
 * 【2D 注意】俯视正交相机下 D.z 通常不为 0，所以可以求交。
 * 若射线平行于平面（D.z ≈ 0）或交点在相机后方（t < 0），则失败。
 */
bool AXiuxianIdlePlayerController::ProjectMouseToWorldPlane(float PlaneZ, FVector& OutWorldPosition) const
{
	FVector WorldLocation;
	FVector WorldDirection;
	if (!DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
	{
		return false;
	}

	// 射线与 Z=PlaneZ 平面平行，无唯一交点
	if (FMath::IsNearlyZero(WorldDirection.Z))
	{
		return false;
	}

	const float T = (PlaneZ - WorldLocation.Z) / WorldDirection.Z;
	if (T < 0.f)
	{
		// 交点在相机背后，对玩家无意义
		return false;
	}

	OutWorldPosition = WorldLocation + WorldDirection * T;
	return true;
}

FVector AXiuxianIdlePlayerController::GetMouseWorldPositionOnPlane(float PlaneZ) const
{
	FVector WorldPosition;
	if (ProjectMouseToWorldPlane(PlaneZ, WorldPosition))
	{
		return WorldPosition;
	}

	return FVector::ZeroVector;
}
