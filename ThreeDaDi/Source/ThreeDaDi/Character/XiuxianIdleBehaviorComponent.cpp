// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianIdleBehaviorComponent.h"
#include "ActionComponent.h"
#include "CharacterStatsComponent.h"
#include "XiuxianCharacterBase.h"
#include "TimerManager.h"

UXiuxianIdleBehaviorComponent::UXiuxianIdleBehaviorComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UXiuxianIdleBehaviorComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeLogPools();
	BindActionComponent();

	if (UActionComponent* ActionComp = GetActionComponent())
	{
		CurrentState = ActionComp->GetActionState();
		ApplyStateBehavior(CurrentState);
	}

	StartLifespanTimer();
}

void UXiuxianIdleBehaviorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ClearAllTimers();
	UnbindActionComponent();
	Super::EndPlay(EndPlayReason);
}

void UXiuxianIdleBehaviorComponent::BindActionComponent()
{
	UnbindActionComponent();

	if (AXiuxianCharacterBase* Character = Cast<AXiuxianCharacterBase>(GetOwner()))
	{
		CachedAction = Character->GetActionComponent();
		CachedStats = Character->GetStatsComponent();
	}

	if (UActionComponent* ActionComp = CachedAction.Get())
	{
		ActionComp->OnActionStateChanged.AddDynamic(this, &UXiuxianIdleBehaviorComponent::HandleActionStateChanged);
	}
}

void UXiuxianIdleBehaviorComponent::UnbindActionComponent()
{
	if (UActionComponent* ActionComp = CachedAction.Get())
	{
		ActionComp->OnActionStateChanged.RemoveDynamic(this, &UXiuxianIdleBehaviorComponent::HandleActionStateChanged);
	}
}

void UXiuxianIdleBehaviorComponent::HandleActionStateChanged(EActionState OldState, EActionState NewState)
{
	CurrentState = NewState;
	ApplyStateBehavior(NewState);
}

void UXiuxianIdleBehaviorComponent::ApplyStateBehavior(EActionState NewState)
{
	StopStateTimers();

	if (NewState == EActionState::Dead)
	{
		EmitRandomLogForState(EActionState::Dead);
		return;
	}

	ScheduleNextLog();

	switch (NewState)
	{
	case EActionState::Meditating:
		StartMeditateTimer();
		BroadcastLog(NSLOCTEXT("Xiuxian", "MeditateStart", "你盘膝而坐，开始吐纳修炼。"));
		break;
	case EActionState::Fighting:
		StartFightTimer();
		BroadcastLog(NSLOCTEXT("Xiuxian", "FightStart", "你进入战斗姿态，气机锁定前方。"));
		break;
	case EActionState::Exploring:
		BroadcastLog(NSLOCTEXT("Xiuxian", "ExploreStart", "你整理行装，向未知处探索。"));
		break;
	case EActionState::Idle:
		BroadcastLog(NSLOCTEXT("Xiuxian", "IdleStart", "你暂息片刻，观察四周动静。"));
		break;
	default:
		break;
	}
}

void UXiuxianIdleBehaviorComponent::StopStateTimers()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(MeditateTimerHandle);
		World->GetTimerManager().ClearTimer(FightTimerHandle);
		World->GetTimerManager().ClearTimer(LogTimerHandle);
	}
}

void UXiuxianIdleBehaviorComponent::ClearAllTimers()
{
	StopStateTimers();

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(LifespanTimerHandle);
	}
}

void UXiuxianIdleBehaviorComponent::StartMeditateTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			MeditateTimerHandle,
			this,
			&UXiuxianIdleBehaviorComponent::OnMeditateTick,
			MeditateExpInterval,
			true);
	}
}

void UXiuxianIdleBehaviorComponent::StartFightTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			FightTimerHandle,
			this,
			&UXiuxianIdleBehaviorComponent::OnFightTick,
			FightExpInterval,
			true);
	}
}

void UXiuxianIdleBehaviorComponent::StartLifespanTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			LifespanTimerHandle,
			this,
			&UXiuxianIdleBehaviorComponent::OnLifespanTick,
			LifespanGainInterval,
			true);
	}
}

