//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScrollViewGestureSimulator_h
#define _UIScrollViewGestureSimulator_h
@import Foundation;

@class CADisplayLink, NSMutableArray, NSThread, NSTimer;

@interface _UIScrollViewGestureSimulator : NSObject {
  /* instance variables */
  struct __CFRunLoopSource * _mainThreadRunLoopSource;
  NSMutableArray *_simulatedGestures;
  NSThread *_workThread;
  CADisplayLink *_displayLink;
  NSTimer *_timer;
  BOOL _hasSimulatedGestures;
  double _lastWakeUpTime;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)simulateGestureWithDuration:(double)duration begin:(id /* block */)begin update:(id /* block */)update end:(id /* block */)end;
- (void)_threadMain;
- (void)_displayLinkDidFire:(id)fire;
- (void)_signalMainThreadIfNecessary;
- (void)_setHasSimulatedGestures:(id)gestures;
- (void)_update;
@end

#endif /* _UIScrollViewGestureSimulator_h */