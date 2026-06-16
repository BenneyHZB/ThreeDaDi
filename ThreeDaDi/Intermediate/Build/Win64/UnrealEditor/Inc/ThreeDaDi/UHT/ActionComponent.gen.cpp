// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Character/ActionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THREEDADI_API UClass* Z_Construct_UClass_UActionComponent();
THREEDADI_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
THREEDADI_API UEnum* Z_Construct_UEnum_ThreeDaDi_EActionState();
THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Delegate FOnActionStateChanged
struct Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics
{
	struct _Script_ThreeDaDi_eventOnActionStateChanged_Parms
	{
		EActionState OldState;
		EActionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8a\xa8\xe6\x80\x81\xe5\xa4\x9a\xe6\x92\xad\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x9a\xe7\x8a\xb6\xe6\x80\x81\xe4\xbb\x8e OldState \xe5\x8f\x98\xe4\xb8\xba NewState \xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/ActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe6\x80\x81\xe5\xa4\x9a\xe6\x92\xad\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x9a\xe7\x8a\xb6\xe6\x80\x81\xe4\xbb\x8e OldState \xe5\x8f\x98\xe4\xb8\xba NewState \xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnActionStateChanged_Parms, OldState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnActionStateChanged_Parms, NewState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_OldState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_OldState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThreeDaDi, nullptr, "OnActionStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnActionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnActionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionStateChanged, EActionState OldState, EActionState NewState)
{
	struct _Script_ThreeDaDi_eventOnActionStateChanged_Parms
	{
		EActionState OldState;
		EActionState NewState;
	};
	_Script_ThreeDaDi_eventOnActionStateChanged_Parms Parms;
	Parms.OldState=OldState;
	Parms.NewState=NewState;
	OnActionStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActionStateChanged

// Begin Class UActionComponent Function GetActionState
struct Z_Construct_UFunction_UActionComponent_GetActionState_Statics
{
	struct ActionComponent_eventGetActionState_Parms
	{
		EActionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xaf\xbb\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe6\x97\xa0\xe5\x89\xaf\xe4\xbd\x9c\xe7\x94\xa8\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/ActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe6\x97\xa0\xe5\x89\xaf\xe4\xbd\x9c\xe7\x94\xa8\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionComponent_GetActionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionComponent_GetActionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionComponent_eventGetActionState_Parms, ReturnValue), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_GetActionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_GetActionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_GetActionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_GetActionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_GetActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "GetActionState", nullptr, nullptr, Z_Construct_UFunction_UActionComponent_GetActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_GetActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionComponent_GetActionState_Statics::ActionComponent_eventGetActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_GetActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionComponent_GetActionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionComponent_GetActionState_Statics::ActionComponent_eventGetActionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionComponent_GetActionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_GetActionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionComponent::execGetActionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EActionState*)Z_Param__Result=P_THIS->GetActionState();
	P_NATIVE_END;
}
// End Class UActionComponent Function GetActionState

// Begin Class UActionComponent Function SetActionState
struct Z_Construct_UFunction_UActionComponent_SetActionState_Statics
{
	struct ActionComponent_eventSetActionState_Parms
	{
		EActionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x86\x99\xe5\x85\xa5\xe6\x96\xb0\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x9b\xe8\x8b\xa5\xe4\xb8\x8e\xe5\xbd\x93\xe5\x89\x8d\xe7\x9b\xb8\xe5\x90\x8c\xe5\x88\x99\xe8\xb7\xb3\xe8\xbf\x87\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe6\x97\xa0\xe6\x84\x8f\xe4\xb9\x89\xe5\xb9\xbf\xe6\x92\xad\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/ActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5\xe6\x96\xb0\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x9b\xe8\x8b\xa5\xe4\xb8\x8e\xe5\xbd\x93\xe5\x89\x8d\xe7\x9b\xb8\xe5\x90\x8c\xe5\x88\x99\xe8\xb7\xb3\xe8\xbf\x87\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe6\x97\xa0\xe6\x84\x8f\xe4\xb9\x89\xe5\xb9\xbf\xe6\x92\xad\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionComponent_SetActionState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionComponent_SetActionState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionComponent_eventSetActionState_Parms, NewState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_SetActionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_SetActionState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_SetActionState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_SetActionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_SetActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "SetActionState", nullptr, nullptr, Z_Construct_UFunction_UActionComponent_SetActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_SetActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionComponent_SetActionState_Statics::ActionComponent_eventSetActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_SetActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionComponent_SetActionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionComponent_SetActionState_Statics::ActionComponent_eventSetActionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionComponent_SetActionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_SetActionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionComponent::execSetActionState)
{
	P_GET_ENUM(EActionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionState(EActionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UActionComponent Function SetActionState

// Begin Class UActionComponent
void UActionComponent::StaticRegisterNativesUActionComponent()
{
	UClass* Class = UActionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActionState", &UActionComponent::execGetActionState },
		{ "SetActionState", &UActionComponent::execSetActionState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionComponent);
UClass* Z_Construct_UClass_UActionComponent_NoRegister()
{
	return UActionComponent::StaticClass();
}
struct Z_Construct_UClass_UActionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * UActionComponent \xe2\x80\x94\xe2\x80\x94 \xe8\xa7\x92\xe8\x89\xb2\xe3\x80\x8c\xe8\xa1\x8c\xe5\x8a\xa8\xe3\x80\x8d\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x88\xe7\xba\xaf\xe6\xa1\x86\xe6\x9e\xb6\xef\xbc\x8c\xe6\x97\xa0\xe7\x8e\xa9\xe6\xb3\x95\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x89\n * ============================================================================\n *\n * \xe3\x80\x90\xe6\x9c\xac\xe7\xb1\xbb\xe8\x81\x8c\xe8\xb4\xa3\xe3\x80\x91\n *   1. \xe5\xad\x98\xe5\x82\xa8\xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x88""EActionState\xef\xbc\x89\n *   2. \xe6\x8f\x90\xe4\xbe\x9b SetActionState / GetActionState \xe4\xbe\x9b C++ \xe4\xb8\x8e\xe8\x93\x9d\xe5\x9b\xbe\xe8\xaf\xbb\xe5\x86\x99\n *   3. \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad OnActionStateChanged\xef\xbc\x8c\xe4\xbe\x9b UI\xe3\x80\x81\xe5\x8a\xa8\xe7\x94\xbb\xe3\x80\x81""AI \xe7\xad\x89\xe8\xae\xa2\xe9\x98\x85\n *\n * \xe3\x80\x90\xe5\x92\x8c 3D \xe9\xa1\xb9\xe7\x9b\xae\xe7\x9a\x84\xe7\xb1\xbb\xe6\xaf\x94\xe3\x80\x91\n *   \xe7\xb1\xbb\xe4\xbc\xbc\xe4\xb8\x80\xe4\xb8\xaa\xe6\x9e\x81\xe7\xae\x80\xe7\x9a\x84\xe3\x80\x8c\xe7\x8a\xb6\xe6\x80\x81\xe6\x8c\x81\xe6\x9c\x89\xe8\x80\x85 + \xe5\x8f\x98\xe6\x9b\xb4\xe9\x80\x9a\xe7\x9f\xa5\xe5\x99\xa8\xe3\x80\x8d\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab GAS \xe9\x87\x8c\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x81\xe5\x86\xb7\xe5\x8d\xb4\xe3\x80\x81\xe4\xbb\xa3\xe4\xbb\xb7\xe7\xad\x89\xe7\x8e\xa9\xe6\xb3\x95\xe3\x80\x82\n *   3D \xe9\x87\x8c\xe4\xbd\xa0\xe4\xb9\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe7\x94\xa8 Delegate \xe9\x80\x9a\xe7\x9f\xa5 UI \xe6\x8d\xa2\xe8\xa1\x80\xe6\x9d\xa1\xe6\xa0\xb7\xe5\xbc\x8f\xef\xbc\x9b\xe8\xbf\x99\xe9\x87\x8c\xe7\x94\xa8\xe5\x90\x8c\xe6\xa0\xb7\xe6\xa8\xa1\xe5\xbc\x8f\xe9\x80\x9a\xe7\x9f\xa5\xe3\x80\x8c\xe8\xa7\x92\xe8\x89\xb2\xe4\xbb\x8e Idle \xe5\x88\x87\xe5\x88\xb0 Fighting\xe3\x80\x8d\xe3\x80\x82\n *\n * \xe3\x80\x90\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x88\xe5\x88\xbb\xe6\x84\x8f\xe4\xb8\x8d\xe5\x81\x9a\xef\xbc\x89\xe3\x80\x91\n *   \xe4\xbf\xae\xe7\x82\xbc\xe4\xba\xa7\xe5\x87\xba\xe3\x80\x81\xe6\x8e\xa2\xe7\xb4\xa2\xe9\x9a\x8f\xe6\x9c\xba\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x81\xe6\x88\x98\xe6\x96\x97\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe6\xad\xbb\xe4\xba\xa1\xe5\x88\xa4\xe5\xae\x9a\xe7\xad\x89\xe7\x8e\xa9\xe6\xb3\x95\xe9\x80\xbb\xe8\xbe\x91 \xe2\x80\x94\xe2\x80\x94 \xe7\x94\xb1\xe5\x90\x8e\xe7\xbb\xad\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xb0\x83\xe7\x94\xa8 SetActionState \xe9\xa9\xb1\xe5\x8a\xa8\xe3\x80\x82\n *\n * \xe3\x80\x90""2D \xe6\x94\xbe\xe7\xbd\xae\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe5\x85\xb8\xe5\x9e\x8b\xe8\xae\xa2\xe9\x98\x85\xe6\x96\xb9\xef\xbc\x88\xe5\x90\x8e\xe7\xbb\xad\xef\xbc\x89\xe3\x80\x91\n *   - PaperZD AnimBP\xef\xbc\x9a\xe6\xa0\xb9\xe6\x8d\xae\xe7\x8a\xb6\xe6\x80\x81\xe5\x88\x87 Flipbook\n *   - UMG\xef\xbc\x9a\xe6\x98\xbe\xe7\xa4\xba\xe3\x80\x8c\xe4\xbf\xae\xe7\x82\xbc\xe4\xb8\xad / \xe6\x88\x98\xe6\x96\x97\xe4\xb8\xad\xe3\x80\x8d\n *   - AI Controller\xef\xbc\x9a\xe5\x86\xb3\xe5\xae\x9a\xe4\xbd\x95\xe6\x97\xb6 SetActionState(Exploring)\n */" },
#endif
		{ "IncludePath", "Character/ActionComponent.h" },
		{ "ModuleRelativePath", "Character/ActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UActionComponent \xe2\x80\x94\xe2\x80\x94 \xe8\xa7\x92\xe8\x89\xb2\xe3\x80\x8c\xe8\xa1\x8c\xe5\x8a\xa8\xe3\x80\x8d\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x88\xe7\xba\xaf\xe6\xa1\x86\xe6\x9e\xb6\xef\xbc\x8c\xe6\x97\xa0\xe7\x8e\xa9\xe6\xb3\x95\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x89\n\n\n\xe3\x80\x90\xe6\x9c\xac\xe7\xb1\xbb\xe8\x81\x8c\xe8\xb4\xa3\xe3\x80\x91\n  1. \xe5\xad\x98\xe5\x82\xa8\xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x88""EActionState\xef\xbc\x89\n  2. \xe6\x8f\x90\xe4\xbe\x9b SetActionState / GetActionState \xe4\xbe\x9b C++ \xe4\xb8\x8e\xe8\x93\x9d\xe5\x9b\xbe\xe8\xaf\xbb\xe5\x86\x99\n  3. \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad OnActionStateChanged\xef\xbc\x8c\xe4\xbe\x9b UI\xe3\x80\x81\xe5\x8a\xa8\xe7\x94\xbb\xe3\x80\x81""AI \xe7\xad\x89\xe8\xae\xa2\xe9\x98\x85\n\n\xe3\x80\x90\xe5\x92\x8c 3D \xe9\xa1\xb9\xe7\x9b\xae\xe7\x9a\x84\xe7\xb1\xbb\xe6\xaf\x94\xe3\x80\x91\n  \xe7\xb1\xbb\xe4\xbc\xbc\xe4\xb8\x80\xe4\xb8\xaa\xe6\x9e\x81\xe7\xae\x80\xe7\x9a\x84\xe3\x80\x8c\xe7\x8a\xb6\xe6\x80\x81\xe6\x8c\x81\xe6\x9c\x89\xe8\x80\x85 + \xe5\x8f\x98\xe6\x9b\xb4\xe9\x80\x9a\xe7\x9f\xa5\xe5\x99\xa8\xe3\x80\x8d\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab GAS \xe9\x87\x8c\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x81\xe5\x86\xb7\xe5\x8d\xb4\xe3\x80\x81\xe4\xbb\xa3\xe4\xbb\xb7\xe7\xad\x89\xe7\x8e\xa9\xe6\xb3\x95\xe3\x80\x82\n  3D \xe9\x87\x8c\xe4\xbd\xa0\xe4\xb9\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe7\x94\xa8 Delegate \xe9\x80\x9a\xe7\x9f\xa5 UI \xe6\x8d\xa2\xe8\xa1\x80\xe6\x9d\xa1\xe6\xa0\xb7\xe5\xbc\x8f\xef\xbc\x9b\xe8\xbf\x99\xe9\x87\x8c\xe7\x94\xa8\xe5\x90\x8c\xe6\xa0\xb7\xe6\xa8\xa1\xe5\xbc\x8f\xe9\x80\x9a\xe7\x9f\xa5\xe3\x80\x8c\xe8\xa7\x92\xe8\x89\xb2\xe4\xbb\x8e Idle \xe5\x88\x87\xe5\x88\xb0 Fighting\xe3\x80\x8d\xe3\x80\x82\n\n\xe3\x80\x90\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x88\xe5\x88\xbb\xe6\x84\x8f\xe4\xb8\x8d\xe5\x81\x9a\xef\xbc\x89\xe3\x80\x91\n  \xe4\xbf\xae\xe7\x82\xbc\xe4\xba\xa7\xe5\x87\xba\xe3\x80\x81\xe6\x8e\xa2\xe7\xb4\xa2\xe9\x9a\x8f\xe6\x9c\xba\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x81\xe6\x88\x98\xe6\x96\x97\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe6\xad\xbb\xe4\xba\xa1\xe5\x88\xa4\xe5\xae\x9a\xe7\xad\x89\xe7\x8e\xa9\xe6\xb3\x95\xe9\x80\xbb\xe8\xbe\x91 \xe2\x80\x94\xe2\x80\x94 \xe7\x94\xb1\xe5\x90\x8e\xe7\xbb\xad\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xb0\x83\xe7\x94\xa8 SetActionState \xe9\xa9\xb1\xe5\x8a\xa8\xe3\x80\x82\n\n\xe3\x80\x90""2D \xe6\x94\xbe\xe7\xbd\xae\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe5\x85\xb8\xe5\x9e\x8b\xe8\xae\xa2\xe9\x98\x85\xe6\x96\xb9\xef\xbc\x88\xe5\x90\x8e\xe7\xbb\xad\xef\xbc\x89\xe3\x80\x91\n  - PaperZD AnimBP\xef\xbc\x9a\xe6\xa0\xb9\xe6\x8d\xae\xe7\x8a\xb6\xe6\x80\x81\xe5\x88\x87 Flipbook\n  - UMG\xef\xbc\x9a\xe6\x98\xbe\xe7\xa4\xba\xe3\x80\x8c\xe4\xbf\xae\xe7\x82\xbc\xe4\xb8\xad / \xe6\x88\x98\xe6\x96\x97\xe4\xb8\xad\xe3\x80\x8d\n  - AI Controller\xef\xbc\x9a\xe5\x86\xb3\xe5\xae\x9a\xe4\xbd\x95\xe6\x97\xb6 SetActionState(Exploring)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStateChanged_MetaData[] = {
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88OldState, NewState\xef\xbc\x89\xe3\x80\x82\n\x09 * BlueprintAssignable\xef\xbc\x9a\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\x8f\xaf Bind Event\xef\xbc\x9b""C++ \xe9\x87\x8c\xe5\x8f\xaf AddDynamic / AddUObject\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Character/ActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88OldState, NewState\xef\xbc\x89\xe3\x80\x82\nBlueprintAssignable\xef\xbc\x9a\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\x8f\xaf Bind Event\xef\xbc\x9b""C++ \xe9\x87\x8c\xe5\x8f\xaf AddDynamic / AddUObject\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4 Idle\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/ActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4 Idle\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStateChanged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentActionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentActionState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionComponent_GetActionState, "GetActionState" }, // 409893924
		{ &Z_Construct_UFunction_UActionComponent_SetActionState, "SetActionState" }, // 3709953031
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStateChanged = { "OnActionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionComponent, OnActionStateChanged), Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionStateChanged_MetaData), NewProp_OnActionStateChanged_MetaData) }; // 2763189467
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_CurrentActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_CurrentActionState = { "CurrentActionState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionComponent, CurrentActionState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActionState_MetaData), NewProp_CurrentActionState_MetaData) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_CurrentActionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_CurrentActionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionComponent_Statics::ClassParams = {
	&UActionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionComponent()
{
	if (!Z_Registration_Info_UClass_UActionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionComponent.OuterSingleton, Z_Construct_UClass_UActionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionComponent.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<UActionComponent>()
{
	return UActionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionComponent);
UActionComponent::~UActionComponent() {}
// End Class UActionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_ActionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionComponent, UActionComponent::StaticClass, TEXT("UActionComponent"), &Z_Registration_Info_UClass_UActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionComponent), 2159275875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_ActionComponent_h_4142719034(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_ActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_ActionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
