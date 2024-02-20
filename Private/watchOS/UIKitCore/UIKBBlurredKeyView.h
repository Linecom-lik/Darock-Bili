//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBBlurredKeyView_h
#define UIKBBlurredKeyView_h
@import Foundation;

#include "UIKBContainerKeyView.h"
#include "UIKBBackdropView.h"

@interface UIKBBlurredKeyView : UIKBContainerKeyView {
  /* instance variables */
  UIKBBackdropView *_backdropView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame keyplane:(id)keyplane key:(id)key;
- (void)layoutSubviews;
- (void)setRenderConfig:(id)config;
@end

#endif /* UIKBBlurredKeyView_h */