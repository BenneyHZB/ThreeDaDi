// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Game/XiuxianIdlePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXiuxianIdlePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianCharacterBase_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianIdlePlayerController();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianIdlePlayerController_NoRegister();
THREEDADI_API UClass* Z_Construct_UClass_UXiuxianMainHUDWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Class AXiuxianIdlePlayerController Function CreateMainHUD
struct Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6 AddToViewport \xe4\xb8\xbb HUD\xef\xbc\x88\xe9\x9c\x80\xe9\x85\x8d\xe7\xbd\xae MainHUDWidgetClass\xef\xbc\x8c\xe4\xb8\x80\xe8\x88\xac\xe4\xb8\xba WBP_MainHUD\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6 AddToViewport \xe4\xb8\xbb HUD\xef\xbc\x88\xe9\x9c\x80\xe9\x85\x8d\xe7\xbd\xae MainHUDWidgetClass\xef\xbc\x8c\xe4\xb8\x80\xe8\x88\xac\xe4\xb8\xba WBP_MainHUD\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianIdlePlayerController, nullptr, "CreateMainHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianIdlePlayerController::execCreateMainHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMainHUD();
	P_NATIVE_END;
}
// End Class AXiuxianIdlePlayerController Function CreateMainHUD

// Begin Class AXiuxianIdlePlayerController Function GetMouseWorldPositionOnPlane
struct Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics
{
	struct XiuxianIdlePlayerController_eventGetMouseWorldPositionOnPlane_Parms
	{
		float PlaneZ;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\xb0\x86\xe9\xbc\xa0\xe6\xa0\x87\xe6\x8a\x95\xe5\xb0\x84\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a Z \xe5\xb9\xb3\xe9\x9d\xa2\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xef\xbc\x9b\xe5\xa4\xb1\xe8\xb4\xa5\xe8\xbf\x94\xe5\x9b\x9e ZeroVector\xe3\x80\x82\n\x09 * BlueprintCallable\xef\xbc\x9a\xe6\x96\xb9\xe4\xbe\xbf\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\x81\x9a\xe7\x82\xb9\xe9\x80\x89\xe3\x80\x81\xe6\x94\xbe\xe7\xbd\xae\xe5\xbb\xba\xe7\xad\x91\xe7\xad\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_PlaneZ", "0.000000" },
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86\xe9\xbc\xa0\xe6\xa0\x87\xe6\x8a\x95\xe5\xb0\x84\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a Z \xe5\xb9\xb3\xe9\x9d\xa2\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xef\xbc\x9b\xe5\xa4\xb1\xe8\xb4\xa5\xe8\xbf\x94\xe5\x9b\x9e ZeroVector\xe3\x80\x82\nBlueprintCallable\xef\xbc\x9a\xe6\x96\xb9\xe4\xbe\xbf\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\x81\x9a\xe7\x82\xb9\xe9\x80\x89\xe3\x80\x81\xe6\x94\xbe\xe7\xbd\xae\xe5\xbb\xba\xe7\xad\x91\xe7\xad\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaneZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::NewProp_PlaneZ = { "PlaneZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdlePlayerController_eventGetMouseWorldPositionOnPlane_Parms, PlaneZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdlePlayerController_eventGetMouseWorldPositionOnPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::NewProp_PlaneZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianIdlePlayerController, nullptr, "GetMouseWorldPositionOnPlane", nullptr, nullptr, Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::XiuxianIdlePlayerController_eventGetMouseWorldPositionOnPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::XiuxianIdlePlayerController_eventGetMouseWorldPositionOnPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianIdlePlayerController::execGetMouseWorldPositionOnPlane)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlaneZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetMouseWorldPositionOnPlane(Z_Param_PlaneZ);
	P_NATIVE_END;
}
// End Class AXiuxianIdlePlayerController Function GetMouseWorldPositionOnPlane

// Begin Class AXiuxianIdlePlayerController Function GetProtagonistCharacter
struct Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics
{
	struct XiuxianIdlePlayerController_eventGetProtagonistCharacter_Parms
	{
		AXiuxianCharacterBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe3\x80\x8c\xe9\x80\xbb\xe8\xbe\x91\xe4\xb8\x8a\xe7\x9a\x84\xe4\xb8\xbb\xe8\xa7\x92\xe3\x80\x8d\xe2\x80\x94\xe2\x80\x94\xe4\xbe\x9b\xe4\xb8\xbb UI \xe7\xbb\x91\xe5\xae\x9a Action / Stats\xe3\x80\x82\n\x09 * \xe4\xbc\x98\xe5\x85\x88 ProtagonistOverride\xef\xbc\x9b\xe5\x90\xa6\xe5\x88\x99\xe5\xb0\x9d\xe8\xaf\x95 Cast \xe5\xbd\x93\xe5\x89\x8d Pawn\xe3\x80\x82\n\x09 * \xe3\x80\x90""Demo \xe4\xbb\x8d\xe7\x94\xa8\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba Pawn \xe6\x97\xb6\xe3\x80\x91\xe5\x9c\xa8 PC \xe6\x88\x96\xe5\x85\xb3\xe5\x8d\xa1\xe9\x87\x8c\xe6\x8c\x87\xe5\xae\x9a ProtagonistOverride\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe3\x80\x8c\xe9\x80\xbb\xe8\xbe\x91\xe4\xb8\x8a\xe7\x9a\x84\xe4\xb8\xbb\xe8\xa7\x92\xe3\x80\x8d\xe2\x80\x94\xe2\x80\x94\xe4\xbe\x9b\xe4\xb8\xbb UI \xe7\xbb\x91\xe5\xae\x9a Action / Stats\xe3\x80\x82\n\xe4\xbc\x98\xe5\x85\x88 ProtagonistOverride\xef\xbc\x9b\xe5\x90\xa6\xe5\x88\x99\xe5\xb0\x9d\xe8\xaf\x95 Cast \xe5\xbd\x93\xe5\x89\x8d Pawn\xe3\x80\x82\n\xe3\x80\x90""Demo \xe4\xbb\x8d\xe7\x94\xa8\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba Pawn \xe6\x97\xb6\xe3\x80\x91\xe5\x9c\xa8 PC \xe6\x88\x96\xe5\x85\xb3\xe5\x8d\xa1\xe9\x87\x8c\xe6\x8c\x87\xe5\xae\x9a ProtagonistOverride\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdlePlayerController_eventGetProtagonistCharacter_Parms, ReturnValue), Z_Construct_UClass_AXiuxianCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianIdlePlayerController, nullptr, "GetProtagonistCharacter", nullptr, nullptr, Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::XiuxianIdlePlayerController_eventGetProtagonistCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::XiuxianIdlePlayerController_eventGetProtagonistCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianIdlePlayerController::execGetProtagonistCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AXiuxianCharacterBase**)Z_Param__Result=P_THIS->GetProtagonistCharacter();
	P_NATIVE_END;
}
// End Class AXiuxianIdlePlayerController Function GetProtagonistCharacter

// Begin Class AXiuxianIdlePlayerController Function ProjectMouseToWorldPlane
struct Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics
{
	struct XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms
	{
		float PlaneZ;
		FVector OutWorldPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xiuxian|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x8a\x95\xe5\xb0\x84\xe9\xbc\xa0\xe6\xa0\x87\xe5\x88\xb0\xe4\xb8\x96\xe7\x95\x8c\xe5\xb9\xb3\xe9\x9d\xa2\xef\xbc\x8c\xe6\x88\x90\xe5\x8a\x9f\xe6\x97\xb6 OutWorldPosition \xe6\x9c\x89\xe6\x95\x88\xe5\xb9\xb6\xe8\xbf\x94\xe5\x9b\x9e true\xe3\x80\x82\n\x09 * \xe6\xaf\x94 GetMouseWorldPositionOnPlane \xe6\x9b\xb4\xe9\x80\x82\xe5\x90\x88 C++ / \xe8\x93\x9d\xe5\x9b\xbe\xe9\x9c\x80\xe8\xa6\x81\xe5\x8c\xba\xe5\x88\x86\xe6\x88\x90\xe5\x8a\x9f\xe5\xa4\xb1\xe8\xb4\xa5\xe7\x9a\x84\xe5\x9c\xba\xe6\x99\xaf\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe9\xbc\xa0\xe6\xa0\x87\xe5\x88\xb0\xe4\xb8\x96\xe7\x95\x8c\xe5\xb9\xb3\xe9\x9d\xa2\xef\xbc\x8c\xe6\x88\x90\xe5\x8a\x9f\xe6\x97\xb6 OutWorldPosition \xe6\x9c\x89\xe6\x95\x88\xe5\xb9\xb6\xe8\xbf\x94\xe5\x9b\x9e true\xe3\x80\x82\n\xe6\xaf\x94 GetMouseWorldPositionOnPlane \xe6\x9b\xb4\xe9\x80\x82\xe5\x90\x88 C++ / \xe8\x93\x9d\xe5\x9b\xbe\xe9\x9c\x80\xe8\xa6\x81\xe5\x8c\xba\xe5\x88\x86\xe6\x88\x90\xe5\x8a\x9f\xe5\xa4\xb1\xe8\xb4\xa5\xe7\x9a\x84\xe5\x9c\xba\xe6\x99\xaf\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaneZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_PlaneZ = { "PlaneZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms, PlaneZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_OutWorldPosition = { "OutWorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms, OutWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms), &Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_PlaneZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_OutWorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXiuxianIdlePlayerController, nullptr, "ProjectMouseToWorldPlane", nullptr, nullptr, Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::XiuxianIdlePlayerController_eventProjectMouseToWorldPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AXiuxianIdlePlayerController::execProjectMouseToWorldPlane)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlaneZ);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProjectMouseToWorldPlane(Z_Param_PlaneZ,Z_Param_Out_OutWorldPosition);
	P_NATIVE_END;
}
// End Class AXiuxianIdlePlayerController Function ProjectMouseToWorldPlane

