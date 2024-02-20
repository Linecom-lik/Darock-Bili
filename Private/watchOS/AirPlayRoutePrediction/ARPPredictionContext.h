//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef ARPPredictionContext_h
#define ARPPredictionContext_h
@import Foundation;

@class NSDate, NSDictionary;

@interface ARPPredictionContext : NSObject

@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector;
@property (readonly, copy, nonatomic) NSDate *microLocationEventDate;
@property (readonly, copy, nonatomic) NSDate *predictionDate;

/* instance methods */
- (id)initWithPredictionDate:(id)date microLocationEventDate:(id)date microLocationProbabilityVector:(id)vector;
- (id)description;
@end

#endif /* ARPPredictionContext_h */