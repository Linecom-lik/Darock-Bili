//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIClientSideAnimation_h
#define WAGUIClientSideAnimation_h
@import Foundation;

@class CAMediaTimingFunction, NSDate;

@interface WAGUIClientSideAnimation : NSObject {
  /* instance variables */
  NSDate *_pausedDate;
  double _pausedDuration;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastFireTime;
@property (readonly, nonatomic) double elapsedTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL pause;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (copy, nonatomic) id /* block */ applier;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long frameInterval;

/* class methods */
+ (id)animateWithDuration:(double)duration curve:(long long)curve applier:(id /* block */)applier completion:(id /* block */)completion;
+ (id)animateWithDuration:(double)duration timingFunction:(id)function applier:(id /* block */)applier completion:(id /* block */)completion;

/* instance methods */
- (id)init;
- (void)setTimingFunctionFromAnimationCurve:(long long)curve;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (void)_invokeApplierWithProgress:(double)progress;
- (void)_invokeCompletionWithFinished:(BOOL)finished;
- (void)_getEffectiveElapsedTime:(double *)time finished:(BOOL *)finished;
- (void)_reset;
- (double)_solveForInput:(double)input;
@end

#endif /* WAGUIClientSideAnimation_h */