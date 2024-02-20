//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWiFiReconfigurationLogEvent_h
#define HMDWiFiReconfigurationLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMDAccessory.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent<HMMCoreAnalyticsLogging>

@property (retain, nonatomic) HMDAccessory *accessory;
@property (nonatomic) BOOL usingFailSafeUpdate;
@property (nonatomic) long long credentialType;
@property (retain, nonatomic) HMDAccessory *routerAccessory;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isUsingFailSafeUpdate;
@end

#endif /* HMDWiFiReconfigurationLogEvent_h */