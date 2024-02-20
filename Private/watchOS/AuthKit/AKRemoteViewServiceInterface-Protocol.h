//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKRemoteViewServiceInterface_Protocol_h
#define AKRemoteViewServiceInterface_Protocol_h
@import Foundation;

@protocol AKRemoteViewServiceInterface 
/* instance methods */
- (void)continueAuthenticationWithSurrogateID:(id)id completionHandler:(id /* block */)handler;
- (void)presentAuthorizationWithContext:(id)context usingHost:(id)host completionHandler:(id /* block */)handler;
- (void)presentPrivateEmailWithContext:(id)context usingHost:(id)host completionHandler:(id /* block */)handler;
@end

#endif /* AKRemoteViewServiceInterface_Protocol_h */