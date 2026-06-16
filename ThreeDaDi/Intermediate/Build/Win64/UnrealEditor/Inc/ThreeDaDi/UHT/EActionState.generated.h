// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/EActionState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THREEDADI_EActionState_generated_h
#error "EActionState.generated.h already included, missing '#pragma once' in EActionState.h"
#endif
#define THREEDADI_EActionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_EActionState_h


#define FOREACH_ENUM_EACTIONSTATE(op) \
	op(EActionState::Idle) \
	op(EActionState::Meditating) \
	op(EActionState::Exploring) \
	op(EActionState::Fighting) \
	op(EActionState::Dead) 

enum class EActionState : uint8;
template<> struct TIsUEnumClass<EActionState> { enum { Value = true }; };
template<> THREEDADI_API UEnum* StaticEnum<EActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
