// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaxisBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMetaxisBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
METAXISAITOOLS_API UClass* Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary();
METAXISAITOOLS_API UClass* Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetaxisAITools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function AIForgetActor ******************
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventAIForgetActor_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		AActor* ActorToForget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forget Functions\n" },
#endif
		{ "DisplayName", "AI Forget Actor" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forget Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToForget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventAIForgetActor_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::NewProp_ActorToForget = { "ActorToForget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventAIForgetActor_Parms, ActorToForget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::NewProp_ActorToForget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "AIForgetActor", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::MetaxisBlueprintFunctionLibrary_eventAIForgetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::MetaxisBlueprintFunctionLibrary_eventAIForgetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execAIForgetActor)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_OBJECT(AActor,Z_Param_ActorToForget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::AIForgetActor(Z_Param_AIPerceptionComponent,Z_Param_ActorToForget);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function AIForgetActor ********************

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function AIForgetActors *****************
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventAIForgetActors_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		TArray<AActor*> ActorsToForget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools" },
		{ "DisplayName", "AI Forget Actors" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToForget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToForget_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToForget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventAIForgetActors_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::NewProp_ActorsToForget_Inner = { "ActorsToForget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::NewProp_ActorsToForget = { "ActorsToForget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventAIForgetActors_Parms, ActorsToForget), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToForget_MetaData), NewProp_ActorsToForget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::NewProp_ActorsToForget_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::NewProp_ActorsToForget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "AIForgetActors", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::MetaxisBlueprintFunctionLibrary_eventAIForgetActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::MetaxisBlueprintFunctionLibrary_eventAIForgetActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execAIForgetActors)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToForget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::AIForgetActors(Z_Param_AIPerceptionComponent,Z_Param_Out_ActorsToForget);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function AIForgetActors *******************

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function GetNearClippingRadius **********
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventGetNearClippingRadius_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Get Near Clipping Radius" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetNearClippingRadius_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetNearClippingRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "GetNearClippingRadius", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::MetaxisBlueprintFunctionLibrary_eventGetNearClippingRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::MetaxisBlueprintFunctionLibrary_eventGetNearClippingRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execGetNearClippingRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMetaxisBlueprintFunctionLibrary::GetNearClippingRadius(Z_Param_AIPerceptionComponent);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function GetNearClippingRadius ************

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function GetPointOfViewBackwardOffset ***
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventGetPointOfViewBackwardOffset_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Get Point Of View Backward Offset" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetPointOfViewBackwardOffset_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetPointOfViewBackwardOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "GetPointOfViewBackwardOffset", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::MetaxisBlueprintFunctionLibrary_eventGetPointOfViewBackwardOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::MetaxisBlueprintFunctionLibrary_eventGetPointOfViewBackwardOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execGetPointOfViewBackwardOffset)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMetaxisBlueprintFunctionLibrary::GetPointOfViewBackwardOffset(Z_Param_AIPerceptionComponent);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function GetPointOfViewBackwardOffset *****

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function GetVisionConeHalfAngle *********
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventGetVisionConeHalfAngle_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Sight Config Functions\n" },
#endif
		{ "DisplayName", "Get Vision Cone Half Angle" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Sight Config Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetVisionConeHalfAngle_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetVisionConeHalfAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "GetVisionConeHalfAngle", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::MetaxisBlueprintFunctionLibrary_eventGetVisionConeHalfAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::MetaxisBlueprintFunctionLibrary_eventGetVisionConeHalfAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execGetVisionConeHalfAngle)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMetaxisBlueprintFunctionLibrary::GetVisionConeHalfAngle(Z_Param_AIPerceptionComponent);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function GetVisionConeHalfAngle ***********

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function GetVisionConeLoseSightRadius ***
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventGetVisionConeLoseSightRadius_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Get Vision Cone Lose Sight Radius" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetVisionConeLoseSightRadius_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetVisionConeLoseSightRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "GetVisionConeLoseSightRadius", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventGetVisionConeLoseSightRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventGetVisionConeLoseSightRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execGetVisionConeLoseSightRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMetaxisBlueprintFunctionLibrary::GetVisionConeLoseSightRadius(Z_Param_AIPerceptionComponent);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function GetVisionConeLoseSightRadius *****

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function GetVisionConeSightRadius *******
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventGetVisionConeSightRadius_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Get Vision Cone Sight Radius" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetVisionConeSightRadius_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventGetVisionConeSightRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "GetVisionConeSightRadius", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventGetVisionConeSightRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventGetVisionConeSightRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execGetVisionConeSightRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMetaxisBlueprintFunctionLibrary::GetVisionConeSightRadius(Z_Param_AIPerceptionComponent);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function GetVisionConeSightRadius *********

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function SetNearClippingRadius **********
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventSetNearClippingRadius_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float NewRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Set Near Clipping Radius" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetNearClippingRadius_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetNearClippingRadius_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::NewProp_NewRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "SetNearClippingRadius", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::MetaxisBlueprintFunctionLibrary_eventSetNearClippingRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::MetaxisBlueprintFunctionLibrary_eventSetNearClippingRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execSetNearClippingRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::SetNearClippingRadius(Z_Param_AIPerceptionComponent,Z_Param_NewRadius);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function SetNearClippingRadius ************

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function SetPointOfViewBackwardOffset ***
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventSetPointOfViewBackwardOffset_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float NewOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Set Point Of View Backward Offset" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetPointOfViewBackwardOffset_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::NewProp_NewOffset = { "NewOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetPointOfViewBackwardOffset_Parms, NewOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::NewProp_NewOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "SetPointOfViewBackwardOffset", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::MetaxisBlueprintFunctionLibrary_eventSetPointOfViewBackwardOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::MetaxisBlueprintFunctionLibrary_eventSetPointOfViewBackwardOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execSetPointOfViewBackwardOffset)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::SetPointOfViewBackwardOffset(Z_Param_AIPerceptionComponent,Z_Param_NewOffset);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function SetPointOfViewBackwardOffset *****

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function SetVisionConeHalfAngle *********
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventSetVisionConeHalfAngle_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float NewHalfAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Sight Config Functions\n" },
#endif
		{ "DisplayName", "Set Vision Cone Half Angle" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Sight Config Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHalfAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetVisionConeHalfAngle_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::NewProp_NewHalfAngle = { "NewHalfAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetVisionConeHalfAngle_Parms, NewHalfAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::NewProp_NewHalfAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "SetVisionConeHalfAngle", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::MetaxisBlueprintFunctionLibrary_eventSetVisionConeHalfAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::MetaxisBlueprintFunctionLibrary_eventSetVisionConeHalfAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execSetVisionConeHalfAngle)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHalfAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::SetVisionConeHalfAngle(Z_Param_AIPerceptionComponent,Z_Param_NewHalfAngle);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function SetVisionConeHalfAngle ***********

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function SetVisionConeLoseSightRadius ***
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventSetVisionConeLoseSightRadius_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float NewLoseSightRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Set Vision Cone Lose Sight Radius" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLoseSightRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetVisionConeLoseSightRadius_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::NewProp_NewLoseSightRadius = { "NewLoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetVisionConeLoseSightRadius_Parms, NewLoseSightRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::NewProp_NewLoseSightRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "SetVisionConeLoseSightRadius", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventSetVisionConeLoseSightRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventSetVisionConeLoseSightRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execSetVisionConeLoseSightRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLoseSightRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::SetVisionConeLoseSightRadius(Z_Param_AIPerceptionComponent,Z_Param_NewLoseSightRadius);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function SetVisionConeLoseSightRadius *****

// ********** Begin Class UMetaxisBlueprintFunctionLibrary Function SetVisionConeSightRadius *******
struct Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics
{
	struct MetaxisBlueprintFunctionLibrary_eventSetVisionConeSightRadius_Parms
	{
		UAIPerceptionComponent* AIPerceptionComponent;
		float NewRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Metaxis AI Perception Tools|Sight Config" },
		{ "DisplayName", "Set Vision Cone Sight Radius" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetVisionConeSightRadius_Parms, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaxisBlueprintFunctionLibrary_eventSetVisionConeSightRadius_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::NewProp_NewRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, nullptr, "SetVisionConeSightRadius", Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventSetVisionConeSightRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::MetaxisBlueprintFunctionLibrary_eventSetVisionConeSightRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaxisBlueprintFunctionLibrary::execSetVisionConeSightRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMetaxisBlueprintFunctionLibrary::SetVisionConeSightRadius(Z_Param_AIPerceptionComponent,Z_Param_NewRadius);
	P_NATIVE_END;
}
// ********** End Class UMetaxisBlueprintFunctionLibrary Function SetVisionConeSightRadius *********

// ********** Begin Class UMetaxisBlueprintFunctionLibrary *****************************************
void UMetaxisBlueprintFunctionLibrary::StaticRegisterNativesUMetaxisBlueprintFunctionLibrary()
{
	UClass* Class = UMetaxisBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AIForgetActor", &UMetaxisBlueprintFunctionLibrary::execAIForgetActor },
		{ "AIForgetActors", &UMetaxisBlueprintFunctionLibrary::execAIForgetActors },
		{ "GetNearClippingRadius", &UMetaxisBlueprintFunctionLibrary::execGetNearClippingRadius },
		{ "GetPointOfViewBackwardOffset", &UMetaxisBlueprintFunctionLibrary::execGetPointOfViewBackwardOffset },
		{ "GetVisionConeHalfAngle", &UMetaxisBlueprintFunctionLibrary::execGetVisionConeHalfAngle },
		{ "GetVisionConeLoseSightRadius", &UMetaxisBlueprintFunctionLibrary::execGetVisionConeLoseSightRadius },
		{ "GetVisionConeSightRadius", &UMetaxisBlueprintFunctionLibrary::execGetVisionConeSightRadius },
		{ "SetNearClippingRadius", &UMetaxisBlueprintFunctionLibrary::execSetNearClippingRadius },
		{ "SetPointOfViewBackwardOffset", &UMetaxisBlueprintFunctionLibrary::execSetPointOfViewBackwardOffset },
		{ "SetVisionConeHalfAngle", &UMetaxisBlueprintFunctionLibrary::execSetVisionConeHalfAngle },
		{ "SetVisionConeLoseSightRadius", &UMetaxisBlueprintFunctionLibrary::execSetVisionConeLoseSightRadius },
		{ "SetVisionConeSightRadius", &UMetaxisBlueprintFunctionLibrary::execSetVisionConeSightRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary;
UClass* UMetaxisBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMetaxisBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MetaxisBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMetaxisBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_NoRegister()
{
	return UMetaxisBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Function Library for Metaxis AI Perception Tools.\n */" },
#endif
		{ "IncludePath", "MetaxisBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MetaxisBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Function Library for Metaxis AI Perception Tools." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActor, "AIForgetActor" }, // 2355105133
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_AIForgetActors, "AIForgetActors" }, // 592517231
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetNearClippingRadius, "GetNearClippingRadius" }, // 2493047691
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetPointOfViewBackwardOffset, "GetPointOfViewBackwardOffset" }, // 199135766
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeHalfAngle, "GetVisionConeHalfAngle" }, // 1921605854
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeLoseSightRadius, "GetVisionConeLoseSightRadius" }, // 1495269848
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_GetVisionConeSightRadius, "GetVisionConeSightRadius" }, // 596196328
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetNearClippingRadius, "SetNearClippingRadius" }, // 4193625072
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetPointOfViewBackwardOffset, "SetPointOfViewBackwardOffset" }, // 2270628046
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeHalfAngle, "SetVisionConeHalfAngle" }, // 530640478
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeLoseSightRadius, "SetVisionConeLoseSightRadius" }, // 320213410
		{ &Z_Construct_UFunction_UMetaxisBlueprintFunctionLibrary_SetVisionConeSightRadius, "SetVisionConeSightRadius" }, // 73547921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaxisBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MetaxisAITools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMetaxisBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary.OuterSingleton;
}
UMetaxisBlueprintFunctionLibrary::UMetaxisBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaxisBlueprintFunctionLibrary);
UMetaxisBlueprintFunctionLibrary::~UMetaxisBlueprintFunctionLibrary() {}
// ********** End Class UMetaxisBlueprintFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_5018761_Documents_GitHub_NeverForgottenFinalGITHUB_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisBlueprintFunctionLibrary_h__Script_MetaxisAITools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaxisBlueprintFunctionLibrary, UMetaxisBlueprintFunctionLibrary::StaticClass, TEXT("UMetaxisBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMetaxisBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaxisBlueprintFunctionLibrary), 2147850819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_5018761_Documents_GitHub_NeverForgottenFinalGITHUB_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisBlueprintFunctionLibrary_h__Script_MetaxisAITools_1548449562(TEXT("/Script/MetaxisAITools"),
	Z_CompiledInDeferFile_FID_Users_5018761_Documents_GitHub_NeverForgottenFinalGITHUB_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisBlueprintFunctionLibrary_h__Script_MetaxisAITools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_5018761_Documents_GitHub_NeverForgottenFinalGITHUB_AlienAI_Part10_Plugins_Metaxis_AI_Perception_Tools_5_6_Source_MetaxisAITools_Public_MetaxisBlueprintFunctionLibrary_h__Script_MetaxisAITools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
