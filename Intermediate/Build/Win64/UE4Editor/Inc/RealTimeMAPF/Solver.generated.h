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
#ifdef REALTIMEMAPF_Solver_generated_h
#error "Solver.generated.h already included, missing '#pragma once' in Solver.h"
#endif
#define REALTIMEMAPF_Solver_generated_h

#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_16_DELEGATE \
static inline void FOnPlanReady_DelegateWrapper(const FScriptDelegate& OnPlanReady) \
{ \
	OnPlanReady.ProcessDelegate<UObject>(NULL); \
}


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_SPARSE_DATA
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllTasks); \
	DECLARE_FUNCTION(execGetNextMove); \
	DECLARE_FUNCTION(execSetDepth); \
	DECLARE_FUNCTION(execSetSectionSize); \
	DECLARE_FUNCTION(execMoveTime); \
	DECLARE_FUNCTION(execPlan); \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execSetMapData); \
	DECLARE_FUNCTION(execIsCorrectSectionSize);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllTasks); \
	DECLARE_FUNCTION(execGetNextMove); \
	DECLARE_FUNCTION(execSetDepth); \
	DECLARE_FUNCTION(execSetSectionSize); \
	DECLARE_FUNCTION(execMoveTime); \
	DECLARE_FUNCTION(execPlan); \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execSetMapData); \
	DECLARE_FUNCTION(execIsCorrectSectionSize);


#if WITH_EDITOR
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDebugGrid);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDebugGrid);


#else
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_EDITOR_ONLY_RPC_WRAPPERS
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASolver(); \
	friend struct Z_Construct_UClass_ASolver_Statics; \
public: \
	DECLARE_CLASS(ASolver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(ASolver)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_INCLASS \
private: \
	static void StaticRegisterNativesASolver(); \
	friend struct Z_Construct_UClass_ASolver_Statics; \
public: \
	DECLARE_CLASS(ASolver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(ASolver)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASolver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASolver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASolver(ASolver&&); \
	NO_API ASolver(const ASolver&); \
public:


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASolver(ASolver&&); \
	NO_API ASolver(const ASolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASolver)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Configuration() { return STRUCT_OFFSET(ASolver, Configuration); } \
	FORCEINLINE static uint32 __PPO__ConstructRadius() { return STRUCT_OFFSET(ASolver, ConstructRadius); } \
	FORCEINLINE static uint32 __PPO__ConstructDepth() { return STRUCT_OFFSET(ASolver, ConstructDepth); } \
	FORCEINLINE static uint32 __PPO__MapDataPointer() { return STRUCT_OFFSET(ASolver, MapDataPointer); } \
	FORCEINLINE static uint32 __PPO__MapData() { return STRUCT_OFFSET(ASolver, MapData); }


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_54_PROLOG
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_RPC_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_EDITOR_ONLY_RPC_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_INCLASS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_INCLASS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEMAPF_API UClass* StaticClass<class ASolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_Solver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
