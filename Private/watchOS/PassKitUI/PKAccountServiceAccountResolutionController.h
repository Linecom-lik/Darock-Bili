//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountServiceAccountResolutionController_h
#define PKAccountServiceAccountResolutionController_h
@import Foundation;

#include "PKAccountServiceAccountResolutionControllerDelegate-Protocol.h"
#include "PKBusinessChatController.h"

@class PKAccount, PKAccountUserCollection, PKTransactionSourceCollection, UIViewController;
@protocol PKAccountBillPaymentObserver;

@interface PKAccountServiceAccountResolutionController : NSObject {
  /* instance variables */
  PKBusinessChatController *_businessChatController;
}

@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (weak, nonatomic) NSObject<PKAccountServiceAccountResolutionControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<PKAccountBillPaymentObserver> *billPaymentObserver;
@property (weak, nonatomic) UIViewController *presentingViewController;

/* instance methods */
- (id)initWithAccount:(id)account accountUserCollection:(id)collection transactionSourceCollection:(id)collection;
- (void)presentFlowForAccountResolution:(unsigned long long)resolution configuration:(id)configuration completion:(id /* block */)completion;
- (void)_presentAccountServiceAction:(unsigned long long)action configuration:(id)configuration completion:(id /* block */)completion;
- (void)_presentViewController:(id)controller;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)notification;
- (id)_alertControllerForBusinessChatContext:(id)context;
- (void)_callIssuer;
- (void)_openBusinessChatWithContext:(id)context;
@end

#endif /* PKAccountServiceAccountResolutionController_h */