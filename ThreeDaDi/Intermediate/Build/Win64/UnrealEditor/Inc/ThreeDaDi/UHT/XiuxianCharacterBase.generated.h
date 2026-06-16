// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/XiuxianCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActionComponent;
class UCharacterStatsComponent;
class UXiuxianIdleBehaviorComponent;
#ifdef THREEDADI_XiuxianCharacterBase_generated_h
#error "XiuxianCharacterBase.generated.h already included, missing '#pragma once' in XiuxianCharacterBase.h"
#endif
#define THREEDADI_XiuxianCharacterBase_generated_h

#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIdleBehaviorComponent); \
	DECLARE_FUNCTION(execGetStatsComponent); \
	DECLARE_FUNCTION(execGetActionComponent);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXiuxianCharacterBase(); \
	friend struct Z_Construct_UClass_AXiuxianCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AXiuxianCharacterBase, APaperZDCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThreeDaDi"), NO_API) \
	DECLARE_SERIALIZER(AXiuxianCharacterBase)


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AXiuxianCharacterBase(AXiuxianCharacterBase&&); \
	AXiuxianCharacterBase(const AXiuxianCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXiuxianCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXiuxianCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXiuxianCharacterBase) \
	NO_API virtual ~AXiuxianCharacterBase();


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_39_PROLOG
#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THREEDADI_API UClass* StaticClass<class AXiuxianCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
