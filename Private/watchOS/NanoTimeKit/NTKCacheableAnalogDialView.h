//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCacheableAnalogDialView_h
#define NTKCacheableAnalogDialView_h
@import Foundation;

#include "UIView.h"

@class BSUIMappedImageCache, NSArray, NSDictionary, NSString, UIView;

@interface NTKCacheableAnalogDialView : UIView {
  /* instance variables */
  BSUIMappedImageCache *_cache;
  NSString *_cacheKey;
  NSArray *_moduloGroups;
  NSDictionary *_moduloToGroup;
  NSArray *_textLayers;
  UIView *_tickContainer;
  UIView *_textContainer;
}

@property (readonly) NSArray *tickGroups;
@property (readonly) double dialDiameter;

/* instance methods */
- (id)initWithDialDiameter:(double)diameter device:(id)device;
- (id)initWithDialDiameter:(double)diameter device:(id)device cache:(id)cache key:(id)key;
- (void)layoutSubviews;
- (void)addTicksWithCount:(unsigned long long)count moduloGroups:(id)groups sizes:(id)sizes roundedCorners:(id)corners;
- (void)applyTickColor:(id)color toModulo:(unsigned long long)modulo;
- (void)applyTickColor:(id)color toGroupIndex:(unsigned long long)index;
- (id)_cacheIdentifierForTickCount:(unsigned long long)count modulus:(unsigned long long)modulus size:(struct CGSize { double x0; double x1; })size rounded:(BOOL)rounded;
- (void)addTextWithCount:(unsigned long long)count configurationBlock:(id /* block */)block;
- (void)applyTextColor:(id)color;
- (void)enumerateTextLayersWithBlock:(id /* block */)block;
@end

#endif /* NTKCacheableAnalogDialView_h */