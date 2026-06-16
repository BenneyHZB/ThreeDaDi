// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianMainHUDWidget.h"
#include "ActionComponent.h"
#include "CharacterStatsComponent.h"
#include "XiuxianIdleBehaviorComponent.h"
#include "XiuxianCharacterBase.h"
#include "XiuxianIdlePlayerController.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "TimerManager.h"

void UXiuxianMainHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BindActionButtons();
	TryBindCharacterComponents();

	// 主角可能晚于 UI 生成（或 Demo 仍用摄像机 Pawn），每 0.5s 重试直到绑定成功
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			RetryBindTimerHandle,
			this,
			&UXiuxianMainHUDWidget::HandleRetryBind,
			0.5f,
			true);
	}
}

void UXiuxianMainHUDWidget::NativeDestruct()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(RetryBindTimerHandle);
	}

	UnbindActionButtons();
	UnbindCharacterComponents();

	Super::NativeDestruct();
}

void UXiuxianMainHUDWidget::RequestSetActionState(EActionState NewState)
{
	// 优先用已缓存的主角；没有则尝试再绑一次
	if (!CachedProtagonist.IsValid())
	{
		TryBindCharacterComponents();
	}

	AXiuxianCharacterBase* Protagonist = CachedProtagonist.Get();
	if (!Protagonist)
	{
		return;
	}

	if (UActionComponent* ActionComp = Protagonist->GetActionComponent())
	{
		ActionComp->SetActionState(NewState); // 会广播 → HandleActionStateChanged → 刷新状态文本
	}
}

void UXiuxianMainHUDWidget::OnIdleButtonClicked()
{
	RequestSetActionState(EActionState::Idle);
}

void UXiuxianMainHUDWidget::OnMeditateButtonClicked()
{
	RequestSetActionState(EActionState::Meditating);
}

void UXiuxianMainHUDWidget::OnExploreButtonClicked()
{
	RequestSetActionState(EActionState::Exploring);
}

void UXiuxianMainHUDWidget::OnFightButtonClicked()
{
	RequestSetActionState(EActionState::Fighting);
}

void UXiuxianMainHUDWidget::TryBindCharacterComponents()
{
	UnbindCharacterComponents();

	AXiuxianIdlePlayerController* PC = Cast<AXiuxianIdlePlayerController>(GetOwningPlayer());
	if (!PC)
	{
		return;
	}

	AXiuxianCharacterBase* Protagonist = PC->GetProtagonistCharacter();
	if (!Protagonist)
	{
		return;
	}

	UCharacterStatsComponent* StatsComp = Protagonist->GetStatsComponent();
	UActionComponent* ActionComp = Protagonist->GetActionComponent();
	UXiuxianIdleBehaviorComponent* BehaviorComp = Protagonist->GetIdleBehaviorComponent();
	if (!StatsComp || !ActionComp || !BehaviorComp)
	{
		return;
	}

	CachedProtagonist = Protagonist;
	CachedStats = StatsComp;
	CachedAction = ActionComp;
	CachedBehavior = BehaviorComp;

	StatsComp->OnHealthChanged.AddDynamic(this, &UXiuxianMainHUDWidget::HandleHealthChanged);
	StatsComp->OnExpChanged.AddDynamic(this, &UXiuxianMainHUDWidget::HandleExpChanged);
	StatsComp->OnLevelChanged.AddDynamic(this, &UXiuxianMainHUDWidget::HandleLevelChanged);
	StatsComp->OnLifespanChanged.AddDynamic(this, &UXiuxianMainHUDWidget::HandleLifespanChanged);

	ActionComp->OnActionStateChanged.AddDynamic(this, &UXiuxianMainHUDWidget::HandleActionStateChanged);
	BehaviorComp->OnGameplayLogAdded.AddDynamic(this, &UXiuxianMainHUDWidget::HandleGameplayLogAdded);

	// 绑成功后立刻刷一遍初值
	RefreshHealthBar();
	RefreshExperienceBar();
	RefreshLifespanBar();
	RefreshLevelText();
	RefreshActionStateText(ActionComp->GetActionState());

	if (TextBlock_Log)
	{
		TextBlock_Log->SetText(FText::GetEmpty());
	}

	// 已成功绑定，停止重试 Timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(RetryBindTimerHandle);
	}
}

