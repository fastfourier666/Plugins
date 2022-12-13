// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NDIPTZControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIMediaSender;
#ifdef NDIIO_NDIPTZControllerComponent_generated_h
#error "NDIPTZControllerComponent.generated.h already included, missing '#pragma once' in NDIPTZControllerComponent.h"
#endif
#define NDIIO_NDIPTZControllerComponent_generated_h

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPTZState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NDIIO_API UScriptStruct* StaticStruct<struct FPTZState>();

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_46_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms \
{ \
	float PanSpeed; \
	float TiltSpeed; \
}; \
static inline void FNDIEventDelegate_OnPTZPanTiltSpeed_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZPanTiltSpeed, float PanSpeed, float TiltSpeed) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms Parms; \
	Parms.PanSpeed=PanSpeed; \
	Parms.TiltSpeed=TiltSpeed; \
	NDIEventDelegate_OnPTZPanTiltSpeed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_47_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms \
{ \
	float ZoomSpeed; \
}; \
static inline void FNDIEventDelegate_OnPTZZoomSpeed_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZZoomSpeed, float ZoomSpeed) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms Parms; \
	Parms.ZoomSpeed=ZoomSpeed; \
	NDIEventDelegate_OnPTZZoomSpeed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_48_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms \
{ \
	bool AutoMode; \
	float Distance; \
}; \
static inline void FNDIEventDelegate_OnPTZFocus_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZFocus, bool AutoMode, float Distance) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms Parms; \
	Parms.AutoMode=AutoMode ? true : false; \
	Parms.Distance=Distance; \
	NDIEventDelegate_OnPTZFocus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_49_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms \
{ \
	int32 Index; \
}; \
static inline void FNDIEventDelegate_OnPTZStore_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZStore, int32 Index) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms Parms; \
	Parms.Index=Index; \
	NDIEventDelegate_OnPTZStore.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_50_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms \
{ \
	int32 Index; \
}; \
static inline void FNDIEventDelegate_OnPTZRecall_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZRecall, int32 Index) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms Parms; \
	Parms.Index=Index; \
	NDIEventDelegate_OnPTZRecall.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_SPARSE_DATA
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_RPC_WRAPPERS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_ACCESSORS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTZControllableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTZControllableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTZControllableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTZControllableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPTZControllableInterface(UPTZControllableInterface&&); \
	NO_API UPTZControllableInterface(const UPTZControllableInterface&); \
public: \
	NO_API virtual ~UPTZControllableInterface();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTZControllableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPTZControllableInterface(UPTZControllableInterface&&); \
	NO_API UPTZControllableInterface(const UPTZControllableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTZControllableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTZControllableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTZControllableInterface) \
	NO_API virtual ~UPTZControllableInterface();


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPTZControllableInterface(); \
	friend struct Z_Construct_UClass_UPTZControllableInterface_Statics; \
public: \
	DECLARE_CLASS(UPTZControllableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UPTZControllableInterface)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_GENERATED_UINTERFACE_BODY() \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_GENERATED_UINTERFACE_BODY() \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPTZControllableInterface() {} \
public: \
	typedef UPTZControllableInterface UClassType; \
	typedef IPTZControllableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_INCLASS_IINTERFACE \
protected: \
	virtual ~IPTZControllableInterface() {} \
public: \
	typedef UPTZControllableInterface UClassType; \
	typedef IPTZControllableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_55_PROLOG
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_RPC_WRAPPERS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_58_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UPTZControllableInterface>();

#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_SPARSE_DATA
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReceiveMetaDataFromSender);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReceiveMetaDataFromSender);


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_ACCESSORS
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTZController(); \
	friend struct Z_Construct_UClass_UPTZController_Statics; \
public: \
	DECLARE_CLASS(UPTZController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UPTZController)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUPTZController(); \
	friend struct Z_Construct_UClass_UPTZController_Statics; \
public: \
	DECLARE_CLASS(UPTZController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UPTZController)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTZController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTZController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTZController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTZController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPTZController(UPTZController&&); \
	NO_API UPTZController(const UPTZController&); \
public:


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPTZController(UPTZController&&); \
	NO_API UPTZController(const UPTZController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTZController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTZController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPTZController)


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_72_PROLOG
#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_RPC_WRAPPERS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_INCLASS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_SPARSE_DATA \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_ACCESSORS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_INCLASS_NO_PURE_DECLS \
	FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UPTZController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
