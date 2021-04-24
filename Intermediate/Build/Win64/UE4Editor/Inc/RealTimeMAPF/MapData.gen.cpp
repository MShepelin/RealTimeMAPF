// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeMAPF/Public/MapData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapData() {}
// Cross Module References
	REALTIMEMAPF_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	REALTIMEMAPF_API UClass* Z_Construct_UClass_UMapData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RealTimeMAPF();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IMapData::execGetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMapData::execGetTimeGap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeGap_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMapData::execGetGap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGap_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMapData::execIsCellOnGrid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCellOnGrid_Implementation(Z_Param_Y,Z_Param_X);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMapData::execIsCellTraversable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCellTraversable_Implementation(Z_Param_Y,Z_Param_X);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMapData::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMapData::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth_Implementation();
		P_NATIVE_END;
	}
	float IMapData::GetGap() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGap instead.");
		MapData_eventGetGap_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IMapData::GetHeight() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHeight instead.");
		MapData_eventGetHeight_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IMapData::GetLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLocation instead.");
		MapData_eventGetLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	float IMapData::GetTimeGap() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTimeGap instead.");
		MapData_eventGetTimeGap_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IMapData::GetWidth() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWidth instead.");
		MapData_eventGetWidth_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IMapData::IsCellOnGrid(int32 Y, int32 X) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsCellOnGrid instead.");
		MapData_eventIsCellOnGrid_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IMapData::IsCellTraversable(int32 Y, int32 X) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsCellTraversable instead.");
		MapData_eventIsCellTraversable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMapData::StaticRegisterNativesUMapData()
	{
		UClass* Class = UMapData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGap", &IMapData::execGetGap },
			{ "GetHeight", &IMapData::execGetHeight },
			{ "GetLocation", &IMapData::execGetLocation },
			{ "GetTimeGap", &IMapData::execGetTimeGap },
			{ "GetWidth", &IMapData::execGetWidth },
			{ "IsCellOnGrid", &IMapData::execIsCellOnGrid },
			{ "IsCellTraversable", &IMapData::execIsCellTraversable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapData_GetGap_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapData_GetGap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventGetGap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_GetGap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_GetGap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_GetGap_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_GetGap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "GetGap", nullptr, nullptr, sizeof(MapData_eventGetGap_Parms), Z_Construct_UFunction_UMapData_GetGap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetGap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_GetGap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetGap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_GetGap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_GetGap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapData_GetHeight_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapData_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_GetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "GetHeight", nullptr, nullptr, sizeof(MapData_eventGetHeight_Parms), Z_Construct_UFunction_UMapData_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapData_GetLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapData_GetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventGetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_GetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_GetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_GetLocation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_GetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "GetLocation", nullptr, nullptr, sizeof(MapData_eventGetLocation_Parms), Z_Construct_UFunction_UMapData_GetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_GetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_GetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_GetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapData_GetTimeGap_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapData_GetTimeGap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventGetTimeGap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_GetTimeGap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_GetTimeGap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_GetTimeGap_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_GetTimeGap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "GetTimeGap", nullptr, nullptr, sizeof(MapData_eventGetTimeGap_Parms), Z_Construct_UFunction_UMapData_GetTimeGap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetTimeGap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_GetTimeGap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetTimeGap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_GetTimeGap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_GetTimeGap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapData_GetWidth_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapData_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_GetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "GetWidth", nullptr, nullptr, sizeof(MapData_eventGetWidth_Parms), Z_Construct_UFunction_UMapData_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapData_eventIsCellOnGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapData_eventIsCellOnGrid_Parms), &Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventIsCellOnGrid_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventIsCellOnGrid_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "IsCellOnGrid", nullptr, nullptr, sizeof(MapData_eventIsCellOnGrid_Parms), Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_IsCellOnGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_IsCellOnGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapData_IsCellTraversable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapData_eventIsCellTraversable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapData_eventIsCellTraversable_Parms), &Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventIsCellTraversable_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapData_eventIsCellTraversable_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapData, nullptr, "IsCellTraversable", nullptr, nullptr, sizeof(MapData_eventIsCellTraversable_Parms), Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapData_IsCellTraversable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapData_IsCellTraversable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapData_NoRegister()
	{
		return UMapData::StaticClass();
	}
	struct Z_Construct_UClass_UMapData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeMAPF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapData_GetGap, "GetGap" }, // 3892459923
		{ &Z_Construct_UFunction_UMapData_GetHeight, "GetHeight" }, // 1830265296
		{ &Z_Construct_UFunction_UMapData_GetLocation, "GetLocation" }, // 689884018
		{ &Z_Construct_UFunction_UMapData_GetTimeGap, "GetTimeGap" }, // 1469202752
		{ &Z_Construct_UFunction_UMapData_GetWidth, "GetWidth" }, // 1878677299
		{ &Z_Construct_UFunction_UMapData_IsCellOnGrid, "IsCellOnGrid" }, // 2271830503
		{ &Z_Construct_UFunction_UMapData_IsCellTraversable, "IsCellTraversable" }, // 3056554489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMapData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapData_Statics::ClassParams = {
		&UMapData::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapData, 3259258067);
	template<> REALTIMEMAPF_API UClass* StaticClass<UMapData>()
	{
		return UMapData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapData(Z_Construct_UClass_UMapData, &UMapData::StaticClass, TEXT("/Script/RealTimeMAPF"), TEXT("UMapData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapData);
	static FName NAME_UMapData_GetGap = FName(TEXT("GetGap"));
	float IMapData::Execute_GetGap(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventGetGap_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_GetGap);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->GetGap_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMapData_GetHeight = FName(TEXT("GetHeight"));
	int32 IMapData::Execute_GetHeight(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventGetHeight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_GetHeight);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->GetHeight_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMapData_GetLocation = FName(TEXT("GetLocation"));
	FVector IMapData::Execute_GetLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventGetLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_GetLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->GetLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMapData_GetTimeGap = FName(TEXT("GetTimeGap"));
	float IMapData::Execute_GetTimeGap(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventGetTimeGap_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_GetTimeGap);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->GetTimeGap_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMapData_GetWidth = FName(TEXT("GetWidth"));
	int32 IMapData::Execute_GetWidth(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventGetWidth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_GetWidth);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->GetWidth_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMapData_IsCellOnGrid = FName(TEXT("IsCellOnGrid"));
	bool IMapData::Execute_IsCellOnGrid(const UObject* O, int32 Y, int32 X)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventIsCellOnGrid_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_IsCellOnGrid);
		if (Func)
		{
			Parms.Y=Y;
			Parms.X=X;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->IsCellOnGrid_Implementation(Y,X);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMapData_IsCellTraversable = FName(TEXT("IsCellTraversable"));
	bool IMapData::Execute_IsCellTraversable(const UObject* O, int32 Y, int32 X)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMapData::StaticClass()));
		MapData_eventIsCellTraversable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMapData_IsCellTraversable);
		if (Func)
		{
			Parms.Y=Y;
			Parms.X=X;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMapData*)(O->GetNativeInterfaceAddress(UMapData::StaticClass())))
		{
			Parms.ReturnValue = I->IsCellTraversable_Implementation(Y,X);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
