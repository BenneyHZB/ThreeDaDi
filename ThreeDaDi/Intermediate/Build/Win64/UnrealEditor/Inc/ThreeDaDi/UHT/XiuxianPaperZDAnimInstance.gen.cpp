// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Character/XiuxianPaperZDAnimInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXiuxianPaperZDAnimInstance() {}

// Begin Cross Module References
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance();
THREEDADI_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianPaperZDAnimInstance();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianPaperZDAnimInstance_NoRegister();
THREEDADI_API UEnum* Z_Construct_UEnum_ThreeDaDi_EActionState();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Class UXiuxianPaperZDAnimInstance Function GetActionState
struct Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics
{
	struct XiuxianPaperZDAnimInstance_eventGetActionState_Parms
	{
		EActionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\x8e ActionState \xe7\x9b\xb8\xe5\x90\x8c\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe8\x93\x9d\xe5\x9b\xbe\xe5\xbd\x93\xe7\xba\xaf\xe5\x87\xbd\xe6\x95\xb0\xe8\x8a\x82\xe7\x82\xb9\xe6\x8b\x89\xe7\xba\xbf\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianPaperZDAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8e ActionState \xe7\x9b\xb8\xe5\x90\x8c\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe8\x93\x9d\xe5\x9b\xbe\xe5\xbd\x93\xe7\xba\xaf\xe5\x87\xbd\xe6\x95\xb0\xe8\x8a\x82\xe7\x82\xb9\xe6\x8b\x89\xe7\xba\xbf\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianPaperZDAnimInstance_eventGetActionState_Parms, ReturnValue), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianPaperZDAnimInstance, nullptr, "GetActionState", nullptr, nullptr, Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::XiuxianPaperZDAnimInstance_eventGetActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::XiuxianPaperZDAnimInstance_eventGetActionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianPaperZDAnimInstance::execGetActionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EActionState*)Z_Param__Result=P_THIS->GetActionState();
	P_NATIVE_END;
}
// End Class UXiuxianPaperZDAnimInstance Function GetActionState

