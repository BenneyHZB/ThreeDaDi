// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "XiuxianIdleCameraPawn.generated.h"

class UCameraComponent;

/**
 * ============================================================================
 * AXiuxianIdleCameraPawn —— 2D 放置 Demo 的俯视正交摄像机 Pawn
 * ============================================================================
 *
 * 【3D vs 2D 摄像机差异（第一次做 2D 最容易踩坑的地方）】
 *
 *   3D 第三人称/第一人称（常见配置）：
 *     - ProjectionMode = Perspective（透视）
 *     - 摄像机跟 SpringArm 旋转，看 X/Y/Z 立体空间
 *
 *   2D 俯视 / 横版（本项目 Demo 用俯视）：
 *     - ProjectionMode = Orthographic（正交）—— 没有近大远小，适合策略/放置/塔防
 *     - 摄像机通常固定俯角（本类设为 Pitch = -90°，从正上方往下看 XY 平面）
 *     - OrthoWidth 控制「水平方向能看到多宽」，类似 2D 的 zoom —— 不是 FOV
 *
 * 【为什么继承 APawn 而不是 APlayerCameraManager？】
 *   用 Pawn 作为 DefaultPawn 是最简单的 Demo 方案，和 3D 里「Pawn 代表玩家实体」一致。
 *   正式项目也可以改成 CameraActor + PlayerController 手动 SetViewTarget。
 *
 * 【WorldPlaneZ 与鼠标点击】
 * 2D 游戏逻辑大多发生在 XY 平面（Z 固定）。PlayerController 会把鼠标射线投射到 Z=某值的平面上，
 * 得到「点击了场景哪个位置」—— 这是 2D 点击放置建筑 / 选怪的基础。
 */
UCLASS()
class THREEDADI_API AXiuxianIdleCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	AXiuxianIdleCameraPawn();

	/** 摄像机组件，在构造函数里创建并设为 Root 的子物体。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> CameraComponent;

	/**
	 * 正交宽度（单位：UE 世界单位，厘米）。
	 * 数值越大，画面「缩越远」，看到的场景越多。
	 * EditAnywhere 方便在编辑器里实时调 Demo 视野，不用改代码。
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float OrthoWidth = 2048.f;

protected:
	/**
	 * OnConstruction：在编辑器里拖动 Actor 或改属性时会调用（包括改 OrthoWidth）。
	 * 用来同步 CameraComponent->OrthoWidth，避免「属性改了但摄像机没更新」。
	 * 3D 里调 SpringArm 长度时也常用同样模式。
	 */
	virtual void OnConstruction(const FTransform& Transform) override;
};
