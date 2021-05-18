// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef REALTIMEMAPF_BasicAICenter_generated_h
#error "BasicAICenter.generated.h already included, missing '#pragma once' in BasicAICenter.h"
#endif
#define REALTIMEMAPF_BasicAICenter_generated_h

#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_SPARSE_DATA
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginPlan); \
	DECLARE_FUNCTION(execTaskToLocation); \
	DECLARE_FUNCTION(execAgentFinished); \
	DECLARE_FUNCTION(execSectionReady); \
	DECLARE_FUNCTION(execPreplanReady); \
	DECLARE_FUNCTION(execReadyToMoveAgents);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginPlan); \
	DECLARE_FUNCTION(execTaskToLocation); \
	DECLARE_FUNCTION(execAgentFinished); \
	DECLARE_FUNCTION(execSectionReady); \
	DECLARE_FUNCTION(execPreplanReady); \
	DECLARE_FUNCTION(execReadyToMoveAgents);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicAICenter(); \
	friend struct Z_Construct_UClass_ABasicAICenter_Statics; \
public: \
	DECLARE_CLASS(ABasicAICenter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(ABasicAICenter)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABasicAICenter(); \
	friend struct Z_Construct_UClass_ABasicAICenter_Statics; \
public: \
	DECLARE_CLASS(ABasicAICenter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(ABasicAICenter)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicAICenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicAICenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicAICenter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicAICenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicAICenter(ABasicAICenter&&); \
	NO_API ABasicAICenter(const ABasicAICenter&); \
public:


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicAICenter(ABasicAICenter&&); \
	NO_API ABasicAICenter(const ABasicAICenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicAICenter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicAICenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicAICenter)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapDataPointer() { return STRUCT_OFFSET(ABasicAICenter, MapDataPointer); } \
	FORCEINLINE static uint32 __PPO__MapData() { return STRUCT_OFFSET(ABasicAICenter, MapData); } \
	FORCEINLINE static uint32 __PPO__BotClass() { return STRUCT_OFFSET(ABasicAICenter, BotClass); } \
	FORCEINLINE static uint32 __PPO__Solver() { return STRUCT_OFFSET(ABasicAICenter, Solver); } \
	FORCEINLINE static uint32 __PPO__SectionSize() { return STRUCT_OFFSET(ABasicAICenter, SectionSize); } \
	FORCEINLINE static uint32 __PPO__FinishedAgents() { return STRUCT_OFFSET(ABasicAICenter, FinishedAgents); } \
	FORCEINLINE static uint32 __PPO__SectionStart() { return STRUCT_OFFSET(ABasicAICenter, SectionStart); } \
	FORCEINLINE static uint32 __PPO__Tasks() { return STRUCT_OFFSET(ABasicAICenter, Tasks); } \
	FORCEINLINE static uint32 __PPO__Bots() { return STRUCT_OFFSET(ABasicAICenter, Bots); } \
	FORCEINLINE static uint32 __PPO__AgentIDs() { return STRUCT_OFFSET(ABasicAICenter, AgentIDs); }


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_13_PROLOG
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_RPC_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_INCLASS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_INCLASS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEMAPF_API UClass* StaticClass<class ABasicAICenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicAICenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
