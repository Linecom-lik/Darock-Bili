//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupNavigationController_h
#define PKPaymentSetupNavigationController_h
@import Foundation;

#include "PKPaymentSetupDismissibleNavigationController.h"
#include "PKPaymentSetupDelegate-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"

@class NSString, PKGroupsController, PKPaymentProvisioningController;

@interface PKPaymentSetupNavigationController : PKPaymentSetupDismissibleNavigationController<PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable> {
  /* instance variables */
  BOOL _rootViewControllerNeedsConfiguration;
}

@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) PKGroupsController *groupsController;
@property (weak, nonatomic) NSObject<PKPaymentSetupDelegate> *setupDelegate;
@property (nonatomic) BOOL showsWelcomeViewController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)viewControllerForPresentingPaymentError:(id)error;

/* instance methods */
- (id)init;
- (id)initWithProvisioningController:(id)controller context:(long long)context;
- (long long)_preferredModalPresentationStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidMoveToWindow:(id)window shouldAppearOrDisappear:(BOOL)disappear;
- (void)_reconfigureRootViewControllerWithCompletion:(id /* block */)completion;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)cancelButtonPressed:(id)pressed;
- (void)viewControllerDidTerminateSetupFlow:(id)flow;
- (void)viewController:(id)controller requestPresentPassUniqueIdentifier:(id)identifier completion:(id /* block */)completion;
- (BOOL)viewController:(id)controller requestsReturnToPresentationMarker:(unsigned long long)marker reset:(BOOL)reset;
- (void)viewControllerDidCancelSetupFlow:(id)flow;
- (void)viewController:(id)controller didShowProvisioningError:(id)error;
- (void)viewControllerDidShowEligibilityIssue:(id)issue;
- (void)viewController:(id)controller requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)controller completion:(id /* block */)completion;
- (void)viewController:(id)controller didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)controller withShouldContinue:(BOOL)continue error:(id)error;
- (void)viewController:(id)controller requestPasscodeUpgradeWithCompletion:(id /* block */)completion;
- (void)viewController:(id)controller didExitPasscodeUpgradeWithShouldContinue:(BOOL)continue error:(id)error;
@end

#endif /* PKPaymentSetupNavigationController_h */