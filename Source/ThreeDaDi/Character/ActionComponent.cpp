// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActionComponent.h"

UActionComponent::UActionComponent()
{
	PrimaryComponentTick.bCanEverTick = false; // 无每帧逻辑，不 Tick
}

void UActionComponent::SetActionState(EActionState NewState)
{
	// 相同状态不重复广播，避免 UI / 动画重复刷新
	if (CurrentActionState == NewState)
	{
		return;
	}

	const EActionState OldState = CurrentActionState;
	CurrentActionState = NewState;

	OnActionStateChanged.Broadcast(OldState, NewState);
}
