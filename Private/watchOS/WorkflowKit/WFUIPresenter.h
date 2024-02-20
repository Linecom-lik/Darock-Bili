//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFUIPresenter_h
#define WFUIPresenter_h
@import Foundation;

#include "WFUIPresenterConnection-Protocol.h"
#include "WFUIPresenterDelegate-Protocol.h"
#include "WFUIPresenterHostInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCListenerEndpoint;

@interface WFUIPresenter : NSObject<WFUIPresenterHostInterface>

@property (readonly, nonatomic) NSObject<WFUIPresenterConnection> *connection;
@property (readonly, nonatomic) NSObject<WFUIPresenterConnection> *auxiliaryConnection;
@property (readonly, nonatomic) NSMutableSet *runningContextsUsingAuxiliaryConnection;
@property (weak, nonatomic) NSObject<WFUIPresenterDelegate> *delegate;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultPresenter;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (id)initWithConnection:(id)connection auxiliaryConnection:(id)connection;
- (void)beginPersistentModeWithRunningContext:(id)context attribution:(id)attribution completionHandler:(id /* block */)handler;
- (void)completePersistentModeWithSuccess:(id)success runningContext:(id)context completionHandler:(id /* block */)handler;
- (void)updateRunViewSource:(id)source;
- (void)showDialogRequest:(id)request runningContext:(id)context completionHandler:(id /* block */)handler;
- (void)updateAttribution:(id)attribution runningContext:(id)context;
- (void)dismissPresentedContentForRunningContext:(id)context completionHandler:(id /* block */)handler;
- (BOOL)showWebPage:(id)page completionHandler:(id /* block */)handler;
- (void)presenterRequestedWorkflowStopForContext:(id)context;
- (void)presenterRequestedWorkflowPauseForContext:(id)context dialogRequest:(id)request completionHandler:(id /* block */)handler;
- (void)presenterRequestedUpdatedRunViewSource:(id)source completionHandler:(id /* block */)handler;
- (BOOL)requestShouldUseAuxiliaryConnection:(id)connection;
@end

#endif /* WFUIPresenter_h */