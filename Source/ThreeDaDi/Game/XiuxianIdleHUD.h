// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "XiuxianIdleHUD.generated.h"

class AXiuxianIdlePlayerController;

/**
 * ============================================================================
 * AXiuxianIdleHUD —— Demo 用 HUD（Canvas 绘制调试信息）
 * ============================================================================
 *
 * 【HUD vs UMG（3D 项目里你也常选）】
 *   - AHUD + DrawHUD + Canvas：轻量、适合临时调试文字，本 Demo 用来显示鼠标坐标
 *   - UUserWidget（UMG）：正式 UI（血条、背包、按钮）应走 Widget，和 2D/3D 无关
 *
 * 【DrawHUD 调用时机】
 * 每帧在渲染 UI 层之前调用（类似 3D 里 PostRender 调试画线，但专门给 2D 屏幕文字）。
 *
 * 【WorldPlaneZ】
 * 必须和 PlayerController 投射鼠标时用的 Z 平面一致，否则「屏幕显示的世界坐标」和
 * 「实际点击逻辑用的坐标」会对不上 —— 2D 项目里这是常见联调点。
 */
UCLASS()
class THREEDADI_API AXiuxianIdleHUD : public AHUD
{
	GENERATED_BODY()

public:
	/** 重写父类：在 Canvas 上绘制调试文本。 */
	virtual void DrawHUD() override;

	/** 调试文字颜色（修仙主题偏暖色）。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Xiuxian|HUD")
	FLinearColor InfoTextColor = FLinearColor(0.9f, 0.85f, 0.6f, 1.f);

	/**
	 * 文字缩放基准。
	 * 实际绘制时会按 Canvas->ClipX / 1920 做简单分辨率适配（见 .cpp）。
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Xiuxian|HUD")
	float InfoTextScale = 1.2f;

	/** 文字左上角屏幕偏移（像素）。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Xiuxian|HUD")
	FVector2D InfoTextOffset = FVector2D(24.f, 24.f);

	/**
	 * 鼠标射线与哪个 Z 高度的平面求交。
	 * 2D 俯视游戏里， gameplay 通常发生在 Z=0 或 Z=某个固定高度的平面上。
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Xiuxian|HUD")
	float WorldPlaneZ = 0.f;

	/** 是否显示鼠标调试信息；正式版可关。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Xiuxian|HUD")
	bool bShowMouseDebugInfo = true;
};
