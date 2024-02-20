//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardTextSelectionGestureController_h
#define _UIKeyboardTextSelectionGestureController_h
@import Foundation;

#include "UIDelayedAction.h"
#include "UITextMagnifierTimeWeightedPoint.h"
#include "_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h"

@class NSMutableArray;

@interface _UIKeyboardTextSelectionGestureController : NSObject {
  /* instance variables */
  NSMutableArray *_deallocHandlers;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } lastPanTranslation;
@property (nonatomic) struct CGPoint { double x0; double x1; } accumulatedAcceleration;
@property (nonatomic) struct CGPoint { double x0; double x1; } accumulatedBounding;
@property (nonatomic) double lastPressTimestamp;
@property (retain, nonatomic) UITextMagnifierTimeWeightedPoint *weightedPoint;
@property (nonatomic) double twoFingerTapTimestamp;
@property (nonatomic) long long previousRepeatedGranularity;
@property (nonatomic) long long panGestureState;
@property (nonatomic) BOOL wasScrollingEnabled;
@property (nonatomic) BOOL wasNestedPinchingDisabled;
@property (nonatomic) BOOL suppressTwoFingerPan;
@property (nonatomic) BOOL didSuppressSelectionGrabbers;
@property (nonatomic) BOOL isLongPressing;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) BOOL isSpacePan;
@property (nonatomic) BOOL hadAddedTouch;
@property (nonatomic) double spacePanDistance;
@property (retain, nonatomic) NSMutableArray *activeGestures;
@property (nonatomic) BOOL didFloatCursor;
@property (nonatomic) struct CGPoint { double x0; double x1; } cursorLocationBase;
@property (retain, nonatomic) UIDelayedAction *tapLogTimer;
@property (nonatomic) int previousForcePressCount;
@property (retain, nonatomic) UIDelayedAction *longForcePressAction;
@property (weak, nonatomic) NSObject<_UIKeyboardTextSelectionGestureControllerDelegate> *delegate;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (Class)textInteractionClass;
- (BOOL)shouldAddForceGesture;
- (id)init;
- (id)addDeallocationHandler:(id /* block */)handler;
- (void)removeDeallocationHandler:(id)handler;
- (void)dealloc;
- (id)selectionController;
- (void)_cleanupDeadGesturesIfNecessary;
- (void)willRemoveSelectionController;
- (void)didRemoveSelectionController;
- (void)enableEnclosingScrollViewNestedPinching;
- (void)redisableEnclosingScrollViewNestedPinching;
- (double)oneFingerForcePressMinimumDuration;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (BOOL)oneFingerForcePressShouldCancelTouchesInView;
- (double)oneFingerForcePressAllowableMovement;
- (BOOL)allowOneFingerDeepPress;
- (BOOL)_longPressAllowedForView:(id)view;
- (id)textSelectionInteractionForRTIForwarding;
- (id)addOneFingerTextSelectionInteractionsToView:(id)view;
- (id)addTwoFingerTextSelectionInteractionsToView:(id)view;
- (id)addLongPressTextSelectionInteractionsToView:(id)view;
- (void)configureTwoFingerPanGestureRecognizer:(id)recognizer;
- (void)configureTwoFingerTapGestureRecognizer:(id)recognizer;
- (void)configureOneFingerForcePressRecognizer:(id)recognizer;
@end

#endif /* _UIKeyboardTextSelectionGestureController_h */