void UXiuxianIdleBehaviorComponent::ScheduleNextLog()
{
	if (CurrentState == EActionState::Dead)
	{
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	const float Delay = FMath::FRandRange(LogMinInterval, LogMaxInterval);
	World->GetTimerManager().SetTimer(
		LogTimerHandle,
		this,
		&UXiuxianIdleBehaviorComponent::OnLogTick,
		Delay,
		false);
}

void UXiuxianIdleBehaviorComponent::OnMeditateTick()
{
	if (CurrentState != EActionState::Meditating)
	{
		return;
	}

	if (UCharacterStatsComponent* Stats = GetStatsComponent())
	{
		Stats->AddExp(MeditateExpGain);
	}
}

void UXiuxianIdleBehaviorComponent::OnFightTick()
{
	if (CurrentState != EActionState::Fighting)
	{
		return;
	}

	UCharacterStatsComponent* Stats = GetStatsComponent();
	UActionComponent* Action = GetActionComponent();
	if (!Stats || !Action)
	{
		return;
	}

	Stats->AddExp(FightExpGain);
	Stats->ApplyDamage(FightHealthLoss);

	if (Stats->GetHealth() <= 0.f)
	{
		Action->SetActionState(EActionState::Dead);
		BroadcastLog(NSLOCTEXT("Xiuxian", "FightDeath", "你力竭倒地，元神涣散。"));
		return;
	}

	if (FMath::FRand() <= FightLogChanceOnTick)
	{
		EmitRandomLogForState(EActionState::Fighting);
	}
}

void UXiuxianIdleBehaviorComponent::OnLifespanTick()
{
	if (CurrentState == EActionState::Dead)
	{
		return;
	}

	if (UCharacterStatsComponent* Stats = GetStatsComponent())
	{
		Stats->AddLifespan(LifespanGainAmount);
	}
}

void UXiuxianIdleBehaviorComponent::OnLogTick()
{
	if (CurrentState != EActionState::Dead)
	{
		EmitRandomLogForState(CurrentState);
	}

	ScheduleNextLog();
}

void UXiuxianIdleBehaviorComponent::InitializeLogPools()
{
	LogMessagePools.Empty();

	LogMessagePools.Add(EActionState::Idle, {
		NSLOCTEXT("Xiuxian", "IdleLog1", "你望了望天边的云，心中一片平静。"),
		NSLOCTEXT("Xiuxian", "IdleLog2", "风掠过衣角，你随意活动了下筋骨。"),
		NSLOCTEXT("Xiuxian", "IdleLog3", "闲来无事，你整理了下随身丹袋。"),
		NSLOCTEXT("Xiuxian", "IdleLog4", "远处钟磬一声，你默数呼吸三个周天。"),
	});

	LogMessagePools.Add(EActionState::Meditating, {
		NSLOCTEXT("Xiuxian", "MedLog1", "你吐纳天地灵气，丹田微微发热。"),
		NSLOCTEXT("Xiuxian", "MedLog2", "一线青气沿督脉上升，又缓缓归于气海。"),
		NSLOCTEXT("Xiuxian", "MedLog3", "你进入定境，杂念渐消。"),
		NSLOCTEXT("Xiuxian", "MedLog4", "周身灵力如溪流汇入丹田。"),
		NSLOCTEXT("Xiuxian", "MedLog5", "你以神识内视，经脉中灵光若隐若现。"),
	});

	LogMessagePools.Add(EActionState::Exploring, {
		NSLOCTEXT("Xiuxian", "ExpLog1", "你在林间盘桓，寻找可疑灵气波动。"),
		NSLOCTEXT("Xiuxian", "ExpLog2", "远处传来兽吼，你谨慎地绕路而行。"),
		NSLOCTEXT("Xiuxian", "ExpLog3", "一枚旧符箓半埋在落叶下，你顺手收起。"),
		NSLOCTEXT("Xiuxian", "ExpLog4", "你踩到一枚古铜钱，似乎没什么灵性。"),
		NSLOCTEXT("Xiuxian", "ExpLog5", "山雾忽起，你以神识探路继续前行。"),
	});

	LogMessagePools.Add(EActionState::Fighting, {
		NSLOCTEXT("Xiuxian", "FightLog1", "你提气迎击，剑光与妖影交错。"),
		NSLOCTEXT("Xiuxian", "FightLog2", "一记重击震得你气血翻涌。"),
		NSLOCTEXT("Xiuxian", "FightLog3", "你侧身闪开致命爪击，反手自上一式。"),
		NSLOCTEXT("Xiuxian", "FightLog4", "妖兽退却半步，你乘势追击。"),
		NSLOCTEXT("Xiuxian", "FightLog5", "你以灵力护体，硬接一记后借势反击。"),
	});

	LogMessagePools.Add(EActionState::Dead, {
		NSLOCTEXT("Xiuxian", "DeadLog1", "你的意识渐渐沉入黑暗……"),
		NSLOCTEXT("Xiuxian", "DeadLog2", "寿元将尽，道途暂止。"),
	});
}

void UXiuxianIdleBehaviorComponent::EmitRandomLogForState(EActionState State)
{
	const TArray<FText>* Pool = LogMessagePools.Find(State);
	if (!Pool || Pool->Num() == 0)
	{
		return;
	}

	const int32 Index = FMath::RandRange(0, Pool->Num() - 1);
	BroadcastLog((*Pool)[Index]);
}

void UXiuxianIdleBehaviorComponent::BroadcastLog(const FText& Message)
{
	OnGameplayLogAdded.Broadcast(Message);
}

UActionComponent* UXiuxianIdleBehaviorComponent::GetActionComponent() const
{
	return CachedAction.Get();
}

UCharacterStatsComponent* UXiuxianIdleBehaviorComponent::GetStatsComponent() const
{
	return CachedStats.Get();
}
