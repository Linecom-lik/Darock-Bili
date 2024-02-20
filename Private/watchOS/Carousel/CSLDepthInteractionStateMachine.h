//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthInteractionStateMachine_h
#define CSLDepthInteractionStateMachine_h
@import Foundation;

#include "CSLSStateMachine.h"
#include "CSLDepthInteractionStateMachineActiveState.h"
#include "CSLDepthInteractionStateMachineClockShallowActiveState.h"
#include "CSLDepthInteractionStateMachineClockState.h"
#include "CSLDepthInteractionStateMachineContext.h"
#include "CSLDepthInteractionStateMachineDeactivatingState.h"
#include "CSLDepthInteractionStateMachineDelegate-Protocol.h"
#include "CSLDepthInteractionStateMachineEventHandling-Protocol.h"
#include "CSLDepthInteractionStateMachineFailedState.h"
#include "CSLDepthInteractionStateMachineInactiveState.h"
#include "CSLDepthInteractionStateMachinePreparingClockState.h"
#include "CSLDepthInteractionStateMachinePreparingShallowActiveState.h"
#include "CSLDepthInteractionStateMachinePreparingState.h"
#include "CSLDepthInteractionStateMachineResettingState.h"
#include "CSLDepthInteractionStateMachineShallowActiveState.h"

@class CSLDepthInteractionAnalyticsStateAggregator, NSMutableArray, NSString;

@interface CSLDepthInteractionStateMachine : CSLSStateMachine<CSLDepthInteractionStateMachineEventHandling> {
  /* instance variables */
  NSMutableArray *_pendingStates;
  unsigned long long _enterStateCount;
}

@property (readonly, nonatomic) CSLDepthInteractionStateMachineContext *context;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineInactiveState *inactiveState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachinePreparingShallowActiveState *preparingShallowActiveState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineShallowActiveState *shallowActiveState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachinePreparingState *preparingState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineActiveState *activeState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineDeactivatingState *deactivatingState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineFailedState *failedState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineResettingState *resettingState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachinePreparingClockState *preparingClockState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineClockState *clockState;
@property (readonly, nonatomic) CSLDepthInteractionStateMachineClockShallowActiveState *clockShallowActiveState;
@property (weak, nonatomic) NSObject<CSLDepthInteractionStateMachineDelegate> *delegate;
@property (readonly, nonatomic) CSLDepthInteractionAnalyticsStateAggregator *analyticsStateAggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAnalyticsAggregator:(id)aggregator;
- (id)currentState;
- (id)stateMachineLog;
- (id)stateMachineName;
- (void)enterState:(id)state;
- (void)updateContextWithBlock:(id /* block */)block;
- (void)_updateModalAppStateForSession:(id)session withBlock:(id /* block */)block;
- (void)_updateAutoStartSessionActionStateWithBlock:(id /* block */)block;
- (void)_updateAutoLaunchStateWithBlock:(id /* block */)block;
- (void)depthSessionStarted:(id)started;
- (void)depthSessionEnded:(id)ended;
- (void)autoEndDepthSessions;
- (void)otherSessionStarted:(id)started;
- (void)otherSessionEnded:(id)ended;
- (void)setAutoLaunchSettings:(id)settings;
- (void)autoLaunchRequested;
- (void)autoLaunchRequestFailedWithError:(id)error;
- (void)autoLaunchCompleted;
- (void)setSubmersionState:(long long)state;
- (void)modalAppSessionWillStart:(id)start;
- (void)modalAppSessionStarted:(id)started;
- (void)modalAppSession:(id)session failedToStartWithError:(id)error;
- (void)modalAppSessionWillDeactivate:(id)deactivate;
- (void)modalAppSession:(id)session failedToEndWithError:(id)error;
- (void)modalAppSessionDidDeactivate:(id)deactivate;
- (void)setForegroundState:(id)state;
- (void)setWaterLockEnabled:(BOOL)enabled;
- (void)autoStartSessionActionSent;
- (void)autoStartSessionActionFailedWithError:(id)error;
- (void)autoStartSessionActionCompleted;
- (void)requestModalAppSessionForApplicationWithBundleIdentifier:(id)identifier launchReason:(unsigned long long)reason;
- (void)deactivateModalAppSession:(id)session;
- (void)deactivateSession:(id)session;
- (void)requestShallowActiveAutoLaunchForApplicationWithBundleIdentifier:(id)identifier;
- (void)requestShallowActiveAutoLaunchForClock;
- (BOOL)shouldTrackOtherSession:(id)session;
@end

#endif /* CSLDepthInteractionStateMachine_h */