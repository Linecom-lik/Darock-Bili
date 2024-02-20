//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRVolumeDidChangeMessage_h
#define MRVolumeDidChangeMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) NSString *outputDeviceUID;

/* instance methods */
- (id)initWithVolume:(float)volume endpointUID:(id)uid outputDeviceUID:(id)uid;
- (unsigned long long)type;
@end

#endif /* MRVolumeDidChangeMessage_h */