//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2041.0.0.0.0
//
#ifndef CertUIPrompt_h
#define CertUIPrompt_h
@import Foundation;

@class NSString;

@interface CertUIPrompt : NSObject {
  /* instance variables */
  struct __SecTrust * _trust;
  id /* block */ _responseBlock;
}

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *connectionDisplayName;

/* class methods */
+ (id)stringForResponse:(int)response;
+ (id)promptQueue;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setTrust:(struct __SecTrust *)trust;
- (struct __SecTrust *)trust;
- (id)_sendablePropertyFromProperty:(id)property;
- (id)_sendablePropertiesFromProperties:(id)properties;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)trust;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)trust;
- (id)_titleFromTrust:(struct __SecTrust *)trust;
- (id)_issuerFromTrust:(struct __SecTrust *)trust;
- (id)_subtitleFromTrust:(struct __SecTrust *)trust;
- (id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;
- (id)_purposeFromTrustProperties:(id)properties;
- (id)_expirationFromTrust:(struct __SecTrust *)trust;
- (BOOL)_isRootCertificateFromTrust:(struct __SecTrust *)trust;
- (id)_digestFromTrust:(struct __SecTrust *)trust;
- (id)_newUserInfoWithHostname:(id)hostname trust:(struct __SecTrust *)trust options:(id)options;
- (id)_messagingCenter;
- (int)_responseFromReplyDict:(id)dict;
- (int)_sendRemoteMessage;
- (int)_sendRemoteMessageWithPromptOptions:(id)options;
- (void)showPromptWithResponseBlock:(id /* block */)block;
- (void)showPromptWithOptions:(id)options responseBlock:(id /* block */)block;
- (void)_informConsumerOfResponse:(int)response;
- (int)showAndWaitForResponse;
@end

#endif /* CertUIPrompt_h */