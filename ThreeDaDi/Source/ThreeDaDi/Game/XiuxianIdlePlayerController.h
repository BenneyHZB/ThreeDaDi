// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "XiuxianIdlePlayerController.generated.h"

class AXiuxianCharacterBase;
class UXiuxianMainHUDWidget;

/**
 * ============================================================================
 * AXiuxianIdlePlayerController —— 放置类 Demo 的玩家控制器
 * ============================================================================
 *
 * 【和 3D 第三人称 PlayerController 的差异】
 *   3D 动作：Enhanced Input → 移动/跳跃/镜头旋转，Pawn 是 Character
 *   2D 放置：鼠标可见 + 点击/悬停事件 + 屏幕坐标 → 世界 XY 平面坐标
 *
 * 【DeprojectMousePositionToWorld 是什么？】
 * 从 2D 屏幕点反推一条 3D 射线（WorldLocation + WorldDirection）。
 * 再与 Z=常数的平面求交，就得到「玩家点到了场景哪个 (X,Y)」——
 * 这是 2D 俯视/等距游戏的核心输入方式，相当于 3D 里 LineTrace 的简化版。
 *
 * 【bEnableClickEvents / bEnableMouseOverEvents】
 * 若要在 Actor 上用 OnClicked / OnBeginCursorOver，必须在 PC 上打开这两项，
 * 和 3D 点击 UI 或场景物体的要求相同。
 */
UCLASS()
class THREEDADI_API AXiuxianIdlePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AXiuxianIdlePlayerController();

	virtual void BeginPlay() override;

	/**
	 * 获取「逻辑上的主角」——供主 UI 绑定 Action / Stats。
	 * 优先 ProtagonistOverride；否则尝试 Cast 当前 Pawn。
	 * 【Demo 仍用摄像机 Pawn 时】在 PC 或关卡里指定 ProtagonistOverride。
	 */
	UFUNCTION(BlueprintPure, Category = "Xiuxian|Player")
	AXiuxianCharacterBase* GetProtagonistCharacter() const;

	/** 创建并 AddToViewport 主 HUD（需配置 MainHUDWidgetClass，一般为 WBP_MainHUD）。 */
	UFUNCTION(BlueprintCallable, Category = "Xiuxian|UI")
	void CreateMainHUD();

	/** WBP_MainHUD 的父类；在 PC 蓝图或默认值里指定。 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Xiuxian|UI")
	TSubclassOf<UXiuxianMainHUDWidget> MainHUDWidgetClass;

	/** 当 Controlled Pawn 不是角色时，手动指定主角（如 Demo 摄像机场景）。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Xiuxian|Player")
	TObjectPtr<AXiuxianCharacterBase> ProtagonistOverride;

	/** 已创建的主界面实例。 */
	UPROPERTY(BlueprintReadOnly, Category = "Xiuxian|UI")
	TObjectPtr<UXiuxianMainHUDWidget> MainHUDWidget;

	/**
	 * 将鼠标投射到指定 Z 平面，返回世界坐标；失败返回 ZeroVector。
	 * BlueprintCallable：方便蓝图里做点选、放置建筑等逻辑。
	 */
	UFUNCTION(BlueprintCallable, Category = "Xiuxian|Input")
	FVector GetMouseWorldPositionOnPlane(float PlaneZ = 0.f) const;

	/**
	 * 投射鼠标到世界平面，成功时 OutWorldPosition 有效并返回 true。
	 * 比 GetMouseWorldPositionOnPlane 更适合 C++ / 蓝图需要区分成功失败的场景。
	 */
	UFUNCTION(BlueprintCallable, Category = "Xiuxian|Input")
	bool ProjectMouseToWorldPlane(float PlaneZ, FVector& OutWorldPosition) const;
};
