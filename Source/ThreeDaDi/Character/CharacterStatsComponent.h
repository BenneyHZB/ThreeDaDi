// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterStatsComponent.generated.h"

/** 血量变化时广播（NewHealth, MaxHealth）。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, NewHealth, float, MaxHealth);

/** 经验变化时广播（NewExp, MaxExp）。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExpChanged, float, NewExp, float, MaxExp);

/** 等级变化时广播（NewLevel）。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelChanged, int32, NewLevel);

/** 寿元变化时广播（NewLifespan, MaxLifespan）。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLifespanChanged, float, NewLifespan, float, MaxLifespan);

/**
 * ============================================================================
 * UCharacterStatsComponent —— 角色数值组件
 * ============================================================================
 *
 * 存储 Health / Exp / Level / Lifespan（寿元），变化时广播委托供 UI 刷新。
 * 玩法系统应调用 AddExp / ApplyDamage / AddLifespan，而不是直接改 UI。
 */
UCLASS(ClassGroup = (Custom), BlueprintType, meta = (BlueprintSpawnableComponent))
class THREEDADI_API UCharacterStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterStatsComponent();

	// ---- Getter ----

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	float GetHealth() const { return Health; }

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	float GetExp() const { return Exp; }

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	float GetMaxExp() const { return MaxExp; }

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	int32 GetLevel() const { return Level; }

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	float GetLifespan() const { return Lifespan; }

	UFUNCTION(BlueprintPure, Category = "Character|Stats")
	float GetMaxLifespan() const { return MaxLifespan; }

	// ---- Setter ----

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetHealth(float NewHealth);

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetMaxHealth(float NewMaxHealth);

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetExp(float NewExp);

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetMaxExp(float NewMaxExp);

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetLevel(int32 NewLevel);

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetLifespan(float NewLifespan);

	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void SetMaxLifespan(float NewMaxLifespan);

	/** 增加经验；满则升级并重置溢出部分。 */
	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void AddExp(float Amount);

	/** 扣血（不低于 0）。 */
	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void ApplyDamage(float Amount);

	/** 增加寿元（不超过 MaxLifespan）。 */
	UFUNCTION(BlueprintCallable, Category = "Character|Stats")
	void AddLifespan(float Amount);

	// ---- 委托 ----

	UPROPERTY(BlueprintAssignable, Category = "Character|Stats")
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Character|Stats")
	FOnExpChanged OnExpChanged;

	UPROPERTY(BlueprintAssignable, Category = "Character|Stats")
	FOnLevelChanged OnLevelChanged;

	UPROPERTY(BlueprintAssignable, Category = "Character|Stats")
	FOnLifespanChanged OnLifespanChanged;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	float Health = 100.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	float MaxHealth = 100.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	float Exp = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	float MaxExp = 100.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	int32 Level = 1;

	/** 寿元进度（0 ~ MaxLifespan），随时间缓慢增长。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	float Lifespan = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Stats", meta = (AllowPrivateAccess = "true"))
	float MaxLifespan = 100.f;

	void BroadcastHealthChanged();
	void BroadcastExpChanged();
	void BroadcastLevelChanged();
	void BroadcastLifespanChanged();

	/** 升级时 MaxExp 的倍率（可在子类或数据表替换）。 */
	UPROPERTY(EditDefaultsOnly, Category = "Character|Stats")
	float LevelUpMaxExpMultiplier = 1.25f;
};
