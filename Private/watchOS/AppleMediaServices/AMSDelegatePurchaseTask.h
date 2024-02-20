//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSDelegatePurchaseTask_h
#define AMSDelegatePurchaseTask_h
@import Foundation;

#include "AMSDelegateAuthenticateTask.h"
#include "AMSBiometricsSignatureRequest.h"
#include "AMSDelegatePaymentSheetTask.h"
#include "AMSDelegatePurchaseRequest.h"
#include "AMSPaymentSheetResult.h"
#include "AMSRequestPresentationDelegate-Protocol.h"
#include "AMSURLResult.h"
#include "AMSURLTaskInfo.h"

@class NSString;

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask<AMSRequestPresentationDelegate>

@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest;
@property (retain, nonatomic) AMSURLResult *delegateAuthResult;
@property (retain, nonatomic) AMSURLTaskInfo *delegateAuthTaskInfo;
@property (retain, nonatomic) AMSPaymentSheetResult *paymentSheetResult;
@property (retain, nonatomic) AMSDelegatePaymentSheetTask *paymentSheetTask;
@property (readonly, nonatomic) AMSDelegatePurchaseRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegatePurchaseRequest:(id)request bag:(id)bag account:(id)account;
- (BOOL)cancel;
- (id)performDelegatePurchase;
- (id)delegateAuthenticateUrl;
- (void)handleAuthenticateRequest:(id)request completion:(id /* block */)completion;
- (void)handleDialogRequest:(id)request completion:(id /* block */)completion;
- (void)AMSURLSession:(id)amsurlsession task:(id)task handleAuthenticateRequest:(id)request completion:(id /* block */)completion;
- (id)_finishWithDelegateAuthenticateResult:(id)result error:(id *)error;
- (void)_parseBiometricsSignatureRequestFromTask:(id)task;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)result;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performPaymentSheetTask;
- (id)_urlRequestParameters;
@end

#endif /* AMSDelegatePurchaseTask_h */