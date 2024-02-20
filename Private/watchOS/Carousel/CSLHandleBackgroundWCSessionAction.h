//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLHandleBackgroundWCSessionAction_h
#define CSLHandleBackgroundWCSessionAction_h
@import Foundation;

#include "PUICHandleBackgroundWCSessionAction.h"
#include "CSLAssertionAction-Protocol.h"
#include "CSLAssertionActionImplementation.h"

@class FBSProcessExecutionPolicy, NSString;

@interface CSLHandleBackgroundWCSessionAction : PUICHandleBackgroundWCSessionAction<CSLAssertionAction> {
  /* instance variables */
  CSLAssertionActionImplementation *_assertionAction;
}

@property (readonly) FBSProcessExecutionPolicy *executionPolicy;
@property (readonly) double wallTimeLimit;
@property (readonly) double cpuTimeLimit;
@property (readonly) BOOL shouldWarnBeforeExpiration;
@property (readonly) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUUID:(id)uuid timeout:(double)timeout forResponseOnQueue:(id)queue withHandler:(id /* block */)handler;
- (Class)fallbackXPCEncodableClass;
- (void)addResponseHandler:(id /* block */)handler;
- (unsigned int)CSL_bar_task_type;
@end

#endif /* CSLHandleBackgroundWCSessionAction_h */