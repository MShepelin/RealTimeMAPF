// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/Solver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolver() {}
// Cross Module References
	REALTIMEMAPF_API UFunction* Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ASolver_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ASolver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FAgentTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FConfig();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RealTimeMAPF, nullptr, "OnPlanReady__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ASolver::execGetAllTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAgentTask>*)Z_Param__Result=P_THIS->GetAllTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execGetNextMove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAgentTask*)Z_Param__Result=P_THIS->GetNextMove(Z_Param_AgentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execSetDepth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepth(Z_Param_NewDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execSetSectionSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSectionSize(Z_Param_SectionSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execMoveTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execPlan)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPlanReadyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Plan(FOnPlanReady(Z_Param_OnPlanReadyDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execAddAgent)
	{
		P_GET_STRUCT(FAgentTask,Z_Param_AgentTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddAgent(Z_Param_AgentTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execSetMapData)
	{
		P_GET_OBJECT(UObject,Z_Param_MapDataImplementer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMapData(Z_Param_MapDataImplementer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASolver::execIsCorrectSectionSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCorrectSectionSize(Z_Param_SectionSize);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ASolver::execDrawDebugGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugGrid();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ASolver::StaticRegisterNativesASolver()
	{
		UClass* Class = ASolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgent", &ASolver::execAddAgent },
#if WITH_EDITOR
			{ "DrawDebugGrid", &ASolver::execDrawDebugGrid },
#endif // WITH_EDITOR
			{ "GetAllTasks", &ASolver::execGetAllTasks },
			{ "GetNextMove", &ASolver::execGetNextMove },
			{ "IsCorrectSectionSize", &ASolver::execIsCorrectSectionSize },
			{ "MoveTime", &ASolver::execMoveTime },
			{ "Plan", &ASolver::execPlan },
			{ "SetDepth", &ASolver::execSetDepth },
			{ "SetMapData", &ASolver::execSetMapData },
			{ "SetSectionSize", &ASolver::execSetSectionSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASolver_AddAgent_Statics
	{
		struct Solver_eventAddAgent_Parms
		{
			FAgentTask AgentTask;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgentTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASolver_AddAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventAddAgent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASolver_AddAgent_Statics::NewProp_AgentTask = { "AgentTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventAddAgent_Parms, AgentTask), Z_Construct_UScriptStruct_FAgentTask, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_AddAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_AddAgent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_AddAgent_Statics::NewProp_AgentTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_AddAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_AddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "AddAgent", nullptr, nullptr, sizeof(Solver_eventAddAgent_Parms), Z_Construct_UFunction_ASolver_AddAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_AddAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_AddAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_AddAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_AddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_AddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ASolver_DrawDebugGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_DrawDebugGrid_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_DrawDebugGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "DrawDebugGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_DrawDebugGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_DrawDebugGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_DrawDebugGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_DrawDebugGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_ASolver_GetAllTasks_Statics
	{
		struct Solver_eventGetAllTasks_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASolver_GetAllTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventGetAllTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASolver_GetAllTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgentTask, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_GetAllTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_GetAllTasks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_GetAllTasks_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_GetAllTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_GetAllTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "GetAllTasks", nullptr, nullptr, sizeof(Solver_eventGetAllTasks_Parms), Z_Construct_UFunction_ASolver_GetAllTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_GetAllTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_GetAllTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_GetAllTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_GetAllTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_GetAllTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_GetNextMove_Statics
	{
		struct Solver_eventGetNextMove_Parms
		{
			int32 AgentID;
			FAgentTask ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AgentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASolver_GetNextMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventGetNextMove_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentTask, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASolver_GetNextMove_Statics::NewProp_AgentID = { "AgentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventGetNextMove_Parms, AgentID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_GetNextMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_GetNextMove_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_GetNextMove_Statics::NewProp_AgentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_GetNextMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_GetNextMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "GetNextMove", nullptr, nullptr, sizeof(Solver_eventGetNextMove_Parms), Z_Construct_UFunction_ASolver_GetNextMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_GetNextMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_GetNextMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_GetNextMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_GetNextMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_GetNextMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics
	{
		struct Solver_eventIsCorrectSectionSize_Parms
		{
			int32 SectionSize;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Solver_eventIsCorrectSectionSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solver_eventIsCorrectSectionSize_Parms), &Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::NewProp_SectionSize = { "SectionSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventIsCorrectSectionSize_Parms, SectionSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::NewProp_SectionSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "IsCorrectSectionSize", nullptr, nullptr, sizeof(Solver_eventIsCorrectSectionSize_Parms), Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_IsCorrectSectionSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_IsCorrectSectionSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_MoveTime_Statics
	{
		struct Solver_eventMoveTime_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASolver_MoveTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventMoveTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_MoveTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_MoveTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_MoveTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_MoveTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "MoveTime", nullptr, nullptr, sizeof(Solver_eventMoveTime_Parms), Z_Construct_UFunction_ASolver_MoveTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_MoveTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_MoveTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_MoveTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_MoveTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_MoveTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_Plan_Statics
	{
		struct Solver_eventPlan_Parms
		{
			FScriptDelegate OnPlanReadyDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPlanReadyDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASolver_Plan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Solver_eventPlan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASolver_Plan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solver_eventPlan_Parms), &Z_Construct_UFunction_ASolver_Plan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ASolver_Plan_Statics::NewProp_OnPlanReadyDelegate = { "OnPlanReadyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventPlan_Parms, OnPlanReadyDelegate), Z_Construct_UDelegateFunction_RealTimeMAPF_OnPlanReady__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_Plan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_Plan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_Plan_Statics::NewProp_OnPlanReadyDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_Plan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_Plan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "Plan", nullptr, nullptr, sizeof(Solver_eventPlan_Parms), Z_Construct_UFunction_ASolver_Plan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_Plan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_Plan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_Plan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_Plan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_Plan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_SetDepth_Statics
	{
		struct Solver_eventSetDepth_Parms
		{
			int32 NewDepth;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASolver_SetDepth_Statics::NewProp_NewDepth = { "NewDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventSetDepth_Parms, NewDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_SetDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_SetDepth_Statics::NewProp_NewDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "SetDepth", nullptr, nullptr, sizeof(Solver_eventSetDepth_Parms), Z_Construct_UFunction_ASolver_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_SetMapData_Statics
	{
		struct Solver_eventSetMapData_Parms
		{
			UObject* MapDataImplementer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapDataImplementer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASolver_SetMapData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Solver_eventSetMapData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASolver_SetMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solver_eventSetMapData_Parms), &Z_Construct_UFunction_ASolver_SetMapData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASolver_SetMapData_Statics::NewProp_MapDataImplementer = { "MapDataImplementer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventSetMapData_Parms, MapDataImplementer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_SetMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_SetMapData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_SetMapData_Statics::NewProp_MapDataImplementer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_SetMapData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_SetMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "SetMapData", nullptr, nullptr, sizeof(Solver_eventSetMapData_Parms), Z_Construct_UFunction_ASolver_SetMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_SetMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_SetMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_SetMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_SetMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_SetMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASolver_SetSectionSize_Statics
	{
		struct Solver_eventSetSectionSize_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASolver_SetSectionSize_Statics::NewProp_SectionSize = { "SectionSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solver_eventSetSectionSize_Parms, SectionSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASolver_SetSectionSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASolver_SetSectionSize_Statics::NewProp_SectionSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASolver_SetSectionSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASolver_SetSectionSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASolver, nullptr, "SetSectionSize", nullptr, nullptr, sizeof(Solver_eventSetSectionSize_Parms), Z_Construct_UFunction_ASolver_SetSectionSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_SetSectionSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASolver_SetSectionSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASolver_SetSectionSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASolver_SetSectionSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASolver_SetSectionSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASolver_NoRegister()
	{
		return ASolver::StaticClass();
	}
	struct Z_Construct_UClass_ASolver_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ConstructDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstructRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASolver_AddAgent, "AddAgent" }, // 1826214283
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ASolver_DrawDebugGrid, "DrawDebugGrid" }, // 2567368648
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_ASolver_GetAllTasks, "GetAllTasks" }, // 1795688530
		{ &Z_Construct_UFunction_ASolver_GetNextMove, "GetNextMove" }, // 4273333609
		{ &Z_Construct_UFunction_ASolver_IsCorrectSectionSize, "IsCorrectSectionSize" }, // 2258987196
		{ &Z_Construct_UFunction_ASolver_MoveTime, "MoveTime" }, // 467886496
		{ &Z_Construct_UFunction_ASolver_Plan, "Plan" }, // 679477262
		{ &Z_Construct_UFunction_ASolver_SetDepth, "SetDepth" }, // 1156051637
		{ &Z_Construct_UFunction_ASolver_SetMapData, "SetMapData" }, // 517854749
		{ &Z_Construct_UFunction_ASolver_SetSectionSize, "SetSectionSize" }, // 3391493333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Solver.h" },
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolver_Statics::NewProp_MapData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASolver_Statics::NewProp_MapData = { "MapData", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASolver, MapData), Z_Construct_UClass_UMapData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASolver_Statics::NewProp_MapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::NewProp_MapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolver_Statics::NewProp_MapDataPointer_MetaData[] = {
		{ "AllowedClasses", "MapData" },
		{ "Category", "Solver|Environment" },
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASolver_Statics::NewProp_MapDataPointer = { "MapDataPointer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASolver, MapDataPointer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASolver_Statics::NewProp_MapDataPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::NewProp_MapDataPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolver_Statics::NewProp_ConstructDepth_MetaData[] = {
		{ "Category", "Solver|Algorithm" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASolver_Statics::NewProp_ConstructDepth = { "ConstructDepth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASolver, ConstructDepth), METADATA_PARAMS(Z_Construct_UClass_ASolver_Statics::NewProp_ConstructDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::NewProp_ConstructDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolver_Statics::NewProp_ConstructRadius_MetaData[] = {
		{ "Category", "Solver|Agent" },
		{ "ClampMax", "0.425" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASolver_Statics::NewProp_ConstructRadius = { "ConstructRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASolver, ConstructRadius), METADATA_PARAMS(Z_Construct_UClass_ASolver_Statics::NewProp_ConstructRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::NewProp_ConstructRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolver_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/Solver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASolver_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASolver, Configuration), Z_Construct_UScriptStruct_FConfig, METADATA_PARAMS(Z_Construct_UClass_ASolver_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::NewProp_Configuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolver_Statics::NewProp_MapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolver_Statics::NewProp_MapDataPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolver_Statics::NewProp_ConstructDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolver_Statics::NewProp_ConstructRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolver_Statics::NewProp_Configuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASolver_Statics::ClassParams = {
		&ASolver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASolver, 3593994918);
	template<> REALTIMEMAPF_API UClass* StaticClass<ASolver>()
	{
		return ASolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASolver(Z_Construct_UClass_ASolver, &ASolver::StaticClass, TEXT("/Script/RealTimeMAPF"), TEXT("ASolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
