//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKUIAQILinearModel_h
#define NWKUIAQILinearModel_h
@import Foundation;

#include "NWKUIAQIModel.h"

@class NSArray, NSString;

@interface NWKUIAQILinearModel : NWKUIAQIModel

@property (readonly) NSArray *colorIndices;
@property (readonly) NSString *index;
@property (readonly) double percentage;

/* instance methods */
- (id)initWithAirQualityConditions:(id)conditions;
- (id)initWithName:(id)name label:(id)label categoryDescription:(id)description color:(id)color date:(id)date expiration:(id)expiration colorIndices:(id)indices index:(id)index percentage:(double)percentage;
@end

#endif /* NWKUIAQILinearModel_h */