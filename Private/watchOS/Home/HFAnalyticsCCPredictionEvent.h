//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAnalyticsCCPredictionEvent_h
#define HFAnalyticsCCPredictionEvent_h
@import Foundation;

#include "HFAnalyticsEvent.h"

@interface HFAnalyticsCCPredictionEvent : HFAnalyticsEvent

@property (nonatomic) unsigned long long predictionStage;
@property (nonatomic) unsigned long long predictionCount;

/* class methods */
+ (void)sendMetricsForPredictionEventAtStage:(unsigned long long)stage withCount:(unsigned long long)count;

/* instance methods */
- (id)initWithData:(id)data;
- (id)payload;
@end

#endif /* HFAnalyticsCCPredictionEvent_h */