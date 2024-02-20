//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCrowdSourcedThemesAssetEvent_h
#define PLCrowdSourcedThemesAssetEvent_h
@import Foundation;

#include "BMStoreData-Protocol.h"

@class NSString;

@interface PLCrowdSourcedThemesAssetEvent : NSObject<BMStoreData>

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;

/* instance methods */
- (id)initWithUUID:(id)uuid;
- (id)serialize;
@end

#endif /* PLCrowdSourcedThemesAssetEvent_h */