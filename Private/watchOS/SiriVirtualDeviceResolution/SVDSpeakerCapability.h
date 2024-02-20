//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.2.1.0.0
//
#ifndef SVDSpeakerCapability_h
#define SVDSpeakerCapability_h
@import Foundation;

#include "SVDCapability.h"

@class _TtC27SiriVirtualDeviceResolution17SpeakerCapability;

@interface SVDSpeakerCapability : SVDCapability {
  /* instance variables */
  SiriVirtualDeviceResolution.SpeakerCapability *_backing;
}

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)status;
+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)bound upperBound:(long long)bound;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStatus:(long long)status qualityScore:(long long)score;
- (long long)supportStatus;
- (long long)qualityScore;
- (id)_swiftBacking;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SVDSpeakerCapability_h */