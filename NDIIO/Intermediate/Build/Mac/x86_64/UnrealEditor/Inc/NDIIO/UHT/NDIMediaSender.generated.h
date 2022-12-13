// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/Media/NDIMediaSender.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UNDIMediaSender;
struct FNDIBroadcastConfiguration;
#ifdef NDIIO_NDIMediaSender_generated_h
#error "NDIMediaSender.generated.h already included, missing '#pragma once' in NDIMediaSender.h"
#endif
#define NDIIO_NDIMediaSender_generated_h

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_27_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderPropertyChanged_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderPropertyChanged, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderPropertyChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_32_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderMetaDataReceived_Parms \
{ \
	UNDIMediaSender* Sender; \
	FString Data; \
}; \
static inline void FNDIMediaSenderMetaDataReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderMetaDataReceived, UNDIMediaSender* Sender, const FString& Data) \
{ \
	_Script_NDIIO_eventNDIMediaSenderMetaDataReceived_Parms Parms; \
	Parms.Sender=Sender; \
	Parms.Data=Data; \
	NDIMediaSenderMetaDataReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_37_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderVideoPreSend_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderVideoPreSend_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderVideoPreSend, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderVideoPreSend_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderVideoPreSend.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_38_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderVideoSent_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderVideoSent_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderVideoSent, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderVideoSent_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderVideoSent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_40_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderAudioPreSend_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderAudioPreSend_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderAudioPreSend, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderAudioPreSend_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderAudioPreSend.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_41_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderAudioSent_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderAudioSent_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderAudioSent, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderAudioSent_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderAudioSent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_43_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderMetaDataPreSend_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderMetaDataPreSend_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderMetaDataPreSend, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderMetaDataPreSend_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderMetaDataPreSend.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_44_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderMetaDataSent_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderMetaDataSent_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderMetaDataSent, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderMetaDataSent_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderMetaDataSent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_SPARSE_DATA
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMetadataFrameAttrs); \
	DECLARE_FUNCTION(execSendMetadataFrameAttr); \
	DECLARE_FUNCTION(execSendMetadataFrame); \
	DECLARE_FUNCTION(execChangeBroadcastConfiguration); \
	DECLARE_FUNCTION(execChangeSourceName);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMetadataFrameAttrs); \
	DECLARE_FUNCTION(execSendMetadataFrameAttr); \
	DECLARE_FUNCTION(execSendMetadataFrame); \
	DECLARE_FUNCTION(execChangeBroadcastConfiguration); \
	DECLARE_FUNCTION(execChangeSourceName);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_ACCESSORS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaSender(); \
	friend struct Z_Construct_UClass_UNDIMediaSender_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaSender, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaSender)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUNDIMediaSender(); \
	friend struct Z_Construct_UClass_UNDIMediaSender_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaSender, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaSender)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaSender(UNDIMediaSender&&); \
	NO_API UNDIMediaSender(const UNDIMediaSender&); \
public: \
	NO_API virtual ~UNDIMediaSender();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaSender(UNDIMediaSender&&); \
	NO_API UNDIMediaSender(const UNDIMediaSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSender) \
	NO_API virtual ~UNDIMediaSender();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_52_PROLOG
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_RPC_WRAPPERS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_INCLASS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_INCLASS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIMediaSender."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIMediaSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
