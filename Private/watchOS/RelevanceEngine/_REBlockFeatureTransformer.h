//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef _REBlockFeatureTransformer_h
#define _REBlockFeatureTransformer_h
@import Foundation;

#include "REFeatureTransformer.h"

@interface _REBlockFeatureTransformer : REFeatureTransformer {
  /* instance variables */
  unsigned long long _featureCount;
  unsigned long long _outputFeatureType;
  id /* block */ _block;
}

/* instance methods */
- (id)initWithFeatureCount:(unsigned long long)count outputFeatureType:(unsigned long long)type transformation:(id /* block */)transformation;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)values count:(unsigned long long)count;
- (BOOL)_validateWithFeatures:(id)features;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _REBlockFeatureTransformer_h */