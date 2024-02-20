//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.0.0.0.0
//
#ifndef _NSCompositeLayoutYAxisAnchor_h
#define _NSCompositeLayoutYAxisAnchor_h
@import Foundation;

#include "NSLayoutYAxisAnchor.h"
#include "NSCompositeLayoutAnchor-Protocol.h"
#include "NSLayoutDimension.h"
#include "NSLayoutYAxisAnchor.h"

@class NSArray;

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor<NSCompositeLayoutAnchor> {
  /* instance variables */
  NSLayoutYAxisAnchor *_yAxisAnchor;
  double _constant;
  double _dimensionMultiplier;
  NSLayoutDimension *_dimension;
}

@property (readonly) NSArray *_childAnchors;

/* instance methods */
- (id)initWithAnchor:(id)anchor plusDimension:(id)dimension times:(double)times plus:(double)plus;
- (id)initWithAnchor:(id)anchor;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })context;
- (double)_valueInEngine:(id)engine;
- (id)equationDescription;
@end

#endif /* _NSCompositeLayoutYAxisAnchor_h */