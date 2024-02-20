//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKBigEmojiBalloonView_h
#define CKBigEmojiBalloonView_h
@import Foundation;

#include "CKTextBalloonView.h"

@interface CKBigEmojiBalloonView : CKTextBalloonView
/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setGradientReferenceView:(id)view;
- (void)setImage:(id)image;
- (void)setHasOverlay:(BOOL)overlay autoDismiss:(BOOL)dismiss;
- (void)addFilter:(id)filter;
- (void)clearFilters;
- (BOOL)hasBackground;
- (id)accessibilityIdentifier;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
@end

#endif /* CKBigEmojiBalloonView_h */