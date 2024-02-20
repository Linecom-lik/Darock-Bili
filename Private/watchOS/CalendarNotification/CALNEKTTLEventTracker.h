//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNEKTTLEventTracker_h
#define CALNEKTTLEventTracker_h
@import Foundation;

#include "CALNTTLEventTracker-Protocol.h"

@interface CALNEKTTLEventTracker : NSObject<CALNTTLEventTracker>
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)type etaType:(unsigned long long)type hasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)type transportType:(unsigned long long)type etaType:(unsigned long long)type travelState:(unsigned long long)state hasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
- (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)type etaType:(unsigned long long)type hasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
@end

#endif /* CALNEKTTLEventTracker_h */