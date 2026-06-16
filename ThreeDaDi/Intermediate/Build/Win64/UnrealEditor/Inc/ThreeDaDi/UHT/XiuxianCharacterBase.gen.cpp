// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Character/XiuxianCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXiuxianCharacterBase() {}

// Begin Cross Module References
PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianCharacterBase();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianCharacterBase_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UCharacterStatsComponent_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Class AXiuxianCharacterBase Function GetActionComponent
struct Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics
{
	struct XiuxianCharacterBase_eventGetActionComponent_Parms
	{
		UActionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe8\xa1\x8c\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n\x09 *\n\x09 * BlueprintPure\xef\xbc\x9a\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\xbd\x93\xe4\xbd\x9c\xe3\x80\x8c\xe7\xba\xaf\xe5\x87\xbd\xe6\x95\xb0\xe3\x80\x8d\xe8\x8a\x82\xe7\x82\xb9\xef\xbc\x8c\xe6\x97\xa0\xe6\x89\xa7\xe8\xa1\x8c\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x8c\xe6\x97\xa0\xe5\x89\xaf\xe4\xbd\x9c\xe7\x94\xa8\xe3\x80\x82\n\x09 * \xe5\x90\x8c\xe6\x97\xb6 ActionComponent \xe6\x88\x90\xe5\x91\x98\xe4\xb9\x9f\xe6\xa0\x87\xe4\xba\x86 BlueprintReadOnly\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x8b\x96\xe7\xba\xbf\xe8\xae\xbf\xe9\x97\xae\xe3\x80\x82\n\x09 * \xe6\x8f\x90\xe4\xbe\x9b Getter \xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86 C++ \xe4\xbe\xa7\xe8\xb0\x83\xe7\x94\xa8\xe6\x9b\xb4\xe6\x98\x8e\xe7\xa1\xae\xef\xbc\x8c\xe4\xb9\x9f\xe6\x96\xb9\xe4\xbe\xbf\xe4\xbb\xa5\xe5\x90\x8e\xe5\x8a\xa0\xe6\xa0\xa1\xe9\xaa\x8c\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa1\x8c\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n\nBlueprintPure\xef\xbc\x9a\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\xbd\x93\xe4\xbd\x9c\xe3\x80\x8c\xe7\xba\xaf\xe5\x87\xbd\xe6\x95\xb0\xe3\x80\x8d\xe8\x8a\x82\xe7\x82\xb9\xef\xbc\x8c\xe6\x97\xa0\xe6\x89\xa7\xe8\xa1\x8c\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x8c\xe6\x97\xa0\xe5\x89\xaf\xe4\xbd\x9c\xe7\x94\xa8\xe3\x80\x82\n\xe5\x90\x8c\xe6\x97\xb6 ActionComponent \xe6\x88\x90\xe5\x91\x98\xe4\xb9\x9f\xe6\xa0\x87\xe4\xba\x86 BlueprintReadOnly\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x8b\x96\xe7\xba\xbf\xe8\xae\xbf\xe9\x97\xae\xe3\x80\x82\n\xe6\x8f\x90\xe4\xbe\x9b Getter \xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86 C++ \xe4\xbe\xa7\xe8\xb0\x83\xe7\x94\xa8\xe6\x9b\xb4\xe6\x98\x8e\xe7\xa1\xae\xef\xbc\x8c\xe4\xb9\x9f\xe6\x96\xb9\xe4\xbe\xbf\xe4\xbb\xa5\xe5\x90\x8e\xe5\x8a\xa0\xe6\xa0\xa1\xe9\xaa\x8c\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianCharacterBase_eventGetActionComponent_Parms, ReturnValue), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianCharacterBase, nullptr, "GetActionComponent", nullptr, nullptr, Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::XiuxianCharacterBase_eventGetActionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::XiuxianCharacterBase_eventGetActionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianCharacterBase::execGetActionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActionComponent**)Z_Param__Result=P_THIS->GetActionComponent();
	P_NATIVE_END;
}
// End Class AXiuxianCharacterBase Function GetActionComponent

