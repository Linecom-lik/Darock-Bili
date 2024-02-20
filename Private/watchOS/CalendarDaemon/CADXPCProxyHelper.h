//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADXPCProxyHelper_h
#define CADXPCProxyHelper_h
@import Foundation;

#include "CADDatabaseInitializationOptions.h"

@class NSXPCConnection, Protocol;
@protocol CADXPCProxyHelperDelegate;

@interface CADXPCProxyHelper : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
  Protocol *_protocol;
  BOOL _synchronous;
}

@property (retain) CADDatabaseInitializationOptions *initializationOptions;
@property (weak, nonatomic) NSObject<CADXPCProxyHelperDelegate> *delegate;

/* instance methods */
- (id)initWithXPCConnection:(id)xpcconnection protocol:(id)protocol synchronous:(BOOL)synchronous;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (BOOL)_shouldResendInitializationOptionsForInvocation:(id)invocation;
- (id)_replaceReplyBlockInInvocation:(id)invocation retryingAfterInitializationWithContextHolder:(id)holder;
- (void)_tryInvokeWithGenerationValidation:(id)validation target:(id)target replyBlock:(id)block contextHolder:(id)holder;
- (BOOL)_validateCADObjectIDsInInvocationArguments:(id)arguments;
- (id)_getReplyBlockFromInvocation:(id)invocation;
- (long long)replyBlockArgumentIndex:(id)index;
- (void)_callReplyHandler:(id)handler ofInvocation:(id)invocation withErrorCode:(long long)code;
@end

#endif /* CADXPCProxyHelper_h */