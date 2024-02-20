//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISAlertModalAnimator_h
#define CUISAlertModalAnimator_h
@import Foundation;

#include "CUISAlertAnimatedTransitioning-Protocol.h"

@class NSString, PUICModalPresentationAnimationController;

@interface CUISAlertModalAnimator : NSObject<CUISAlertAnimatedTransitioning>

@property (retain, nonatomic) PUICModalPresentationAnimationController *underlyingAnimationController;
@property (copy, nonatomic) id /* block */ willBeginHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)alertTransitionDuration:(id)duration;
- (void)animateAlertTransition:(id)transition;
@end

#endif /* CUISAlertModalAnimator_h */