// Begin Class AXiuxianCharacterBase Function GetIdleBehaviorComponent
struct Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics
{
	struct XiuxianCharacterBase_eventGetIdleBehaviorComponent_Parms
	{
		UXiuxianIdleBehaviorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x94\xbe\xe7\xbd\xae\xe7\x8e\xa9\xe6\xb3\x95\xe9\xa9\xb1\xe5\x8a\xa8\xef\xbc\x88\xe6\x89\x93\xe5\x9d\x90\xe5\x8a\xa0\xe7\xbb\x8f\xe9\xaa\x8c\xe3\x80\x81\xe6\x88\x98\xe6\x96\x97\xe6\x89\xa3\xe8\xa1\x80\xe3\x80\x81\xe5\xaf\xbf\xe5\x85\x83\xe3\x80\x81\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbe\xe7\xbd\xae\xe7\x8e\xa9\xe6\xb3\x95\xe9\xa9\xb1\xe5\x8a\xa8\xef\xbc\x88\xe6\x89\x93\xe5\x9d\x90\xe5\x8a\xa0\xe7\xbb\x8f\xe9\xaa\x8c\xe3\x80\x81\xe6\x88\x98\xe6\x96\x97\xe6\x89\xa3\xe8\xa1\x80\xe3\x80\x81\xe5\xaf\xbf\xe5\x85\x83\xe3\x80\x81\xe6\x97\xa5\xe5\xbf\x97\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianCharacterBase_eventGetIdleBehaviorComponent_Parms, ReturnValue), Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianCharacterBase, nullptr, "GetIdleBehaviorComponent", nullptr, nullptr, Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::XiuxianCharacterBase_eventGetIdleBehaviorComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::XiuxianCharacterBase_eventGetIdleBehaviorComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianCharacterBase::execGetIdleBehaviorComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UXiuxianIdleBehaviorComponent**)Z_Param__Result=P_THIS->GetIdleBehaviorComponent();
	P_NATIVE_END;
}
// End Class AXiuxianCharacterBase Function GetIdleBehaviorComponent

// Begin Class AXiuxianCharacterBase Function GetStatsComponent
struct Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics
{
	struct XiuxianCharacterBase_eventGetStatsComponent_Parms
	{
		UCharacterStatsComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe5\x80\xbc\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x88\xe8\xa1\x80\xe3\x80\x81\xe7\xbb\x8f\xe9\xaa\x8c\xe3\x80\x81\xe7\xad\x89\xe7\xba\xa7\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe5\x80\xbc\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x88\xe8\xa1\x80\xe3\x80\x81\xe7\xbb\x8f\xe9\xaa\x8c\xe3\x80\x81\xe7\xad\x89\xe7\xba\xa7\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianCharacterBase_eventGetStatsComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacterStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianCharacterBase, nullptr, "GetStatsComponent", nullptr, nullptr, Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::XiuxianCharacterBase_eventGetStatsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::XiuxianCharacterBase_eventGetStatsComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianCharacterBase::execGetStatsComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterStatsComponent**)Z_Param__Result=P_THIS->GetStatsComponent();
	P_NATIVE_END;
}
// End Class AXiuxianCharacterBase Function GetStatsComponent

