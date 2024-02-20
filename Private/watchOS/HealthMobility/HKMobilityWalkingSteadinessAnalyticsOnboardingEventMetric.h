//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric_h
#define HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric_h
@import Foundation;

#include "HKMobilityAnalyticsEventMetric-Protocol.h"

@class NSNumber, NSString;

@interface HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric : NSObject<HKMobilityAnalyticsEventMetric>

@property (nonatomic) BOOL improveHealthAndActivityAllowed;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *featureVersion;
@property (copy, nonatomic) NSString *provenance;
@property (copy, nonatomic) NSString *activeWatchProductType;
@property (retain, nonatomic) NSNumber *hasDefaultHeight;
@property (retain, nonatomic) NSNumber *hasDefaultWeight;
@property (retain, nonatomic) NSNumber *acceptDefaultHeight;
@property (retain, nonatomic) NSNumber *acceptDefaultWeight;
@property (retain, nonatomic) NSNumber *acceptDefaultNotifications;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)requiresImproveHealthAndActivityAllowed;

/* instance methods */
- (id)initWithImproveHealthAndActivityAllowed:(BOOL)allowed;
- (id)eventName;
- (id)eventPayload;
- (BOOL)isImproveHealthAndActivityAllowed;
@end

#endif /* HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric_h */