// Begin Class AXiuxianIdlePlayerController
void AXiuxianIdlePlayerController::StaticRegisterNativesAXiuxianIdlePlayerController()
{
	UClass* Class = AXiuxianIdlePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMainHUD", &AXiuxianIdlePlayerController::execCreateMainHUD },
		{ "GetMouseWorldPositionOnPlane", &AXiuxianIdlePlayerController::execGetMouseWorldPositionOnPlane },
		{ "GetProtagonistCharacter", &AXiuxianIdlePlayerController::execGetProtagonistCharacter },
		{ "ProjectMouseToWorldPlane", &AXiuxianIdlePlayerController::execProjectMouseToWorldPlane },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXiuxianIdlePlayerController);
UClass* Z_Construct_UClass_AXiuxianIdlePlayerController_NoRegister()
{
	return AXiuxianIdlePlayerController::StaticClass();
}
struct Z_Construct_UClass_AXiuxianIdlePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * AXiuxianIdlePlayerController \xe2\x80\x94\xe2\x80\x94 \xe6\x94\xbe\xe7\xbd\xae\xe7\xb1\xbb Demo \xe7\x9a\x84\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\n * ============================================================================\n *\n * \xe3\x80\x90\xe5\x92\x8c 3D \xe7\xac\xac\xe4\xb8\x89\xe4\xba\xba\xe7\xa7\xb0 PlayerController \xe7\x9a\x84\xe5\xb7\xae\xe5\xbc\x82\xe3\x80\x91\n *   3D \xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a""Enhanced Input \xe2\x86\x92 \xe7\xa7\xbb\xe5\x8a\xa8/\xe8\xb7\xb3\xe8\xb7\x83/\xe9\x95\x9c\xe5\xa4\xb4\xe6\x97\x8b\xe8\xbd\xac\xef\xbc\x8cPawn \xe6\x98\xaf Character\n *   2D \xe6\x94\xbe\xe7\xbd\xae\xef\xbc\x9a\xe9\xbc\xa0\xe6\xa0\x87\xe5\x8f\xaf\xe8\xa7\x81 + \xe7\x82\xb9\xe5\x87\xbb/\xe6\x82\xac\xe5\x81\x9c\xe4\xba\x8b\xe4\xbb\xb6 + \xe5\xb1\x8f\xe5\xb9\x95\xe5\x9d\x90\xe6\xa0\x87 \xe2\x86\x92 \xe4\xb8\x96\xe7\x95\x8c XY \xe5\xb9\xb3\xe9\x9d\xa2\xe5\x9d\x90\xe6\xa0\x87\n *\n * \xe3\x80\x90""DeprojectMousePositionToWorld \xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xef\xbc\x9f\xe3\x80\x91\n * \xe4\xbb\x8e 2D \xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x8f\x8d\xe6\x8e\xa8\xe4\xb8\x80\xe6\x9d\xa1 3D \xe5\xb0\x84\xe7\xba\xbf\xef\xbc\x88WorldLocation + WorldDirection\xef\xbc\x89\xe3\x80\x82\n * \xe5\x86\x8d\xe4\xb8\x8e Z=\xe5\xb8\xb8\xe6\x95\xb0\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe6\xb1\x82\xe4\xba\xa4\xef\xbc\x8c\xe5\xb0\xb1\xe5\xbe\x97\xe5\x88\xb0\xe3\x80\x8c\xe7\x8e\xa9\xe5\xae\xb6\xe7\x82\xb9\xe5\x88\xb0\xe4\xba\x86\xe5\x9c\xba\xe6\x99\xaf\xe5\x93\xaa\xe4\xb8\xaa (X,Y)\xe3\x80\x8d\xe2\x80\x94\xe2\x80\x94\n * \xe8\xbf\x99\xe6\x98\xaf 2D \xe4\xbf\xaf\xe8\xa7\x86/\xe7\xad\x89\xe8\xb7\x9d\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe6\xa0\xb8\xe5\xbf\x83\xe8\xbe\x93\xe5\x85\xa5\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x8c\xe7\x9b\xb8\xe5\xbd\x93\xe4\xba\x8e 3D \xe9\x87\x8c LineTrace \xe7\x9a\x84\xe7\xae\x80\xe5\x8c\x96\xe7\x89\x88\xe3\x80\x82\n *\n * \xe3\x80\x90""bEnableClickEvents / bEnableMouseOverEvents\xe3\x80\x91\n * \xe8\x8b\xa5\xe8\xa6\x81\xe5\x9c\xa8 Actor \xe4\xb8\x8a\xe7\x94\xa8 OnClicked / OnBeginCursorOver\xef\xbc\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe5\x9c\xa8 PC \xe4\xb8\x8a\xe6\x89\x93\xe5\xbc\x80\xe8\xbf\x99\xe4\xb8\xa4\xe9\xa1\xb9\xef\xbc\x8c\n * \xe5\x92\x8c 3D \xe7\x82\xb9\xe5\x87\xbb UI \xe6\x88\x96\xe5\x9c\xba\xe6\x99\xaf\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe8\xa6\x81\xe6\xb1\x82\xe7\x9b\xb8\xe5\x90\x8c\xe3\x80\x82\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game/XiuxianIdlePlayerController.h" },
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AXiuxianIdlePlayerController \xe2\x80\x94\xe2\x80\x94 \xe6\x94\xbe\xe7\xbd\xae\xe7\xb1\xbb Demo \xe7\x9a\x84\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\n\n\n\xe3\x80\x90\xe5\x92\x8c 3D \xe7\xac\xac\xe4\xb8\x89\xe4\xba\xba\xe7\xa7\xb0 PlayerController \xe7\x9a\x84\xe5\xb7\xae\xe5\xbc\x82\xe3\x80\x91\n  3D \xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a""Enhanced Input \xe2\x86\x92 \xe7\xa7\xbb\xe5\x8a\xa8/\xe8\xb7\xb3\xe8\xb7\x83/\xe9\x95\x9c\xe5\xa4\xb4\xe6\x97\x8b\xe8\xbd\xac\xef\xbc\x8cPawn \xe6\x98\xaf Character\n  2D \xe6\x94\xbe\xe7\xbd\xae\xef\xbc\x9a\xe9\xbc\xa0\xe6\xa0\x87\xe5\x8f\xaf\xe8\xa7\x81 + \xe7\x82\xb9\xe5\x87\xbb/\xe6\x82\xac\xe5\x81\x9c\xe4\xba\x8b\xe4\xbb\xb6 + \xe5\xb1\x8f\xe5\xb9\x95\xe5\x9d\x90\xe6\xa0\x87 \xe2\x86\x92 \xe4\xb8\x96\xe7\x95\x8c XY \xe5\xb9\xb3\xe9\x9d\xa2\xe5\x9d\x90\xe6\xa0\x87\n\n\xe3\x80\x90""DeprojectMousePositionToWorld \xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xef\xbc\x9f\xe3\x80\x91\n\xe4\xbb\x8e 2D \xe5\xb1\x8f\xe5\xb9\x95\xe7\x82\xb9\xe5\x8f\x8d\xe6\x8e\xa8\xe4\xb8\x80\xe6\x9d\xa1 3D \xe5\xb0\x84\xe7\xba\xbf\xef\xbc\x88WorldLocation + WorldDirection\xef\xbc\x89\xe3\x80\x82\n\xe5\x86\x8d\xe4\xb8\x8e Z=\xe5\xb8\xb8\xe6\x95\xb0\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe6\xb1\x82\xe4\xba\xa4\xef\xbc\x8c\xe5\xb0\xb1\xe5\xbe\x97\xe5\x88\xb0\xe3\x80\x8c\xe7\x8e\xa9\xe5\xae\xb6\xe7\x82\xb9\xe5\x88\xb0\xe4\xba\x86\xe5\x9c\xba\xe6\x99\xaf\xe5\x93\xaa\xe4\xb8\xaa (X,Y)\xe3\x80\x8d\xe2\x80\x94\xe2\x80\x94\n\xe8\xbf\x99\xe6\x98\xaf 2D \xe4\xbf\xaf\xe8\xa7\x86/\xe7\xad\x89\xe8\xb7\x9d\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe6\xa0\xb8\xe5\xbf\x83\xe8\xbe\x93\xe5\x85\xa5\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x8c\xe7\x9b\xb8\xe5\xbd\x93\xe4\xba\x8e 3D \xe9\x87\x8c LineTrace \xe7\x9a\x84\xe7\xae\x80\xe5\x8c\x96\xe7\x89\x88\xe3\x80\x82\n\n\xe3\x80\x90""bEnableClickEvents / bEnableMouseOverEvents\xe3\x80\x91\n\xe8\x8b\xa5\xe8\xa6\x81\xe5\x9c\xa8 Actor \xe4\xb8\x8a\xe7\x94\xa8 OnClicked / OnBeginCursorOver\xef\xbc\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe5\x9c\xa8 PC \xe4\xb8\x8a\xe6\x89\x93\xe5\xbc\x80\xe8\xbf\x99\xe4\xb8\xa4\xe9\xa1\xb9\xef\xbc\x8c\n\xe5\x92\x8c 3D \xe7\x82\xb9\xe5\x87\xbb UI \xe6\x88\x96\xe5\x9c\xba\xe6\x99\xaf\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe8\xa6\x81\xe6\xb1\x82\xe7\x9b\xb8\xe5\x90\x8c\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDWidgetClass_MetaData[] = {
		{ "Category", "Xiuxian|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** WBP_MainHUD \xe7\x9a\x84\xe7\x88\xb6\xe7\xb1\xbb\xef\xbc\x9b\xe5\x9c\xa8 PC \xe8\x93\x9d\xe5\x9b\xbe\xe6\x88\x96\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe9\x87\x8c\xe6\x8c\x87\xe5\xae\x9a\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WBP_MainHUD \xe7\x9a\x84\xe7\x88\xb6\xe7\xb1\xbb\xef\xbc\x9b\xe5\x9c\xa8 PC \xe8\x93\x9d\xe5\x9b\xbe\xe6\x88\x96\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe9\x87\x8c\xe6\x8c\x87\xe5\xae\x9a\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistOverride_MetaData[] = {
		{ "Category", "Xiuxian|Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93 Controlled Pawn \xe4\xb8\x8d\xe6\x98\xaf\xe8\xa7\x92\xe8\x89\xb2\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\xbb\xe8\xa7\x92\xef\xbc\x88\xe5\xa6\x82 Demo \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe5\x9c\xba\xe6\x99\xaf\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93 Controlled Pawn \xe4\xb8\x8d\xe6\x98\xaf\xe8\xa7\x92\xe8\x89\xb2\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\xbb\xe8\xa7\x92\xef\xbc\x88\xe5\xa6\x82 Demo \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe5\x9c\xba\xe6\x99\xaf\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDWidget_MetaData[] = {
		{ "Category", "Xiuxian|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xb7\xb2\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\xe5\xae\x9e\xe4\xbe\x8b\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/XiuxianIdlePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb7\xb2\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\xe5\xae\x9e\xe4\xbe\x8b\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainHUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProtagonistOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainHUDWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AXiuxianIdlePlayerController_CreateMainHUD, "CreateMainHUD" }, // 2281733708
		{ &Z_Construct_UFunction_AXiuxianIdlePlayerController_GetMouseWorldPositionOnPlane, "GetMouseWorldPositionOnPlane" }, // 3788678413
		{ &Z_Construct_UFunction_AXiuxianIdlePlayerController_GetProtagonistCharacter, "GetProtagonistCharacter" }, // 2572640472
		{ &Z_Construct_UFunction_AXiuxianIdlePlayerController_ProjectMouseToWorldPlane, "ProjectMouseToWorldPlane" }, // 1748242986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXiuxianIdlePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::NewProp_MainHUDWidgetClass = { "MainHUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdlePlayerController, MainHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UXiuxianMainHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDWidgetClass_MetaData), NewProp_MainHUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::NewProp_ProtagonistOverride = { "ProtagonistOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdlePlayerController, ProtagonistOverride), Z_Construct_UClass_AXiuxianCharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistOverride_MetaData), NewProp_ProtagonistOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::NewProp_MainHUDWidget = { "MainHUDWidget", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdlePlayerController, MainHUDWidget), Z_Construct_UClass_UXiuxianMainHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDWidget_MetaData), NewProp_MainHUDWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::NewProp_MainHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::NewProp_ProtagonistOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::NewProp_MainHUDWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::ClassParams = {
	&AXiuxianIdlePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXiuxianIdlePlayerController()
{
	if (!Z_Registration_Info_UClass_AXiuxianIdlePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXiuxianIdlePlayerController.OuterSingleton, Z_Construct_UClass_AXiuxianIdlePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXiuxianIdlePlayerController.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<AXiuxianIdlePlayerController>()
{
	return AXiuxianIdlePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXiuxianIdlePlayerController);
AXiuxianIdlePlayerController::~AXiuxianIdlePlayerController() {}
// End Class AXiuxianIdlePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXiuxianIdlePlayerController, AXiuxianIdlePlayerController::StaticClass, TEXT("AXiuxianIdlePlayerController"), &Z_Registration_Info_UClass_AXiuxianIdlePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXiuxianIdlePlayerController), 4219606541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_3729200369(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdlePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
