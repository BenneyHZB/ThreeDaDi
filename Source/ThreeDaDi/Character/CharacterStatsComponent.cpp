// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharacterStatsComponent.h"

UCharacterStatsComponent::UCharacterStatsComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCharacterStatsComponent::SetHealth(float NewHealth)
{
	const float ClampedHealth = FMath::Clamp(NewHealth, 0.f, MaxHealth);
	if (FMath::IsNearlyEqual(Health, ClampedHealth))
	{
		return;
	}

	Health = ClampedHealth;
	BroadcastHealthChanged();
}

void UCharacterStatsComponent::SetMaxHealth(float NewMaxHealth)
{
	const float ClampedMax = FMath::Max(NewMaxHealth, 1.f);
	if (FMath::IsNearlyEqual(MaxHealth, ClampedMax))
	{
		return;
	}

	MaxHealth = ClampedMax;
	Health = FMath::Clamp(Health, 0.f, MaxHealth);
	BroadcastHealthChanged();
}

void UCharacterStatsComponent::SetExp(float NewExp)
{
	const float ClampedExp = FMath::Clamp(NewExp, 0.f, MaxExp);
	if (FMath::IsNearlyEqual(Exp, ClampedExp))
	{
		return;
	}

	Exp = ClampedExp;
	BroadcastExpChanged();
}

void UCharacterStatsComponent::SetMaxExp(float NewMaxExp)
{
	const float ClampedMax = FMath::Max(NewMaxExp, 1.f);
	if (FMath::IsNearlyEqual(MaxExp, ClampedMax))
	{
		return;
	}

	MaxExp = ClampedMax;
	Exp = FMath::Clamp(Exp, 0.f, MaxExp);
	BroadcastExpChanged();
}

void UCharacterStatsComponent::SetLevel(int32 NewLevel)
{
	const int32 ClampedLevel = FMath::Max(NewLevel, 1);
	if (Level == ClampedLevel)
	{
		return;
	}

	Level = ClampedLevel;
	BroadcastLevelChanged();
}

void UCharacterStatsComponent::SetLifespan(float NewLifespan)
{
	const float Clamped = FMath::Clamp(NewLifespan, 0.f, MaxLifespan);
	if (FMath::IsNearlyEqual(Lifespan, Clamped))
	{
		return;
	}

	Lifespan = Clamped;
	BroadcastLifespanChanged();
}

void UCharacterStatsComponent::SetMaxLifespan(float NewMaxLifespan)
{
	const float ClampedMax = FMath::Max(NewMaxLifespan, 1.f);
	if (FMath::IsNearlyEqual(MaxLifespan, ClampedMax))
	{
		return;
	}

	MaxLifespan = ClampedMax;
	Lifespan = FMath::Clamp(Lifespan, 0.f, MaxLifespan);
	BroadcastLifespanChanged();
}

void UCharacterStatsComponent::AddExp(float Amount)
{
	if (Amount <= 0.f)
	{
		return;
	}

	Exp += Amount;

	// 满经验升级，可连续升多级
	while (Exp >= MaxExp)
	{
		Exp -= MaxExp;
		Level = FMath::Max(Level + 1, 1);
		MaxExp = FMath::Max(MaxExp * LevelUpMaxExpMultiplier, 1.f);
		BroadcastLevelChanged();
	}

	BroadcastExpChanged();
}

void UCharacterStatsComponent::ApplyDamage(float Amount)
{
	if (Amount <= 0.f)
	{
		return;
	}

	SetHealth(Health - Amount);
}

void UCharacterStatsComponent::AddLifespan(float Amount)
{
	if (Amount <= 0.f)
	{
		return;
	}

	SetLifespan(Lifespan + Amount);
}

void UCharacterStatsComponent::BroadcastHealthChanged()
{
	OnHealthChanged.Broadcast(Health, MaxHealth);
}

void UCharacterStatsComponent::BroadcastExpChanged()
{
	OnExpChanged.Broadcast(Exp, MaxExp);
}

void UCharacterStatsComponent::BroadcastLevelChanged()
{
	OnLevelChanged.Broadcast(Level);
}

void UCharacterStatsComponent::BroadcastLifespanChanged()
{
	OnLifespanChanged.Broadcast(Lifespan, MaxLifespan);
}
