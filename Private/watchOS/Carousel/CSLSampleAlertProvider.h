//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSampleAlertProvider_h
#define CSLSampleAlertProvider_h
@import Foundation;

#include "CSLSUIProvider-Protocol.h"
#include "CSLSampleAlertNotificationViewController.h"
#include "CSLSampleAlertViewController.h"
#include "CSLSampleAlertViewControllerDelegate-Protocol.h"
#include "CUISAlertProvider-Protocol.h"
#include "CUISAlertProviderDelegate-Protocol.h"
#include "CUISAlertToAlertAnimatedTransitioning-Protocol.h"

@class NSString;

@interface CSLSampleAlertProvider : NSObject<CSLSampleAlertViewControllerDelegate, CUISAlertToAlertAnimatedTransitioning, CSLSUIProvider, CUISAlertProvider> {
  /* instance variables */
  CSLSampleAlertViewController *_alertViewController;
  CSLSampleAlertNotificationViewController *_notificationViewController;
}

@property (weak, nonatomic) NSObject<CUISAlertProviderDelegate> *alertProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)launchAlert;
- (void)dismissAlert;
- (void)launchNullAlert;
- (void)requestAppLaunch:(BOOL)launch;
- (void)requestDismissal:(BOOL)dismissal;
- (void)requestAlertPresentationFromAlert:(id)alert;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)requestUITriggerWithRegistration:(id)registration UITriggerName:(id)name withDictionary:(id)dictionary withReason:(long long)reason withCompletion:(id /* block */)completion;
@end

#endif /* CSLSampleAlertProvider_h */