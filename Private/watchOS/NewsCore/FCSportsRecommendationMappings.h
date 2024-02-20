//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCSportsRecommendationMappings_h
#define FCSportsRecommendationMappings_h
@import Foundation;

#include "FCSportsRecommendationsProvider.h"

@interface FCSportsRecommendationMappings : NSObject

@property (retain, nonatomic) FCSportsRecommendationsProvider *defaultRecommendations;
@property (retain, nonatomic) FCSportsRecommendationsProvider *alternativeRecommendations;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FCSportsRecommendationMappings_h */