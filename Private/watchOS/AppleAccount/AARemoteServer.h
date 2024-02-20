//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AARemoteServer_h
#define AARemoteServer_h
@import Foundation;

#include "AARemoteServerConfigurationCache.h"
#include "AARemoteServerProtocol-Protocol.h"
#include "AAURLSession.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AARemoteServer : NSObject<AARemoteServerProtocol> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationLock;
  NSObject<OS_dispatch_queue> *_configurationQueue;
  AARemoteServerConfigurationCache *_configurationCache;
}

@property (retain, nonatomic) AAURLSession *session;
@property (readonly, nonatomic) AAURLSession *signingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedServer;
+ (id)sharedServerWithNoUrlCache;

/* instance methods */
- (void)authenticateAccount:(id)account completion:(id /* block */)completion;
- (void)registerAccount:(id)account withHSA:(BOOL)hsa completion:(id /* block */)completion;
- (void)loginDelegates:(id)delegates parameters:(id)parameters completion:(id /* block */)completion;
- (id)_bodyDictionaryWithProtocolVersion:(id)version;
- (id)_redactedBodyStringWithPropertyList:(id)list;
- (id)_redactedHeadersFromHTTPHeaders:(id)httpheaders;
- (void)_startRequest:(id)request responseClass:(Class)class mainThread:(BOOL)thread completion:(id /* block */)completion;
- (id)_newURLRequestWithURLString:(id)urlstring;
- (id)init;
- (id)_initRequiringUrlCache:(BOOL)cache;
- (void)configurationWithCompletion:(id /* block */)completion;
- (void)_configurationAndResponseWithCompletion:(id /* block */)completion;
- (void)_setConfigurationCache:(id)cache;
- (id)_configurationCacheInvalidatingIfNecessary;
- (id)_configurationLock_configurationCacheInvalidatingIfNecessary;
- (void)_fetchConfigurationAndResponseWithCompletion:(id /* block */)completion;
@end

#endif /* AARemoteServer_h */