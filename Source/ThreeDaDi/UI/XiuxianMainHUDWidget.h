// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EActionState.h"
#include "XiuxianMainHUDWidget.generated.h"

class UActionComponent;
class UButton;
class UCharacterStatsComponent;
class UXiuxianIdleBehaviorComponent;
class UProgressBar;
class UTextBlock;
class AXiuxianCharacterBase;
class AXiuxianIdlePlayerController;

/**
 * ============================================================================
 * UXiuxianMainHUDWidget —— 主界面 HUD 的 C++ 基类（供 WBP_MainHUD 继承）
 * ============================================================================
 *
 * 【WBP 命名约定 —— 控件名必须与下列 BindWidget 一致，否则自动绑定失败】
 *   ProgressBar_Health      血条
 *   ProgressBar_Experience  经验条
 *   ProgressBar_Lifespan    寿元条
 *   TextBlock_ActionState   当前行动状态文字
 *   TextBlock_Level         等级文字（可选）
 *   TextBlock_Log           行为日志（滚动文本）
 *   Button_Idle / Button_Meditate / Button_Explore / Button_Fight  状态切换按钮
 *
 * 【数据流】
 *   按钮点击 → RequestSetActionState → 主角 ActionComponent
 *   ActionComponent / StatsComponent 委托 → RefreshXXX → 更新 UI
 *
 * 【和 3D 的对照】
 *   等同 UUserWidget 基类 + WBP_MainHUD 子类；C++ 管绑定与刷新，WBP 管布局美术。
 *
 * 【主角绑定】
 *   优先读 PlayerController::GetProtagonistCharacter()。
 *   若当前 Pawn 仍是 Demo 摄像机，请在 PC 上设置 ProtagonistOverride。
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class THREEDADI_API UXiuxianMainHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	/** UI 按钮 / 蓝图调用：请求主角切换行动状态。 */
	UFUNCTION(BlueprintCallable, Category = "Xiuxian|UI")
	void RequestSetActionState(EActionState NewState);

	/** 供按钮绑定的便捷入口（也可在 WBP 里直接调 RequestSetActionState）。 */
	UFUNCTION(BlueprintCallable, Category = "Xiuxian|UI")
	void OnIdleButtonClicked();

	UFUNCTION(BlueprintCallable, Category = "Xiuxian|UI")
	void OnMeditateButtonClicked();

	UFUNCTION(BlueprintCallable, Category = "Xiuxian|UI")
	void OnExploreButtonClicked();

	UFUNCTION(BlueprintCallable, Category = "Xiuxian|UI")
	void OnFightButtonClicked();

protected:
	// ---- BindWidget：WBP 里控件名必须一致 ----

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_Health;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_Experience;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_Lifespan;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_ActionState;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_Level;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_Log;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UButton> Button_Idle;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UButton> Button_Meditate;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UButton> Button_Explore;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UButton> Button_Fight;

	/** 尝试解析主角并绑定 Stats / Action 委托。 */
	void TryBindCharacterComponents();

	/** 解绑所有已绑定的组件委托。 */
	void UnbindCharacterComponents();

	/** 绑定四个状态按钮的 OnClicked。 */
	void BindActionButtons();

	/** 解绑四个状态按钮。 */
	void UnbindActionButtons();

	void RefreshHealthBar();
	void RefreshExperienceBar();
	void RefreshLifespanBar();
	void RefreshLevelText();
	void RefreshActionStateText(EActionState State);
	void AppendLogLine(const FText& Message);

	/** 日志区最多保留行数，超出删最旧。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|UI")
	int32 MaxLogLines = 12;

	/** EActionState → 显示用中文（可再在 WBP 里换样式）。 */
	static FText GetActionStateDisplayText(EActionState State);

	// ---- 组件委托回调 ----

	UFUNCTION()
	void HandleHealthChanged(float NewHealth, float MaxHealth);

	UFUNCTION()
	void HandleExpChanged(float NewExp, float MaxExp);

	UFUNCTION()
	void HandleLevelChanged(int32 NewLevel);

	UFUNCTION()
	void HandleLifespanChanged(float NewLifespan, float MaxLifespan);

	UFUNCTION()
	void HandleGameplayLogAdded(FText LogMessage);

	UFUNCTION()
	void HandleActionStateChanged(EActionState OldState, EActionState NewState);

	UPROPERTY(Transient)
	TWeakObjectPtr<AXiuxianCharacterBase> CachedProtagonist;

	UPROPERTY(Transient)
	TWeakObjectPtr<UCharacterStatsComponent> CachedStats;

	UPROPERTY(Transient)
	TWeakObjectPtr<UActionComponent> CachedAction;

	UPROPERTY(Transient)
	TWeakObjectPtr<UXiuxianIdleBehaviorComponent> CachedBehavior;

	/** 尚未绑到主角时，定时重试（例如主角晚于 UI 生成）。 */
	FTimerHandle RetryBindTimerHandle;

	void HandleRetryBind();
};
