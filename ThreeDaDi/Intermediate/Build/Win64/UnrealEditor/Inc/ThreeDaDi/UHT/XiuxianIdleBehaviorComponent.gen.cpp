// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Character/XiuxianIdleBehaviorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXiuxianIdleBehaviorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THREEDADI_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UCharacterStatsComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianIdleBehaviorComponent();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister();
THREEDADI_API UEnum* Z_Construct_UEnum_ThreeDaDi_EActionState();
THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Delegate FOnGameplayLogAdded
struct Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics
{
	struct _Script_ThreeDaDi_eventOnGameplayLogAdded_Parms
	{
		FText LogMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xa1\x8c\xe4\xb8\xba\xe6\x97\xa5\xe5\xbf\x97\xe8\xbf\xbd\xe5\x8a\xa0\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x8c\xe4\xbe\x9b\xe4\xb8\xbb UI \xe7\x9a\x84 TextBlock_Log \xe6\x98\xbe\xe7\xa4\xba\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x8c\xe4\xb8\xba\xe6\x97\xa5\xe5\xbf\x97\xe8\xbf\xbd\xe5\x8a\xa0\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x8c\xe4\xbe\x9b\xe4\xb8\xbb UI \xe7\x9a\x84 TextBlock_Log \xe6\x98\xbe\xe7\xa4\xba\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LogMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::NewProp_LogMessage = { "LogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnGameplayLogAdded_Parms, LogMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::NewProp_LogMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThreeDaDi, nullptr, "OnGameplayLogAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnGameplayLogAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnGameplayLogAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameplayLogAdded_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayLogAdded, const FText& LogMessage)
{
	struct _Script_ThreeDaDi_eventOnGameplayLogAdded_Parms
	{
		FText LogMessage;
	};
	_Script_ThreeDaDi_eventOnGameplayLogAdded_Parms Parms;
	Parms.LogMessage=LogMessage;
	OnGameplayLogAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGameplayLogAdded

// Begin Class UXiuxianIdleBehaviorComponent Function HandleActionStateChanged
struct Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics
{
	struct XiuxianIdleBehaviorComponent_eventHandleActionStateChanged_Parms
	{
		EActionState OldState;
		EActionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdleBehaviorComponent_eventHandleActionStateChanged_Parms, OldState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdleBehaviorComponent_eventHandleActionStateChanged_Parms, NewState), Z_Construct_UEnum_ThreeDaDi_EActionState, METADATA_PARAMS(0, nullptr) }; // 4293550790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_OldState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_OldState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXiuxianIdleBehaviorComponent, nullptr, "HandleActionStateChanged", nullptr, nullptr, Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::XiuxianIdleBehaviorComponent_eventHandleActionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::XiuxianIdleBehaviorComponent_eventHandleActionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXiuxianIdleBehaviorComponent::execHandleActionStateChanged)
{
	P_GET_ENUM(EActionState,Z_Param_OldState);
	P_GET_ENUM(EActionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActionStateChanged(EActionState(Z_Param_OldState),EActionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UXiuxianIdleBehaviorComponent Function HandleActionStateChanged

// Begin Class UXiuxianIdleBehaviorComponent
void UXiuxianIdleBehaviorComponent::StaticRegisterNativesUXiuxianIdleBehaviorComponent()
{
	UClass* Class = UXiuxianIdleBehaviorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleActionStateChanged", &UXiuxianIdleBehaviorComponent::execHandleActionStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXiuxianIdleBehaviorComponent);
UClass* Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister()
{
	return UXiuxianIdleBehaviorComponent::StaticClass();
}
struct Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * UXiuxianIdleBehaviorComponent \xe2\x80\x94\xe2\x80\x94 \xe6\x94\xbe\xe7\xbd\xae\xe7\x8e\xa9\xe6\xb3\x95\xe9\xa9\xb1\xe5\x8a\xa8\xef\xbc\x88\xe6\x89\x93\xe5\x9d\x90/\xe6\x88\x98\xe6\x96\x97/\xe5\xaf\xbf\xe5\x85\x83/\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x89\n * ============================================================================\n *\n * \xe3\x80\x90\xe8\x81\x8c\xe8\xb4\xa3\xe3\x80\x91\n *   \xe8\xae\xa2\xe9\x98\x85 ActionComponent \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xef\xbc\x8c\xe6\x8c\x89\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\xaf\xe5\x8a\xa8 Timer\xef\xbc\x9a\n *     - \xe6\x89\x93\xe5\x9d\x90\xef\xbc\x9a\xe6\xaf\x8f 10s +1 \xe7\xbb\x8f\xe9\xaa\x8c\n *     - \xe6\x88\x98\xe6\x96\x97\xef\xbc\x9a\xe6\xaf\x8f 5s +2 \xe7\xbb\x8f\xe9\xaa\x8c\xe5\xb9\xb6\xe6\x89\xa3\xe8\xa1\x80\n *     - \xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x9a\xe5\x85\xa8\xe5\xb1\x80\xe7\xbc\x93\xe6\x85\xa2\xe5\xa2\x9e\xe9\x95\xbf\xef\xbc\x88\xe4\xb8\x8e\xe7\x8a\xb6\xe6\x80\x81\xe6\x97\xa0\xe5\x85\xb3\xef\xbc\x8c\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe5\x81\x9c\xe6\xad\xa2\xef\xbc\x89\n *     - \xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x9a\xe5\x90\x84\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\x89\xe6\x96\x87\xe6\xa1\x88\xe5\xba\x93\xef\xbc\x8c\xe9\x9a\x8f\xe6\x9c\xba\xe9\x97\xb4\xe9\x9a\x94\xe5\x88\xb7\xe4\xb8\x80\xe6\x9d\xa1\xe5\x88\xb0 UI\n *\n * \xe3\x80\x90\xe6\x95\xb0\xe6\x8d\xae\xe6\xb5\x81\xe3\x80\x91\n *   \xe6\x9c\xac\xe7\xbb\x84\xe4\xbb\xb6\xe5\x8f\xaa\xe6\x94\xb9 StatsComponent / ActionComponent\xef\xbc\x8cUI \xe9\x80\x9a\xe8\xbf\x87\xe5\xa7\x94\xe6\x89\x98\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xb7\xe6\x96\xb0\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Character/XiuxianIdleBehaviorComponent.h" },
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UXiuxianIdleBehaviorComponent \xe2\x80\x94\xe2\x80\x94 \xe6\x94\xbe\xe7\xbd\xae\xe7\x8e\xa9\xe6\xb3\x95\xe9\xa9\xb1\xe5\x8a\xa8\xef\xbc\x88\xe6\x89\x93\xe5\x9d\x90/\xe6\x88\x98\xe6\x96\x97/\xe5\xaf\xbf\xe5\x85\x83/\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x89\n\n\n\xe3\x80\x90\xe8\x81\x8c\xe8\xb4\xa3\xe3\x80\x91\n  \xe8\xae\xa2\xe9\x98\x85 ActionComponent \xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xef\xbc\x8c\xe6\x8c\x89\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\xaf\xe5\x8a\xa8 Timer\xef\xbc\x9a\n    - \xe6\x89\x93\xe5\x9d\x90\xef\xbc\x9a\xe6\xaf\x8f 10s +1 \xe7\xbb\x8f\xe9\xaa\x8c\n    - \xe6\x88\x98\xe6\x96\x97\xef\xbc\x9a\xe6\xaf\x8f 5s +2 \xe7\xbb\x8f\xe9\xaa\x8c\xe5\xb9\xb6\xe6\x89\xa3\xe8\xa1\x80\n    - \xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x9a\xe5\x85\xa8\xe5\xb1\x80\xe7\xbc\x93\xe6\x85\xa2\xe5\xa2\x9e\xe9\x95\xbf\xef\xbc\x88\xe4\xb8\x8e\xe7\x8a\xb6\xe6\x80\x81\xe6\x97\xa0\xe5\x85\xb3\xef\xbc\x8c\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe5\x81\x9c\xe6\xad\xa2\xef\xbc\x89\n    - \xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x9a\xe5\x90\x84\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\x89\xe6\x96\x87\xe6\xa1\x88\xe5\xba\x93\xef\xbc\x8c\xe9\x9a\x8f\xe6\x9c\xba\xe9\x97\xb4\xe9\x9a\x94\xe5\x88\xb7\xe4\xb8\x80\xe6\x9d\xa1\xe5\x88\xb0 UI\n\n\xe3\x80\x90\xe6\x95\xb0\xe6\x8d\xae\xe6\xb5\x81\xe3\x80\x91\n  \xe6\x9c\xac\xe7\xbb\x84\xe4\xbb\xb6\xe5\x8f\xaa\xe6\x94\xb9 StatsComponent / ActionComponent\xef\xbc\x8cUI \xe9\x80\x9a\xe8\xbf\x87\xe5\xa7\x94\xe6\x89\x98\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xb7\xe6\x96\xb0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayLogAdded_MetaData[] = {
		{ "Category", "Xiuxian|Log" },
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeditateExpInterval_MetaData[] = {
		{ "Category", "Xiuxian|Meditate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\x93\xe5\x9d\x90\xef\xbc\x9a\xe7\xbb\x8f\xe9\xaa\x8c\xe7\xbb\x93\xe7\xae\x97\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\x9d\x90\xef\xbc\x9a\xe7\xbb\x8f\xe9\xaa\x8c\xe7\xbb\x93\xe7\xae\x97\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeditateExpGain_MetaData[] = {
		{ "Category", "Xiuxian|Meditate" },
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FightExpInterval_MetaData[] = {
		{ "Category", "Xiuxian|Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x88\x98\xe6\x96\x97\xef\xbc\x9a\xe7\xbb\x8f\xe9\xaa\x8c\xe7\xbb\x93\xe7\xae\x97\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xef\xbc\x9a\xe7\xbb\x8f\xe9\xaa\x8c\xe7\xbb\x93\xe7\xae\x97\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FightExpGain_MetaData[] = {
		{ "Category", "Xiuxian|Fight" },
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FightHealthLoss_MetaData[] = {
		{ "Category", "Xiuxian|Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x88\x98\xe6\x96\x97\xe6\xaf\x8f\xe6\xac\xa1\xe7\xbb\x93\xe7\xae\x97\xe6\x89\xa3\xe8\xa1\x80\xe9\x87\x8f\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe6\xaf\x8f\xe6\xac\xa1\xe7\xbb\x93\xe7\xae\x97\xe6\x89\xa3\xe8\xa1\x80\xe9\x87\x8f\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifespanGainInterval_MetaData[] = {
		{ "Category", "Xiuxian|Lifespan" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x9a\xe5\xa2\x9e\xe9\x95\xbf\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x9a\xe5\xa2\x9e\xe9\x95\xbf\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifespanGainAmount_MetaData[] = {
		{ "Category", "Xiuxian|Lifespan" },
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogMinInterval_MetaData[] = {
		{ "Category", "Xiuxian|Log" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x9a\xe4\xb8\xa4\xe6\xac\xa1\xe9\x9a\x8f\xe6\x9c\xba\xe6\x97\xa5\xe5\xbf\x97\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe7\x9f\xad/\xe6\x9c\x80\xe9\x95\xbf\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x9a\xe4\xb8\xa4\xe6\xac\xa1\xe9\x9a\x8f\xe6\x9c\xba\xe6\x97\xa5\xe5\xbf\x97\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe7\x9f\xad/\xe6\x9c\x80\xe9\x95\xbf\xe9\x97\xb4\xe9\x9a\x94\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogMaxInterval_MetaData[] = {
		{ "Category", "Xiuxian|Log" },
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FightLogChanceOnTick_MetaData[] = {
		{ "Category", "Xiuxian|Log" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x88\x98\xe6\x96\x97\xe7\xbb\x93\xe7\xae\x97\xe6\x97\xb6\xe9\xa2\x9d\xe5\xa4\x96\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xa5\xe5\xbf\x97\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87 [0,1]\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe7\xbb\x93\xe7\xae\x97\xe6\x97\xb6\xe9\xa2\x9d\xe5\xa4\x96\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xa5\xe5\xbf\x97\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87 [0,1]\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAction_MetaData[] = {
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStats_MetaData[] = {
		{ "ModuleRelativePath", "Character/XiuxianIdleBehaviorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayLogAdded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeditateExpInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeditateExpGain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FightExpInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FightExpGain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FightHealthLoss;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifespanGainInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifespanGainAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogMinInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogMaxInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FightLogChanceOnTick;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedAction;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UXiuxianIdleBehaviorComponent_HandleActionStateChanged, "HandleActionStateChanged" }, // 3563903895
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXiuxianIdleBehaviorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_OnGameplayLogAdded = { "OnGameplayLogAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, OnGameplayLogAdded), Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameplayLogAdded_MetaData), NewProp_OnGameplayLogAdded_MetaData) }; // 3222789161
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_MeditateExpInterval = { "MeditateExpInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, MeditateExpInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeditateExpInterval_MetaData), NewProp_MeditateExpInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_MeditateExpGain = { "MeditateExpGain", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, MeditateExpGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeditateExpGain_MetaData), NewProp_MeditateExpGain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightExpInterval = { "FightExpInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, FightExpInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FightExpInterval_MetaData), NewProp_FightExpInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightExpGain = { "FightExpGain", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, FightExpGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FightExpGain_MetaData), NewProp_FightExpGain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightHealthLoss = { "FightHealthLoss", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, FightHealthLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FightHealthLoss_MetaData), NewProp_FightHealthLoss_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LifespanGainInterval = { "LifespanGainInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, LifespanGainInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifespanGainInterval_MetaData), NewProp_LifespanGainInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LifespanGainAmount = { "LifespanGainAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, LifespanGainAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifespanGainAmount_MetaData), NewProp_LifespanGainAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LogMinInterval = { "LogMinInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, LogMinInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogMinInterval_MetaData), NewProp_LogMinInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LogMaxInterval = { "LogMaxInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, LogMaxInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogMaxInterval_MetaData), NewProp_LogMaxInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightLogChanceOnTick = { "FightLogChanceOnTick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, FightLogChanceOnTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FightLogChanceOnTick_MetaData), NewProp_FightLogChanceOnTick_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_CachedAction = { "CachedAction", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, CachedAction), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAction_MetaData), NewProp_CachedAction_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_CachedStats = { "CachedStats", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXiuxianIdleBehaviorComponent, CachedStats), Z_Construct_UClass_UCharacterStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStats_MetaData), NewProp_CachedStats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_OnGameplayLogAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_MeditateExpInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_MeditateExpGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightExpInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightExpGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightHealthLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LifespanGainInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LifespanGainAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LogMinInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_LogMaxInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_FightLogChanceOnTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_CachedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::NewProp_CachedStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::ClassParams = {
	&UXiuxianIdleBehaviorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXiuxianIdleBehaviorComponent()
{
	if (!Z_Registration_Info_UClass_UXiuxianIdleBehaviorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXiuxianIdleBehaviorComponent.OuterSingleton, Z_Construct_UClass_UXiuxianIdleBehaviorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXiuxianIdleBehaviorComponent.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<UXiuxianIdleBehaviorComponent>()
{
	return UXiuxianIdleBehaviorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXiuxianIdleBehaviorComponent);
UXiuxianIdleBehaviorComponent::~UXiuxianIdleBehaviorComponent() {}
// End Class UXiuxianIdleBehaviorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXiuxianIdleBehaviorComponent, UXiuxianIdleBehaviorComponent::StaticClass, TEXT("UXiuxianIdleBehaviorComponent"), &Z_Registration_Info_UClass_UXiuxianIdleBehaviorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXiuxianIdleBehaviorComponent), 842045424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_30578299(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianIdleBehaviorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
