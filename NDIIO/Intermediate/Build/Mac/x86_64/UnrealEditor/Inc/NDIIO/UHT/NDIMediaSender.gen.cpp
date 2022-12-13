// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaSender.h"
#include "Core/Public/Structures/NDIBroadcastConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSender() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""A delegate used for notifications on property changes on the NDIMediaSender object\n*/" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "A delegate used for notifications on property changes on the NDIMediaSender object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderPropertyChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderMetaDataReceived_Parms
		{
			UNDIMediaSender* Sender;
			FString Data;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderMetaDataReceived_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderMetaDataReceived_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::NewProp_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""A delegate used for notifications on the NDIMediaSender object receiving metadata\n*/" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "A delegate used for notifications on the NDIMediaSender object receiving metadata" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderMetaDataReceived__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderMetaDataReceived_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderVideoPreSend_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderVideoPreSend_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Delegates to notify just before and after the NDIMediaSender sends a video, audio, or metadata frame\n*/" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Delegates to notify just before and after the NDIMediaSender sends a video, audio, or metadata frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderVideoPreSend__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderVideoPreSend_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderVideoSent_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderVideoSent_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderVideoSent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderVideoSent_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderAudioPreSend_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderAudioPreSend_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderAudioPreSend__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderAudioPreSend_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderAudioSent_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderAudioSent_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderAudioSent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderAudioSent_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderMetaDataPreSend_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderMetaDataPreSend_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderMetaDataPreSend__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderMetaDataPreSend_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderMetaDataSent_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderMetaDataSent_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderMetaDataSent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderMetaDataSent_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNDIMediaSender::execSendMetadataFrameAttrs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Element);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Attributes);
		P_GET_UBOOL(Z_Param_AttachToVideoFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMetadataFrameAttrs(Z_Param_Element,Z_Param_Out_Attributes,Z_Param_AttachToVideoFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIMediaSender::execSendMetadataFrameAttr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Element);
		P_GET_PROPERTY(FStrProperty,Z_Param_ElementData);
		P_GET_UBOOL(Z_Param_AttachToVideoFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMetadataFrameAttr(Z_Param_Element,Z_Param_ElementData,Z_Param_AttachToVideoFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIMediaSender::execSendMetadataFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_UBOOL(Z_Param_AttachToVideoFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMetadataFrame(Z_Param_Data,Z_Param_AttachToVideoFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIMediaSender::execChangeBroadcastConfiguration)
	{
		P_GET_STRUCT_REF(FNDIBroadcastConfiguration,Z_Param_Out_InConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBroadcastConfiguration(Z_Param_Out_InConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIMediaSender::execChangeSourceName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSourceName(Z_Param_InSourceName);
		P_NATIVE_END;
	}
	void UNDIMediaSender::StaticRegisterNativesUNDIMediaSender()
	{
		UClass* Class = UNDIMediaSender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBroadcastConfiguration", &UNDIMediaSender::execChangeBroadcastConfiguration },
			{ "ChangeSourceName", &UNDIMediaSender::execChangeSourceName },
			{ "SendMetadataFrame", &UNDIMediaSender::execSendMetadataFrame },
			{ "SendMetadataFrameAttr", &UNDIMediaSender::execSendMetadataFrameAttr },
			{ "SendMetadataFrameAttrs", &UNDIMediaSender::execSendMetadataFrameAttrs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics
	{
		struct NDIMediaSender_eventChangeBroadcastConfiguration_Parms
		{
			FNDIBroadcastConfiguration InConfiguration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration = { "InConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventChangeBroadcastConfiguration_Parms, InConfiguration), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData)) }; // 2004612424
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to change the Broadcast information associated with this media object\n\x09*/" },
		{ "DisplayName", "Change Broadcast Configuration" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Attempts to change the Broadcast information associated with this media object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaSender, nullptr, "ChangeBroadcastConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::NDIMediaSender_eventChangeBroadcastConfiguration_Parms), Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics
	{
		struct NDIMediaSender_eventChangeSourceName_Parms
		{
			FString InSourceName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::NewProp_InSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventChangeSourceName_Parms, InSourceName), METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::NewProp_InSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::NewProp_InSourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::NewProp_InSourceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Changes the name of the sender object as seen on the network for remote connections\n\x09*/" },
		{ "DisplayName", "Change Source Name" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Changes the name of the sender object as seen on the network for remote connections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaSender, nullptr, "ChangeSourceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::NDIMediaSender_eventChangeSourceName_Parms), Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics
	{
		struct NDIMediaSender_eventSendMetadataFrame_Parms
		{
			FString Data;
			bool AttachToVideoFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static void NewProp_AttachToVideoFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttachToVideoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventSendMetadataFrame_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_AttachToVideoFrame_SetBit(void* Obj)
	{
		((NDIMediaSender_eventSendMetadataFrame_Parms*)Obj)->AttachToVideoFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_AttachToVideoFrame = { "AttachToVideoFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDIMediaSender_eventSendMetadataFrame_Parms), &Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_AttachToVideoFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NewProp_AttachToVideoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09This will send a metadata frame to all receivers\n\x09\x09The data is expected to be valid XML\n\x09*/" },
		{ "CPP_Default_AttachToVideoFrame", "true" },
		{ "DisplayName", "Send Metadata To Receivers" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "This will send a metadata frame to all receivers\nThe data is expected to be valid XML" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaSender, nullptr, "SendMetadataFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::NDIMediaSender_eventSendMetadataFrame_Parms), Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics
	{
		struct NDIMediaSender_eventSendMetadataFrameAttr_Parms
		{
			FString Element;
			FString ElementData;
			bool AttachToVideoFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Element;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ElementData;
		static void NewProp_AttachToVideoFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttachToVideoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_Element_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventSendMetadataFrameAttr_Parms, Element), METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_Element_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_ElementData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_ElementData = { "ElementData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventSendMetadataFrameAttr_Parms, ElementData), METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_ElementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_ElementData_MetaData)) };
	void Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_AttachToVideoFrame_SetBit(void* Obj)
	{
		((NDIMediaSender_eventSendMetadataFrameAttr_Parms*)Obj)->AttachToVideoFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_AttachToVideoFrame = { "AttachToVideoFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDIMediaSender_eventSendMetadataFrameAttr_Parms), &Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_AttachToVideoFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_Element,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_ElementData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NewProp_AttachToVideoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09This will send a metadata frame to all receivers\n\x09\x09The data will be formatted as: <Element>ElementData</Element>\n\x09*/" },
		{ "CPP_Default_AttachToVideoFrame", "true" },
		{ "DisplayName", "Send Metadata To Receivers (Element + Data)" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "This will send a metadata frame to all receivers\nThe data will be formatted as: <Element>ElementData</Element>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaSender, nullptr, "SendMetadataFrameAttr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::NDIMediaSender_eventSendMetadataFrameAttr_Parms), Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics
	{
		struct NDIMediaSender_eventSendMetadataFrameAttrs_Parms
		{
			FString Element;
			TMap<FString,FString> Attributes;
			bool AttachToVideoFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Element;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
		static void NewProp_AttachToVideoFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttachToVideoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Element_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventSendMetadataFrameAttrs_Parms, Element), METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Element_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDIMediaSender_eventSendMetadataFrameAttrs_Parms, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_MetaData)) };
	void Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_AttachToVideoFrame_SetBit(void* Obj)
	{
		((NDIMediaSender_eventSendMetadataFrameAttrs_Parms*)Obj)->AttachToVideoFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_AttachToVideoFrame = { "AttachToVideoFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDIMediaSender_eventSendMetadataFrameAttrs_Parms), &Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_AttachToVideoFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Element,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NewProp_AttachToVideoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09This will send a metadata frame to all receivers\n\x09\x09The data will be formatted as: <Element Key0=\"Value0\" Key1=\"Value1\" Keyn=\"Valuen\"/>\n\x09*/" },
		{ "CPP_Default_AttachToVideoFrame", "true" },
		{ "DisplayName", "Send Metadata To Receivers (Element + Attributes)" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "This will send a metadata frame to all receivers\nThe data will be formatted as: <Element Key0=\"Value0\" Key1=\"Value1\" Keyn=\"Valuen\"/>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaSender, nullptr, "SendMetadataFrameAttrs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::NDIMediaSender_eventSendMetadataFrameAttrs_Parms), Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaSender);
	UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister()
	{
		return UNDIMediaSender::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAlpha_MetaData[];
#endif
		static void NewProp_OutputAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePTZ_MetaData[];
#endif
		static void NewProp_bEnablePTZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePTZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerformLinearTosRGB_MetaData[];
#endif
		static void NewProp_bPerformLinearTosRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformLinearTosRGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBroadcastConfigurationChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBroadcastConfigurationChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderMetaDataReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderMetaDataReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderVideoPreSend_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderVideoPreSend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderVideoSent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderVideoSent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderAudioPreSend_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderAudioPreSend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderAudioSent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderAudioSent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderMetaDataPreSend_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderMetaDataPreSend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSenderMetaDataSent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenderMetaDataSent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIMediaSender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIMediaSender_ChangeBroadcastConfiguration, "ChangeBroadcastConfiguration" }, // 838446926
		{ &Z_Construct_UFunction_UNDIMediaSender_ChangeSourceName, "ChangeSourceName" }, // 424461013
		{ &Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrame, "SendMetadataFrame" }, // 1682083058
		{ &Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttr, "SendMetadataFrameAttr" }, // 3911196115
		{ &Z_Construct_UFunction_UNDIMediaSender_SendMetadataFrameAttrs, "SendMetadataFrameAttrs" }, // 3233134347
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Content" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Defines a media object representing an NDI(R) Sender object. This object is used with the\n\x09NDI Broadcast Component to send Audio / Video / Metadata to a 'receiving' NDI object.\n*/" },
		{ "DisplayName", "NDI Sender Object" },
		{ "HideCategories", "Platforms Information Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaSender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Defines a media object representing an NDI(R) Sender object. This object is used with the\nNDI Broadcast Component to send Audio / Video / Metadata to a 'receiving' NDI object." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Describes a user-friendly name of the output stream to differentiate from other output streams on the current\n\x09 * machine */" },
		{ "DisplayName", "Source Name" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Describes a user-friendly name of the output stream to differentiate from other output streams on the current\nmachine" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, SourceName), METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Describes the output frame size while sending video frame over NDI */" },
		{ "DisplayName", "Frame Size" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Describes the output frame size while sending video frame over NDI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Represents the desired number of frames (per second) for video to be sent over NDI */" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Represents the desired number of frames (per second) for video to be sent over NDI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Sets whether or not to output an alpha channel */" },
		{ "DisplayName", "Output Alpha" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Sets whether or not to output an alpha channel" },
	};
#endif
	void Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha_SetBit(void* Obj)
	{
		((UNDIMediaSender*)Obj)->OutputAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha = { "OutputAlpha", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNDIMediaSender), &Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "DisplayName", "Alpha Remap Min" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMin = { "AlphaMin", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, AlphaMin), METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "DisplayName", "Alpha Remap Max" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMax = { "AlphaMax", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, AlphaMax), METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Sets whether or not to present PTZ capabilities */" },
		{ "DisplayName", "Enable PTZ" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Sets whether or not to present PTZ capabilities" },
	};
#endif
	void Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ_SetBit(void* Obj)
	{
		((UNDIMediaSender*)Obj)->bEnablePTZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ = { "bEnablePTZ", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNDIMediaSender), &Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Content" },
		{ "Comment", "/** Indicates the texture to send over NDI (optional) */" },
		{ "DisplayName", "Render Target (optional)" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Indicates the texture to send over NDI (optional)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09Should perform the Linear to sRGB color space conversion\n\x09*/" },
		{ "DisplayName", "Perform Linear to sRGB?" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Should perform the Linear to sRGB color space conversion" },
	};
#endif
	void Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB_SetBit(void* Obj)
	{
		((UNDIMediaSender*)Obj)->bPerformLinearTosRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB = { "bPerformLinearTosRGB", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNDIMediaSender), &Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged = { "OnBroadcastConfigurationChanged", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnBroadcastConfigurationChanged), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged_MetaData)) }; // 1066147024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On MetaData Received by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataReceived = { "OnSenderMetaDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderMetaDataReceived), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataReceived_MetaData)) }; // 3053722367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoPreSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Before Video Being Sent by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoPreSend = { "OnSenderVideoPreSend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderVideoPreSend), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoPreSend__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoPreSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoPreSend_MetaData)) }; // 1855796643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Video Sent by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoSent = { "OnSenderVideoSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderVideoSent), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderVideoSent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoSent_MetaData)) }; // 2387118310
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioPreSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Before Audio Being Sent by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioPreSend = { "OnSenderAudioPreSend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderAudioPreSend), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioPreSend__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioPreSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioPreSend_MetaData)) }; // 3623494204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Audio Sent by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioSent = { "OnSenderAudioSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderAudioSent), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderAudioSent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioSent_MetaData)) }; // 463838201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataPreSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Before MetaData Being Sent by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataPreSend = { "OnSenderMetaDataPreSend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderMetaDataPreSend), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataPreSend__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataPreSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataPreSend_MetaData)) }; // 3111616382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataSent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On MetaData Sent by Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataSent = { "OnSenderMetaDataSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIMediaSender, OnSenderMetaDataSent), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderMetaDataSent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataSent_MetaData)) }; // 973406162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OutputAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_AlphaMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bEnablePTZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformLinearTosRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoPreSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderVideoSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioPreSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderAudioSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataPreSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnSenderMetaDataSent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSender_Statics::ClassParams = {
		&UNDIMediaSender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNDIMediaSender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaSender()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaSender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSender.OuterSingleton, Z_Construct_UClass_UNDIMediaSender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaSender.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIMediaSender>()
	{
		return UNDIMediaSender::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSender);
	UNDIMediaSender::~UNDIMediaSender() {}
	struct Z_CompiledInDeferFile_FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSender, UNDIMediaSender::StaticClass, TEXT("UNDIMediaSender"), &Z_Registration_Info_UClass_UNDIMediaSender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSender), 3406867306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_3267989713(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_owen_Documents_Unreal_Projects_plugin_build_test_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
