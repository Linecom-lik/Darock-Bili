//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCSessionMediaNegotiator_h
#define VCSessionMediaNegotiator_h
@import Foundation;

#include "VCMediaNegotiatorLocalConfiguration.h"
#include "VCMediaNegotiatorProtocol-Protocol.h"
#include "VCMediaNegotiatorResults.h"
#include "VCMediaNegotiatorResultsAudio.h"
#include "VCMediaNegotiatorResultsFaceTimeSettings.h"
#include "VCMediaNegotiatorResultsMediaRecorder.h"
#include "VCMediaNegotiatorResultsVideo.h"

@class NSArray, NSMutableDictionary, NSString;

@interface VCSessionMediaNegotiator : NSObject<VCMediaNegotiatorProtocol> {
  /* instance variables */
  NSObject<VCMediaNegotiatorProtocol> *_activeNegotiator;
  NSMutableDictionary *_mediaNegotiatorMap;
}

@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMediaRecorder *negotiatedMediaRecorderSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSArray *negotiatedStreamGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)mediaBlobForVersion:(int)version negotiationData:(id)data;
+ (id)negotiationDataWithVersion:(int)version mediaBlob:(id)blob;
+ (id)negotiationDataWithVersion1:(id)version1 version2:(id)version2;
+ (id)streamGroupIDsWithMediaBlob:(id)blob;
+ (BOOL)initializeLocalConfiguration:(id)configuration negotiationData:(id)data deviceRole:(int)role preferredAudioPayload:(int)payload;
+ (id)serializeNegotiationData:(id)data;
+ (id)unserializeNegotiationData:(id)data;

/* instance methods */
- (id)initWithLocalConfiguration:(id)configuration;
- (void)dealloc;
- (id)negotiationData;
- (BOOL)processRemoteNegotiationData:(id)data;
- (id)negotiatedResultsForGroupID:(unsigned int)id;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)mode connectionType:(int)type;
@end

#endif /* VCSessionMediaNegotiator_h */