//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISQuickLongLookStateMachine_h
#define CUISQuickLongLookStateMachine_h
@import Foundation;

#include "CUISQuickLongLookStateMachineSettings.h"

@class NSString;
@protocol CUISQuickLongLookStateMachineDelegate;

@interface CUISQuickLongLookStateMachine : NSObject

@property (nonatomic) long long state;
@property (weak, nonatomic) NSObject<CUISQuickLongLookStateMachineDelegate> *delegate;
@property (retain, nonatomic) CUISQuickLongLookStateMachineSettings *settings;
@property (readonly) NSString *identifier;
@property long long currentBacklightState;

/* class methods */
+ (id)stateMachineWithSettings:(id)settings delegate:(id)delegate;

/* instance methods */
- (id)initWithSettings:(id)settings delegate:(id)delegate;
- (long long)viewOnscreen;
- (long long)transitionToQuickLook;
- (long long)transitionToLongLook;
- (BOOL)updateBacklightState:(long long)state;
- (BOOL)didTapQuickLook;
- (BOOL)didUnlock;
- (long long)quickLookAutoDismissTimerFired;
- (void)reallyStartLongLook;
- (void)longLookCompleted:(BOOL)completed;
- (void)completeTransitionToState:(long long)state withSuccess:(BOOL)success;
@end

#endif /* CUISQuickLongLookStateMachine_h */