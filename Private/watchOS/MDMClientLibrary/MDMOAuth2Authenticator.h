//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef MDMOAuth2Authenticator_h
#define MDMOAuth2Authenticator_h
@import Foundation;

#include "MDMAuthenticatorProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface MDMOAuth2Authenticator : NSObject<MDMAuthenticatorProtocol>

@property (copy, nonatomic) NSDictionary *tokens;
@property (retain, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *personaID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)authenticationMethod;
+ (id)serializeTokens:(id)tokens;
+ (id)deserializeTokens:(id)tokens;
+ (id)_createOAuth2InvalidError;

/* instance methods */
- (id)initWithRMAccountID:(id)id;
- (id)initWithTokens:(id)tokens;
- (BOOL)validAuthParams:(id)params;
- (BOOL)authenticateRequest:(id)request error:(id *)error;
- (BOOL)doesWebAuthentication;
- (id)webAuthenticationURLForAuthParams:(id)params userIdentifier:(id)identifier;
- (void)authTokensWithCallbackURL:(id)url authParams:(id)params completionHandler:(id /* block */)handler;
- (BOOL)canRefreshToken;
- (id)prepareForReauthenticationWithAuthParams:(id)params accountID:(id)id error:(id *)error;
- (void)refreshTokenWithAuthParams:(id)params accountID:(id)id completionHandler:(id /* block */)handler;
- (id)_authorizationGrantURLWithAuthParams:(id)params;
- (void)_tokenRequestWithCode:(id)code authParams:(id)params completionHandler:(id /* block */)handler;
- (void)_refreshRequestWithRefreshToken:(id)token authParams:(id)params completionHandler:(id /* block */)handler;
- (void)_executeTokenRequestWithURL:(id)url body:(id)body completionHandler:(id /* block */)handler;
- (void)_processTokenResponse:(id)response data:(id)data error:(id)error completionHandler:(id /* block */)handler;
@end

#endif /* MDMOAuth2Authenticator_h */