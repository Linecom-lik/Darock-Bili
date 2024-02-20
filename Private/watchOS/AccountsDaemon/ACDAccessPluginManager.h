//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDAccessPluginManager_h
#define ACDAccessPluginManager_h
@import Foundation;

@class NSSet;
@protocol OS_dispatch_queue;

@interface ACDAccessPluginManager : NSObject {
  /* instance variables */
  NSSet *_accessPlugins;
  NSObject<OS_dispatch_queue> *_accessPluginQueue;
}

/* instance methods */
- (id)init;
- (void)handleAccessRequestToAccountsOfType:(id)type forClient:(id)client withOptions:(id)options store:(id)store allowUserInteraction:(BOOL)interaction completion:(id /* block */)completion;
- (void)authorizeAccessToAccountsOfType:(id)type forClient:(id)client store:(id)store completion:(id /* block */)completion;
- (void)revokeAccessToAccountsOfType:(id)type forClient:(id)client store:(id)store completion:(id /* block */)completion;
- (void)revokeAllAccessToAccountsOfType:(id)type store:(id)store withCompletion:(id /* block */)completion;
- (id)_authorizationPluginForAccountType:(id)type;
@end

#endif /* ACDAccessPluginManager_h */