//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef NSXPCConnection_UserNotificationsServer_h
#define NSXPCConnection_UserNotificationsServer_h
@import Foundation;

@interface NSXPCConnection (UserNotificationsServer)
/* instance methods */
- (id)uns_clientBundleProxy;
- (id)uns_clientAuditToken;
- (BOOL)uns_isAllowedFromDaemon;
- (BOOL)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)identifier;
- (BOOL)uns_isAllowedToReadSettings;
- (BOOL)uns_isAllowedToWriteSettings;
- (BOOL)uns_hasEntitlement:(id)entitlement capability:(id)capability;
- (BOOL)uns_isInternalUserNotificationsTool;
- (void)uns_setConnectionDetails:(id)details;
- (id)uns_getClientConnectionDetails;
- (BOOL)_uns_connection:(id)_uns_connection isAuthorizedToSendNotificationsForBundleIdentifier:(id)identifier;
- (BOOL)_uns_connection:(id)_uns_connection isAuthorizedToSendNotificationsForManagementDomainOfBundleIdentifier:(id)identifier;
- (BOOL)_uns_connection:(id)_uns_connection valueForEntitlementKey:(id)key matchesValue:(id)value;
@end

#endif /* NSXPCConnection_UserNotificationsServer_h */