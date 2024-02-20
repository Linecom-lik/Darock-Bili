//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAnalyticsAutomationNewNameAssignedEvent_h
#define HFAnalyticsAutomationNewNameAssignedEvent_h
@import Foundation;

#include "HFAnalyticsEvent.h"

@class NSNumber;

@interface HFAnalyticsAutomationNewNameAssignedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *didNamingSucceed;
@property (retain, nonatomic) NSNumber *errorType;
@property (retain, nonatomic) NSNumber *modifiesExistingTrigger;
@property (retain, nonatomic) NSNumber *namingType;

/* instance methods */
- (id)initWithData:(id)data;
- (id)payload;
@end

#endif /* HFAnalyticsAutomationNewNameAssignedEvent_h */