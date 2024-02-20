//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUITimeLabel_h
#define CLKUITimeLabel_h
@import Foundation;

#include "UIView.h"
#include "CLKTimeFormatterDelegate-Protocol.h"
#include "CLKTimeFormatterObserver-Protocol.h"
#include "CLKUILabel-Protocol.h"
#include "CLKUITimeLabelStyle.h"
#include "_CLKUITimeLabelManager-Protocol.h"

@class CLKClockTimer, CLKDevice, CLKTimeFormatter, NSAttributedString, NSString, PUICClientSideAnimation, UIColor, UIFont;

@interface CLKUITimeLabel : UIView<CLKTimeFormatterObserver, CLKTimeFormatterDelegate, CLKUILabel> {
  /* instance variables */
  NSObject<_CLKUITimeLabelManager> *_labelManager;
  CLKClockTimer *_timer;
  BOOL _styleTransitioning;
  double _styleTransitionFraction;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _styleTransitionEndFrame;
  CLKUITimeLabelStyle *_fromStyle;
  NSObject<_CLKUITimeLabelManager> *_fromLabelManager;
  double _fadeStart;
  double _fadeEnd;
  PUICClientSideAnimation *_animation;
  BOOL _ignoresWindowPauseReason;
  NSString *_timeText;
}

@property (copy, nonatomic) CLKUITimeLabelStyle *style;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) CLKTimeFormatter *timeFormatter;
@property (nonatomic) BOOL showsDesignator;
@property (nonatomic) BOOL paused;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (copy, nonatomic) id /* block */ didResizeHandler;
@property (nonatomic) BOOL showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) double _lastLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } opticalInsets;

/* class methods */
+ (id)labelWithOptions:(unsigned long long)options;
+ (id)labelWithOptions:(unsigned long long)options forDevice:(id)device;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forDevice:(id)device;
- (id)initWithTimeLabelOptions:(unsigned long long)options;
- (id)initWithTimeLabelOptions:(unsigned long long)options forDevice:(id)device;
- (id)initWithTimeLabelOptions:(unsigned long long)options forDevice:(id)device clockTimer:(id)timer;
- (void)setHidden:(BOOL)hidden;
- (void)setBlinkingPaused:(BOOL)paused;
- (void)setTimer:(id)timer;
- (void)setTimeFont:(id)font designatorFont:(id)font;
- (void)setThreeDigitFont:(id)font fourDigitFont:(id)font designatorFont:(id)font;
- (void)traitCollectionDidChange:(id)change;
- (id)labelManagerContentView;
- (void)prepareToTransitionToStyle:(id)style;
- (void)setStyleTransitionFraction:(double)fraction;
- (void)cleanupAfterStyleTransition;
- (struct CGSize { double x0; double x1; })styleTransitionEndSize;
- (struct CGSize { double x0; double x1; })styleTransitionCurrentSize;
- (void)animateToStyle:(id)style duration:(double)duration timingFunction:(id)function endFrameCalculation:(id /* block */)calculation additionalAnimation:(id /* block */)animation completion:(id /* block */)completion;
- (id)_newUnderlyingLabel:(BOOL)label;
- (void)_enumerateUnderlyingLabelsWithBlock:(id /* block */)block;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)setOverrideDate:(id)date duration:(double)duration;
- (void)setTimeOffset:(double)offset;
- (void)timeFormatterTextDidChange:(id)change;
- (id)identifyingInfoForTimeFormatter:(id)formatter;
- (void)_resizeIfNecessary;
- (id)_newLabelManager;
- (void)_cancelAnimation;
- (void)_scaleTransitionLabels;
- (void)_fadeTransitionLabels;
@end

#endif /* CLKUITimeLabel_h */