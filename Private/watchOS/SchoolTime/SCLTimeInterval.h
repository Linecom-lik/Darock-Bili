//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLTimeInterval_h
#define SCLTimeInterval_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SCLScheduleTime.h"

@interface SCLTimeInterval : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) SCLScheduleTime *startTime;
@property (readonly, copy, nonatomic) SCLScheduleTime *endTime;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStartTime:(id)time endTime:(id)time;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)crossesDayBoundary;
- (BOOL)containsScheduleTime:(id)time;
- (BOOL)intersectsTimeInterval:(id)interval;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* SCLTimeInterval_h */