void UXiuxianMainHUDWidget::UnbindCharacterComponents()
{
	if (UCharacterStatsComponent* StatsComp = CachedStats.Get())
	{
		StatsComp->OnHealthChanged.RemoveDynamic(this, &UXiuxianMainHUDWidget::HandleHealthChanged);
		StatsComp->OnExpChanged.RemoveDynamic(this, &UXiuxianMainHUDWidget::HandleExpChanged);
		StatsComp->OnLevelChanged.RemoveDynamic(this, &UXiuxianMainHUDWidget::HandleLevelChanged);
		StatsComp->OnLifespanChanged.RemoveDynamic(this, &UXiuxianMainHUDWidget::HandleLifespanChanged);
	}

	if (UActionComponent* ActionComp = CachedAction.Get())
	{
		ActionComp->OnActionStateChanged.RemoveDynamic(this, &UXiuxianMainHUDWidget::HandleActionStateChanged);
	}

	if (UXiuxianIdleBehaviorComponent* BehaviorComp = CachedBehavior.Get())
	{
		BehaviorComp->OnGameplayLogAdded.RemoveDynamic(this, &UXiuxianMainHUDWidget::HandleGameplayLogAdded);
	}

	CachedProtagonist.Reset();
	CachedStats.Reset();
	CachedAction.Reset();
	CachedBehavior.Reset();
}

void UXiuxianMainHUDWidget::BindActionButtons()
{
	if (Button_Idle)
	{
		Button_Idle->OnClicked.AddDynamic(this, &UXiuxianMainHUDWidget::OnIdleButtonClicked);
	}
	if (Button_Meditate)
	{
		Button_Meditate->OnClicked.AddDynamic(this, &UXiuxianMainHUDWidget::OnMeditateButtonClicked);
	}
	if (Button_Explore)
	{
		Button_Explore->OnClicked.AddDynamic(this, &UXiuxianMainHUDWidget::OnExploreButtonClicked);
	}
	if (Button_Fight)
	{
		Button_Fight->OnClicked.AddDynamic(this, &UXiuxianMainHUDWidget::OnFightButtonClicked);
	}
}

void UXiuxianMainHUDWidget::UnbindActionButtons()
{
	if (Button_Idle)
	{
		Button_Idle->OnClicked.RemoveDynamic(this, &UXiuxianMainHUDWidget::OnIdleButtonClicked);
	}
	if (Button_Meditate)
	{
		Button_Meditate->OnClicked.RemoveDynamic(this, &UXiuxianMainHUDWidget::OnMeditateButtonClicked);
	}
	if (Button_Explore)
	{
		Button_Explore->OnClicked.RemoveDynamic(this, &UXiuxianMainHUDWidget::OnExploreButtonClicked);
	}
	if (Button_Fight)
	{
		Button_Fight->OnClicked.RemoveDynamic(this, &UXiuxianMainHUDWidget::OnFightButtonClicked);
	}
}

void UXiuxianMainHUDWidget::RefreshHealthBar()
{
	if (!ProgressBar_Health)
	{
		return;
	}

	if (UCharacterStatsComponent* StatsComp = CachedStats.Get())
	{
		const float MaxHealth = StatsComp->GetMaxHealth();
		const float Percent = MaxHealth > 0.f ? StatsComp->GetHealth() / MaxHealth : 0.f;
		ProgressBar_Health->SetPercent(Percent);
	}
}

void UXiuxianMainHUDWidget::RefreshExperienceBar()
{
	if (!ProgressBar_Experience)
	{
		return;
	}

	if (UCharacterStatsComponent* StatsComp = CachedStats.Get())
	{
		const float MaxExp = StatsComp->GetMaxExp();
		const float Percent = MaxExp > 0.f ? StatsComp->GetExp() / MaxExp : 0.f;
		ProgressBar_Experience->SetPercent(Percent);
	}
}

