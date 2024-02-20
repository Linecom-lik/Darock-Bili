//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISControlCenterBackgroundView_h
#define CUISControlCenterBackgroundView_h
@import Foundation;

#include "UIView.h"

@class CABackdropLayer;

@interface CUISControlCenterBackgroundView : UIView {
  /* instance variables */
  CABackdropLayer *_backdropLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)updateBackropTransparencyFilters;
- (id)transparencyFilters;
- (id)reduceTransparencyFilters;
@end

#endif /* CUISControlCenterBackgroundView_h */