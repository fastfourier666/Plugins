// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/Libraries/NDIIOLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIMediaReceiver;
class UNDIMediaSender;
class UObject;
struct FNDIConnectionInformation;
struct FNDIMetaDataElement;
#ifdef NDIIO_NDIIOLibrary_generated_h
#error "NDIIOLibrary.generated.h already included, missing '#pragma once' in NDIIOLibrary.h"
#endif
#define NDIIO_NDIIOLibrary_generated_h

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics; \
	NDIIO_API static class UScriptStruct* StaticStruct();


template<> NDIIO_API UScriptStruct* StaticStruct<struct FNDIMetaDataElement>();

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_SPARSE_DATA
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_ParseNDIMetaData); \
	DECLARE_FUNCTION(execK2_GetNDIMediaSender); \
	DECLARE_FUNCTION(execK2_GetNDIMediaReceiver); \
	DECLARE_FUNCTION(execK2_StopBroadcastingActiveViewport); \
	DECLARE_FUNCTION(execK2_BeginBroadcastingActiveViewport); \
	DECLARE_FUNCTION(execK2_FindNetworkSourceByName); \
	DECLARE_FUNCTION(execK2_GetNDISourceCollection);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_ParseNDIMetaData); \
	DECLARE_FUNCTION(execK2_GetNDIMediaSender); \
	DECLARE_FUNCTION(execK2_GetNDIMediaReceiver); \
	DECLARE_FUNCTION(execK2_StopBroadcastingActiveViewport); \
	DECLARE_FUNCTION(execK2_BeginBroadcastingActiveViewport); \
	DECLARE_FUNCTION(execK2_FindNetworkSourceByName); \
	DECLARE_FUNCTION(execK2_GetNDISourceCollection);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_ACCESSORS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIIOLibrary(); \
	friend struct Z_Construct_UClass_UNDIIOLibrary_Statics; \
public: \
	DECLARE_CLASS(UNDIIOLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIIOLibrary)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUNDIIOLibrary(); \
	friend struct Z_Construct_UClass_UNDIIOLibrary_Statics; \
public: \
	DECLARE_CLASS(UNDIIOLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIIOLibrary)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIIOLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIIOLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIIOLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIIOLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIIOLibrary(UNDIIOLibrary&&); \
	NO_API UNDIIOLibrary(const UNDIIOLibrary&); \
public: \
	NO_API virtual ~UNDIIOLibrary();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIIOLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIIOLibrary(UNDIIOLibrary&&); \
	NO_API UNDIIOLibrary(const UNDIIOLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIIOLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIIOLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIIOLibrary) \
	NO_API virtual ~UNDIIOLibrary();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_39_PROLOG
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_RPC_WRAPPERS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_INCLASS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_INCLASS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIIOLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
