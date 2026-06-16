// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianIdleHUD.h"
#include "XiuxianIdlePlayerController.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"

/**
 * DrawHUD —— 每帧绘制 Demo 调试信息
 *
 * 流程：取 PlayerController → 读鼠标屏幕坐标 → 投射到世界平面 → DrawText
 * 正式放置游戏里，点击位置会通过 PlayerController 的 ProjectMouseToWorldPlane 驱动玩法，
 * HUD 这里只是「可视化验证」投射是否正确。
 */
void AXiuxianIdleHUD::DrawHUD()
{
	Super::DrawHUD();

	// Canvas 由引擎在 DrawHUD 时注入；没有 Canvas 或关闭显示则直接返回
	if (!bShowMouseDebugInfo || !Canvas)
	{
		return;
	}

	// 本 Demo 的 PC 类型；Cast 失败说明 GameMode 配置被改过
	AXiuxianIdlePlayerController* IdlePC = Cast<AXiuxianIdlePlayerController>(GetOwningPlayerController());
	if (!IdlePC)
	{
		return;
	}

	// 屏幕空间坐标（像素），原点在左上角 —— 和 Windows / UMG 一致
	float MouseX = 0.f;
	float MouseY = 0.f;
	if (!IdlePC->GetMousePosition(MouseX, MouseY))
	{
		return;
	}

	// 投射到 Z = WorldPlaneZ 的平面，得到世界空间 XYZ
	FVector WorldPosition;
	const bool bHasWorldPosition = IdlePC->ProjectMouseToWorldPlane(WorldPlaneZ, WorldPosition);

	const FString InfoText = bHasWorldPosition
		? FString::Printf(
			TEXT("修仙放置 Demo\n鼠标屏幕: (%.0f, %.0f)\n鼠标世界: (%.1f, %.1f, %.1f)"),
			MouseX,
			MouseY,
			WorldPosition.X,
			WorldPosition.Y,
			WorldPosition.Z)
		: FString::Printf(
			TEXT("修仙放置 Demo\n鼠标屏幕: (%.0f, %.0f)\n鼠标世界: 无法投射"),
			MouseX,
			MouseY);

	/**
	 * 简单分辨率缩放：以 1920 宽为基准。
	 * 4K 屏字不会太小，小窗口不会太大 —— 正式 UI 应用 UMG 的 DPI Scale。
	 */
	const float TextScale = InfoTextScale * (Canvas->ClipX > 0.f ? Canvas->ClipX / 1920.f : 1.f);
	const FVector2D TextPos = InfoTextOffset;

	DrawText(InfoText, InfoTextColor, TextPos.X, TextPos.Y, GEngine->GetMediumFont(), TextScale);
}
