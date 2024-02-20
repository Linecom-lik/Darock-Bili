//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDMutableScheduleTime_h
#define DNDMutableScheduleTime_h
@import Foundation;

#include "DNDScheduleTime.h"

@interface DNDMutableScheduleTime : DNDScheduleTime

@property (@dynamic, nonatomic) unsigned long long hour;
@property (@dynamic, nonatomic) unsigned long long minute;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDMutableScheduleTime_h */