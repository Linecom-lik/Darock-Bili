//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKRecalibrateEstimatesPresentationController_h
#define HKRecalibrateEstimatesPresentationController_h
@import Foundation;

#include "HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate-Protocol.h"
#include "HKHealthPrivacyHostRecalibrateEstimatesViewController.h"
#include "_HKRecalibrateEstimatesPresentationController-Protocol.h"

@class NSString, UIViewController, _UIAsyncInvocation;

@interface HKRecalibrateEstimatesPresentationController : NSObject<HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, _HKRecalibrateEstimatesPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostRecalibrateEstimatesViewController *hostViewController;
@property (nonatomic) BOOL didPresent;
@property (weak, nonatomic) UIViewController *viewControllerPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)presentWithRequestRecord:(id)record authorizationViewControllerPresenter:(id)presenter completion:(id /* block */)completion;
- (void)_requestAndConfigureHostViewController:(id /* block */)controller completion:(id /* block */)completion;
- (void)_makeRemoteViewControllerVisible:(id)visible;
- (void)_dismissViewControllerAnimated:(BOOL)animated;
- (void)healthPrivacyHostRecalibrateEstimatesControllerDidFinishWithError:(id)error;
@end

#endif /* HKRecalibrateEstimatesPresentationController_h */