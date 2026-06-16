// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/XiuxianMainHUDWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActionState : uint8;
#ifdef THREEDADI_XiuxianMainHUDWidget_generated_h
#error "XiuxianMainHUDWidget.generated.h already included, missing '#pragma once' in XiuxianMainHUDWidget.h"
#endif
#define THREEDADI_XiuxianMainHUDWidget_generated_h

#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleActionStateChanged); \
	DECLARE_FUNCTION(execHandleGameplayLogAdded); \
	DECLARE_FUNCTION(execHandleLifespanChanged); \
	DECLARE_FUNCTION(execHandleLevelChanged); \
	DECLARE_FUNCTION(execHandleExpChanged); \
	DECLARE_FUNCTION(execHandleHealthChanged); \
	DECLARE_FUNCTION(execOnFightButtonClicked); \
	DECLARE_FUNCTION(execOnExploreButtonClicked); \
	DECLARE_FUNCTION(execOnMeditateButtonClicked); \
	DECLARE_FUNCTION(execOnIdleButtonClicked); \
	DECLARE_FUNCTION(execRequestSetActionState);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXiuxianMainHUDWidget(); \
	friend struct Z_Construct_UClass_UXiuxianMainHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UXiuxianMainHUDWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ThreeDaDi"), NO_API) \
	DECLARE_SERIALIZER(UXiuxianMainHUDWidget)


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXiuxianMainHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UXiuxianMainHUDWidget(UXiuxianMainHUDWidget&&); \
	UXiuxianMainHUDWidget(const UXiuxianMainHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXiuxianMainHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXiuxianMainHUDWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXiuxianMainHUDWidget) \
	NO_API virtual ~UXiuxianMainHUDWidget();


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_44_PROLOG
#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THREEDADI_API UClass* StaticClass<class UXiuxianMainHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
