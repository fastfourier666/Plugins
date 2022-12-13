// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/Media/NDIMediaReceiver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UNDIMediaReceiver;
class UNDIMediaTexture2D;
struct FFrameRate;
struct FNDIConnectionInformation;
struct FNDIReceiverPerformanceData;
struct FTimecode;
#ifdef NDIIO_NDIMediaReceiver_generated_h
#error "NDIMediaReceiver.generated.h already included, missing '#pragma once' in NDIMediaReceiver.h"
#endif
#define NDIIO_NDIMediaReceiver_generated_h

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_37_DELEGATE \
struct _Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms \
{ \
	UNDIMediaReceiver* Receiver; \
}; \
static inline void FNDIMediaReceiverVideoReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaReceiverVideoReceived, UNDIMediaReceiver* Receiver) \
{ \
	_Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms Parms; \
	Parms.Receiver=Receiver; \
	NDIMediaReceiverVideoReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_38_DELEGATE \
struct _Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms \
{ \
	UNDIMediaReceiver* Receiver; \
}; \
static inline void FNDIMediaReceiverAudioReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaReceiverAudioReceived, UNDIMediaReceiver* Receiver) \
{ \
	_Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms Parms; \
	Parms.Receiver=Receiver; \
	NDIMediaReceiverAudioReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_39_DELEGATE \
struct _Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms \
{ \
	UNDIMediaReceiver* Receiver; \
	FString Data; \
	bool bAttachedToVideoFrame; \
}; \
static inline void FNDIMediaReceiverMetaDataReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaReceiverMetaDataReceived, UNDIMediaReceiver* Receiver, const FString& Data, bool bAttachedToVideoFrame) \
{ \
	_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms Parms; \
	Parms.Receiver=Receiver; \
	Parms.Data=Data; \
	Parms.bAttachedToVideoFrame=bAttachedToVideoFrame ? true : false; \
	NDIMediaReceiverMetaDataReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_SPARSE_DATA
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsCurrentlyConnected); \
	DECLARE_FUNCTION(execGetPerformanceData); \
	DECLARE_FUNCTION(execGetCurrentConnectionInformation); \
	DECLARE_FUNCTION(execGetCurrentTimecode); \
	DECLARE_FUNCTION(execGetCurrentResolution); \
	DECLARE_FUNCTION(execGetCurrentFrameRate); \
	DECLARE_FUNCTION(execSendMetadataFrameAttrs); \
	DECLARE_FUNCTION(execSendMetadataFrameAttr); \
	DECLARE_FUNCTION(execSendMetadataFrame); \
	DECLARE_FUNCTION(execChangeVideoTexture); \
	DECLARE_FUNCTION(execChangeConnection); \
	DECLARE_FUNCTION(execStopConnection); \
	DECLARE_FUNCTION(execStartConnection);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsCurrentlyConnected); \
	DECLARE_FUNCTION(execGetPerformanceData); \
	DECLARE_FUNCTION(execGetCurrentConnectionInformation); \
	DECLARE_FUNCTION(execGetCurrentTimecode); \
	DECLARE_FUNCTION(execGetCurrentResolution); \
	DECLARE_FUNCTION(execGetCurrentFrameRate); \
	DECLARE_FUNCTION(execSendMetadataFrameAttrs); \
	DECLARE_FUNCTION(execSendMetadataFrameAttr); \
	DECLARE_FUNCTION(execSendMetadataFrame); \
	DECLARE_FUNCTION(execChangeVideoTexture); \
	DECLARE_FUNCTION(execChangeConnection); \
	DECLARE_FUNCTION(execStopConnection); \
	DECLARE_FUNCTION(execStartConnection);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_ACCESSORS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaReceiver(); \
	friend struct Z_Construct_UClass_UNDIMediaReceiver_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaReceiver, UTimeSynchronizableMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaReceiver)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUNDIMediaReceiver(); \
	friend struct Z_Construct_UClass_UNDIMediaReceiver_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaReceiver, UTimeSynchronizableMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaReceiver)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaReceiver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaReceiver(UNDIMediaReceiver&&); \
	NO_API UNDIMediaReceiver(const UNDIMediaReceiver&); \
public: \
	NO_API virtual ~UNDIMediaReceiver();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaReceiver(UNDIMediaReceiver&&); \
	NO_API UNDIMediaReceiver(const UNDIMediaReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaReceiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNDIMediaReceiver) \
	NO_API virtual ~UNDIMediaReceiver();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_47_PROLOG
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_RPC_WRAPPERS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_INCLASS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_INCLASS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIMediaReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
