// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioPcmFrame;
struct FAudioFrame;
struct FVideoFrame;
enum class EVIDEO_SOURCE_TYPE : uint8;
struct FUserAudioSpectrumInfo;
struct FAudioSpectrumData;
#ifdef AGORAPLUGIN_IFrameObserver_generated_h
#error "IFrameObserver.generated.h already included, missing '#pragma once' in IFrameObserver.h"
#endif
#define AGORAPLUGIN_IFrameObserver_generated_h

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FEncodedVideoFrameInfo>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FUserAudioSpectrumInfo>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioSpectrumData_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAudioSpectrumData>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioFrame_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAudioFrame>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVideoFrame_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FVideoFrame>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioPcmFrame_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAudioPcmFrame>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_221_DELEGATE \
struct _Script_AgoraPlugin_eventOnFrame_Parms \
{ \
	FAudioPcmFrame pcmFrame; \
}; \
static inline void FOnFrame_DelegateWrapper(const FMulticastScriptDelegate& OnFrame, FAudioPcmFrame const& pcmFrame) \
{ \
	_Script_AgoraPlugin_eventOnFrame_Parms Parms; \
	Parms.pcmFrame=pcmFrame; \
	OnFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_220_DELEGATE \
static inline void FGetMixedAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetMixedAudioParams) \
{ \
	GetMixedAudioParams.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_219_DELEGATE \
static inline void FGetRecordAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetRecordAudioParams) \
{ \
	GetRecordAudioParams.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_218_DELEGATE \
static inline void FGetPlaybackAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetPlaybackAudioParams) \
{ \
	GetPlaybackAudioParams.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_217_DELEGATE \
static inline void FGetObservedAudioFramePosition_DelegateWrapper(const FMulticastScriptDelegate& GetObservedAudioFramePosition) \
{ \
	GetObservedAudioFramePosition.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_216_DELEGATE \
struct _Script_AgoraPlugin_eventOnMixedAudioFrame_Parms \
{ \
	FString channelId; \
	FAudioFrame audioFrame; \
}; \
static inline void FOnMixedAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMixedAudioFrame, const FString& channelId, FAudioFrame const& audioFrame) \
{ \
	_Script_AgoraPlugin_eventOnMixedAudioFrame_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.audioFrame=audioFrame; \
	OnMixedAudioFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_215_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms \
{ \
	FString channelId; \
	FAudioFrame audioFrame; \
}; \
static inline void FOnPlaybackAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioFrame, const FString& channelId, FAudioFrame const& audioFrame) \
{ \
	_Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.audioFrame=audioFrame; \
	OnPlaybackAudioFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_214_DELEGATE \
struct _Script_AgoraPlugin_eventOnRecordAudioFrame_Parms \
{ \
	FString channelId; \
	FAudioFrame audioFrame; \
}; \
static inline void FOnRecordAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRecordAudioFrame, const FString& channelId, FAudioFrame const& audioFrame) \
{ \
	_Script_AgoraPlugin_eventOnRecordAudioFrame_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.audioFrame=audioFrame; \
	OnRecordAudioFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_213_DELEGATE \
static inline void FIsExternal_DelegateWrapper(const FMulticastScriptDelegate& IsExternal) \
{ \
	IsExternal.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_212_DELEGATE \
static inline void FGetObservedFramePosition_DelegateWrapper(const FMulticastScriptDelegate& GetObservedFramePosition) \
{ \
	GetObservedFramePosition.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_211_DELEGATE \
static inline void FGetMirrorApplied_DelegateWrapper(const FMulticastScriptDelegate& GetMirrorApplied) \
{ \
	GetMirrorApplied.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_210_DELEGATE \
static inline void FGetRotationApplied_DelegateWrapper(const FMulticastScriptDelegate& GetRotationApplied) \
{ \
	GetRotationApplied.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_209_DELEGATE \
static inline void FGetVideoFormatPreference_DelegateWrapper(const FMulticastScriptDelegate& GetVideoFormatPreference) \
{ \
	GetVideoFormatPreference.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_208_DELEGATE \
static inline void FGetVideoFrameProcessMode_DelegateWrapper(const FMulticastScriptDelegate& GetVideoFrameProcessMode) \
{ \
	GetVideoFrameProcessMode.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_207_DELEGATE \
struct _Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms \
{ \
	FVideoFrame videoFrame; \
}; \
static inline void FOnTranscodedVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnTranscodedVideoFrame, FVideoFrame const& videoFrame) \
{ \
	_Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms Parms; \
	Parms.videoFrame=videoFrame; \
	OnTranscodedVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_206_DELEGATE \
struct _Script_AgoraPlugin_eventOnRenderVideoFrame_Parms \
{ \
	FString channelId; \
	int64 remoteUid; \
	FVideoFrame videoFrame; \
}; \
static inline void FOnRenderVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRenderVideoFrame, const FString& channelId, int64 remoteUid, FVideoFrame const& videoFrame) \
{ \
	_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.remoteUid=remoteUid; \
	Parms.videoFrame=videoFrame; \
	OnRenderVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_205_DELEGATE \
struct _Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms \
{ \
	FVideoFrame videoFrame; \
	int32 mediaPlayerId; \
}; \
static inline void FOnMediaPlayerVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerVideoFrame, FVideoFrame const& videoFrame, int32 mediaPlayerId) \
{ \
	_Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms Parms; \
	Parms.videoFrame=videoFrame; \
	Parms.mediaPlayerId=mediaPlayerId; \
	OnMediaPlayerVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_204_DELEGATE \
struct _Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms \
{ \
	EVIDEO_SOURCE_TYPE sourceType; \
	FVideoFrame videoFrame; \
}; \
static inline void FOnPreEncodeVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPreEncodeVideoFrame, EVIDEO_SOURCE_TYPE sourceType, FVideoFrame const& videoFrame) \
{ \
	_Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms Parms; \
	Parms.sourceType=sourceType; \
	Parms.videoFrame=videoFrame; \
	OnPreEncodeVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_203_DELEGATE \
struct _Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms \
{ \
	EVIDEO_SOURCE_TYPE sourceType; \
	FVideoFrame videoFrame; \
}; \
static inline void FOnCaptureVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureVideoFrame, EVIDEO_SOURCE_TYPE sourceType, FVideoFrame const& videoFrame) \
{ \
	_Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms Parms; \
	Parms.sourceType=sourceType; \
	Parms.videoFrame=videoFrame; \
	OnCaptureVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_202_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms \
{ \
	TArray<FUserAudioSpectrumInfo> spectrums; \
	int32 spectrumNumber; \
}; \
static inline void FOnRemoteAudioSpectrum_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioSpectrum, const TArray<FUserAudioSpectrumInfo>& spectrums, int32 spectrumNumber) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms Parms; \
	Parms.spectrums=spectrums; \
	Parms.spectrumNumber=spectrumNumber; \
	OnRemoteAudioSpectrum.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_201_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms \
{ \
	FAudioSpectrumData data; \
}; \
static inline void FOnLocalAudioSpectrum_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioSpectrum, FAudioSpectrumData const& data) \
{ \
	_Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms Parms; \
	Parms.data=data; \
	OnLocalAudioSpectrum.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_200_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms \
{ \
	FString channelId; \
	int64 uid; \
	FAudioFrame audioFrame; \
}; \
static inline void FOnPlaybackAudioFrameBeforeMixing_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioFrameBeforeMixing, const FString& channelId, int64 uid, FAudioFrame const& audioFrame) \
{ \
	_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.uid=uid; \
	Parms.audioFrame=audioFrame; \
	OnPlaybackAudioFrameBeforeMixing.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_RPC_WRAPPERS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_RPC_WRAPPERS_NO_PURE_DECLS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioFrameObserver(); \
	friend struct Z_Construct_UClass_UIAudioFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioFrameObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_INCLASS \
private: \
	static void StaticRegisterNativesUIAudioFrameObserver(); \
	friend struct Z_Construct_UClass_UIAudioFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioFrameObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioFrameObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioFrameObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioFrameObserver(UIAudioFrameObserver&&); \
	NO_API UIAudioFrameObserver(const UIAudioFrameObserver&); \
public:


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioFrameObserver(UIAudioFrameObserver&&); \
	NO_API UIAudioFrameObserver(const UIAudioFrameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioFrameObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioFrameObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_PRIVATE_PROPERTY_OFFSET
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_226_PROLOG
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_RPC_WRAPPERS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_INCLASS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_INCLASS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioFrameObserver>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_RPC_WRAPPERS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_RPC_WRAPPERS_NO_PURE_DECLS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioPcmFrameSink(); \
	friend struct Z_Construct_UClass_UIAudioPcmFrameSink_Statics; \
public: \
	DECLARE_CLASS(UIAudioPcmFrameSink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioPcmFrameSink)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUIAudioPcmFrameSink(); \
	friend struct Z_Construct_UClass_UIAudioPcmFrameSink_Statics; \
public: \
	DECLARE_CLASS(UIAudioPcmFrameSink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioPcmFrameSink)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioPcmFrameSink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioPcmFrameSink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioPcmFrameSink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioPcmFrameSink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioPcmFrameSink(UIAudioPcmFrameSink&&); \
	NO_API UIAudioPcmFrameSink(const UIAudioPcmFrameSink&); \
public:


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioPcmFrameSink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioPcmFrameSink(UIAudioPcmFrameSink&&); \
	NO_API UIAudioPcmFrameSink(const UIAudioPcmFrameSink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioPcmFrameSink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioPcmFrameSink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioPcmFrameSink)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_PRIVATE_PROPERTY_OFFSET
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_272_PROLOG
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_RPC_WRAPPERS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_INCLASS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_INCLASS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioPcmFrameSink>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_RPC_WRAPPERS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_RPC_WRAPPERS_NO_PURE_DECLS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioSpectrumObserver(); \
	friend struct Z_Construct_UClass_UIAudioSpectrumObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioSpectrumObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioSpectrumObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_INCLASS \
private: \
	static void StaticRegisterNativesUIAudioSpectrumObserver(); \
	friend struct Z_Construct_UClass_UIAudioSpectrumObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioSpectrumObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioSpectrumObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioSpectrumObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioSpectrumObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioSpectrumObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioSpectrumObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioSpectrumObserver(UIAudioSpectrumObserver&&); \
	NO_API UIAudioSpectrumObserver(const UIAudioSpectrumObserver&); \
public:


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioSpectrumObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioSpectrumObserver(UIAudioSpectrumObserver&&); \
	NO_API UIAudioSpectrumObserver(const UIAudioSpectrumObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioSpectrumObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioSpectrumObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioSpectrumObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_PRIVATE_PROPERTY_OFFSET
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_288_PROLOG
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_RPC_WRAPPERS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_INCLASS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_RPC_WRAPPERS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_INCLASS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioSpectrumObserver>();

#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_RPC_WRAPPERS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIVideoFrameObserver(); \
	friend struct Z_Construct_UClass_UIVideoFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIVideoFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoFrameObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUIVideoFrameObserver(); \
	friend struct Z_Construct_UClass_UIVideoFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIVideoFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoFrameObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoFrameObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoFrameObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoFrameObserver(UIVideoFrameObserver&&); \
	NO_API UIVideoFrameObserver(const UIVideoFrameObserver&); \
public:


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoFrameObserver(UIVideoFrameObserver&&); \
	NO_API UIVideoFrameObserver(const UIVideoFrameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoFrameObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoFrameObserver)


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_PRIVATE_PROPERTY_OFFSET
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_307_PROLOG
#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_RPC_WRAPPERS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_INCLASS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_PRIVATE_PROPERTY_OFFSET \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_INCLASS_NO_PURE_DECLS \
	SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIVideoFrameObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpatialAudioProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h


#define FOREACH_ENUM_EVIDEO_FRAME_TYPE(op) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_BLANK_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_KEY_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DELTA_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_B_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DROPPABLE_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_UNKNOW) 

enum class EVIDEO_FRAME_TYPE : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EVIDEO_FRAME_TYPE>();

#define FOREACH_ENUM_EAUDIO_FRAME_TYPE(op) \
	op(EAUDIO_FRAME_TYPE::FRAME_TYPE_PCM16) 

enum class EAUDIO_FRAME_TYPE : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_FRAME_TYPE>();

#define FOREACH_ENUM_EVIDEO_PIXEL_FORMAT(op) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_DEFAULT) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I420) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_BGRA) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV21) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_RGBA) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV12) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_2D) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_OES) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_NV12) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_I420) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_BGRA) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I422) 

enum class EVIDEO_PIXEL_FORMAT : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EVIDEO_PIXEL_FORMAT>();

#define FOREACH_ENUM_EBYTES_PER_SAMPLE(op) \
	op(EBYTES_PER_SAMPLE::TWO_BYTES_PER_NULL) \
	op(EBYTES_PER_SAMPLE::TWO_BYTES_PER_SAMPLE) 

enum class EBYTES_PER_SAMPLE : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EBYTES_PER_SAMPLE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
