//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIMultiSelectOneFingerPanGesture_h
#define _UIMultiSelectOneFingerPanGesture_h
@import Foundation;

#include "UIPanGestureRecognizer.h"
#include "UIEvent.h"
#include "UITouch.h"
#include "_UIMultiSelectOneFingerPanGestureDelegate-Protocol.h"

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer

@property (readonly, nonatomic) UITouch *activeTouch;
@property (readonly, nonatomic) UIEvent *activeEvent;
@property (weak, nonatomic) NSObject<_UIMultiSelectOneFingerPanGestureDelegate> *oneFingerPanDelegate;

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)reset;
- (BOOL)_preventsDragInteractionGestures;
- (BOOL)canPreventGestureRecognizer:(id)recognizer;
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)_affectedByGesture:(id)gesture;
@end

#endif /* _UIMultiSelectOneFingerPanGesture_h */