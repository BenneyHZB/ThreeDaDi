// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreeDaDi_init() {}
	THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature();
	THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature();
	THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature();
	THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature();
	THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature();
	THREEDADI_API UFunction* Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ThreeDaDi;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ThreeDaDi()
	{
		if (!Z_Registration_Info_UPackage__Script_ThreeDaDi.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ThreeDaDi_OnActionStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThreeDaDi_OnExpChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThreeDaDi_OnGameplayLogAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThreeDaDi_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThreeDaDi_OnLevelChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThreeDaDi_OnLifespanChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ThreeDaDi",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x42AF7B2D,
				0x5BE5FB19,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ThreeDaDi.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ThreeDaDi.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ThreeDaDi(Z_Construct_UPackage__Script_ThreeDaDi, TEXT("/Script/ThreeDaDi"), Z_Registration_Info_UPackage__Script_ThreeDaDi, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x42AF7B2D, 0x5BE5FB19));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
