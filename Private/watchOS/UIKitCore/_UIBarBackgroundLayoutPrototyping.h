//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBarBackgroundLayoutPrototyping_h
#define _UIBarBackgroundLayoutPrototyping_h
@import Foundation;

#include "_UIBarBackgroundLayout.h"
#include "UIColor.h"

@interface _UIBarBackgroundLayoutPrototyping : _UIBarBackgroundLayout {
  /* instance variables */
  UIColor *_colorWash;
}

/* class methods */
+ (BOOL)prototypingEnabled;
+ (id)prototypingLayoutForBarType:(long long)type;
+ (void)registerPrototypingCallback:(id /* block */)callback;

/* instance methods */
- (BOOL)shouldUseExplicitGeometry;
- (id)bg1Effects;
- (id)bg1Color;
- (BOOL)bg1HasShadow;
- (id)bg1ShadowColor;
- (void)describeInto:(id)into;
@end

#endif /* _UIBarBackgroundLayoutPrototyping_h */