// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/XiuxianIdlePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AXiuxianCharacterBase;
#ifdef THREEDADI_XiuxianIdlePlayerController_generated_h
#error "XiuxianIdlePlayerController.generated.h already included, missing '#pragma once' in XiuxianIdlePlayerController.h"
#endif
#define THREEDADI_XiuxianIdlePlayerController_generated_h

#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProjectMouseToWorldPlane); \
	DECLARE_FUNCTION(execGetMouseWorldPositionOnPlane); \
	DECLARE_FUNCTION(execCreateMainHUD); \
	DECLARE_FUNCTION(execGetProtagonistCharacter);


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXiuxianIdlePlayerController(); \
	friend struct Z_Construct_UClass_AXiuxianIdlePlayerController_Statics; \
public: \
	DECLARE_CLASS(AXiuxianIdlePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThreeDaDi"), NO_API) \
	DECLARE_SERIALIZER(AXiuxianIdlePlayerController)


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AXiuxianIdlePlayerController(AXiuxianIdlePlayerController&&); \
	AXiuxianIdlePlayerController(const AXiuxianIdlePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXiuxianIdlePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXiuxianIdlePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AXiuxianIdlePlayerController) \
	NO_API virtual ~AXiuxianIdlePlayerController();


#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_30_PROLOG
#define FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THREEDADI_API UClass* StaticClass<class AXiuxianIdlePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
