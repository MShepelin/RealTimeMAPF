// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/BasicBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicBot() {}
// Cross Module References
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ABasicBot_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ABasicBot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_ABasicAICenter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ABasicBot::execSetAICenter)
	{
		P_GET_OBJECT(ABasicAICenter,Z_Param_Center);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAICenter(Z_Param_Center);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicBot::execMakeMove)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_Finish);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeMove(Z_Param_Start,Z_Param_Finish);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicBot::execMovementAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicBot::execIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IdleAnimation_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABasicBot_IdleAnimation = FName(TEXT("IdleAnimation"));
	void ABasicBot::IdleAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABasicBot_IdleAnimation),NULL);
	}
	static FName NAME_ABasicBot_MovementAnimation = FName(TEXT("MovementAnimation"));
	void ABasicBot::MovementAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABasicBot_MovementAnimation),NULL);
	}
	void ABasicBot::StaticRegisterNativesABasicBot()
	{
		UClass* Class = ABasicBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IdleAnimation", &ABasicBot::execIdleAnimation },
			{ "MakeMove", &ABasicBot::execMakeMove },
			{ "MovementAnimation", &ABasicBot::execMovementAnimation },
			{ "SetAICenter", &ABasicBot::execSetAICenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicBot_IdleAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicBot_IdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicBot_IdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicBot, nullptr, "IdleAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicBot_IdleAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicBot_IdleAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicBot_IdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicBot_IdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicBot_MakeMove_Statics
	{
		struct BasicBot_eventMakeMove_Parms
		{
			FVector Start;
			FVector Finish;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finish;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicBot_MakeMove_Statics::NewProp_Finish = { "Finish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicBot_eventMakeMove_Parms, Finish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicBot_MakeMove_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicBot_eventMakeMove_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicBot_MakeMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicBot_MakeMove_Statics::NewProp_Finish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicBot_MakeMove_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicBot_MakeMove_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicBot_MakeMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicBot, nullptr, "MakeMove", nullptr, nullptr, sizeof(BasicBot_eventMakeMove_Parms), Z_Construct_UFunction_ABasicBot_MakeMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicBot_MakeMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicBot_MakeMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicBot_MakeMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicBot_MakeMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicBot_MakeMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicBot_MovementAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicBot_MovementAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicBot_MovementAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicBot, nullptr, "MovementAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicBot_MovementAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicBot_MovementAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicBot_MovementAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicBot_MovementAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicBot_SetAICenter_Statics
	{
		struct BasicBot_eventSetAICenter_Parms
		{
			ABasicAICenter* Center;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicBot_eventSetAICenter_Parms, Center), Z_Construct_UClass_ABasicAICenter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::NewProp_Center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicBot, nullptr, "SetAICenter", nullptr, nullptr, sizeof(BasicBot_eventSetAICenter_Parms), Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicBot_SetAICenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicBot_SetAICenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicBot_NoRegister()
	{
		return ABasicBot::StaticClass();
	}
	struct Z_Construct_UClass_ABasicBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicBot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicBot_IdleAnimation, "IdleAnimation" }, // 353310813
		{ &Z_Construct_UFunction_ABasicBot_MakeMove, "MakeMove" }, // 3745843040
		{ &Z_Construct_UFunction_ABasicBot_MovementAnimation, "MovementAnimation" }, // 1962804262
		{ &Z_Construct_UFunction_ABasicBot_SetAICenter, "SetAICenter" }, // 1521606722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasicBot.h" },
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_AICenter_MetaData[] = {
		{ "Category", "BasicBot" },
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_AICenter = { "AICenter", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicBot, AICenter), Z_Construct_UClass_ABasicAICenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_AICenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_AICenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_AdditionalRotation_MetaData[] = {
		{ "Category", "BasicBot" },
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_AdditionalRotation = { "AdditionalRotation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicBot, AdditionalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_AdditionalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_AdditionalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	void Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((ABasicBot*)Obj)->IsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasicBot), &Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_EndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicBot, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicBot, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_MovementTime_MetaData[] = {
		{ "Category", "BasicBot" },
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_MovementTime = { "MovementTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicBot, MovementTime), METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_MovementTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_MovementTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBot_Statics::NewProp_CurTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicBot_Statics::NewProp_CurTime = { "CurTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicBot, CurTime), METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::NewProp_CurTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::NewProp_CurTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_AICenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_AdditionalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_IsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_MovementTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicBot_Statics::NewProp_CurTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicBot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicBot_Statics::ClassParams = {
		&ABasicBot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicBot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicBot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicBot, 4073208044);
	template<> REALTIMEMAPF_API UClass* StaticClass<ABasicBot>()
	{
		return ABasicBot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicBot(Z_Construct_UClass_ABasicBot, &ABasicBot::StaticClass, TEXT("/Script/RealTimeMAPF"), TEXT("ABasicBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
