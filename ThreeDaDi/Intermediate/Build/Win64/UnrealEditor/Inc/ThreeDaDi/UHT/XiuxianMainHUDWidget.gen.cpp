// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/UI/XiuxianMainHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXiuxianMainHUDWidget() {}

// Begin Cross Module References
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianCharacterBase_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UCharacterStatsComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianMainHUDWidget();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianMainHUDWidget_NoRegister();
THREEDADI_API UEnum* Z_Construct_UEnum_ThreeDaDi_EActionState();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Class UXiuxianMainHUDWidget Function HandleActionStateChanged
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics
{
	struct XiuxianMainHUDWidget_eventHandleActionStateChanged_Parms
	{
		EActionState OldState;
		EActionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleActionStateChanged_Parms, OldState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleActionStateChanged_Parms, NewState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_OldState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_OldState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "HandleActionStateChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::XiuxianMainHUDWidget_eventHandleActionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::XiuxianMainHUDWidget_eventHandleActionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execHandleActionStateChanged)
{
	P_GET_ENUM(EActionState,Z_Param_OldState);
	P_GET_ENUM(EActionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActionStateChanged(EActionState(Z_Param_OldState),EActionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function HandleActionStateChanged

// Begin Class UXiuxianMainHUDWidget Function HandleExpChanged
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics
{
	struct XiuxianMainHUDWidget_eventHandleExpChanged_Parms
	{
		float NewExp;
		float MaxExp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::NewProp_NewExp = { "NewExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleExpChanged_Parms, NewExp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::NewProp_MaxExp = { "MaxExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleExpChanged_Parms, MaxExp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::NewProp_NewExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::NewProp_MaxExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "HandleExpChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::XiuxianMainHUDWidget_eventHandleExpChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::XiuxianMainHUDWidget_eventHandleExpChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execHandleExpChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewExp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxExp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleExpChanged(Z_Param_NewExp,Z_Param_MaxExp);
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function HandleExpChanged

// Begin Class UXiuxianMainHUDWidget Function HandleGameplayLogAdded
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics
{
	struct XiuxianMainHUDWidget_eventHandleGameplayLogAdded_Parms
	{
		FText LogMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LogMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::NewProp_LogMessage = { "LogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleGameplayLogAdded_Parms, LogMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::NewProp_LogMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "HandleGameplayLogAdded", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::XiuxianMainHUDWidget_eventHandleGameplayLogAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::XiuxianMainHUDWidget_eventHandleGameplayLogAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execHandleGameplayLogAdded)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_LogMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGameplayLogAdded(Z_Param_LogMessage);
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function HandleGameplayLogAdded

// Begin Class UXiuxianMainHUDWidget Function HandleHealthChanged
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics
{
	struct XiuxianMainHUDWidget_eventHandleHealthChanged_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- \xe7\xbb\x84\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\xe5\x9b\x9e\xe8\xb0\x83 ----\n" },
#endif
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- \xe7\xbb\x84\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\xe5\x9b\x9e\xe8\xb0\x83 ----" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "HandleHealthChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::XiuxianMainHUDWidget_eventHandleHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::XiuxianMainHUDWidget_eventHandleHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execHandleHealthChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealthChanged(Z_Param_NewHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function HandleHealthChanged

// Begin Class UXiuxianMainHUDWidget Function HandleLevelChanged
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics
{
	struct XiuxianMainHUDWidget_eventHandleLevelChanged_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleLevelChanged_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "HandleLevelChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::XiuxianMainHUDWidget_eventHandleLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::XiuxianMainHUDWidget_eventHandleLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execHandleLevelChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLevelChanged(Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function HandleLevelChanged

// Begin Class UXiuxianMainHUDWidget Function HandleLifespanChanged
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics
{
	struct XiuxianMainHUDWidget_eventHandleLifespanChanged_Parms
	{
		float NewLifespan;
		float MaxLifespan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLifespan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifespan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::NewProp_NewLifespan = { "NewLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleLifespanChanged_Parms, NewLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::NewProp_MaxLifespan = { "MaxLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventHandleLifespanChanged_Parms, MaxLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::NewProp_NewLifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::NewProp_MaxLifespan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "HandleLifespanChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::XiuxianMainHUDWidget_eventHandleLifespanChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::XiuxianMainHUDWidget_eventHandleLifespanChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execHandleLifespanChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLifespan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLifespan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLifespanChanged(Z_Param_NewLifespan,Z_Param_MaxLifespan);
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function HandleLifespanChanged

// Begin Class UXiuxianMainHUDWidget Function OnExploreButtonClicked
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|UI" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "OnExploreButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execOnExploreButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExploreButtonClicked();
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function OnExploreButtonClicked

// Begin Class UXiuxianMainHUDWidget Function OnFightButtonClicked
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|UI" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "OnFightButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execOnFightButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFightButtonClicked();
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function OnFightButtonClicked

// Begin Class UXiuxianMainHUDWidget Function OnIdleButtonClicked
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbe\x9b\xe6\x8c\x89\xe9\x92\xae\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe4\xbe\xbf\xe6\x8d\xb7\xe5\x85\xa5\xe5\x8f\xa3\xef\xbc\x88\xe4\xb9\x9f\xe5\x8f\xaf\xe5\x9c\xa8 WBP \xe9\x87\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb0\x83 RequestSetActionState\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9b\xe6\x8c\x89\xe9\x92\xae\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe4\xbe\xbf\xe6\x8d\xb7\xe5\x85\xa5\xe5\x8f\xa3\xef\xbc\x88\xe4\xb9\x9f\xe5\x8f\xaf\xe5\x9c\xa8 WBP \xe9\x87\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb0\x83 RequestSetActionState\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "OnIdleButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execOnIdleButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnIdleButtonClicked();
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function OnIdleButtonClicked

// Begin Class UXiuxianMainHUDWidget Function OnMeditateButtonClicked
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|UI" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "OnMeditateButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execOnMeditateButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeditateButtonClicked();
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function OnMeditateButtonClicked

// Begin Class UXiuxianMainHUDWidget Function RequestSetActionState
struct Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics
{
	struct XiuxianMainHUDWidget_eventRequestSetActionState_Parms
	{
		EActionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UI \xe6\x8c\x89\xe9\x92\xae / \xe8\x93\x9d\xe5\x9b\xbe\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x9a\xe8\xaf\xb7\xe6\xb1\x82\xe4\xb8\xbb\xe8\xa7\x92\xe5\x88\x87\xe6\x8d\xa2\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xe6\x8c\x89\xe9\x92\xae / \xe8\x93\x9d\xe5\x9b\xbe\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x9a\xe8\xaf\xb7\xe6\xb1\x82\xe4\xb8\xbb\xe8\xa7\x92\xe5\x88\x87\xe6\x8d\xa2\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianMainHUDWidget_eventRequestSetActionState_Parms, NewState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianMainHUDWidget, nullptr, "RequestSetActionState", nullptr, nullptr, Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::XiuxianMainHUDWidget_eventRequestSetActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::XiuxianMainHUDWidget_eventRequestSetActionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianMainHUDWidget::execRequestSetActionState)
{
	P_GET_ENUM(EActionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSetActionState(EActionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UXiuxianMainHUDWidget Function RequestSetActionState

// Begin Class UXiuxianMainHUDWidget
void UXiuxianMainHUDWidget::StaticRegisterNativesUXiuxianMainHUDWidget()
{
	UClass* Class = UXiuxianMainHUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleActionStateChanged", &UXiuxianMainHUDWidget::execHandleActionStateChanged },
		{ "HandleExpChanged", &UXiuxianMainHUDWidget::execHandleExpChanged },
		{ "HandleGameplayLogAdded", &UXiuxianMainHUDWidget::execHandleGameplayLogAdded },
		{ "HandleHealthChanged", &UXiuxianMainHUDWidget::execHandleHealthChanged },
		{ "HandleLevelChanged", &UXiuxianMainHUDWidget::execHandleLevelChanged },
		{ "HandleLifespanChanged", &UXiuxianMainHUDWidget::execHandleLifespanChanged },
		{ "OnExploreButtonClicked", &UXiuxianMainHUDWidget::execOnExploreButtonClicked },
		{ "OnFightButtonClicked", &UXiuxianMainHUDWidget::execOnFightButtonClicked },
		{ "OnIdleButtonClicked", &UXiuxianMainHUDWidget::execOnIdleButtonClicked },
		{ "OnMeditateButtonClicked", &UXiuxianMainHUDWidget::execOnMeditateButtonClicked },
		{ "RequestSetActionState", &UXiuxianMainHUDWidget::execRequestSetActionState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXiuxianMainHUDWidget);
UClass* Z_Construct_UClass_UXiuxianMainHUDWidget_NoRegister()
{
	return UXiuxianMainHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UXiuxianMainHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * UXiuxianMainHUDWidget \xe2\x80\x94\xe2\x80\x94 \xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2 HUD \xe7\x9a\x84 C++ \xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x88\xe4\xbe\x9b WBP_MainHUD \xe7\xbb\xa7\xe6\x89\xbf\xef\xbc\x89\n * ============================================================================\n *\n * \xe3\x80\x90WBP \xe5\x91\xbd\xe5\x90\x8d\xe7\xba\xa6\xe5\xae\x9a \xe2\x80\x94\xe2\x80\x94 \xe6\x8e\xa7\xe4\xbb\xb6\xe5\x90\x8d\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x8e\xe4\xb8\x8b\xe5\x88\x97 BindWidget \xe4\xb8\x80\xe8\x87\xb4\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x91\xe5\xae\x9a\xe5\xa4\xb1\xe8\xb4\xa5\xe3\x80\x91\n *   ProgressBar_Health      \xe8\xa1\x80\xe6\x9d\xa1\n *   ProgressBar_Experience  \xe7\xbb\x8f\xe9\xaa\x8c\xe6\x9d\xa1\n *   ProgressBar_Lifespan    \xe5\xaf\xbf\xe5\x85\x83\xe6\x9d\xa1\n *   TextBlock_ActionState   \xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe6\x96\x87\xe5\xad\x97\n *   TextBlock_Level         \xe7\xad\x89\xe7\xba\xa7\xe6\x96\x87\xe5\xad\x97\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x89\n *   TextBlock_Log           \xe8\xa1\x8c\xe4\xb8\xba\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x88\xe6\xbb\x9a\xe5\x8a\xa8\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x89\n *   Button_Idle / Button_Meditate / Button_Explore / Button_Fight  \xe7\x8a\xb6\xe6\x80\x81\xe5\x88\x87\xe6\x8d\xa2\xe6\x8c\x89\xe9\x92\xae\n *\n * \xe3\x80\x90\xe6\x95\xb0\xe6\x8d\xae\xe6\xb5\x81\xe3\x80\x91\n *   \xe6\x8c\x89\xe9\x92\xae\xe7\x82\xb9\xe5\x87\xbb \xe2\x86\x92 RequestSetActionState \xe2\x86\x92 \xe4\xb8\xbb\xe8\xa7\x92 ActionComponent\n *   ActionComponent / StatsComponent \xe5\xa7\x94\xe6\x89\x98 \xe2\x86\x92 RefreshXXX \xe2\x86\x92 \xe6\x9b\xb4\xe6\x96\xb0 UI\n *\n * \xe3\x80\x90\xe5\x92\x8c 3D \xe7\x9a\x84\xe5\xaf\xb9\xe7\x85\xa7\xe3\x80\x91\n *   \xe7\xad\x89\xe5\x90\x8c UUserWidget \xe5\x9f\xba\xe7\xb1\xbb + WBP_MainHUD \xe5\xad\x90\xe7\xb1\xbb\xef\xbc\x9b""C++ \xe7\xae\xa1\xe7\xbb\x91\xe5\xae\x9a\xe4\xb8\x8e\xe5\x88\xb7\xe6\x96\xb0\xef\xbc\x8cWBP \xe7\xae\xa1\xe5\xb8\x83\xe5\xb1\x80\xe7\xbe\x8e\xe6\x9c\xaf\xe3\x80\x82\n *\n * \xe3\x80\x90\xe4\xb8\xbb\xe8\xa7\x92\xe7\xbb\x91\xe5\xae\x9a\xe3\x80\x91\n *   \xe4\xbc\x98\xe5\x85\x88\xe8\xaf\xbb PlayerController::GetProtagonistCharacter()\xe3\x80\x82\n *   \xe8\x8b\xa5\xe5\xbd\x93\xe5\x89\x8d Pawn \xe4\xbb\x8d\xe6\x98\xaf Demo \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xef\xbc\x8c\xe8\xaf\xb7\xe5\x9c\xa8 PC \xe4\xb8\x8a\xe8\xae\xbe\xe7\xbd\xae ProtagonistOverride\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "UI/XiuxianMainHUDWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UXiuxianMainHUDWidget \xe2\x80\x94\xe2\x80\x94 \xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2 HUD \xe7\x9a\x84 C++ \xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x88\xe4\xbe\x9b WBP_MainHUD \xe7\xbb\xa7\xe6\x89\xbf\xef\xbc\x89\n\n\n\xe3\x80\x90WBP \xe5\x91\xbd\xe5\x90\x8d\xe7\xba\xa6\xe5\xae\x9a \xe2\x80\x94\xe2\x80\x94 \xe6\x8e\xa7\xe4\xbb\xb6\xe5\x90\x8d\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x8e\xe4\xb8\x8b\xe5\x88\x97 BindWidget \xe4\xb8\x80\xe8\x87\xb4\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x91\xe5\xae\x9a\xe5\xa4\xb1\xe8\xb4\xa5\xe3\x80\x91\n  ProgressBar_Health      \xe8\xa1\x80\xe6\x9d\xa1\n  ProgressBar_Experience  \xe7\xbb\x8f\xe9\xaa\x8c\xe6\x9d\xa1\n  ProgressBar_Lifespan    \xe5\xaf\xbf\xe5\x85\x83\xe6\x9d\xa1\n  TextBlock_ActionState   \xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe6\x96\x87\xe5\xad\x97\n  TextBlock_Level         \xe7\xad\x89\xe7\xba\xa7\xe6\x96\x87\xe5\xad\x97\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x89\n  TextBlock_Log           \xe8\xa1\x8c\xe4\xb8\xba\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x88\xe6\xbb\x9a\xe5\x8a\xa8\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x89\n  Button_Idle / Button_Meditate / Button_Explore / Button_Fight  \xe7\x8a\xb6\xe6\x80\x81\xe5\x88\x87\xe6\x8d\xa2\xe6\x8c\x89\xe9\x92\xae\n\n\xe3\x80\x90\xe6\x95\xb0\xe6\x8d\xae\xe6\xb5\x81\xe3\x80\x91\n  \xe6\x8c\x89\xe9\x92\xae\xe7\x82\xb9\xe5\x87\xbb \xe2\x86\x92 RequestSetActionState \xe2\x86\x92 \xe4\xb8\xbb\xe8\xa7\x92 ActionComponent\n  ActionComponent / StatsComponent \xe5\xa7\x94\xe6\x89\x98 \xe2\x86\x92 RefreshXXX \xe2\x86\x92 \xe6\x9b\xb4\xe6\x96\xb0 UI\n\n\xe3\x80\x90\xe5\x92\x8c 3D \xe7\x9a\x84\xe5\xaf\xb9\xe7\x85\xa7\xe3\x80\x91\n  \xe7\xad\x89\xe5\x90\x8c UUserWidget \xe5\x9f\xba\xe7\xb1\xbb + WBP_MainHUD \xe5\xad\x90\xe7\xb1\xbb\xef\xbc\x9b""C++ \xe7\xae\xa1\xe7\xbb\x91\xe5\xae\x9a\xe4\xb8\x8e\xe5\x88\xb7\xe6\x96\xb0\xef\xbc\x8cWBP \xe7\xae\xa1\xe5\xb8\x83\xe5\xb1\x80\xe7\xbe\x8e\xe6\x9c\xaf\xe3\x80\x82\n\n\xe3\x80\x90\xe4\xb8\xbb\xe8\xa7\x92\xe7\xbb\x91\xe5\xae\x9a\xe3\x80\x91\n  \xe4\xbc\x98\xe5\x85\x88\xe8\xaf\xbb PlayerController::GetProtagonistCharacter()\xe3\x80\x82\n  \xe8\x8b\xa5\xe5\xbd\x93\xe5\x89\x8d Pawn \xe4\xbb\x8d\xe6\x98\xaf Demo \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xef\xbc\x8c\xe8\xaf\xb7\xe5\x9c\xa8 PC \xe4\xb8\x8a\xe8\xae\xbe\xe7\xbd\xae ProtagonistOverride\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Health_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- BindWidget\xef\xbc\x9aWBP \xe9\x87\x8c\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x90\x8d\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x80\xe8\x87\xb4 ----\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- BindWidget\xef\xbc\x9aWBP \xe9\x87\x8c\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x90\x8d\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x80\xe8\x87\xb4 ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Experience_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Lifespan_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ActionState_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Level_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Log_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Idle_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Meditate_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Explore_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Fight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLogLines_MetaData[] = {
		{ "Category", "Xiuxian|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x97\xa5\xe5\xbf\x97\xe5\x8c\xba\xe6\x9c\x80\xe5\xa4\x9a\xe4\xbf\x9d\xe7\x95\x99\xe8\xa1\x8c\xe6\x95\xb0\xef\xbc\x8c\xe8\xb6\x85\xe5\x87\xba\xe5\x88\xa0\xe6\x9c\x80\xe6\x97\xa7\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\xa5\xe5\xbf\x97\xe5\x8c\xba\xe6\x9c\x80\xe5\xa4\x9a\xe4\xbf\x9d\xe7\x95\x99\xe8\xa1\x8c\xe6\x95\xb0\xef\xbc\x8c\xe8\xb6\x85\xe5\x87\xba\xe5\x88\xa0\xe6\x9c\x80\xe6\x97\xa7\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedProtagonist_MetaData[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStats_MetaData[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAction_MetaData[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBehavior_MetaData[] = {
		{ "ModuleRelativePath", "UI/XiuxianMainHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Experience;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Lifespan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ActionState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Log;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Idle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Meditate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Explore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Fight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLogLines;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedProtagonist;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedStats;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedAction;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleActionStateChanged, "HandleActionStateChanged" }, // 2028152321
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleExpChanged, "HandleExpChanged" }, // 3606188590
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleGameplayLogAdded, "HandleGameplayLogAdded" }, // 2797902142
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleHealthChanged, "HandleHealthChanged" }, // 2745792292
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLevelChanged, "HandleLevelChanged" }, // 409785252
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_HandleLifespanChanged, "HandleLifespanChanged" }, // 4235438498
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_OnExploreButtonClicked, "OnExploreButtonClicked" }, // 359049101
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_OnFightButtonClicked, "OnFightButtonClicked" }, // 992731357
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_OnIdleButtonClicked, "OnIdleButtonClicked" }, // 205377254
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_OnMeditateButtonClicked, "OnMeditateButtonClicked" }, // 181478672
		{ &Z_Construct_UFunction_UXiuxianMainHUDWidget_RequestSetActionState, "RequestSetActionState" }, // 1850140943
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXiuxianMainHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_ProgressBar_Health = { "ProgressBar_Health", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, ProgressBar_Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Health_MetaData), NewProp_ProgressBar_Health_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_ProgressBar_Experience = { "ProgressBar_Experience", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, ProgressBar_Experience), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Experience_MetaData), NewProp_ProgressBar_Experience_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_ProgressBar_Lifespan = { "ProgressBar_Lifespan", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, ProgressBar_Lifespan), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Lifespan_MetaData), NewProp_ProgressBar_Lifespan_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_TextBlock_ActionState = { "TextBlock_ActionState", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, TextBlock_ActionState), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_ActionState_MetaData), NewProp_TextBlock_ActionState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_TextBlock_Level = { "TextBlock_Level", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, TextBlock_Level), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Level_MetaData), NewProp_TextBlock_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_TextBlock_Log = { "TextBlock_Log", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, TextBlock_Log), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Log_MetaData), NewProp_TextBlock_Log_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Idle = { "Button_Idle", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, Button_Idle), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Idle_MetaData), NewProp_Button_Idle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Meditate = { "Button_Meditate", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, Button_Meditate), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Meditate_MetaData), NewProp_Button_Meditate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Explore = { "Button_Explore", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, Button_Explore), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Explore_MetaData), NewProp_Button_Explore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Fight = { "Button_Fight", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, Button_Fight), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Fight_MetaData), NewProp_Button_Fight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_MaxLogLines = { "MaxLogLines", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, MaxLogLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLogLines_MetaData), NewProp_MaxLogLines_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedProtagonist = { "CachedProtagonist", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, CachedProtagonist), Z_Construct_UClass_AXiuxianCharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedProtagonist_MetaData), NewProp_CachedProtagonist_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedStats = { "CachedStats", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, CachedStats), Z_Construct_UClass_UCharacterStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStats_MetaData), NewProp_CachedStats_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedAction = { "CachedAction", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, CachedAction), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAction_MetaData), NewProp_CachedAction_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedBehavior = { "CachedBehavior", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianMainHUDWidget, CachedBehavior), Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBehavior_MetaData), NewProp_CachedBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_ProgressBar_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_ProgressBar_Experience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_ProgressBar_Lifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_TextBlock_ActionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_TextBlock_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_TextBlock_Log,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Idle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Meditate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Explore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_Button_Fight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_MaxLogLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedProtagonist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::NewProp_CachedBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::ClassParams = {
	&UXiuxianMainHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXiuxianMainHUDWidget()
{
	if (!Z_Registration_Info_UClass_UXiuxianMainHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXiuxianMainHUDWidget.OuterSingleton, Z_Construct_UClass_UXiuxianMainHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXiuxianMainHUDWidget.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<UXiuxianMainHUDWidget>()
{
	return UXiuxianMainHUDWidget::StaticClass();
}
UXiuxianMainHUDWidget::UXiuxianMainHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXiuxianMainHUDWidget);
UXiuxianMainHUDWidget::~UXiuxianMainHUDWidget() {}
// End Class UXiuxianMainHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXiuxianMainHUDWidget, UXiuxianMainHUDWidget::StaticClass, TEXT("UXiuxianMainHUDWidget"), &Z_Registration_Info_UClass_UXiuxianMainHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXiuxianMainHUDWidget), 1465206413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_2233797335(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_UI_XiuxianMainHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