void UXiuxianMainHUDWidget::RefreshLifespanBar()
{
	if (!ProgressBar_Lifespan)
	{
		return;
	}

	if (UCharacterStatsComponent* StatsComp = CachedStats.Get())
	{
		const float MaxLifespan = StatsComp->GetMaxLifespan();
		const float Percent = MaxLifespan > 0.f ? StatsComp->GetLifespan() / MaxLifespan : 0.f;
		ProgressBar_Lifespan->SetPercent(Percent);
	}
}

void UXiuxianMainHUDWidget::RefreshLevelText()
{
	if (!TextBlock_Level)
	{
		return;
	}

	if (UCharacterStatsComponent* StatsComp = CachedStats.Get())
	{
		TextBlock_Level->SetText(FText::Format(
			NSLOCTEXT("Xiuxian", "LevelFormat", "Lv.{0}"),
			FText::AsNumber(StatsComp->GetLevel())));
	}
}

void UXiuxianMainHUDWidget::RefreshActionStateText(EActionState State)
{
	if (TextBlock_ActionState)
	{
		TextBlock_ActionState->SetText(GetActionStateDisplayText(State));
	}
}

FText UXiuxianMainHUDWidget::GetActionStateDisplayText(EActionState State)
{
	switch (State)
	{
	case EActionState::Idle:       return NSLOCTEXT("Xiuxian", "ActionIdle", "空闲");
	case EActionState::Meditating: return NSLOCTEXT("Xiuxian", "ActionMeditate", "修炼中");
	case EActionState::Exploring:  return NSLOCTEXT("Xiuxian", "ActionExplore", "探索中");
	case EActionState::Fighting:   return NSLOCTEXT("Xiuxian", "ActionFight", "战斗中");
	case EActionState::Dead:       return NSLOCTEXT("Xiuxian", "ActionDead", "死亡");
	default:                       return NSLOCTEXT("Xiuxian", "ActionUnknown", "未知");
	}
}

void UXiuxianMainHUDWidget::HandleHealthChanged(float NewHealth, float MaxHealth)
{
	if (ProgressBar_Health)
	{
		const float Percent = MaxHealth > 0.f ? NewHealth / MaxHealth : 0.f;
		ProgressBar_Health->SetPercent(Percent);
	}
}

void UXiuxianMainHUDWidget::HandleExpChanged(float NewExp, float MaxExp)
{
	if (ProgressBar_Experience)
	{
		const float Percent = MaxExp > 0.f ? NewExp / MaxExp : 0.f;
		ProgressBar_Experience->SetPercent(Percent);
	}
}

void UXiuxianMainHUDWidget::HandleLevelChanged(int32 NewLevel)
{
	RefreshLevelText();
}

void UXiuxianMainHUDWidget::HandleLifespanChanged(float NewLifespan, float MaxLifespan)
{
	if (ProgressBar_Lifespan)
	{
		const float Percent = MaxLifespan > 0.f ? NewLifespan / MaxLifespan : 0.f;
		ProgressBar_Lifespan->SetPercent(Percent);
	}
}

void UXiuxianMainHUDWidget::HandleGameplayLogAdded(FText LogMessage)
{
	AppendLogLine(LogMessage);
}

void UXiuxianMainHUDWidget::HandleActionStateChanged(EActionState OldState, EActionState NewState)
{
	RefreshActionStateText(NewState);
}

void UXiuxianMainHUDWidget::AppendLogLine(const FText& Message)
{
	if (!TextBlock_Log || Message.IsEmpty())
	{
		return;
	}

	TArray<FString> Lines;
	FString CurrentText = TextBlock_Log->GetText().ToString();
	CurrentText.ParseIntoArrayLines(Lines, false);

	Lines.Add(Message.ToString());

	while (Lines.Num() > MaxLogLines)
	{
		Lines.RemoveAt(0); // 删最旧一行
	}

	TextBlock_Log->SetText(FText::FromString(FString::Join(Lines, TEXT("\n"))));
}

void UXiuxianMainHUDWidget::HandleRetryBind()
{
	if (CachedProtagonist.IsValid())
	{
		return;
	}

	TryBindCharacterComponents();
}
