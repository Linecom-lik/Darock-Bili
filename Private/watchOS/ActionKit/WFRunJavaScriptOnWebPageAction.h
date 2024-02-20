//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRunJavaScriptOnWebPageAction_h
#define WFRunJavaScriptOnWebPageAction_h
@import Foundation;

#include "WFAction.h"
#include "WFRemoteQuarantinePolicyEvaluatorDelegate-Protocol.h"

@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction<WFRemoteQuarantinePolicyEvaluatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)missingCompletionError;
- (id)invalidJavaScriptErrorWithSyntaxErrorString:(id)string;
- (void)runAsynchronouslyWithInput:(id)input;
- (void)evaluateQuarantineWithJavaScript:(id)script webPageURL:(id)url completionHandler:(id /* block */)handler;
- (void)getWebPageFromInput:(id)input completionHandler:(id /* block */)handler;
- (id)_getErrorFromScript:(id)script;
- (id)userInterfaceToPresentAlertForEvaluator:(id)evaluator;
- (id)noWebPageProvidedError;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
- (id)name;
- (id)parameterSummary;
@end

#endif /* WFRunJavaScriptOnWebPageAction_h */