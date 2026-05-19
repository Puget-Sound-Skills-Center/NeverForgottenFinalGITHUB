// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaxisAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMetaxisAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
METAXISAITOOLS_API UClass* Z_Construct_UClass_AMetaxisAIController();
METAXISAITOOLS_API UClass* Z_Construct_UClass_AMetaxisAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetaxisAITools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMetaxisAIController Function SetFlattenSightForwardAxis *****************
struct Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics
{
	struct MetaxisAIController_eventSetFlattenSightForwardAxis_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools" },
		{ "ModuleRelativePath", "Public/MetaxisAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((MetaxisAIController_eventSetFlattenSightForwardAxis_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaxisAIController_eventSetFlattenSightForwardAxis_Parms), &Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMetaxisAIController, nullptr, "SetFlattenSightForwardAxis", Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::MetaxisAIController_eventSetFlattenSightForwardAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::MetaxisAIController_eventSetFlattenSightForwardAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMetaxisAIController::execSetFlattenSightForwardAxis)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlattenSightForwardAxis(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class AMetaxisAIController Function SetFlattenSightForwardAxis *******************

// ********** Begin Class AMetaxisAIController *****************************************************
void AMetaxisAIController::StaticRegisterNativesAMetaxisAIController()
{
	UClass* Class = AMetaxisAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFlattenSightForwardAxis", &AMetaxisAIController::execSetFlattenSightForwardAxis },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMetaxisAIController;
UClass* AMetaxisAIController::GetPrivateStaticClass()
{
	using TClass = AMetaxisAIController;
	if (!Z_Registration_Info_UClass_AMetaxisAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MetaxisAIController"),
			Z_Registration_Info_UClass_AMetaxisAIController.InnerSingleton,
			StaticRegisterNativesAMetaxisAIController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMetaxisAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMetaxisAIController_NoRegister()
{
	return AMetaxisAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMetaxisAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A custom AI Controller that expands perception functionality.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MetaxisAIController.h" },
		{ "ModuleRelativePath", "Public/MetaxisAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A custom AI Controller that expands perception functionality." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverrideEyesViewpoint_MetaData[] = {
		{ "Category", "AI Perception Tools (Metaxis Games)" },
		{ "DisplayName", "Enable Override Eyes Viewpoint" },
		{ "ModuleRelativePath", "Public/MetaxisAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeSocketName_MetaData[] = {
		{ "Category", "AI Perception Tools (Metaxis Games)" },
		{ "ModuleRelativePath", "Public/MetaxisAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenSightForwardAxis_MetaData[] = {
		{ "Category", "AI Perception Tools (Metaxis Games)" },
		{ "DefaultValue", "FALSE" },
		{ "DisplayName", "Flatten Sight Forward Axis" },
		{ "ModuleRelativePath", "Public/MetaxisAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableOverrideEyesViewpoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverrideEyesViewpoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EyeSocketName;
	static void NewProp_bFlattenSightForwardAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenSightForwardAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMetaxisAIController_SetFlattenSightForwardAxis, "SetFlattenSightForwardAxis" }, // 2314115124
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetaxisAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bEnableOverrideEyesViewpoint_SetBit(void* Obj)
{
	((AMetaxisAIController*)Obj)->bEnableOverrideEyesViewpoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bEnableOverrideEyesViewpoint = { "bEnableOverrideEyesViewpoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMetaxisAIController), &Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bEnableOverrideEyesViewpoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOverrideEyesViewpoint_MetaData), NewProp_bEnableOverrideEyesViewpoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_EyeSocketName = { "EyeSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMetaxisAIController, EyeSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeSocketName_MetaData), NewProp_EyeSocketName_MetaData) };
void Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bFlattenSightForwardAxis_SetBit(void* Obj)
{
	((AMetaxisAIController*)Obj)->bFlattenSightForwardAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bFlattenSightForwardAxis = { "bFlattenSightForwardAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMetaxisAIController), &Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bFlattenSightForwardAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlattenSightForwardAxis_MetaData), NewProp_bFlattenSightForwardAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMetaxisAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bEnableOverrideEyesViewpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_EyeSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetaxisAIController_Statics::NewProp_bFlattenSightForwardAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMetaxisAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMetaxisAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_MetaxisAITools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMetaxisAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMetaxisAIController_Statics::ClassParams = {
	&AMetaxisAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMetaxisAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMetaxisAIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMetaxisAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMetaxisAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMetaxisAIController()
{
	if (!Z_Registration_Info_UClass_AMetaxisAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMetaxisAIController.OuterSingleton, Z_Construct_UClass_AMetaxisAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMetaxisAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMetaxisAIController);
AMetaxisAIController::~AMetaxisAIController() {}
// ********** End Class AMetaxisAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_5022810_Downloads_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisAIController_h__Script_MetaxisAITools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMetaxisAIController, AMetaxisAIController::StaticClass, TEXT("AMetaxisAIController"), &Z_Registration_Info_UClass_AMetaxisAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMetaxisAIController), 2820595135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_5022810_Downloads_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisAIController_h__Script_MetaxisAITools_1431167309(TEXT("/Script/MetaxisAITools"),
	Z_CompiledInDeferFile_FID_Users_5022810_Downloads_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisAIController_h__Script_MetaxisAITools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_5022810_Downloads_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisAIController_h__Script_MetaxisAITools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