// Begin Class AXiuxianCharacterBase
void AXiuxianCharacterBase::StaticRegisterNativesAXiuxianCharacterBase()
{
	UClass* Class = AXiuxianCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActionComponent", &AXiuxianCharacterBase::execGetActionComponent },
		{ "GetIdleBehaviorComponent", &AXiuxianCharacterBase::execGetIdleBehaviorComponent },
		{ "GetStatsComponent", &AXiuxianCharacterBase::execGetStatsComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXiuxianCharacterBase);
UClass* Z_Construct_UClass_AXiuxianCharacterBase_NoRegister()
{
	return AXiuxianCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AXiuxianCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * AXiuxianCharacterBase \xe2\x80\x94\xe2\x80\x94 \xe5\x85\xa8\xe6\xb8\xb8\xe6\x88\x8f 2D \xe8\xa7\x92\xe8\x89\xb2\xe5\x9f\xba\xe7\xb1\xbb\n * ============================================================================\n *\n * \xe3\x80\x90""3D \xe2\x86\x92 2D \xe6\x9c\x80\xe5\x85\xb3\xe9\x94\xae\xe7\x9a\x84\xe4\xb8\x80\xe8\xa1\x8c\xe7\xbb\xa7\xe6\x89\xbf\xe3\x80\x91\n *   3D \xe9\xa1\xb9\xe7\x9b\xae\xe5\xb8\xb8\xe8\xa7\x81\xef\xbc\x9a""class AMyHero : public ACharacter  \xef\xbc\x88\xe5\xb8\xa6 Capsule + SkeletalMesh + AnimBP\xef\xbc\x89\n *   2D \xe6\x9c\xac\xe9\xa1\xb9\xe7\x9b\xae\xef\xbc\x9a  class AXiuxianCharacterBase : public APaperZDCharacter\n *\n * APaperZDCharacter \xe7\x9a\x84\xe7\xbb\xa7\xe6\x89\xbf\xe9\x93\xbe\xef\xbc\x88\xe4\xba\x86\xe8\xa7\xa3\xe5\x8d\xb3\xe5\x8f\xaf\xef\xbc\x89\xef\xbc\x9a\n *   APaperZDCharacter \xe2\x86\x92 APaperCharacter \xe2\x86\x92 ACharacter \xe2\x86\x92 APawn \xe2\x86\x92 AActor\n *\n * \xe3\x80\x90Paper2D / PaperZD \xe5\x92\x8c 3D \xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe5\x8c\xba\xe5\x88\xab\xe3\x80\x91\n *   - 3D\xef\xbc\x9aStaticMesh / SkeletalMesh + Material + AnimBP\xef\xbc\x88\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x89\n *   - 2D\xef\xbc\x9aPaperSprite / PaperFlipbook\xef\xbc\x88\xe5\xba\x8f\xe5\x88\x97\xe5\xb8\xa7\xe7\xbf\xbb\xe9\xa1\xb5\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x89+ PaperZD AnimBP\xef\xbc\x88""2D \xe7\x89\x88\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xef\xbc\x89\n *   - PaperZD \xe6\x8f\x92\xe4\xbb\xb6\xe5\x9c\xa8 Paper2D \xe5\x9f\xba\xe7\xa1\x80\xe4\xb8\x8a\xe6\x8f\x90\xe4\xbe\x9b\xe4\xba\x86\xe3\x80\x8c""2D \xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe + Notify\xe3\x80\x8d\xef\xbc\x8c\xe7\xb1\xbb\xe4\xbc\xbc 3D \xe7\x9a\x84 AnimGraph\xe3\x80\x82\n *\n * \xe3\x80\x90\xe6\x9c\xac\xe7\xb1\xbb\xe7\x9a\x84\xe8\x81\x8c\xe8\xb4\xa3\xef\xbc\x88\xe6\xa1\x86\xe6\x9e\xb6\xe5\xb1\x82\xef\xbc\x89\xe3\x80\x91\n *   1. \xe4\xbd\x9c\xe4\xb8\xba\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\xaf\xe8\xa1\x8c\xe5\x8a\xa8\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84 C++ \xe6\xa0\xb9\xe7\xb1\xbb\xef\xbc\x88\xe7\x8e\xa9\xe5\xae\xb6 / \xe6\x80\xaa\xe7\x89\xa9 / \xe4\xbc\xa0\xe6\x89\xbf\xe8\xa7\x92\xe8\x89\xb2\xe9\x83\xbd\xe4\xbb\x8e\xe8\xbf\x99\xe9\x87\x8c\xe6\xb4\xbe\xe7\x94\x9f\xef\xbc\x89\n *   2. \xe7\xbb\x9f\xe4\xb8\x80\xe6\x8c\x82\xe8\xbd\xbd Action / Stats / IdleBehavior \xe7\xbb\x84\xe4\xbb\xb6\n *   3. \xe5\x85\xb7\xe4\xbd\x93\xe7\x8e\xa9\xe6\xb3\x95\xe6\x95\xb0\xe5\x80\xbc\xe7\x94\xb1 IdleBehavior \xe9\xa9\xb1\xe5\x8a\xa8\xef\xbc\x8c\xe6\x9c\xac\xe7\xb1\xbb\xe4\xb8\x8d\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x86\x99\xe9\x80\xbb\xe8\xbe\x91\n *\n * \xe3\x80\x90UCLASS \xe4\xbf\xae\xe9\xa5\xb0\xe7\xac\xa6\xe8\xaf\xb4\xe6\x98\x8e\xe3\x80\x91\n *   Abstract      \xe2\x80\x94\xe2\x80\x94 \xe6\x8a\xbd\xe8\xb1\xa1\xe7\xb1\xbb\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x87\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x94\xbe\xe7\xbd\xae\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe5\x8f\xaa\xe8\x83\xbd\xe8\xa2\xab\xe7\xbb\xa7\xe6\x89\xbf\xef\xbc\x88\xe5\x92\x8c C++ abstract \xe7\xb1\xbb\xe4\xbc\xbc\xef\xbc\x89\n *   Blueprintable \xe2\x80\x94\xe2\x80\x94 \xe5\x85\x81\xe8\xae\xb8\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe9\x87\x8c\xe3\x80\x8c\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\xad\x90\xe7\xb1\xbb\xe3\x80\x8d\n *   BlueprintType \xe2\x80\x94\xe2\x80\x94 \xe5\x85\x81\xe8\xae\xb8\xe6\x8a\x8a\xe6\xad\xa4\xe7\xb1\xbb\xe4\xbd\x9c\xe4\xb8\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\x98\xe9\x87\x8f / \xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xbd\xbf\xe7\x94\xa8\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/XiuxianCharacterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AXiuxianCharacterBase \xe2\x80\x94\xe2\x80\x94 \xe5\x85\xa8\xe6\xb8\xb8\xe6\x88\x8f 2D \xe8\xa7\x92\xe8\x89\xb2\xe5\x9f\xba\xe7\xb1\xbb\n\n\n\xe3\x80\x90""3D \xe2\x86\x92 2D \xe6\x9c\x80\xe5\x85\xb3\xe9\x94\xae\xe7\x9a\x84\xe4\xb8\x80\xe8\xa1\x8c\xe7\xbb\xa7\xe6\x89\xbf\xe3\x80\x91\n  3D \xe9\xa1\xb9\xe7\x9b\xae\xe5\xb8\xb8\xe8\xa7\x81\xef\xbc\x9a""class AMyHero : public ACharacter  \xef\xbc\x88\xe5\xb8\xa6 Capsule + SkeletalMesh + AnimBP\xef\xbc\x89\n  2D \xe6\x9c\xac\xe9\xa1\xb9\xe7\x9b\xae\xef\xbc\x9a  class AXiuxianCharacterBase : public APaperZDCharacter\n\nAPaperZDCharacter \xe7\x9a\x84\xe7\xbb\xa7\xe6\x89\xbf\xe9\x93\xbe\xef\xbc\x88\xe4\xba\x86\xe8\xa7\xa3\xe5\x8d\xb3\xe5\x8f\xaf\xef\xbc\x89\xef\xbc\x9a\n  APaperZDCharacter \xe2\x86\x92 APaperCharacter \xe2\x86\x92 ACharacter \xe2\x86\x92 APawn \xe2\x86\x92 AActor\n\n\xe3\x80\x90Paper2D / PaperZD \xe5\x92\x8c 3D \xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe5\x8c\xba\xe5\x88\xab\xe3\x80\x91\n  - 3D\xef\xbc\x9aStaticMesh / SkeletalMesh + Material + AnimBP\xef\xbc\x88\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x89\n  - 2D\xef\xbc\x9aPaperSprite / PaperFlipbook\xef\xbc\x88\xe5\xba\x8f\xe5\x88\x97\xe5\xb8\xa7\xe7\xbf\xbb\xe9\xa1\xb5\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x89+ PaperZD AnimBP\xef\xbc\x88""2D \xe7\x89\x88\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xef\xbc\x89\n  - PaperZD \xe6\x8f\x92\xe4\xbb\xb6\xe5\x9c\xa8 Paper2D \xe5\x9f\xba\xe7\xa1\x80\xe4\xb8\x8a\xe6\x8f\x90\xe4\xbe\x9b\xe4\xba\x86\xe3\x80\x8c""2D \xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe + Notify\xe3\x80\x8d\xef\xbc\x8c\xe7\xb1\xbb\xe4\xbc\xbc 3D \xe7\x9a\x84 AnimGraph\xe3\x80\x82\n\n\xe3\x80\x90\xe6\x9c\xac\xe7\xb1\xbb\xe7\x9a\x84\xe8\x81\x8c\xe8\xb4\xa3\xef\xbc\x88\xe6\xa1\x86\xe6\x9e\xb6\xe5\xb1\x82\xef\xbc\x89\xe3\x80\x91\n  1. \xe4\xbd\x9c\xe4\xb8\xba\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\xaf\xe8\xa1\x8c\xe5\x8a\xa8\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84 C++ \xe6\xa0\xb9\xe7\xb1\xbb\xef\xbc\x88\xe7\x8e\xa9\xe5\xae\xb6 / \xe6\x80\xaa\xe7\x89\xa9 / \xe4\xbc\xa0\xe6\x89\xbf\xe8\xa7\x92\xe8\x89\xb2\xe9\x83\xbd\xe4\xbb\x8e\xe8\xbf\x99\xe9\x87\x8c\xe6\xb4\xbe\xe7\x94\x9f\xef\xbc\x89\n  2. \xe7\xbb\x9f\xe4\xb8\x80\xe6\x8c\x82\xe8\xbd\xbd Action / Stats / IdleBehavior \xe7\xbb\x84\xe4\xbb\xb6\n  3. \xe5\x85\xb7\xe4\xbd\x93\xe7\x8e\xa9\xe6\xb3\x95\xe6\x95\xb0\xe5\x80\xbc\xe7\x94\xb1 IdleBehavior \xe9\xa9\xb1\xe5\x8a\xa8\xef\xbc\x8c\xe6\x9c\xac\xe7\xb1\xbb\xe4\xb8\x8d\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x86\x99\xe9\x80\xbb\xe8\xbe\x91\n\n\xe3\x80\x90UCLASS \xe4\xbf\xae\xe9\xa5\xb0\xe7\xac\xa6\xe8\xaf\xb4\xe6\x98\x8e\xe3\x80\x91\n  Abstract      \xe2\x80\x94\xe2\x80\x94 \xe6\x8a\xbd\xe8\xb1\xa1\xe7\xb1\xbb\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x87\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x94\xbe\xe7\xbd\xae\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe5\x8f\xaa\xe8\x83\xbd\xe8\xa2\xab\xe7\xbb\xa7\xe6\x89\xbf\xef\xbc\x88\xe5\x92\x8c C++ abstract \xe7\xb1\xbb\xe4\xbc\xbc\xef\xbc\x89\n  Blueprintable \xe2\x80\x94\xe2\x80\x94 \xe5\x85\x81\xe8\xae\xb8\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe9\x87\x8c\xe3\x80\x8c\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\xad\x90\xe7\xb1\xbb\xe3\x80\x8d\n  BlueprintType \xe2\x80\x94\xe2\x80\x94 \xe5\x85\x81\xe8\xae\xb8\xe6\x8a\x8a\xe6\xad\xa4\xe7\xb1\xbb\xe4\xbd\x9c\xe4\xb8\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\x98\xe9\x87\x8f / \xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xa1\x8c\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\xe5\xae\x9e\xe4\xbe\x8b\xe3\x80\x82\n\x09 *\n\x09 * VisibleAnywhere  \xe2\x80\x94\xe2\x80\x94 \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\xbb\x86\xe8\x8a\x82\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x8f\xaf\xe8\xa7\x81\xef\xbc\x88\xe6\x96\xb9\xe4\xbe\xbf\xe8\xb0\x83\xe8\xaf\x95\xef\xbc\x89\n\x09 * BlueprintReadOnly \xe2\x80\x94\xe2\x80\x94 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xaf\xbb\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x86\x99\xef\xbc\x88\xe9\x81\xbf\xe5\x85\x8d\xe8\x93\x9d\xe5\x9b\xbe\xe8\xaf\xaf\xe6\x94\xb9\xe5\xbc\x95\xe7\x94\xa8\xef\xbc\x89\n\x09 * AllowPrivateAccess \xe2\x80\x94\xe2\x80\x94 \xe5\x85\x81\xe8\xae\xb8\xe8\x93\x9d\xe5\x9b\xbe\xe8\xae\xbf\xe9\x97\xae protected \xe6\x88\x90\xe5\x91\x98\xef\xbc\x88\xe5\x90\xa6\xe5\x88\x99\xe5\x8f\xaa\xe8\x83\xbd\xe8\xb5\xb0 Getter\xef\xbc\x89\n\x09 *\n\x09 * \xe5\x9c\xa8 .cpp \xe6\x9e\x84\xe9\x80\xa0\xe5\x87\xbd\xe6\x95\xb0\xe9\x87\x8c\xe7\x94\xa8 CreateDefaultSubobject \xe5\x88\x9b\xe5\xbb\xba\xef\xbc\x8c\xe8\xbf\x99\xe6\x98\xaf UE \xe7\x9a\x84\xe3\x80\x8c\xe9\xbb\x98\xe8\xae\xa4\xe5\xad\x90\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x8d\xe6\x9c\xba\xe5\x88\xb6\xef\xbc\x8c\n\x09 * \xe5\x92\x8c 3D \xe9\x87\x8c CreateDefaultSubobject<UCapsuleComponent> \xe6\x98\xaf\xe5\x90\x8c\xe4\xb8\x80\xe5\xa5\x97 API\xe3\x80\x82\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x8c\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\xe5\xae\x9e\xe4\xbe\x8b\xe3\x80\x82\n\nVisibleAnywhere  \xe2\x80\x94\xe2\x80\x94 \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\xbb\x86\xe8\x8a\x82\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x8f\xaf\xe8\xa7\x81\xef\xbc\x88\xe6\x96\xb9\xe4\xbe\xbf\xe8\xb0\x83\xe8\xaf\x95\xef\xbc\x89\nBlueprintReadOnly \xe2\x80\x94\xe2\x80\x94 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xaf\xbb\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x86\x99\xef\xbc\x88\xe9\x81\xbf\xe5\x85\x8d\xe8\x93\x9d\xe5\x9b\xbe\xe8\xaf\xaf\xe6\x94\xb9\xe5\xbc\x95\xe7\x94\xa8\xef\xbc\x89\nAllowPrivateAccess \xe2\x80\x94\xe2\x80\x94 \xe5\x85\x81\xe8\xae\xb8\xe8\x93\x9d\xe5\x9b\xbe\xe8\xae\xbf\xe9\x97\xae protected \xe6\x88\x90\xe5\x91\x98\xef\xbc\x88\xe5\x90\xa6\xe5\x88\x99\xe5\x8f\xaa\xe8\x83\xbd\xe8\xb5\xb0 Getter\xef\xbc\x89\n\n\xe5\x9c\xa8 .cpp \xe6\x9e\x84\xe9\x80\xa0\xe5\x87\xbd\xe6\x95\xb0\xe9\x87\x8c\xe7\x94\xa8 CreateDefaultSubobject \xe5\x88\x9b\xe5\xbb\xba\xef\xbc\x8c\xe8\xbf\x99\xe6\x98\xaf UE \xe7\x9a\x84\xe3\x80\x8c\xe9\xbb\x98\xe8\xae\xa4\xe5\xad\x90\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x8d\xe6\x9c\xba\xe5\x88\xb6\xef\xbc\x8c\n\xe5\x92\x8c 3D \xe9\x87\x8c CreateDefaultSubobject<UCapsuleComponent> \xe6\x98\xaf\xe5\x90\x8c\xe4\xb8\x80\xe5\xa5\x97 API\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xa1\x80\xe9\x87\x8f / \xe7\xbb\x8f\xe9\xaa\x8c / \xe7\xad\x89\xe7\xba\xa7\xef\xbc\x9bUI \xe8\xae\xa2\xe9\x98\x85\xe5\x85\xb6\xe5\xa7\x94\xe6\x89\x98\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xb7\xe6\x96\xb0\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe9\x87\x8f / \xe7\xbb\x8f\xe9\xaa\x8c / \xe7\xad\x89\xe7\xba\xa7\xef\xbc\x9bUI \xe8\xae\xa2\xe9\x98\x85\xe5\x85\xb6\xe5\xa7\x94\xe6\x89\x98\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xb7\xe6\x96\xb0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleBehaviorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\x93\xe5\x9d\x90/\xe6\x88\x98\xe6\x96\x97/\xe5\xaf\xbf\xe5\x85\x83/\xe6\x97\xa5\xe5\xbf\x97\xe7\xad\x89\xe8\xa1\x8c\xe4\xb8\xba\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/XiuxianCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\x9d\x90/\xe6\x88\x98\xe6\x96\x97/\xe5\xaf\xbf\xe5\x85\x83/\xe6\x97\xa5\xe5\xbf\x97\xe7\xad\x89\xe8\xa1\x8c\xe4\xb8\xba\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleBehaviorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AXiuxianCharacterBase_GetActionComponent, "GetActionComponent" }, // 961667173
		{ &Z_Construct_UFunction_AXiuxianCharacterBase_GetIdleBehaviorComponent, "GetIdleBehaviorComponent" }, // 1766680899
		{ &Z_Construct_UFunction_AXiuxianCharacterBase_GetStatsComponent, "GetStatsComponent" }, // 2817802581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXiuxianCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXiuxianCharacterBase_Statics::NewProp_ActionComponent = { "ActionComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianCharacterBase, ActionComponent), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComponent_MetaData), NewProp_ActionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXiuxianCharacterBase_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianCharacterBase, StatsComponent), Z_Construct_UClass_UCharacterStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComponent_MetaData), NewProp_StatsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXiuxianCharacterBase_Statics::NewProp_IdleBehaviorComponent = { "IdleBehaviorComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianCharacterBase, IdleBehaviorComponent), Z_Construct_UClass_UXiuxianIdleBehaviorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleBehaviorComponent_MetaData), NewProp_IdleBehaviorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXiuxianCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianCharacterBase_Statics::NewProp_ActionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianCharacterBase_Statics::NewProp_StatsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianCharacterBase_Statics::NewProp_IdleBehaviorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AXiuxianCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperZDCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXiuxianCharacterBase_Statics::ClassParams = {
	&AXiuxianCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AXiuxianCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianCharacterBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AXiuxianCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXiuxianCharacterBase()
{
	if (!Z_Registration_Info_UClass_AXiuxianCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXiuxianCharacterBase.OuterSingleton, Z_Construct_UClass_AXiuxianCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXiuxianCharacterBase.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<AXiuxianCharacterBase>()
{
	return AXiuxianCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXiuxianCharacterBase);
AXiuxianCharacterBase::~AXiuxianCharacterBase() {}
// End Class AXiuxianCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXiuxianCharacterBase, AXiuxianCharacterBase::StaticClass, TEXT("AXiuxianCharacterBase"), &Z_Registration_Info_UClass_AXiuxianCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXiuxianCharacterBase), 1253820409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_3624568540(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_XiuxianCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
