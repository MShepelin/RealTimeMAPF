// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/IntervalTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntervalTower() {}
// Cross Module References
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FInterval();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
// End Cross Module References
class UScriptStruct* FInterval::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REALTIMEMAPF_API uint32 Get_Z_Construct_UScriptStruct_FInterval_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterval, Z_Construct_UPackage__Script_RealTimeMAPF(), TEXT("Interval"), sizeof(FInterval), Get_Z_Construct_UScriptStruct_FInterval_Hash());
	}
	return Singleton;
}
template<> REALTIMEMAPF_API UScriptStruct* StaticStruct<FInterval>()
{
	return FInterval::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterval(FInterval::StaticStruct, TEXT("/Script/RealTimeMAPF"), TEXT("Interval"), false, nullptr, nullptr);
static struct FScriptStruct_RealTimeMAPF_StaticRegisterNativesFInterval
{
	FScriptStruct_RealTimeMAPF_StaticRegisterNativesFInterval()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Interval")),new UScriptStruct::TCppStructOps<FInterval>);
	}
} ScriptStruct_RealTimeMAPF_StaticRegisterNativesFInterval;
	struct Z_Construct_UScriptStruct_FInterval_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finish_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Finish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterval_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO move somewhere else\n" },
		{ "ModuleRelativePath", "Public/IntervalTower.h" },
		{ "ToolTip", "TODO move somewhere else" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterval_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterval>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Finish_MetaData[] = {
		{ "Category", "Interval" },
		{ "ModuleRelativePath", "Public/IntervalTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Finish = { "Finish", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterval, Finish), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Finish_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Finish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Interval" },
		{ "ModuleRelativePath", "Public/IntervalTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterval, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Finish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterval_Statics::NewProp_Start,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterval_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
		nullptr,
		&NewStructOps,
		"Interval",
		sizeof(FInterval),
		alignof(FInterval),
		Z_Construct_UScriptStruct_FInterval_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterval_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterval_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterval_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterval()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterval_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RealTimeMAPF();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Interval"), sizeof(FInterval), Get_Z_Construct_UScriptStruct_FInterval_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterval_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterval_Hash() { return 463145282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
