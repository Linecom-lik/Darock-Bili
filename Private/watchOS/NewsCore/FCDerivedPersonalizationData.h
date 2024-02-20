//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCDerivedPersonalizationData_h
#define FCDerivedPersonalizationData_h
@import Foundation;

#include "FCDerivedPersonalizationData-Protocol.h"
#include "FCPersonalizationDataGeneratorType-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FCDerivedPersonalizationData : NSObject<FCDerivedPersonalizationData, NSSecureCoding, NSCopying, FCPersonalizationDataGeneratorType> {
  /* instance variables */
  NSDictionary *_aggregatesByFeatureKey;
}

@property (readonly, nonatomic) unsigned long long scoringType;
@property (readonly, nonatomic) double decayRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithAggregates:(id)aggregates scoringType:(unsigned long long)type decayRate:(double)rate;
- (id)initWithAggregates:(id)aggregates scoringType:(unsigned long long)type;
- (id)allAggregates;
- (id)aggregatesForFeatureKeys:(id)keys;
- (id)aggregateForFeatureKey:(id)key;
- (id)generateDerivedData;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FCDerivedPersonalizationData_h */