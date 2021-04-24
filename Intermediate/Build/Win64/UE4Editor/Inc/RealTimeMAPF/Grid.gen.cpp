// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/Grid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrid() {}
// Cross Module References
	REALTIMEMAPF_API UClass* Z_Construct_UClass_AGrid_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_AGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FAgentTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FConfig();
// End Cross Module References
	DEFINE_FUNCTION(AGrid::execGetAllTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAgentTask>*)Z_Param__Result=P_THIS->GetAllTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execMAPFGetNextMove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_agent_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAgentTask*)Z_Param__Result=P_THIS->MAPFGetNextMove(Z_Param_agent_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execMAPFSetSectionSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MAPFSetSectionSize(Z_Param_SectionSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execMAPFMoveTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MAPFMoveTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execMAPFPlan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MAPFPlan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execMAPFAddAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_XStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_YStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_XGoal);
		P_GET_PROPERTY(FIntProperty,Z_Param_YGoal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MAPFAddAgent(Z_Param_XStart,Z_Param_YStart,Z_Param_XGoal,Z_Param_YGoal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execDrawDebugGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrid::execSetMapData)
	{
		P_GET_OBJECT(UObject,Z_Param_MapDataImplementer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapData(Z_Param_MapDataImplementer);
		P_NATIVE_END;
	}
	void AGrid::StaticRegisterNativesAGrid()
	{
		UClass* Class = AGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugGrid", &AGrid::execDrawDebugGrid },
			{ "GetAllTasks", &AGrid::execGetAllTasks },
			{ "MAPFAddAgent", &AGrid::execMAPFAddAgent },
			{ "MAPFGetNextMove", &AGrid::execMAPFGetNextMove },
			{ "MAPFMoveTime", &AGrid::execMAPFMoveTime },
			{ "MAPFPlan", &AGrid::execMAPFPlan },
			{ "MAPFSetSectionSize", &AGrid::execMAPFSetSectionSize },
			{ "SetMapData", &AGrid::execSetMapData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrid_DrawDebugGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_DrawDebugGrid_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_DrawDebugGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "DrawDebugGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_DrawDebugGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_DrawDebugGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_DrawDebugGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_DrawDebugGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_GetAllTasks_Statics
	{
		struct Grid_eventGetAllTasks_Parms
		{
			TArray<FAgentTask> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGrid_GetAllTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetAllTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrid_GetAllTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgentTask, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_GetAllTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_GetAllTasks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_GetAllTasks_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_GetAllTasks_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_GetAllTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "GetAllTasks", nullptr, nullptr, sizeof(Grid_eventGetAllTasks_Parms), Z_Construct_UFunction_AGrid_GetAllTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_GetAllTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_GetAllTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_GetAllTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_GetAllTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_GetAllTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics
	{
		struct Grid_eventMAPFAddAgent_Parms
		{
			int32 XStart;
			int32 YStart;
			int32 XGoal;
			int32 YGoal;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YGoal;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XGoal;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YStart;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFAddAgent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_YGoal = { "YGoal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFAddAgent_Parms, YGoal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_XGoal = { "XGoal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFAddAgent_Parms, XGoal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_YStart = { "YStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFAddAgent_Parms, YStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_XStart = { "XStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFAddAgent_Parms, XStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_YGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_XGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_YStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::NewProp_XStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "// ----------------- //\n// MAPF solver usage //\n// ----------------- //\n" },
		{ "ModuleRelativePath", "Public/Grid.h" },
		{ "ToolTip", "MAPF solver usage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "MAPFAddAgent", nullptr, nullptr, sizeof(Grid_eventMAPFAddAgent_Parms), Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_MAPFAddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_MAPFAddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics
	{
		struct Grid_eventMAPFGetNextMove_Parms
		{
			int32 agent_ID;
			FAgentTask ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_agent_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFGetNextMove_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentTask, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::NewProp_agent_ID = { "agent_ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFGetNextMove_Parms, agent_ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::NewProp_agent_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "MAPFGetNextMove", nullptr, nullptr, sizeof(Grid_eventMAPFGetNextMove_Parms), Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_MAPFGetNextMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_MAPFGetNextMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics
	{
		struct Grid_eventMAPFMoveTime_Parms
		{
			int32 Time;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFMoveTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "MAPFMoveTime", nullptr, nullptr, sizeof(Grid_eventMAPFMoveTime_Parms), Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_MAPFMoveTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_MAPFMoveTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_MAPFPlan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_MAPFPlan_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_MAPFPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "MAPFPlan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_MAPFPlan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFPlan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_MAPFPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_MAPFPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics
	{
		struct Grid_eventMAPFSetSectionSize_Parms
		{
			int32 SectionSize;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::NewProp_SectionSize = { "SectionSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventMAPFSetSectionSize_Parms, SectionSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::NewProp_SectionSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "MAPFSetSectionSize", nullptr, nullptr, sizeof(Grid_eventMAPFSetSectionSize_Parms), Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_MAPFSetSectionSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_MAPFSetSectionSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrid_SetMapData_Statics
	{
		struct Grid_eventSetMapData_Parms
		{
			UObject* MapDataImplementer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapDataImplementer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrid_SetMapData_Statics::NewProp_MapDataImplementer = { "MapDataImplementer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventSetMapData_Parms, MapDataImplementer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_SetMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_SetMapData_Statics::NewProp_MapDataImplementer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_SetMapData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_SetMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "SetMapData", nullptr, nullptr, sizeof(Grid_eventSetMapData_Parms), Z_Construct_UFunction_AGrid_SetMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_SetMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_SetMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_SetMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_SetMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrid_SetMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGrid_NoRegister()
	{
		return AGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_MapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapDataPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapDataPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrid_DrawDebugGrid, "DrawDebugGrid" }, // 2526161691
		{ &Z_Construct_UFunction_AGrid_GetAllTasks, "GetAllTasks" }, // 2841548510
		{ &Z_Construct_UFunction_AGrid_MAPFAddAgent, "MAPFAddAgent" }, // 1032222460
		{ &Z_Construct_UFunction_AGrid_MAPFGetNextMove, "MAPFGetNextMove" }, // 1056180106
		{ &Z_Construct_UFunction_AGrid_MAPFMoveTime, "MAPFMoveTime" }, // 1523248435
		{ &Z_Construct_UFunction_AGrid_MAPFPlan, "MAPFPlan" }, // 815642879
		{ &Z_Construct_UFunction_AGrid_MAPFSetSectionSize, "MAPFSetSectionSize" }, // 2729338686
		{ &Z_Construct_UFunction_AGrid_SetMapData, "SetMapData" }, // 2086269284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid.h" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_MapData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_MapData = { "MapData", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, MapData), Z_Construct_UClass_UMapData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_MapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_MapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_MapDataPointer_MetaData[] = {
		{ "AllowedClasses", "MapData" },
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_MapDataPointer = { "MapDataPointer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, MapDataPointer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_MapDataPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_MapDataPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, Configuration), Z_Construct_UScriptStruct_FConfig, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_Configuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_MapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_MapDataPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_Configuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrid_Statics::ClassParams = {
		&AGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrid, 303193897);
	template<> REALTIMEMAPF_API UClass* StaticClass<AGrid>()
	{
		return AGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrid(Z_Construct_UClass_AGrid, &AGrid::StaticClass, TEXT("/Script/RealTimeMAPF"), TEXT("AGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
