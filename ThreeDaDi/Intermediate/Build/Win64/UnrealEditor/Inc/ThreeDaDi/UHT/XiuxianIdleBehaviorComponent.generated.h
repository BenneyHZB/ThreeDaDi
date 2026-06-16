// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/XiuxianIdleBehaviorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActionState : uint8;
#ifdef THREEDADI_XiuxianIdleBehaviorComponent_generated_h
#error "XiuxianIdleBehaviorComponent.generated.h already included, missing '#pragma once' in XiuxianIdleBehaviorComponent.h"
#endif
#define THREEDADI_XiuxianIdleBehaviorComponent_generated_h

#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_14_DELEGATE \
THREEDADI_API void FOnGameplayLogAdded_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayLogAdded, const FText& LogMessage);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleActionStateChanged);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXiuxianIdleBehaviorComponent(); \
	friend struct Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UXiuxianIdleBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThreeDaDi"), NO_API) \
	DECLARE_SERIALIZER(UXiuxianIdleBehaviorComponent)


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UXiuxianIdleBehaviorComponent(UXiuxianIdleBehaviorComponent&&); \
	UXiuxianIdleBehaviorComponent(const UXiuxianIdleBehaviorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXiuxianIdleBehaviorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXiuxianIdleBehaviorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXiuxianIdleBehaviorComponent) \
	NO_API virtual ~UXiuxianIdleBehaviorComponent();


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_31_PROLOG
#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THREEDADI_API UClass* StaticClass<class UXiuxianIdleBehaviorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
