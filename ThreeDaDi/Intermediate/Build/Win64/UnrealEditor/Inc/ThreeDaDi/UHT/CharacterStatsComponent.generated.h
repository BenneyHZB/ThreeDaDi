// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterStatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THREEDADI_CharacterStatsComponent_generated_h
#error "CharacterStatsComponent.generated.h already included, missing '#pragma once' in CharacterStatsComponent.h"
#endif
#define THREEDADI_CharacterStatsComponent_generated_h

#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_10_DELEGATE \
THREEDADI_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth, float MaxHealth);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_13_DELEGATE \
THREEDADI_API void FOnExpChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExpChanged, float NewExp, float MaxExp);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_16_DELEGATE \
THREEDADI_API void FOnLevelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLevelChanged, int32 NewLevel);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_19_DELEGATE \
THREEDADI_API void FOnLifespanChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLifespanChanged, float NewLifespan, float MaxLifespan);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddLifespan); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execAddExp); \
	DECLARE_FUNCTION(execSetMaxLifespan); \
	DECLARE_FUNCTION(execSetLifespan); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execSetMaxExp); \
	DECLARE_FUNCTION(execSetExp); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execGetMaxLifespan); \
	DECLARE_FUNCTION(execGetLifespan); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execGetMaxExp); \
	DECLARE_FUNCTION(execGetExp); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterStatsComponent(); \
	friend struct Z_Construct_UClass_UCharacterStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThreeDaDi"), NO_API) \
	DECLARE_SERIALIZER(UCharacterStatsComponent)


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterStatsComponent(UCharacterStatsComponent&&); \
	UCharacterStatsComponent(const UCharacterStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterStatsComponent) \
	NO_API virtual ~UCharacterStatsComponent();


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_29_PROLOG
#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THREEDADI_API UClass* StaticClass<class UCharacterStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
