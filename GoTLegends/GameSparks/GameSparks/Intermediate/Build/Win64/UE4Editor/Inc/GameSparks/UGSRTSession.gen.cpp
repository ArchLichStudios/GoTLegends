// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/RT/UGSRTSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGSRTSession() {}
// Cross Module References
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTSession();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTData_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTSession_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature();
	GAMESPARKS_API UEnum* Z_Construct_UEnum_GameSparks_DeliveryIntent();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_CreateRTSession();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_GetActivePeers();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_GetPeerId();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_Send();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_Start();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_Stop();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics
	{
		struct GSRTSession_eventOnData_Parms
		{
			UGSRTSession* session;
			int32 sender;
			int32 opCode;
			UGSRTData* data;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_opCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sender;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Object, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, data), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_opCode = { UE4CodeGen_Private::EPropertyClass::Int, "opCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, opCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_sender = { UE4CodeGen_Private::EPropertyClass::Int, "sender", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, sender), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_opCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::NewProp_session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnData__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnData_Parms), Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics
	{
		struct GSRTSession_eventOnPlayerDisconnect_Parms
		{
			UGSRTSession* session;
			int32 peerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_peerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::NewProp_peerId = { UE4CodeGen_Private::EPropertyClass::Int, "peerId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerDisconnect_Parms, peerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerDisconnect_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::NewProp_peerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::NewProp_session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnPlayerDisconnect__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnPlayerDisconnect_Parms), Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics
	{
		struct GSRTSession_eventOnPlayerConnect_Parms
		{
			UGSRTSession* session;
			int32 peerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_peerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::NewProp_peerId = { UE4CodeGen_Private::EPropertyClass::Int, "peerId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerConnect_Parms, peerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerConnect_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::NewProp_peerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::NewProp_session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnPlayerConnect__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnPlayerConnect_Parms), Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics
	{
		struct GSRTSession_eventOnReady_Parms
		{
			UGSRTSession* session;
			bool ready;
		};
		static void NewProp_ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ready;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::NewProp_ready_SetBit(void* Obj)
	{
		((GSRTSession_eventOnReady_Parms*)Obj)->ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::NewProp_ready = { UE4CodeGen_Private::EPropertyClass::Bool, "ready", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTSession_eventOnReady_Parms), &Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::NewProp_ready_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnReady_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::NewProp_ready,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::NewProp_session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnReady__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnReady_Parms), Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* DeliveryIntent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSparks_DeliveryIntent, Z_Construct_UPackage__Script_GameSparks(), TEXT("DeliveryIntent"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DeliveryIntent(DeliveryIntent_StaticEnum, TEXT("/Script/GameSparks"), TEXT("DeliveryIntent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSparks_DeliveryIntent_CRC() { return 2795231443U; }
	UEnum* Z_Construct_UEnum_GameSparks_DeliveryIntent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSparks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DeliveryIntent"), 0, Get_Z_Construct_UEnum_GameSparks_DeliveryIntent_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DeliveryIntent::RELIABLE", (int64)DeliveryIntent::RELIABLE },
				{ "DeliveryIntent::UNRELIABLE", (int64)DeliveryIntent::UNRELIABLE },
				{ "DeliveryIntent::UNRELIABLE_SEQUENCED", (int64)DeliveryIntent::UNRELIABLE_SEQUENCED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
				{ "RELIABLE.DisplayName", "RELIABLE" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "UNRELIABLE.DisplayName", "UNRELIABLE" },
				{ "UNRELIABLE.ToolTip", "<summary>\nSend over UDP, don't discard out of sequence packets\n</summary>" },
				{ "UNRELIABLE_SEQUENCED.DisplayName", "UNRELIABLE_SEQUENCED" },
				{ "UNRELIABLE_SEQUENCED.ToolTip", "<summary>\nSend over UDP, discard out of sequence packets\n</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSparks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"DeliveryIntent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"DeliveryIntent",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGSRTSession::StaticRegisterNativesUGSRTSession()
	{
		UClass* Class = UGSRTSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRTSession", &UGSRTSession::execCreateRTSession },
			{ "GetActivePeers", &UGSRTSession::execGetActivePeers },
			{ "GetPeerId", &UGSRTSession::execGetPeerId },
			{ "Send", &UGSRTSession::execSend },
			{ "Start", &UGSRTSession::execStart },
			{ "Stop", &UGSRTSession::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics
	{
		struct GSRTSession_eventCreateRTSession_Parms
		{
			UObject* WorldContextObject;
			FString host;
			FString port;
			FString token;
			UGSRTSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_host;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, ReturnValue), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_token = { UE4CodeGen_Private::EPropertyClass::Str, "token", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_port = { UE4CodeGen_Private::EPropertyClass::Str, "port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_host = { UE4CodeGen_Private::EPropertyClass::Str, "host", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, host), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Session" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create GS RT Session" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
		{ "ToolTip", "Create a new GS Data object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "CreateRTSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GSRTSession_eventCreateRTSession_Parms), Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTSession_CreateRTSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTSession_CreateRTSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics
	{
		struct GSRTSession_eventGetActivePeers_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventGetActivePeers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Session" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "GetActivePeers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTSession_eventGetActivePeers_Parms), Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTSession_GetActivePeers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTSession_GetActivePeers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics
	{
		struct GSRTSession_eventGetPeerId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventGetPeerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Session" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "GetPeerId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTSession_eventGetPeerId_Parms), Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTSession_GetPeerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTSession_GetPeerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTSession_Send_Statics
	{
		struct GSRTSession_eventSend_Parms
		{
			int32 opCode;
			DeliveryIntent intent;
			UGSRTData* data;
			TArray<int32> peerIds;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_peerIds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_peerIds_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_intent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_intent_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_opCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_peerIds = { UE4CodeGen_Private::EPropertyClass::Array, "peerIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, peerIds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_peerIds_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "peerIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Object, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, data), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_intent = { UE4CodeGen_Private::EPropertyClass::Enum, "intent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, intent), Z_Construct_UEnum_GameSparks_DeliveryIntent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_intent_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_opCode = { UE4CodeGen_Private::EPropertyClass::Int, "opCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, opCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTSession_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_peerIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_peerIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_intent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_intent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTSession_Send_Statics::NewProp_opCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTSession_Send_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Session" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTSession_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "Send", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GSRTSession_eventSend_Parms), Z_Construct_UFunction_UGSRTSession_Send_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_Send_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTSession_Send_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTSession_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTSession_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTSession_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTSession_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Session" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTSession_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "Start", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTSession_Start_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTSession_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTSession_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTSession_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTSession_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Session" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTSession_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTSession_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTSession_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTSession_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTSession_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGSRTSession_NoRegister()
	{
		return UGSRTSession::StaticClass();
	}
	struct Z_Construct_UClass_UGSRTSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReady_MetaData[];
#endif
		static void NewProp_IsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDataDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDisconnectDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDisconnectDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerConnectDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerConnectDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadyDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadyDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSRTSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSRTSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSRTSession_CreateRTSession, "CreateRTSession" }, // 3375112169
		{ &Z_Construct_UFunction_UGSRTSession_GetActivePeers, "GetActivePeers" }, // 2237096382
		{ &Z_Construct_UFunction_UGSRTSession_GetPeerId, "GetPeerId" }, // 1273468352
		{ &Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature, "OnData__DelegateSignature" }, // 1730443893
		{ &Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature, "OnPlayerConnect__DelegateSignature" }, // 3586572894
		{ &Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature, "OnPlayerDisconnect__DelegateSignature" }, // 668834672
		{ &Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature, "OnReady__DelegateSignature" }, // 3811325508
		{ &Z_Construct_UFunction_UGSRTSession_Send, "Send" }, // 3173495303
		{ &Z_Construct_UFunction_UGSRTSession_Start, "Start" }, // 2130730946
		{ &Z_Construct_UFunction_UGSRTSession_Stop, "Stop" }, // 504144121
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RT/UGSRTSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady_MetaData[] = {
		{ "Category", "GameSparksRT" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	void Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady_SetBit(void* Obj)
	{
		((UGSRTSession*)Obj)->IsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReady", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGSRTSession), &Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnDataDelegate_MetaData[] = {
		{ "Category", "GameSparksRT" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnDataDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDataDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnDataDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnDataDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnDataDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerDisconnectDelegate_MetaData[] = {
		{ "Category", "GameSparksRT" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerDisconnectDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlayerDisconnectDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnPlayerDisconnectDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerDisconnectDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerDisconnectDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerConnectDelegate_MetaData[] = {
		{ "Category", "GameSparksRT" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerConnectDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlayerConnectDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnPlayerConnectDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerConnectDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerConnectDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnReadyDelegate_MetaData[] = {
		{ "Category", "GameSparksRT" },
		{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnReadyDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnReadyDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnReadyDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnReadyDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnReadyDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSRTSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSRTSession_Statics::NewProp_IsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnDataDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerDisconnectDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnPlayerConnectDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSRTSession_Statics::NewProp_OnReadyDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSRTSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRTSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSRTSession_Statics::ClassParams = {
		&UGSRTSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGSRTSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGSRTSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGSRTSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSRTSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSRTSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSRTSession, 3492582999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSRTSession(Z_Construct_UClass_UGSRTSession, &UGSRTSession::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGSRTSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRTSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
