// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABasicAICenter;
struct FVector;
#ifdef REALTIMEMAPF_BasicBot_generated_h
#error "BasicBot.generated.h already included, missing '#pragma once' in BasicBot.h"
#endif
#define REALTIMEMAPF_BasicBot_generated_h

#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_SPARSE_DATA
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_RPC_WRAPPERS \
	virtual void MovementAnimation_Implementation(); \
	virtual void IdleAnimation_Implementation(); \
 \
	DECLARE_FUNCTION(execSetAICenter); \
	DECLARE_FUNCTION(execMakeMove); \
	DECLARE_FUNCTION(execMovementAnimation); \
	DECLARE_FUNCTION(execIdleAnimation);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAICenter); \
	DECLARE_FUNCTION(execMakeMove); \
	DECLARE_FUNCTION(execMovementAnimation); \
	DECLARE_FUNCTION(execIdleAnimation);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_EVENT_PARMS
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_CALLBACK_WRAPPERS
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicBot(); \
	friend struct Z_Construct_UClass_ABasicBot_Statics; \
public: \
	DECLARE_CLASS(ABasicBot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(ABasicBot)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABasicBot(); \
	friend struct Z_Construct_UClass_ABasicBot_Statics; \
public: \
	DECLARE_CLASS(ABasicBot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(ABasicBot)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicBot(ABasicBot&&); \
	NO_API ABasicBot(const ABasicBot&); \
public:


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicBot(ABasicBot&&); \
	NO_API ABasicBot(const ABasicBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicBot)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurTime() { return STRUCT_OFFSET(ABasicBot, CurTime); } \
	FORCEINLINE static uint32 __PPO__MovementTime() { return STRUCT_OFFSET(ABasicBot, MovementTime); } \
	FORCEINLINE static uint32 __PPO__StartLocation() { return STRUCT_OFFSET(ABasicBot, StartLocation); } \
	FORCEINLINE static uint32 __PPO__EndLocation() { return STRUCT_OFFSET(ABasicBot, EndLocation); } \
	FORCEINLINE static uint32 __PPO__IsMoving() { return STRUCT_OFFSET(ABasicBot, IsMoving); } \
	FORCEINLINE static uint32 __PPO__AdditionalRotation() { return STRUCT_OFFSET(ABasicBot, AdditionalRotation); } \
	FORCEINLINE static uint32 __PPO__AICenter() { return STRUCT_OFFSET(ABasicBot, AICenter); }


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_11_PROLOG \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_EVENT_PARMS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_RPC_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_CALLBACK_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_INCLASS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_PRIVATE_PROPERTY_OFFSET \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_CALLBACK_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_INCLASS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEMAPF_API UClass* StaticClass<class ABasicBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_BasicBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
