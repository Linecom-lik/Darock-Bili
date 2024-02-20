//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICPlatterBackgroundView_h
#define PUICPlatterBackgroundView_h
@import Foundation;

#include "UIView.h"

@class UIColor;

@interface PUICPlatterBackgroundView : UIView {
  /* instance variables */
  BOOL _hasExplicitCornerRadius;
  double _baseAlpha;
}

@property (nonatomic) double colorAlpha;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *baseBackgroundColor;
@property (nonatomic) double darkeningFactor;
@property (nonatomic) BOOL pillShaped;
@property (nonatomic) long long platterStyle;
@property (nonatomic) double shadowOpacity;

/* class methods */
+ (void)initialize;
+ (void)setTestLayoutForDisplay:(id)display;
+ (id)defaultColor;
+ (id)defaultLargeColor;
+ (double)defaultPlatterCornerRadius;
+ (double)defaultLargeCornerRadius;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_setFilterLevel:(double)level;
- (BOOL)isPillShaped;
- (void)setBackgroundColor:(id)color;
- (void)setBackgroundColorInternal:(id)internal;
- (void)setAlpha:(double)alpha;
- (void)_updateAlpha;
@end

#endif /* PUICPlatterBackgroundView_h */