// Copyright Epic Games, Inc. All Rights Reserved.

#include "XiuxianPaperZDAnimInstance.h"
#include "ActionComponent.h"
#include "XiuxianCharacterBase.h"

UXiuxianPaperZDAnimInstance::UXiuxianPaperZDAnimInstance()
{
	// PaperZD 父类已在构造函数里设好默认值，此处无需额外初始化
}

void UXiuxianPaperZDAnimInstance::OnInit_Implementation()
{
	Super::OnInit_Implementation();

	// Owner 与 ActionComponent 此时应已就绪（PaperZD 在 Init 末尾调用 OnInit）
	BindToActionComponent();
}

void UXiuxianPaperZDAnimInstance::OnTick_Implementation(float DeltaTime)
{
	Super::OnTick_Implementation(DeltaTime);

	if (!CachedActionComponent.IsValid())
	{
		// 极少数情况下 Owner 在 OnInit 时还未挂上 ActionComponent，此处重试绑定
		BindToActionComponent();
		return;
	}

	// 兜底同步：防止将来有人绕过 SetActionState 直接改组件内部（正常路径走委托即可）
	SyncActionStateFromComponent();
}

void UXiuxianPaperZDAnimInstance::BeginDestroy()
{
	if (UActionComponent* ActionComp = CachedActionComponent.Get())
	{
		ActionComp->OnActionStateChanged.RemoveDynamic(this, &UXiuxianPaperZDAnimInstance::HandleActionStateChanged);
	}

	CachedActionComponent.Reset();
	Super::BeginDestroy();
}

void UXiuxianPaperZDAnimInstance::BindToActionComponent()
{
	// 先解绑旧组件，支持重复绑定 / Owner 切换
	if (UActionComponent* Previous = CachedActionComponent.Get())
	{
		Previous->OnActionStateChanged.RemoveDynamic(this, &UXiuxianPaperZDAnimInstance::HandleActionStateChanged);
	}

	CachedActionComponent.Reset();

	AXiuxianCharacterBase* Character = Cast<AXiuxianCharacterBase>(GetOwningActor());
	if (!Character)
	{
		ActionState = EActionState::Idle;
		return;
	}

	UActionComponent* ActionComp = Character->GetActionComponent();
	if (!ActionComp)
	{
		ActionState = EActionState::Idle;
		return;
	}

	CachedActionComponent = ActionComp;
	ActionComp->OnActionStateChanged.AddDynamic(this, &UXiuxianPaperZDAnimInstance::HandleActionStateChanged);

	SyncActionStateFromComponent();
}

void UXiuxianPaperZDAnimInstance::SyncActionStateFromComponent()
{
	if (UActionComponent* ActionComp = CachedActionComponent.Get())
	{
		ActionState = ActionComp->GetActionState();
	}
}

void UXiuxianPaperZDAnimInstance::HandleActionStateChanged(EActionState OldState, EActionState NewState)
{
	// 委托携带 NewState，直接写入；OldState 预留给将来做混合/过渡
	ActionState = NewState;
}
