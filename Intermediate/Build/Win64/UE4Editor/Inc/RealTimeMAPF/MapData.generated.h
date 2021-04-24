// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef REALTIMEMAPF_MapData_generated_h
#error "MapData.generated.h already included, missing '#pragma once' in MapData.h"
#endif
#define REALTIMEMAPF_MapData_generated_h

#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_SPARSE_DATA
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_RPC_WRAPPERS \
	virtual FVector GetLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual float GetTimeGap_Implementation() const { return 0; }; \
	virtual float GetGap_Implementation() const { return 0; }; \
	virtual bool IsCellOnGrid_Implementation(int32 Y, int32 X) const { return false; }; \
	virtual bool IsCellTraversable_Implementation(int32 Y, int32 X) const { return false; }; \
	virtual int32 GetHeight_Implementation() const { return 0; }; \
	virtual int32 GetWidth_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetLocation); \
	DECLARE_FUNCTION(execGetTimeGap); \
	DECLARE_FUNCTION(execGetGap); \
	DECLARE_FUNCTION(execIsCellOnGrid); \
	DECLARE_FUNCTION(execIsCellTraversable); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocation); \
	DECLARE_FUNCTION(execGetTimeGap); \
	DECLARE_FUNCTION(execGetGap); \
	DECLARE_FUNCTION(execIsCellOnGrid); \
	DECLARE_FUNCTION(execIsCellTraversable); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_EVENT_PARMS \
	struct MapData_eventGetGap_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventGetGap_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MapData_eventGetHeight_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventGetHeight_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MapData_eventGetLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventGetLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct MapData_eventGetTimeGap_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventGetTimeGap_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MapData_eventGetWidth_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventGetWidth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MapData_eventIsCellOnGrid_Parms \
	{ \
		int32 Y; \
		int32 X; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventIsCellOnGrid_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MapData_eventIsCellTraversable_Parms \
	{ \
		int32 Y; \
		int32 X; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MapData_eventIsCellTraversable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_CALLBACK_WRAPPERS
#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapData(UMapData&&); \
	NO_API UMapData(const UMapData&); \
public:


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapData(UMapData&&); \
	NO_API UMapData(const UMapData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapData)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMapData(); \
	friend struct Z_Construct_UClass_UMapData_Statics; \
public: \
	DECLARE_CLASS(UMapData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RealTimeMAPF"), NO_API) \
	DECLARE_SERIALIZER(UMapData)


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_GENERATED_UINTERFACE_BODY() \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_GENERATED_UINTERFACE_BODY() \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMapData() {} \
public: \
	typedef UMapData UClassType; \
	typedef IMapData ThisClass; \
	static float Execute_GetGap(const UObject* O); \
	static int32 Execute_GetHeight(const UObject* O); \
	static FVector Execute_GetLocation(const UObject* O); \
	static float Execute_GetTimeGap(const UObject* O); \
	static int32 Execute_GetWidth(const UObject* O); \
	static bool Execute_IsCellOnGrid(const UObject* O, int32 Y, int32 X); \
	static bool Execute_IsCellTraversable(const UObject* O, int32 Y, int32 X); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IMapData() {} \
public: \
	typedef UMapData UClassType; \
	typedef IMapData ThisClass; \
	static float Execute_GetGap(const UObject* O); \
	static int32 Execute_GetHeight(const UObject* O); \
	static FVector Execute_GetLocation(const UObject* O); \
	static float Execute_GetTimeGap(const UObject* O); \
	static int32 Execute_GetWidth(const UObject* O); \
	static bool Execute_IsCellOnGrid(const UObject* O, int32 Y, int32 X); \
	static bool Execute_IsCellTraversable(const UObject* O, int32 Y, int32 X); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_9_PROLOG \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_EVENT_PARMS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_RPC_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_CALLBACK_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_SPARSE_DATA \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_CALLBACK_WRAPPERS \
	GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEMAPF_API UClass* StaticClass<class UMapData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoodBots_Plugins_RealTimeMAPF_Source_RealTimeMAPF_Public_MapData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
