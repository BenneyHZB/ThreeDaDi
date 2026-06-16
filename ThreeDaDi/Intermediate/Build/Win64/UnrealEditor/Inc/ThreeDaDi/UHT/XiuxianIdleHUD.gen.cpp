// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDaDi/Game/XiuxianIdleHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXiuxianIdleHUD() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianIdleHUD();
THREEDADI_API UClass* Z_Construct_UClass_AXiuxianIdleHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThreeDaDi();
// End Cross Module References

// Begin Class AXiuxianIdleHUD
void AXiuxianIdleHUD::StaticRegisterNativesAXiuxianIdleHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXiuxianIdleHUD);
UClass* Z_Construct_UClass_AXiuxianIdleHUD_NoRegister()
{
	return AXiuxianIdleHUD::StaticClass();
}
struct Z_Construct_UClass_AXiuxianIdleHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ============================================================================\n * AXiuxianIdleHUD \xe2\x80\x94\xe2\x80\x94 Demo \xe7\x94\xa8 HUD\xef\xbc\x88""Canvas \xe7\xbb\x98\xe5\x88\xb6\xe8\xb0\x83\xe8\xaf\x95\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x89\n * ============================================================================\n *\n * \xe3\x80\x90HUD vs UMG\xef\xbc\x88""3D \xe9\xa1\xb9\xe7\x9b\xae\xe9\x87\x8c\xe4\xbd\xa0\xe4\xb9\x9f\xe5\xb8\xb8\xe9\x80\x89\xef\xbc\x89\xe3\x80\x91\n *   - AHUD + DrawHUD + Canvas\xef\xbc\x9a\xe8\xbd\xbb\xe9\x87\x8f\xe3\x80\x81\xe9\x80\x82\xe5\x90\x88\xe4\xb8\xb4\xe6\x97\xb6\xe8\xb0\x83\xe8\xaf\x95\xe6\x96\x87\xe5\xad\x97\xef\xbc\x8c\xe6\x9c\xac Demo \xe7\x94\xa8\xe6\x9d\xa5\xe6\x98\xbe\xe7\xa4\xba\xe9\xbc\xa0\xe6\xa0\x87\xe5\x9d\x90\xe6\xa0\x87\n *   - UUserWidget\xef\xbc\x88UMG\xef\xbc\x89\xef\xbc\x9a\xe6\xad\xa3\xe5\xbc\x8f UI\xef\xbc\x88\xe8\xa1\x80\xe6\x9d\xa1\xe3\x80\x81\xe8\x83\x8c\xe5\x8c\x85\xe3\x80\x81\xe6\x8c\x89\xe9\x92\xae\xef\xbc\x89\xe5\xba\x94\xe8\xb5\xb0 Widget\xef\xbc\x8c\xe5\x92\x8c 2D/3D \xe6\x97\xa0\xe5\x85\xb3\n *\n * \xe3\x80\x90""DrawHUD \xe8\xb0\x83\xe7\x94\xa8\xe6\x97\xb6\xe6\x9c\xba\xe3\x80\x91\n * \xe6\xaf\x8f\xe5\xb8\xa7\xe5\x9c\xa8\xe6\xb8\xb2\xe6\x9f\x93 UI \xe5\xb1\x82\xe4\xb9\x8b\xe5\x89\x8d\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x88\xe7\xb1\xbb\xe4\xbc\xbc 3D \xe9\x87\x8c PostRender \xe8\xb0\x83\xe8\xaf\x95\xe7\x94\xbb\xe7\xba\xbf\xef\xbc\x8c\xe4\xbd\x86\xe4\xb8\x93\xe9\x97\xa8\xe7\xbb\x99 2D \xe5\xb1\x8f\xe5\xb9\x95\xe6\x96\x87\xe5\xad\x97\xef\xbc\x89\xe3\x80\x82\n *\n * \xe3\x80\x90WorldPlaneZ\xe3\x80\x91\n * \xe5\xbf\x85\xe9\xa1\xbb\xe5\x92\x8c PlayerController \xe6\x8a\x95\xe5\xb0\x84\xe9\xbc\xa0\xe6\xa0\x87\xe6\x97\xb6\xe7\x94\xa8\xe7\x9a\x84 Z \xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb8\x80\xe8\x87\xb4\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe3\x80\x8c\xe5\xb1\x8f\xe5\xb9\x95\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xe3\x80\x8d\xe5\x92\x8c\n * \xe3\x80\x8c\xe5\xae\x9e\xe9\x99\x85\xe7\x82\xb9\xe5\x87\xbb\xe9\x80\xbb\xe8\xbe\x91\xe7\x94\xa8\xe7\x9a\x84\xe5\x9d\x90\xe6\xa0\x87\xe3\x80\x8d\xe4\xbc\x9a\xe5\xaf\xb9\xe4\xb8\x8d\xe4\xb8\x8a \xe2\x80\x94\xe2\x80\x94 2D \xe9\xa1\xb9\xe7\x9b\xae\xe9\x87\x8c\xe8\xbf\x99\xe6\x98\xaf\xe5\xb8\xb8\xe8\xa7\x81\xe8\x81\x94\xe8\xb0\x83\xe7\x82\xb9\xe3\x80\x82\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Game/XiuxianIdleHUD.h" },
		{ "ModuleRelativePath", "Game/XiuxianIdleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AXiuxianIdleHUD \xe2\x80\x94\xe2\x80\x94 Demo \xe7\x94\xa8 HUD\xef\xbc\x88""Canvas \xe7\xbb\x98\xe5\x88\xb6\xe8\xb0\x83\xe8\xaf\x95\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x89\n\n\n\xe3\x80\x90HUD vs UMG\xef\xbc\x88""3D \xe9\xa1\xb9\xe7\x9b\xae\xe9\x87\x8c\xe4\xbd\xa0\xe4\xb9\x9f\xe5\xb8\xb8\xe9\x80\x89\xef\xbc\x89\xe3\x80\x91\n  - AHUD + DrawHUD + Canvas\xef\xbc\x9a\xe8\xbd\xbb\xe9\x87\x8f\xe3\x80\x81\xe9\x80\x82\xe5\x90\x88\xe4\xb8\xb4\xe6\x97\xb6\xe8\xb0\x83\xe8\xaf\x95\xe6\x96\x87\xe5\xad\x97\xef\xbc\x8c\xe6\x9c\xac Demo \xe7\x94\xa8\xe6\x9d\xa5\xe6\x98\xbe\xe7\xa4\xba\xe9\xbc\xa0\xe6\xa0\x87\xe5\x9d\x90\xe6\xa0\x87\n  - UUserWidget\xef\xbc\x88UMG\xef\xbc\x89\xef\xbc\x9a\xe6\xad\xa3\xe5\xbc\x8f UI\xef\xbc\x88\xe8\xa1\x80\xe6\x9d\xa1\xe3\x80\x81\xe8\x83\x8c\xe5\x8c\x85\xe3\x80\x81\xe6\x8c\x89\xe9\x92\xae\xef\xbc\x89\xe5\xba\x94\xe8\xb5\xb0 Widget\xef\xbc\x8c\xe5\x92\x8c 2D/3D \xe6\x97\xa0\xe5\x85\xb3\n\n\xe3\x80\x90""DrawHUD \xe8\xb0\x83\xe7\x94\xa8\xe6\x97\xb6\xe6\x9c\xba\xe3\x80\x91\n\xe6\xaf\x8f\xe5\xb8\xa7\xe5\x9c\xa8\xe6\xb8\xb2\xe6\x9f\x93 UI \xe5\xb1\x82\xe4\xb9\x8b\xe5\x89\x8d\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x88\xe7\xb1\xbb\xe4\xbc\xbc 3D \xe9\x87\x8c PostRender \xe8\xb0\x83\xe8\xaf\x95\xe7\x94\xbb\xe7\xba\xbf\xef\xbc\x8c\xe4\xbd\x86\xe4\xb8\x93\xe9\x97\xa8\xe7\xbb\x99 2D \xe5\xb1\x8f\xe5\xb9\x95\xe6\x96\x87\xe5\xad\x97\xef\xbc\x89\xe3\x80\x82\n\n\xe3\x80\x90WorldPlaneZ\xe3\x80\x91\n\xe5\xbf\x85\xe9\xa1\xbb\xe5\x92\x8c PlayerController \xe6\x8a\x95\xe5\xb0\x84\xe9\xbc\xa0\xe6\xa0\x87\xe6\x97\xb6\xe7\x94\xa8\xe7\x9a\x84 Z \xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb8\x80\xe8\x87\xb4\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe3\x80\x8c\xe5\xb1\x8f\xe5\xb9\x95\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xe3\x80\x8d\xe5\x92\x8c\n\xe3\x80\x8c\xe5\xae\x9e\xe9\x99\x85\xe7\x82\xb9\xe5\x87\xbb\xe9\x80\xbb\xe8\xbe\x91\xe7\x94\xa8\xe7\x9a\x84\xe5\x9d\x90\xe6\xa0\x87\xe3\x80\x8d\xe4\xbc\x9a\xe5\xaf\xb9\xe4\xb8\x8d\xe4\xb8\x8a \xe2\x80\x94\xe2\x80\x94 2D \xe9\xa1\xb9\xe7\x9b\xae\xe9\x87\x8c\xe8\xbf\x99\xe6\x98\xaf\xe5\xb8\xb8\xe8\xa7\x81\xe8\x81\x94\xe8\xb0\x83\xe7\x82\xb9\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoTextColor_MetaData[] = {
		{ "Category", "Xiuxian|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xb0\x83\xe8\xaf\x95\xe6\x96\x87\xe5\xad\x97\xe9\xa2\x9c\xe8\x89\xb2\xef\xbc\x88\xe4\xbf\xae\xe4\xbb\x99\xe4\xb8\xbb\xe9\xa2\x98\xe5\x81\x8f\xe6\x9a\x96\xe8\x89\xb2\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdleHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb0\x83\xe8\xaf\x95\xe6\x96\x87\xe5\xad\x97\xe9\xa2\x9c\xe8\x89\xb2\xef\xbc\x88\xe4\xbf\xae\xe4\xbb\x99\xe4\xb8\xbb\xe9\xa2\x98\xe5\x81\x8f\xe6\x9a\x96\xe8\x89\xb2\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoTextScale_MetaData[] = {
		{ "Category", "Xiuxian|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x96\x87\xe5\xad\x97\xe7\xbc\xa9\xe6\x94\xbe\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\n\x09 * \xe5\xae\x9e\xe9\x99\x85\xe7\xbb\x98\xe5\x88\xb6\xe6\x97\xb6\xe4\xbc\x9a\xe6\x8c\x89 Canvas->ClipX / 1920 \xe5\x81\x9a\xe7\xae\x80\xe5\x8d\x95\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87\xe9\x80\x82\xe9\x85\x8d\xef\xbc\x88\xe8\xa7\x81 .cpp\xef\xbc\x89\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdleHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\x87\xe5\xad\x97\xe7\xbc\xa9\xe6\x94\xbe\xe5\x9f\xba\xe5\x87\x86\xe3\x80\x82\n\xe5\xae\x9e\xe9\x99\x85\xe7\xbb\x98\xe5\x88\xb6\xe6\x97\xb6\xe4\xbc\x9a\xe6\x8c\x89 Canvas->ClipX / 1920 \xe5\x81\x9a\xe7\xae\x80\xe5\x8d\x95\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87\xe9\x80\x82\xe9\x85\x8d\xef\xbc\x88\xe8\xa7\x81 .cpp\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoTextOffset_MetaData[] = {
		{ "Category", "Xiuxian|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x96\x87\xe5\xad\x97\xe5\xb7\xa6\xe4\xb8\x8a\xe8\xa7\x92\xe5\xb1\x8f\xe5\xb9\x95\xe5\x81\x8f\xe7\xa7\xbb\xef\xbc\x88\xe5\x83\x8f\xe7\xb4\xa0\xef\xbc\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdleHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\x87\xe5\xad\x97\xe5\xb7\xa6\xe4\xb8\x8a\xe8\xa7\x92\xe5\xb1\x8f\xe5\xb9\x95\xe5\x81\x8f\xe7\xa7\xbb\xef\xbc\x88\xe5\x83\x8f\xe7\xb4\xa0\xef\xbc\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPlaneZ_MetaData[] = {
		{ "Category", "Xiuxian|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe9\xbc\xa0\xe6\xa0\x87\xe5\xb0\x84\xe7\xba\xbf\xe4\xb8\x8e\xe5\x93\xaa\xe4\xb8\xaa Z \xe9\xab\x98\xe5\xba\xa6\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe6\xb1\x82\xe4\xba\xa4\xe3\x80\x82\n\x09 * 2D \xe4\xbf\xaf\xe8\xa7\x86\xe6\xb8\xb8\xe6\x88\x8f\xe9\x87\x8c\xef\xbc\x8c gameplay \xe9\x80\x9a\xe5\xb8\xb8\xe5\x8f\x91\xe7\x94\x9f\xe5\x9c\xa8 Z=0 \xe6\x88\x96 Z=\xe6\x9f\x90\xe4\xb8\xaa\xe5\x9b\xba\xe5\xae\x9a\xe9\xab\x98\xe5\xba\xa6\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb8\x8a\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdleHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbc\xa0\xe6\xa0\x87\xe5\xb0\x84\xe7\xba\xbf\xe4\xb8\x8e\xe5\x93\xaa\xe4\xb8\xaa Z \xe9\xab\x98\xe5\xba\xa6\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe6\xb1\x82\xe4\xba\xa4\xe3\x80\x82\n2D \xe4\xbf\xaf\xe8\xa7\x86\xe6\xb8\xb8\xe6\x88\x8f\xe9\x87\x8c\xef\xbc\x8c gameplay \xe9\x80\x9a\xe5\xb8\xb8\xe5\x8f\x91\xe7\x94\x9f\xe5\x9c\xa8 Z=0 \xe6\x88\x96 Z=\xe6\x9f\x90\xe4\xb8\xaa\xe5\x9b\xba\xe5\xae\x9a\xe9\xab\x98\xe5\xba\xa6\xe7\x9a\x84\xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb8\x8a\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMouseDebugInfo_MetaData[] = {
		{ "Category", "Xiuxian|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe9\xbc\xa0\xe6\xa0\x87\xe8\xb0\x83\xe8\xaf\x95\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x9b\xe6\xad\xa3\xe5\xbc\x8f\xe7\x89\x88\xe5\x8f\xaf\xe5\x85\xb3\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Game/XiuxianIdleHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe9\xbc\xa0\xe6\xa0\x87\xe8\xb0\x83\xe8\xaf\x95\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x9b\xe6\xad\xa3\xe5\xbc\x8f\xe7\x89\x88\xe5\x8f\xaf\xe5\x85\xb3\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfoTextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfoTextScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfoTextOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldPlaneZ;
	static void NewProp_bShowMouseDebugInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouseDebugInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXiuxianIdleHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_InfoTextColor = { "InfoTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdleHUD, InfoTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoTextColor_MetaData), NewProp_InfoTextColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_InfoTextScale = { "InfoTextScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdleHUD, InfoTextScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoTextScale_MetaData), NewProp_InfoTextScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_InfoTextOffset = { "InfoTextOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdleHUD, InfoTextOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoTextOffset_MetaData), NewProp_InfoTextOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_WorldPlaneZ = { "WorldPlaneZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXiuxianIdleHUD, WorldPlaneZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPlaneZ_MetaData), NewProp_WorldPlaneZ_MetaData) };
void Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_bShowMouseDebugInfo_SetBit(void* Obj)
{
	((AXiuxianIdleHUD*)Obj)->bShowMouseDebugInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_bShowMouseDebugInfo = { "bShowMouseDebugInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AXiuxianIdleHUD), &Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_bShowMouseDebugInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMouseDebugInfo_MetaData), NewProp_bShowMouseDebugInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXiuxianIdleHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_InfoTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_InfoTextScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_InfoTextOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_WorldPlaneZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXiuxianIdleHUD_Statics::NewProp_bShowMouseDebugInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdleHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AXiuxianIdleHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreeDaDi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdleHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXiuxianIdleHUD_Statics::ClassParams = {
	&AXiuxianIdleHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AXiuxianIdleHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdleHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXiuxianIdleHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AXiuxianIdleHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXiuxianIdleHUD()
{
	if (!Z_Registration_Info_UClass_AXiuxianIdleHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXiuxianIdleHUD.OuterSingleton, Z_Construct_UClass_AXiuxianIdleHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXiuxianIdleHUD.OuterSingleton;
}
template<> THREEDADI_API UClass* StaticClass<AXiuxianIdleHUD>()
{
	return AXiuxianIdleHUD::StaticClass();
}
AXiuxianIdleHUD::AXiuxianIdleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXiuxianIdleHUD);
AXiuxianIdleHUD::~AXiuxianIdleHUD() {}
// End Class AXiuxianIdleHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdleHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXiuxianIdleHUD, AXiuxianIdleHUD::StaticClass, TEXT("AXiuxianIdleHUD"), &Z_Registration_Info_UClass_AXiuxianIdleHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXiuxianIdleHUD), 1278572137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdleHUD_h_1426317579(TEXT("/Script/ThreeDaDi"),
	Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdleHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ThreeDaDi_Source_ThreeDaDi_Game_XiuxianIdleHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
