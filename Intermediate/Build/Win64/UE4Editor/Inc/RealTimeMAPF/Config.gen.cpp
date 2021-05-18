// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/Config.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfig() {}
// Cross Module References
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FConfig();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
// End Cross Module References
class UScriptStruct* FConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REALTIMEMAPF_API uint32 Get_Z_Construct_UScriptStruct_FConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfig, Z_Construct_UPackage__Script_RealTimeMAPF(), TEXT("Config"), sizeof(FConfig), Get_Z_Construct_UScriptStruct_FConfig_Hash());
	}
	return Singleton;
}
template<> REALTIMEMAPF_API UScriptStruct* StaticStruct<FConfig>()
{
	return FConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfig(FConfig::StaticStruct, TEXT("/Script/RealTimeMAPF"), TEXT("Config"), false, nullptr, nullptr);
static struct FScriptStruct_RealTimeMAPF_StaticRegisterNativesFConfig
{
	FScriptStruct_RealTimeMAPF_StaticRegisterNativesFConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Config")),new UScriptStruct::TCppStructOps<FConfig>);
	}
} ScriptStruct_RealTimeMAPF_StaticRegisterNativesFConfig;
	struct Z_Construct_UScriptStruct_FConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeuristicWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeuristicWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetricType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MetricType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingTies_MetaData[];
#endif
		static void NewProp_BreakingTies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BreakingTies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowSqueeze_MetaData[];
#endif
		static void NewProp_AllowSqueeze_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowSqueeze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutCorners_MetaData[];
#endif
		static void NewProp_CutCorners_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CutCorners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowDiagonal_MetaData[];
#endif
		static void NewProp_AllowDiagonal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowDiagonal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Config.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::NewProp_HeuristicWeight_MetaData[] = {
		{ "Category", "Algorithm Options" },
		{ "ModuleRelativePath", "Public/Config.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfig_Statics::NewProp_HeuristicWeight = { "HeuristicWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfig, HeuristicWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_HeuristicWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_HeuristicWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::NewProp_MetricType_MetaData[] = {
		{ "Category", "Algorithm Options" },
		{ "ModuleRelativePath", "Public/Config.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConfig_Statics::NewProp_MetricType = { "MetricType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfig, MetricType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_MetricType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_MetricType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies_MetaData[] = {
		{ "Category", "Algorithm Options" },
		{ "Comment", "// true for g-max\n" },
		{ "ModuleRelativePath", "Public/Config.h" },
		{ "ToolTip", "true for g-max" },
	};
#endif
	void Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies_SetBit(void* Obj)
	{
		((FConfig*)Obj)->BreakingTies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies = { "BreakingTies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConfig), &Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/Config.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze_SetBit(void* Obj)
	{
		((FConfig*)Obj)->AllowSqueeze = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze = { "AllowSqueeze", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConfig), &Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/Config.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners_SetBit(void* Obj)
	{
		((FConfig*)Obj)->CutCorners = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners = { "CutCorners", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConfig), &Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/Config.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal_SetBit(void* Obj)
	{
		((FConfig*)Obj)->AllowDiagonal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal = { "AllowDiagonal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConfig), &Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfig_Statics::NewProp_HeuristicWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfig_Statics::NewProp_MetricType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfig_Statics::NewProp_BreakingTies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowSqueeze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfig_Statics::NewProp_CutCorners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfig_Statics::NewProp_AllowDiagonal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
		nullptr,
		&NewStructOps,
		"Config",
		sizeof(FConfig),
		alignof(FConfig),
		Z_Construct_UScriptStruct_FConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RealTimeMAPF();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Config"), sizeof(FConfig), Get_Z_Construct_UScriptStruct_FConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfig_Hash() { return 2957740714U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
