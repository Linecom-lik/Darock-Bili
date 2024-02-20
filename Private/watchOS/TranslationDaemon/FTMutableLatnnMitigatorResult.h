//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableLatnnMitigatorResult_h
#define FTMutableLatnnMitigatorResult_h
@import Foundation;

#include "FTLatnnMitigatorResult.h"

@class NSString;

@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (nonatomic) BOOL processed;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) double threshold;
@property (nonatomic) double score;
@property (nonatomic) float calibration_scale;
@property (nonatomic) float calibration_offset;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableLatnnMitigatorResult_h */