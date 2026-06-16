// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EActionState.h"
#include "XiuxianIdleBehaviorComponent.generated.h"

class UActionComponent;
class UCharacterStatsComponent;

/** 行为日志追加时广播，供主 UI 的 TextBlock_Log 显示。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayLogAdded, FText, LogMessage);

/**
 * ============================================================================
 * UXiuxianIdleBehaviorComponent —— 放置玩法驱动（打坐/战斗/寿元/日志）
 * ============================================================================
 *
 * 【职责】
 *   订阅 ActionComponent 状态变化，按状态启动 Timer：
 *     - 打坐：每 10s +1 经验
 *     - 战斗：每 5s +2 经验并扣血
 *     - 寿元：全局缓慢增长（与状态无关，死亡后停止）
 *     - 日志：各状态有文案库，随机间隔刷一条到 UI
 *
 * 【数据流】
 *   本组件只改 StatsComponent / ActionComponent，UI 通过委托自动刷新。
 */
UCLASS(ClassGroup = (Custom), BlueprintType, meta = (BlueprintSpawnableComponent))
class THREEDADI_API UXiuxianIdleBehaviorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UXiuxianIdleBehaviorComponent();

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(BlueprintAssignable, Category = "Xiuxian|Log")
	FOnGameplayLogAdded OnGameplayLogAdded;

protected:
	// ---- 可配置数值（细节面板可调） ----

	/** 打坐：经验结算间隔（秒）。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Meditate")
	float MeditateExpInterval = 10.f;

	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Meditate")
	float MeditateExpGain = 1.f;

	/** 战斗：经验结算间隔（秒）。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Fight")
	float FightExpInterval = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Fight")
	float FightExpGain = 2.f;

	/** 战斗每次结算扣血量。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Fight")
	float FightHealthLoss = 8.f;

	/** 寿元：增长间隔（秒）。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Lifespan")
	float LifespanGainInterval = 20.f;

	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Lifespan")
	float LifespanGainAmount = 1.f;

	/** 日志：两次随机日志之间的最短/最长间隔（秒）。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Log")
	float LogMinInterval = 4.f;

	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Log")
	float LogMaxInterval = 9.f;

	/** 战斗结算时额外触发日志的概率 [0,1]。 */
	UPROPERTY(EditDefaultsOnly, Category = "Xiuxian|Log", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float FightLogChanceOnTick = 0.45f;

	void BindActionComponent();
	void UnbindActionComponent();

	UFUNCTION()
	void HandleActionStateChanged(EActionState OldState, EActionState NewState);

	void ApplyStateBehavior(EActionState NewState);
	void StopStateTimers();
	void ClearAllTimers();

	void StartMeditateTimer();
	void StartFightTimer();
	void StartLifespanTimer();
	void ScheduleNextLog();

	void OnMeditateTick();
	void OnFightTick();
	void OnLifespanTick();
	void OnLogTick();

	void InitializeLogPools();
	void EmitRandomLogForState(EActionState State);
	void BroadcastLog(const FText& Message);

	UActionComponent* GetActionComponent() const;
	UCharacterStatsComponent* GetStatsComponent() const;

	UPROPERTY(Transient)
	TWeakObjectPtr<UActionComponent> CachedAction;

	UPROPERTY(Transient)
	TWeakObjectPtr<UCharacterStatsComponent> CachedStats;

	EActionState CurrentState = EActionState::Idle;

	FTimerHandle MeditateTimerHandle;
	FTimerHandle FightTimerHandle;
	FTimerHandle LifespanTimerHandle;
	FTimerHandle LogTimerHandle;

	/** 各行动状态的日志文案库。 */
	TMap<EActionState, TArray<FText>> LogMessagePools;
};
