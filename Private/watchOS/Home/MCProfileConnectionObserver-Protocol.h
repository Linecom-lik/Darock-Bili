//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef MCProfileConnectionObserver_Protocol_h
#define MCProfileConnectionObserver_Protocol_h
@import Foundation;

@protocol MCProfileConnectionObserver <NSObject>
@optional
/* instance methods */
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)notification userInfo:(id)info;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)notification userInfo:(id)info;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)notification userInfo:(id)info;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)notification userInfo:(id)info;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)notification userInfo:(id)info;
- (void)profileConnectionDidReceiveDefaultsChangedNotification:(id)notification userInfo:(id)info;
- (void)profileConnectionDidReceiveAppWhitelistChangedNotification:(id)notification userInfo:(id)info;
@end

#endif /* MCProfileConnectionObserver_Protocol_h */