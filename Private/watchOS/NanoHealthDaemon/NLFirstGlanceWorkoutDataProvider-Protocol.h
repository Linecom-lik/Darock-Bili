//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLFirstGlanceWorkoutDataProvider_Protocol_h
#define NLFirstGlanceWorkoutDataProvider_Protocol_h
@import Foundation;

#include "NLFirstGlanceDataProvider.h"
#include "NLFirstGlanceWorkoutDataProvider-Protocol.h"

@class NSString;

@protocol NLFirstGlanceWorkoutDataProvider <NSObject>
/* instance methods */
- (id)bestWorkoutYesterdayLongerThan15Minutes;
- (id)longestWorkoutYesterdayLongerThan60Minutes;
@end

#endif /* NLFirstGlanceWorkoutDataProvider_Protocol_h */