// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/agents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeagents() {}
// Cross Module References
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FAgentTask();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
// End Cross Module References
class UScriptStruct* FAgentTask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REALTIMEMAPF_API uint32 Get_Z_Construct_UScriptStruct_FAgentTask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentTask, Z_Construct_UPackage__Script_RealTimeMAPF(), TEXT("AgentTask"), sizeof(FAgentTask), Get_Z_Construct_UScriptStruct_FAgentTask_Hash());
	}
	return Singleton;
}
template<> REALTIMEMAPF_API UScriptStruct* StaticStruct<FAgentTask>()
{
	return FAgentTask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentTask(FAgentTask::StaticStruct, TEXT("/Script/RealTimeMAPF"), TEXT("AgentTask"), false, nullptr, nullptr);
static struct FScriptStruct_RealTimeMAPF_StaticRegisterNativesFAgentTask
{
	FScriptStruct_RealTimeMAPF_StaticRegisterNativesFAgentTask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AgentTask")),new UScriptStruct::TCppStructOps<FAgentTask>);
	}
} ScriptStruct_RealTimeMAPF_StaticRegisterNativesFAgentTask;
	struct Z_Construct_UScriptStruct_FAgentTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GoalT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GoalY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GoalX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentTask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalT_MetaData[] = {
		{ "Category", "AgentTask" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalT = { "GoalT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentTask, GoalT), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalY_MetaData[] = {
		{ "Category", "AgentTask" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalY = { "GoalY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentTask, GoalY), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalX_MetaData[] = {
		{ "Category", "AgentTask" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalX = { "GoalX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentTask, GoalX), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartT_MetaData[] = {
		{ "Category", "AgentTask" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartT = { "StartT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentTask, StartT), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartY_MetaData[] = {
		{ "Category", "AgentTask" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentTask, StartY), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartX_MetaData[] = {
		{ "Category", "AgentTask" },
		{ "ModuleRelativePath", "Public/agents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentTask, StartX), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_GoalX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentTask_Statics::NewProp_StartX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
		nullptr,
		&NewStructOps,
		"AgentTask",
		sizeof(FAgentTask),
		alignof(FAgentTask),
		Z_Construct_UScriptStruct_FAgentTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentTask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentTask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RealTimeMAPF();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentTask"), sizeof(FAgentTask), Get_Z_Construct_UScriptStruct_FAgentTask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentTask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentTask_Hash() { return 2941859895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
