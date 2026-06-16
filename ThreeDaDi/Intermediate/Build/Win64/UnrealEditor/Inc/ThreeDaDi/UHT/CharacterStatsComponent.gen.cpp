// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Character/CharacterStatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStatsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THREEDADI_API UClass* Z_Construct_UClass_UCharacterStatsComponent();
THREEDADI_API UClass* Z_Construct_UClass_UCharacterStatsComponent_NoRegister();
THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature();
THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature();
THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature();
THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_ThreeDaDi_eventOnHealthChanged_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xa1\x80\xe9\x87\x8f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewHealth, MaxHealth\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe9\x87\x8f\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewHealth, MaxHealth\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThreeDaDi, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth, float MaxHealth)
{
	struct _Script_ThreeDaDi_eventOnHealthChanged_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
	_Script_ThreeDaDi_eventOnHealthChanged_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.MaxHealth=MaxHealth;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnExpChanged
struct Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics
{
	struct _Script_ThreeDaDi_eventOnExpChanged_Parms
	{
		float NewExp;
		float MaxExp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x8f\xe9\xaa\x8c\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewExp, MaxExp\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x8f\xe9\xaa\x8c\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewExp, MaxExp\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::NewProp_NewExp = { "NewExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnExpChanged_Parms, NewExp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::NewProp_MaxExp = { "MaxExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnExpChanged_Parms, MaxExp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::NewProp_NewExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::NewProp_MaxExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThreeDaDi, nullptr, "OnExpChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnExpChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnExpChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExpChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExpChanged, float NewExp, float MaxExp)
{
	struct _Script_ThreeDaDi_eventOnExpChanged_Parms
	{
		float NewExp;
		float MaxExp;
	};
	_Script_ThreeDaDi_eventOnExpChanged_Parms Parms;
	Parms.NewExp=NewExp;
	Parms.MaxExp=MaxExp;
	OnExpChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnExpChanged

// Begin Delegate FOnLevelChanged
struct Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics
{
	struct _Script_ThreeDaDi_eventOnLevelChanged_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xad\x89\xe7\xba\xa7\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewLevel\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xad\x89\xe7\xba\xa7\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewLevel\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnLevelChanged_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThreeDaDi, nullptr, "OnLevelChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLevelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLevelChanged, int32 NewLevel)
{
	struct _Script_ThreeDaDi_eventOnLevelChanged_Parms
	{
		int32 NewLevel;
	};
	_Script_ThreeDaDi_eventOnLevelChanged_Parms Parms;
	Parms.NewLevel=NewLevel;
	OnLevelChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLevelChanged

// Begin Delegate FOnLifespanChanged
struct Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics
{
	struct _Script_ThreeDaDi_eventOnLifespanChanged_Parms
	{
		float NewLifespan;
		float MaxLifespan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xbf\xe5\x85\x83\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewLifespan, MaxLifespan\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xbf\xe5\x85\x83\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x88NewLifespan, MaxLifespan\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLifespan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifespan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::NewProp_NewLifespan = { "NewLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnLifespanChanged_Parms, NewLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::NewProp_MaxLifespan = { "MaxLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThreeDaDi_eventOnLifespanChanged_Parms, MaxLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::NewProp_NewLifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::NewProp_MaxLifespan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThreeDaDi, nullptr, "OnLifespanChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnLifespanChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::_Script_ThreeDaDi_eventOnLifespanChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLifespanChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLifespanChanged, float NewLifespan, float MaxLifespan)
{
	struct _Script_ThreeDaDi_eventOnLifespanChanged_Parms
	{
		float NewLifespan;
		float MaxLifespan;
	};
	_Script_ThreeDaDi_eventOnLifespanChanged_Parms Parms;
	Parms.NewLifespan=NewLifespan;
	Parms.MaxLifespan=MaxLifespan;
	OnLifespanChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLifespanChanged

// Begin Class UCharacterStatsComponent Function AddExp
struct Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics
{
	struct CharacterStatsComponent_eventAddExp_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa2\x9e\xe5\x8a\xa0\xe7\xbb\x8f\xe9\xaa\x8c\xef\xbc\x9b\xe6\xbb\xa1\xe5\x88\x99\xe5\x8d\x87\xe7\xba\xa7\xe5\xb9\xb6\xe9\x87\x8d\xe7\xbd\xae\xe6\xba\xa2\xe5\x87\xba\xe9\x83\xa8\xe5\x88\x86\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\x8a\xa0\xe7\xbb\x8f\xe9\xaa\x8c\xef\xbc\x9b\xe6\xbb\xa1\xe5\x88\x99\xe5\x8d\x87\xe7\xba\xa7\xe5\xb9\xb6\xe9\x87\x8d\xe7\xbd\xae\xe6\xba\xa2\xe5\x87\xba\xe9\x83\xa8\xe5\x88\x86\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventAddExp_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "AddExp", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::CharacterStatsComponent_eventAddExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::CharacterStatsComponent_eventAddExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_AddExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_AddExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execAddExp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddExp(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function AddExp

// Begin Class UCharacterStatsComponent Function AddLifespan
struct Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics
{
	struct CharacterStatsComponent_eventAddLifespan_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa2\x9e\xe5\x8a\xa0\xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x88\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x87 MaxLifespan\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\x8a\xa0\xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x88\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x87 MaxLifespan\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventAddLifespan_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "AddLifespan", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::CharacterStatsComponent_eventAddLifespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::CharacterStatsComponent_eventAddLifespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execAddLifespan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLifespan(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function AddLifespan

// Begin Class UCharacterStatsComponent Function ApplyDamage
struct Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics
{
	struct CharacterStatsComponent_eventApplyDamage_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\xa3\xe8\xa1\x80\xef\xbc\x88\xe4\xb8\x8d\xe4\xbd\x8e\xe4\xba\x8e 0\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa3\xe8\xa1\x80\xef\xbc\x88\xe4\xb8\x8d\xe4\xbd\x8e\xe4\xba\x8e 0\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventApplyDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "ApplyDamage", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::CharacterStatsComponent_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::CharacterStatsComponent_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function ApplyDamage

// Begin Class UCharacterStatsComponent Function GetExp
struct Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics
{
	struct CharacterStatsComponent_eventGetExp_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetExp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetExp", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::CharacterStatsComponent_eventGetExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::CharacterStatsComponent_eventGetExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetExp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExp();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetExp

// Begin Class UCharacterStatsComponent Function GetHealth
struct Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics
{
	struct CharacterStatsComponent_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Getter ----\n" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Getter ----" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::CharacterStatsComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::CharacterStatsComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetHealth

// Begin Class UCharacterStatsComponent Function GetLevel
struct Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics
{
	struct CharacterStatsComponent_eventGetLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetLevel", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::CharacterStatsComponent_eventGetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::CharacterStatsComponent_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLevel();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetLevel

// Begin Class UCharacterStatsComponent Function GetLifespan
struct Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics
{
	struct CharacterStatsComponent_eventGetLifespan_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetLifespan_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetLifespan", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::CharacterStatsComponent_eventGetLifespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::CharacterStatsComponent_eventGetLifespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetLifespan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLifespan();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetLifespan

// Begin Class UCharacterStatsComponent Function GetMaxExp
struct Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics
{
	struct CharacterStatsComponent_eventGetMaxExp_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetMaxExp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetMaxExp", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::CharacterStatsComponent_eventGetMaxExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::CharacterStatsComponent_eventGetMaxExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetMaxExp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxExp();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetMaxExp

// Begin Class UCharacterStatsComponent Function GetMaxHealth
struct Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics
{
	struct CharacterStatsComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::CharacterStatsComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::CharacterStatsComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetMaxHealth

// Begin Class UCharacterStatsComponent Function GetMaxLifespan
struct Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics
{
	struct CharacterStatsComponent_eventGetMaxLifespan_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventGetMaxLifespan_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "GetMaxLifespan", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::CharacterStatsComponent_eventGetMaxLifespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::CharacterStatsComponent_eventGetMaxLifespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execGetMaxLifespan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxLifespan();
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function GetMaxLifespan

// Begin Class UCharacterStatsComponent Function SetExp
struct Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics
{
	struct CharacterStatsComponent_eventSetExp_Parms
	{
		float NewExp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::NewProp_NewExp = { "NewExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetExp_Parms, NewExp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::NewProp_NewExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetExp", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::CharacterStatsComponent_eventSetExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::CharacterStatsComponent_eventSetExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetExp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewExp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExp(Z_Param_NewExp);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetExp

// Begin Class UCharacterStatsComponent Function SetHealth
struct Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics
{
	struct CharacterStatsComponent_eventSetHealth_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Setter ----\n" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Setter ----" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::CharacterStatsComponent_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::CharacterStatsComponent_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetHealth

// Begin Class UCharacterStatsComponent Function SetLevel
struct Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics
{
	struct CharacterStatsComponent_eventSetLevel_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetLevel", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::CharacterStatsComponent_eventSetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::CharacterStatsComponent_eventSetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevel(Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetLevel

// Begin Class UCharacterStatsComponent Function SetLifespan
struct Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics
{
	struct CharacterStatsComponent_eventSetLifespan_Parms
	{
		float NewLifespan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLifespan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::NewProp_NewLifespan = { "NewLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetLifespan_Parms, NewLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::NewProp_NewLifespan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetLifespan", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::CharacterStatsComponent_eventSetLifespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::CharacterStatsComponent_eventSetLifespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetLifespan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLifespan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLifespan(Z_Param_NewLifespan);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetLifespan

// Begin Class UCharacterStatsComponent Function SetMaxExp
struct Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics
{
	struct CharacterStatsComponent_eventSetMaxExp_Parms
	{
		float NewMaxExp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxExp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::NewProp_NewMaxExp = { "NewMaxExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetMaxExp_Parms, NewMaxExp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::NewProp_NewMaxExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetMaxExp", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::CharacterStatsComponent_eventSetMaxExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::CharacterStatsComponent_eventSetMaxExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetMaxExp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxExp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxExp(Z_Param_NewMaxExp);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetMaxExp

// Begin Class UCharacterStatsComponent Function SetMaxHealth
struct Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics
{
	struct CharacterStatsComponent_eventSetMaxHealth_Parms
	{
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetMaxHealth_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::CharacterStatsComponent_eventSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::CharacterStatsComponent_eventSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxHealth(Z_Param_NewMaxHealth);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetMaxHealth

// Begin Class UCharacterStatsComponent Function SetMaxLifespan
struct Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics
{
	struct CharacterStatsComponent_eventSetMaxLifespan_Parms
	{
		float NewMaxLifespan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxLifespan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::NewProp_NewMaxLifespan = { "NewMaxLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStatsComponent_eventSetMaxLifespan_Parms, NewMaxLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::NewProp_NewMaxLifespan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsComponent, nullptr, "SetMaxLifespan", nullptr, nullptr, Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::CharacterStatsComponent_eventSetMaxLifespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::CharacterStatsComponent_eventSetMaxLifespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStatsComponent::execSetMaxLifespan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxLifespan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxLifespan(Z_Param_NewMaxLifespan);
	P_NATIVE_END;
}
// End Class UCharacterStatsComponent Function SetMaxLifespan

// Begin Class UCharacterStatsComponent
void UCharacterStatsComponent::StaticRegisterNativesUCharacterStatsComponent()
{
	UClass* Class = UCharacterStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddExp", &UCharacterStatsComponent::execAddExp },
		{ "AddLifespan", &UCharacterStatsComponent::execAddLifespan },
		{ "ApplyDamage", &UCharacterStatsComponent::execApplyDamage },
		{ "GetExp", &UCharacterStatsComponent::execGetExp },
		{ "GetHealth", &UCharacterStatsComponent::execGetHealth },
		{ "GetLevel", &UCharacterStatsComponent::execGetLevel },
		{ "GetLifespan", &UCharacterStatsComponent::execGetLifespan },
		{ "GetMaxExp", &UCharacterStatsComponent::execGetMaxExp },
		{ "GetMaxHealth", &UCharacterStatsComponent::execGetMaxHealth },
		{ "GetMaxLifespan", &UCharacterStatsComponent::execGetMaxLifespan },
		{ "SetExp", &UCharacterStatsComponent::execSetExp },
		{ "SetHealth", &UCharacterStatsComponent::execSetHealth },
		{ "SetLevel", &UCharacterStatsComponent::execSetLevel },
		{ "SetLifespan", &UCharacterStatsComponent::execSetLifespan },
		{ "SetMaxExp", &UCharacterStatsComponent::execSetMaxExp },
		{ "SetMaxHealth", &UCharacterStatsComponent::execSetMaxHealth },
		{ "SetMaxLifespan", &UCharacterStatsComponent::execSetMaxLifespan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterStatsComponent);
UClass* Z_Construct_UClass_UCharacterStatsComponent_NoRegister()
{
	return UCharacterStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * UCharacterStatsComponent \xe2\x80\x94\xe2\x80\x94 \xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe5\x80\xbc\xe7\xbb\x84\xe4\xbb\xb6\n * ============================================================================\n *\n * \xe5\xad\x98\xe5\x82\xa8 Health / Exp / Level / Lifespan\xef\xbc\x88\xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x89\xef\xbc\x8c\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xe5\xa7\x94\xe6\x89\x98\xe4\xbe\x9b UI \xe5\x88\xb7\xe6\x96\xb0\xe3\x80\x82\n * \xe7\x8e\xa9\xe6\xb3\x95\xe7\xb3\xbb\xe7\xbb\x9f\xe5\xba\x94\xe8\xb0\x83\xe7\x94\xa8 AddExp / ApplyDamage / AddLifespan\xef\xbc\x8c\xe8\x80\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x94\xb9 UI\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Character/CharacterStatsComponent.h" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCharacterStatsComponent \xe2\x80\x94\xe2\x80\x94 \xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe5\x80\xbc\xe7\xbb\x84\xe4\xbb\xb6\n\n\n\xe5\xad\x98\xe5\x82\xa8 Health / Exp / Level / Lifespan\xef\xbc\x88\xe5\xaf\xbf\xe5\x85\x83\xef\xbc\x89\xef\xbc\x8c\xe5\x8f\x98\xe5\x8c\x96\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad\xe5\xa7\x94\xe6\x89\x98\xe4\xbe\x9b UI \xe5\x88\xb7\xe6\x96\xb0\xe3\x80\x82\n\xe7\x8e\xa9\xe6\xb3\x95\xe7\xb3\xbb\xe7\xbb\x9f\xe5\xba\x94\xe8\xb0\x83\xe7\x94\xa8 AddExp / ApplyDamage / AddLifespan\xef\xbc\x8c\xe8\x80\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x94\xb9 UI\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- \xe5\xa7\x94\xe6\x89\x98 ----\n" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- \xe5\xa7\x94\xe6\x89\x98 ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExpChanged_MetaData[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelChanged_MetaData[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLifespanChanged_MetaData[] = {
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxExp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifespan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xbf\xe5\x85\x83\xe8\xbf\x9b\xe5\xba\xa6\xef\xbc\x88""0 ~ MaxLifespan\xef\xbc\x89\xef\xbc\x8c\xe9\x9a\x8f\xe6\x97\xb6\xe9\x97\xb4\xe7\xbc\x93\xe6\x85\xa2\xe5\xa2\x9e\xe9\x95\xbf\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xbf\xe5\x85\x83\xe8\xbf\x9b\xe5\xba\xa6\xef\xbc\x88""0 ~ MaxLifespan\xef\xbc\x89\xef\xbc\x8c\xe9\x9a\x8f\xe6\x97\xb6\xe9\x97\xb4\xe7\xbc\x93\xe6\x85\xa2\xe5\xa2\x9e\xe9\x95\xbf\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLifespan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character|Stats" },
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpMaxExpMultiplier_MetaData[] = {
		{ "Category", "Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8d\x87\xe7\xba\xa7\xe6\x97\xb6 MaxExp \xe7\x9a\x84\xe5\x80\x8d\xe7\x8e\x87\xef\xbc\x88\xe5\x8f\xaf\xe5\x9c\xa8\xe5\xad\x90\xe7\xb1\xbb\xe6\x88\x96\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe6\x9b\xbf\xe6\x8d\xa2\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x87\xe7\xba\xa7\xe6\x97\xb6 MaxExp \xe7\x9a\x84\xe5\x80\x8d\xe7\x8e\x87\xef\xbc\x88\xe5\x8f\xaf\xe5\x9c\xa8\xe5\xad\x90\xe7\xb1\xbb\xe6\x88\x96\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe6\x9b\xbf\xe6\x8d\xa2\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLifespanChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Exp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifespan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifespan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelUpMaxExpMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterStatsComponent_AddExp, "AddExp" }, // 2543352861
		{ &Z_Construct_UFunction_UCharacterStatsComponent_AddLifespan, "AddLifespan" }, // 307988368
		{ &Z_Construct_UFunction_UCharacterStatsComponent_ApplyDamage, "ApplyDamage" }, // 2500267321
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetExp, "GetExp" }, // 1619745563
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetHealth, "GetHealth" }, // 3679102303
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetLevel, "GetLevel" }, // 1972744290
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetLifespan, "GetLifespan" }, // 998718140
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetMaxExp, "GetMaxExp" }, // 53436483
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetMaxHealth, "GetMaxHealth" }, // 909432590
		{ &Z_Construct_UFunction_UCharacterStatsComponent_GetMaxLifespan, "GetMaxLifespan" }, // 615162333
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetExp, "SetExp" }, // 4066958292
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetHealth, "SetHealth" }, // 1405247724
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetLevel, "SetLevel" }, // 504773886
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetLifespan, "SetLifespan" }, // 797341199
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetMaxExp, "SetMaxExp" }, // 2964495011
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetMaxHealth, "SetMaxHealth" }, // 2131955758
		{ &Z_Construct_UFunction_UCharacterStatsComponent_SetMaxLifespan, "SetMaxLifespan" }, // 2779150203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, OnHealthChanged), Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 424439481
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnExpChanged = { "OnExpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, OnExpChanged), Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExpChanged_MetaData), NewProp_OnExpChanged_MetaData) }; // 2352319863
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnLevelChanged = { "OnLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, OnLevelChanged), Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelChanged_MetaData), NewProp_OnLevelChanged_MetaData) }; // 784605994
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnLifespanChanged = { "OnLifespanChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, OnLifespanChanged), Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLifespanChanged_MetaData), NewProp_OnLifespanChanged_MetaData) }; // 133549947
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, Exp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exp_MetaData), NewProp_Exp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_MaxExp = { "MaxExp", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, MaxExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxExp_MetaData), NewProp_MaxExp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Lifespan = { "Lifespan", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, Lifespan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifespan_MetaData), NewProp_Lifespan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_MaxLifespan = { "MaxLifespan", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, MaxLifespan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLifespan_MetaData), NewProp_MaxLifespan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_LevelUpMaxExpMultiplier = { "LevelUpMaxExpMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatsComponent, LevelUpMaxExpMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelUpMaxExpMultiplier_MetaData), NewProp_LevelUpMaxExpMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnExpChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_OnLifespanChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Exp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_MaxExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_Lifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_MaxLifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatsComponent_Statics::NewProp_LevelUpMaxExpMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStatsComponent_Statics::ClassParams = {
	&UCharacterStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterStatsComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterStatsComponent.OuterSingleton, Z_Construct_UClass_UCharacterStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterStatsComponent.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<UCharacterStatsComponent>()
{
	return UCharacterStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStatsComponent);
UCharacterStatsComponent::~UCharacterStatsComponent() {}
// End Class UCharacterStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterStatsComponent, UCharacterStatsComponent::StaticClass, TEXT("UCharacterStatsComponent"), &Z_Registration_Info_UClass_UCharacterStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterStatsComponent), 1483423888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_3305559514(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Character_CharacterStatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