// Begin Class UXiuxianPaperZDAnimInstance Function HandleActionStateChanged
struct Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics
{
	struct XiuxianPaperZDAnimInstance_eventHandleActionStateChanged_Parms
	{
		EActionState OldState;
		EActionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ActionComponent \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xa7\x94\xe6\x89\x98\xe5\x9b\x9e\xe8\xb0\x83\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianPaperZDAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ActionComponent \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe5\xa7\x94\xe6\x89\x98\xe5\x9b\x9e\xe8\xb0\x83\xe3\x80\x82" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianPaperZDAnimInstance_eventHandleActionStateChanged_Parms, OldState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianPaperZDAnimInstance_eventHandleActionStateChanged_Parms, NewState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_OldState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_OldState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianPaperZDAnimInstance, nullptr, "HandleActionStateChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::XiuxianPaperZDAnimInstance_eventHandleActionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::XiuxianPaperZDAnimInstance_eventHandleActionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianPaperZDAnimInstance::execHandleActionStateChanged)
{
	P_GET_ENUM(EActionState,Z_Param_OldState);
	P_GET_ENUM(EActionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActionStateChanged(EActionState(Z_Param_OldState),EActionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UXiuxianPaperZDAnimInstance Function HandleActionStateChanged

// Begin Class UXiuxianPaperZDAnimInstance
void UXiuxianPaperZDAnimInstance::StaticRegisterNativesUXiuxianPaperZDAnimInstance()
{
	UClass* Class = UXiuxianPaperZDAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActionState", &UXiuxianPaperZDAnimInstance::execGetActionState },
		{ "HandleActionStateChanged", &UXiuxianPaperZDAnimInstance::execHandleActionStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXiuxianPaperZDAnimInstance);
UClass* Z_Construct_UClass_UXiuxianPaperZDAnimInstance_NoRegister()
{
	return UXiuxianPaperZDAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * UXiuxianPaperZDAnimInstance \xe2\x80\x94\xe2\x80\x94 \xe6\x9c\xac\xe9\xa1\xb9\xe7\x9b\xae PaperZD \xe5\x8a\xa8\xe7\x94\xbb\xe5\xae\x9e\xe4\xbe\x8b\xe5\x9f\xba\xe7\xb1\xbb\n * ============================================================================\n *\n * \xe3\x80\x90\xe7\xbb\x99 3D \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe7\x9a\x84\xe5\xaf\xb9\xe7\x85\xa7\xe3\x80\x91\n *   3D\xef\xbc\x9a""AnimInstance \xe9\x87\x8c\xe5\xb8\xb8\xe6\x9c\x89 Speed\xe3\x80\x81IsInAir \xe7\xad\x89\xe5\x8f\x98\xe9\x87\x8f\xef\xbc\x8c\xe5\x9c\xa8 NativeUpdateAnimation \xe9\x87\x8c\xe4\xbb\x8e Character \xe5\x90\x8c\xe6\xad\xa5\xe3\x80\x82\n *   2D PaperZD\xef\xbc\x9a\xe6\xb2\xa1\xe6\x9c\x89 UAnimInstance::NativeUpdateAnimation\xef\xbc\x8c\xe6\x94\xb9\xe7\x94\xa8 OnInit / OnTick\xef\xbc\x88PaperZD \xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xef\xbc\x89\xe3\x80\x82\n *\n * \xe3\x80\x90\xe6\x9c\xac\xe7\xb1\xbb\xe5\x81\x9a\xe4\xbb\x80\xe4\xb9\x88\xe3\x80\x91\n *   1. \xe4\xbb\x8e Owner\xef\xbc\x88""AXiuxianCharacterBase\xef\xbc\x89\xe7\x9a\x84 ActionComponent \xe8\xaf\xbb\xe5\x8f\x96 EActionState\n *   2. \xe5\x86\x99\xe5\x85\xa5\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xaf\xbb\xe5\x8f\x98\xe9\x87\x8f ActionState\xef\xbc\x8c\xe4\xbe\x9b AnimGraph / \xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba Switch \xe4\xbd\xbf\xe7\x94\xa8\n *   3. \xe8\xae\xa2\xe9\x98\x85 OnActionStateChanged\xef\xbc\x8c\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x80\xe5\x8f\x98\xe7\xab\x8b\xe5\x88\xbb\xe6\x9b\xb4\xe6\x96\xb0 ActionState\xef\xbc\x88\xe4\xb8\x8d\xe5\xbf\x85\xe7\xad\x89\xe4\xb8\x8b\xe4\xb8\x80\xe5\xb8\xa7\xef\xbc\x89\n *\n * \xe3\x80\x90\xe8\x93\x9d\xe5\x9b\xbe\xe6\x80\x8e\xe4\xb9\x88\xe7\x94\xa8\xe3\x80\x91\n *   1. \xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8 \xe2\x86\x92 \xe5\x8a\xa8\xe7\x94\xbb \xe2\x86\x92 PaperZD Animation Blueprint\n *   2. Class Settings \xe2\x86\x92 Parent Class \xe9\x80\x89 XiuxianPaperZDAnimInstance\n *   3. \xe5\x9c\xa8\xe5\x9b\xbe\xe9\x87\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xaf\xbb ActionState\xef\xbc\x8c\xe6\x88\x96\xe7\x94\xa8 PaperZD \xe7\x9a\x84 Select By Enum \xe8\x8a\x82\xe7\x82\xb9\xe5\x88\x86\xe6\x94\xaf Flipbook\n *   4. \xe6\x8a\x8a\xe8\xaf\xa5 AnimBP \xe8\xb5\x8b\xe7\xbb\x99 XiuxianCharacterBase \xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\x8a\xe7\x9a\x84 PaperZD Animation Component\n *\n * \xe3\x80\x90\xe5\x88\xbb\xe6\x84\x8f\xe4\xb8\x8d\xe5\x81\x9a\xe3\x80\x91\n *   \xe4\xb8\x8d\xe6\xa0\xb9\xe6\x8d\xae ActionState \xe8\x87\xaa\xe5\x8a\xa8\xe6\x92\xad\xe5\x8a\xa8\xe7\x94\xbb \xe2\x80\x94\xe2\x80\x94 \xe5\x85\xb7\xe4\xbd\x93 Flipbook / \xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe8\xbf\x9e\xe7\xba\xbf\xe7\x95\x99\xe5\x9c\xa8\xe4\xbd\xa0\xe7\x9a\x84 AnimBP \xe9\x87\x8c\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Character/XiuxianPaperZDAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/XiuxianPaperZDAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UXiuxianPaperZDAnimInstance \xe2\x80\x94\xe2\x80\x94 \xe6\x9c\xac\xe9\xa1\xb9\xe7\x9b\xae PaperZD \xe5\x8a\xa8\xe7\x94\xbb\xe5\xae\x9e\xe4\xbe\x8b\xe5\x9f\xba\xe7\xb1\xbb\n\n\n\xe3\x80\x90\xe7\xbb\x99 3D \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe7\x9a\x84\xe5\xaf\xb9\xe7\x85\xa7\xe3\x80\x91\n  3D\xef\xbc\x9a""AnimInstance \xe9\x87\x8c\xe5\xb8\xb8\xe6\x9c\x89 Speed\xe3\x80\x81IsInAir \xe7\xad\x89\xe5\x8f\x98\xe9\x87\x8f\xef\xbc\x8c\xe5\x9c\xa8 NativeUpdateAnimation \xe9\x87\x8c\xe4\xbb\x8e Character \xe5\x90\x8c\xe6\xad\xa5\xe3\x80\x82\n  2D PaperZD\xef\xbc\x9a\xe6\xb2\xa1\xe6\x9c\x89 UAnimInstance::NativeUpdateAnimation\xef\xbc\x8c\xe6\x94\xb9\xe7\x94\xa8 OnInit / OnTick\xef\xbc\x88PaperZD \xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xef\xbc\x89\xe3\x80\x82\n\n\xe3\x80\x90\xe6\x9c\xac\xe7\xb1\xbb\xe5\x81\x9a\xe4\xbb\x80\xe4\xb9\x88\xe3\x80\x91\n  1. \xe4\xbb\x8e Owner\xef\xbc\x88""AXiuxianCharacterBase\xef\xbc\x89\xe7\x9a\x84 ActionComponent \xe8\xaf\xbb\xe5\x8f\x96 EActionState\n  2. \xe5\x86\x99\xe5\x85\xa5\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xaf\xbb\xe5\x8f\x98\xe9\x87\x8f ActionState\xef\xbc\x8c\xe4\xbe\x9b AnimGraph / \xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba Switch \xe4\xbd\xbf\xe7\x94\xa8\n  3. \xe8\xae\xa2\xe9\x98\x85 OnActionStateChanged\xef\xbc\x8c\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x80\xe5\x8f\x98\xe7\xab\x8b\xe5\x88\xbb\xe6\x9b\xb4\xe6\x96\xb0 ActionState\xef\xbc\x88\xe4\xb8\x8d\xe5\xbf\x85\xe7\xad\x89\xe4\xb8\x8b\xe4\xb8\x80\xe5\xb8\xa7\xef\xbc\x89\n\n\xe3\x80\x90\xe8\x93\x9d\xe5\x9b\xbe\xe6\x80\x8e\xe4\xb9\x88\xe7\x94\xa8\xe3\x80\x91\n  1. \xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8 \xe2\x86\x92 \xe5\x8a\xa8\xe7\x94\xbb \xe2\x86\x92 PaperZD Animation Blueprint\n  2. Class Settings \xe2\x86\x92 Parent Class \xe9\x80\x89 XiuxianPaperZDAnimInstance\n  3. \xe5\x9c\xa8\xe5\x9b\xbe\xe9\x87\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xaf\xbb ActionState\xef\xbc\x8c\xe6\x88\x96\xe7\x94\xa8 PaperZD \xe7\x9a\x84 Select By Enum \xe8\x8a\x82\xe7\x82\xb9\xe5\x88\x86\xe6\x94\xaf Flipbook\n  4. \xe6\x8a\x8a\xe8\xaf\xa5 AnimBP \xe8\xb5\x8b\xe7\xbb\x99 XiuxianCharacterBase \xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\x8a\xe7\x9a\x84 PaperZD Animation Component\n\n\xe3\x80\x90\xe5\x88\xbb\xe6\x84\x8f\xe4\xb8\x8d\xe5\x81\x9a\xe3\x80\x91\n  \xe4\xb8\x8d\xe6\xa0\xb9\xe6\x8d\xae ActionState \xe8\x87\xaa\xe5\x8a\xa8\xe6\x92\xad\xe5\x8a\xa8\xe7\x94\xbb \xe2\x80\x94\xe2\x80\x94 \xe5\x85\xb7\xe4\xbd\x93 Flipbook / \xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe8\xbf\x9e\xe7\xba\xbf\xe7\x95\x99\xe5\x9c\xa8\xe4\xbd\xa0\xe7\x9a\x84 AnimBP \xe9\x87\x8c\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe4\xb8\x8e ActionComponent \xe4\xbf\x9d\xe6\x8c\x81\xe5\x90\x8c\xe6\xad\xa5\xe3\x80\x82\n\x09 * AnimBP \xe9\x87\x8c\xe5\xbd\x93\xe6\x99\xae\xe9\x80\x9a\xe5\x8f\x98\xe9\x87\x8f\xe7\x94\xa8\xe5\x8d\xb3\xe5\x8f\xaf\xef\xbc\x88\xe5\x8f\xaa\xe8\xaf\xbb\xef\xbc\x89\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianPaperZDAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe8\xa1\x8c\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe4\xb8\x8e ActionComponent \xe4\xbf\x9d\xe6\x8c\x81\xe5\x90\x8c\xe6\xad\xa5\xe3\x80\x82\nAnimBP \xe9\x87\x8c\xe5\xbd\x93\xe6\x99\xae\xe9\x80\x9a\xe5\x8f\x98\xe9\x87\x8f\xe7\x94\xa8\xe5\x8d\xb3\xe5\x8f\xaf\xef\xbc\x88\xe5\x8f\xaa\xe8\xaf\xbb\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedActionComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbc\x93\xe5\xad\x98 ActionComponent\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe6\xaf\x8f\xe5\xb8\xa7 GetOwningActor + GetActionComponent\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianPaperZDAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbc\x93\xe5\xad\x98 ActionComponent\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe6\xaf\x8f\xe5\xb8\xa7 GetOwningActor + GetActionComponent\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedActionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_GetActionState, "GetActionState" }, // 2150113413
		{ &Z_Construct_UFunction_UXiuxianPaperZDAnimInstance_HandleActionStateChanged, "HandleActionStateChanged" }, // 2673152759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXiuxianPaperZDAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianPaperZDAnimInstance, ActionState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionState_MetaData), NewProp_ActionState_MetaData) }; // 4293550790
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::NewProp_CachedActionComponent = { "CachedActionComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianPaperZDAnimInstance, CachedActionComponent), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedActionComponent_MetaData), NewProp_CachedActionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::NewProp_ActionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::NewProp_ActionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::NewProp_CachedActionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::ClassParams = {
	&UXiuxianPaperZDAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::PropPointers),
	0,
	0x009000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXiuxianPaperZDAnimInstance()
{
	if (!Z_Registration_Info_UClass_UXiuxianPaperZDAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXiuxianPaperZDAnimInstance.OuterSingleton, Z_Construct_UClass_UXiuxianPaperZDAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXiuxianPaperZDAnimInstance.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<UXiuxianPaperZDAnimInstance>()
{
	return UXiuxianPaperZDAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXiuxianPaperZDAnimInstance);
UXiuxianPaperZDAnimInstance::~UXiuxianPaperZDAnimInstance() {}
// End Class UXiuxianPaperZDAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianPaperZDAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXiuxianPaperZDAnimInstance, UXiuxianPaperZDAnimInstance::StaticClass, TEXT("UXiuxianPaperZDAnimInstance"), &Z_Registration_Info_UClass_UXiuxianPaperZDAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXiuxianPaperZDAnimInstance), 1579586908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianPaperZDAnimInstance_h_500576573(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianPaperZDAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianPaperZDAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
