// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAgentTask;
class UObject;
#ifdef REALTIMEMAPF_Grid_generated_h
#error "Grid.generated.h already included, missing '#pragma once' in Grid.h"
#endif
#define REALTIMEMAPF_Grid_generated_h

#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_SPARSE_DATA
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllTasks); \
	DECLARE_FUNCTION(execMAPFGetNextMove); \
	DECLARE_FUNCTION(execMAPFSetSectionSize); \
	DECLARE_FUNCTION(execMAPFMoveTime); \
	DECLARE_FUNCTION(execMAPFPlan); \
	DECLARE_FUNCTION(execMAPFAddAgent); \
	DECLARE_FUNCTION(execDrawDebugGrid); \
	DECLARE_FUNCTION(execSetMapData);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllTasks); \
	DECLARE_FUNCTION(execMAPFGetNextMove); \
	DECLARE_FUNCTION(execMAPFSetSectionSize); \
	DECLARE_FUNCTION(execMAPFMoveTime); \
	DECLARE_FUNCTION(execMAPFPlan); \
	DECLARE_FUNCTION(execMAPFAddAgent); \
	DECLARE_FUNCTION(execDrawDebugGrid); \
	DECLARE_FUNCTION(execSetMapData);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrid(); \
	friend struct Z_Construct_UClass_AGrid_Statics; \
public: \
	DECLARE_CLASS(AGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(AGrid)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGrid(); \
	friend struct Z_Construct_UClass_AGrid_Statics; \
public: \
	DECLARE_CLASS(AGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(AGrid)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrid(AGrid&&); \
	NO_API AGrid(const AGrid&); \
public:


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrid(AGrid&&); \
	NO_API AGrid(const AGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrid)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Configuration() { return STRUCT_OFFSET(AGrid, Configuration); } \
	FORCEINLINE static uint32 __PPO__MapDataPointer() { return STRUCT_OFFSET(AGrid, MapDataPointer); } \
	FORCEINLINE static uint32 __PPO__MapData() { return STRUCT_OFFSET(AGrid, MapData); }


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_11_PROLOG
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_RPC_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_INCLASS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_INCLASS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEMAPF_API UClass* StaticClass<class AGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Grid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
