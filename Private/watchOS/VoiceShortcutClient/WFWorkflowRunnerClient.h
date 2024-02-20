//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowRunnerClient_h
#define WFWorkflowRunnerClient_h
@import Foundation;

#include "WFOutOfProcessWorkflowController.h"
#include "WFOutOfProcessWorkflowControllerDelegate-Protocol.h"
#include "WFWorkflowRunDescriptor.h"
#include "WFWorkflowRunRequest.h"
#include "WFWorkflowRunViewSource.h"
#include "WFWorkflowRunnerClient.h"
#include "WFWorkflowRunnerClientDelegate-Protocol.h"
#include "WFWorkflowRunningContext.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface WFWorkflowRunnerClient : NSObject<WFOutOfProcessWorkflowControllerDelegate> {
  /* instance variables */
  WFWorkflowRunnerClient *_strongSelf;
}

@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) WFOutOfProcessWorkflowController *workflowController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) WFWorkflowRunDescriptor *descriptor;
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest;
@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (weak, nonatomic) NSObject<WFWorkflowRunnerClientDelegate> *delegate;
@property (readonly, nonatomic) BOOL running;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)underlyingErrorIfRunnerError:(id)error;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor runRequest:(id)request;
- (id)initWithDescriptor:(id)descriptor runRequest:(id)request delegateQueue:(id)queue;
- (BOOL)isRunning;
- (void)start;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)prewarmRunner;
- (void)updateRunViewSource:(id)source;
- (id)createWorkflowControllerWithContext:(id)context;
- (id)createRunningContextFromRequestIfNecessary:(id)necessary descriptor:(id)descriptor;
- (id)runWorkflowWithRequest:(id)request descriptor:(id)descriptor completion:(id /* block */)completion;
- (id)prewarmManager;
- (void)dispatchWorkflowResultHandlingWithResult:(id)result;
- (void)handleWorkflowDidStart:(id)start;
- (void)handleWorkflowRunResult:(id)result completion:(id /* block */)completion;
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)context;
- (void)stopObservingRunProgress;
- (void)outOfProcessWorkflowController:(id)controller didStartFromWorkflowReference:(id)reference dialogAttribution:(id)attribution;
- (void)outOfProcessWorkflowController:(id)controller didFinishWithResult:(id)result dialogAttribution:(id)attribution;
- (void)outOfProcessWorkflowController:(id)controller didRequestUpdatedRunViewSource:(id)source completionHandler:(id /* block */)handler;
- (void)retainSelf;
- (void)autoreleaseSelf;
@end

#endif /* WFWorkflowRunnerClient_h */