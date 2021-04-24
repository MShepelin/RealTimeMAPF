// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/BasicAICenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicAICenter() {}
// Cross Module References
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ABasicAICenter_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ABasicAICenter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ABasicBot_NoRegister();
	REALTIMEMAPF_API UScriptStruct* Z_Construct_UScriptStruct_FAgentTask();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_AGrid_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABasicAICenter::execBeginPlan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicAICenter::execTaskToLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->TaskToLocation(Z_Param_GridX,Z_Param_GridY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicAICenter::execSectionPlan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SectionPlan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicAICenter::execAgentFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgentFinished();
		P_NATIVE_END;
	}
	void ABasicAICenter::StaticRegisterNativesABasicAICenter()
	{
		UClass* Class = ABasicAICenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AgentFinished", &ABasicAICenter::execAgentFinished },
			{ "BeginPlan", &ABasicAICenter::execBeginPlan },
			{ "SectionPlan", &ABasicAICenter::execSectionPlan },
			{ "TaskToLocation", &ABasicAICenter::execTaskToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicAICenter_AgentFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicAICenter_AgentFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicAICenter_AgentFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicAICenter, nullptr, "AgentFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicAICenter_AgentFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicAICenter_AgentFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicAICenter_AgentFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicAICenter_AgentFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicAICenter_BeginPlan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicAICenter_BeginPlan_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicAICenter_BeginPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicAICenter, nullptr, "BeginPlan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicAICenter_BeginPlan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicAICenter_BeginPlan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicAICenter_BeginPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicAICenter_BeginPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicAICenter_SectionPlan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicAICenter_SectionPlan_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicAICenter_SectionPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicAICenter, nullptr, "SectionPlan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicAICenter_SectionPlan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicAICenter_SectionPlan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicAICenter_SectionPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicAICenter_SectionPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics
	{
		struct BasicAICenter_eventTaskToLocation_Parms
		{
			int32 GridX;
			int32 GridY;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GridY;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GridX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicAICenter_eventTaskToLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicAICenter_eventTaskToLocation_Parms, GridY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicAICenter_eventTaskToLocation_Parms, GridX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::NewProp_GridY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::NewProp_GridX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicAICenter, nullptr, "TaskToLocation", nullptr, nullptr, sizeof(BasicAICenter_eventTaskToLocation_Parms), Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicAICenter_TaskToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicAICenter_TaskToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicAICenter_NoRegister()
	{
		return ABasicAICenter::StaticClass();
	}
	struct Z_Construct_UClass_ABasicAICenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgentIDs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AgentIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FinishedAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Solver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BotClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_MapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapDataPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapDataPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicAICenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicAICenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicAICenter_AgentFinished, "AgentFinished" }, // 851028580
		{ &Z_Construct_UFunction_ABasicAICenter_BeginPlan, "BeginPlan" }, // 1203958451
		{ &Z_Construct_UFunction_ABasicAICenter_SectionPlan, "SectionPlan" }, // 3890007293
		{ &Z_Construct_UFunction_ABasicAICenter_TaskToLocation, "TaskToLocation" }, // 2418818343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasicAICenter.h" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs = { "AgentIDs", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, AgentIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs_Inner = { "AgentIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots = { "Bots", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, Bots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots_Inner = { "Bots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABasicBot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks_MetaData[] = {
		{ "Category", "BasicAICenter" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgentTask, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionStart = { "SectionStart", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, SectionStart), METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_FinishedAgents_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_FinishedAgents = { "FinishedAgents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, FinishedAgents), METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_FinishedAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_FinishedAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionSize_MetaData[] = {
		{ "Category", "BasicAICenter" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionSize = { "SectionSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, SectionSize), METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Solver_MetaData[] = {
		{ "Category", "BasicAICenter" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, Solver), Z_Construct_UClass_AGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Solver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_BotClass_MetaData[] = {
		{ "Category", "BasicAICenter" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_BotClass = { "BotClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, BotClass), Z_Construct_UClass_ABasicBot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_BotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_BotClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapData = { "MapData", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, MapData), Z_Construct_UClass_UMapData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapDataPointer_MetaData[] = {
		{ "AllowedClasses", "MapData" },
		{ "Category", "BasicAICenter" },
		{ "ModuleRelativePath", "Public/BasicAICenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapDataPointer = { "MapDataPointer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicAICenter, MapDataPointer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapDataPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapDataPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicAICenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_AgentIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Bots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Tasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_FinishedAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_SectionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_Solver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_BotClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAICenter_Statics::NewProp_MapDataPointer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicAICenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicAICenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicAICenter_Statics::ClassParams = {
		&ABasicAICenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicAICenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicAICenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAICenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicAICenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicAICenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicAICenter, 2485186478);
	template<> REALTIMEMAPF_API UClass* StaticClass<ABasicAICenter>()
	{
		return ABasicAICenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicAICenter(Z_Construct_UClass_ABasicAICenter, &ABasicAICenter::StaticClass, TEXT("/Script/RealTimeMAPF"), TEXT("ABasicAICenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicAICenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
