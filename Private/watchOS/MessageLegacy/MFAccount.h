//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFAccount_h
#define MFAccount_h
@import Foundation;

#include "EFPubliclyDescribable-Protocol.h"

@class ACAccount, NSDictionary, NSMutableDictionary, NSString;

@interface MFAccount : NSObject<EFPubliclyDescribable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _persistentAccountLock;
  NSMutableDictionary *_unsavedAccountProperties;
}

@property (readonly) ACAccount *accountForRenewingCredentials;
@property (readonly) ACAccount *persistentAccount;
@property (readonly) ACAccount *parentAccount;
@property (readonly) NSString *parentAccountIdentifier;
@property (readonly) NSDictionary *properties;
@property (readonly) NSString *uniqueId;
@property (readonly) NSString *identifier;
@property (readonly) NSString *syncStoreIdentifier;
@property (readonly) NSString *managedTag;
@property (readonly) NSString *type;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *hostname;
@property (retain, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setShouldHealAccounts:(BOOL)accounts;
+ (BOOL)shouldHealAccounts;
+ (id)newAccountWithDictionary:(id)dictionary;
+ (id)excludedAccountPropertyKeys;
+ (id)accountWithProperties:(id)properties;
+ (id)authSchemesForAccountClass;
+ (id)accountWithPersistentAccount:(id)account;
+ (id)_newPersistentAccount;
+ (id)_accountClass;
+ (id)accountTypeIdentifier;
+ (id)existingAccountForUniqueID:(id)id;
+ (BOOL)isPredefinedAccountType;
+ (id)predefinedValueForKey:(id)key;
+ (id)propertiesWhichRequireValidation;
+ (id)_basicPropertyForKey:(id)key persistentAccount:(id)account;
+ (BOOL)_setBasicProperty:(id)property forKey:(id)key persistentAccount:(id)account;
+ (id)accountTypeString;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (void *)legacyKeychainProtocol;
+ (id)accountPropertiesValueForKey:(id)key value:(id)value;
+ (id)hostname;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (BOOL)isCommonPortNumber:(unsigned int)number;
+ (BOOL)usesSSL;
+ (BOOL)isSSLEditable;
+ (id)saslProfileName;
+ (id)supportedDataclasses;

/* instance methods */
- (BOOL)shouldFetchACEDBInfoForError:(id)error;
- (id)init;
- (id)initWithProperties:(id)properties;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithPersistentAccount:(id)account;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (void)persistentAccountDidChange:(id)change previousAccount:(id)account;
- (void)savePersistentAccount;
- (void)removePersistentAccount;
- (id)accountClass;
- (id)_privacySafeDescription;
- (id)accountPropertyForKey:(id)key;
- (void)setAccountProperty:(id)property forKey:(id)key;
- (void)removeAccountPropertyForKey:(id)key;
- (void)_queueAccountInfoDidChange;
- (void)_setAccountProperties:(id)properties;
- (void)setValueInAccountProperties:(id)properties forKey:(id)key;
- (void)removeValueInAccountPropertiesForKey:(id)key;
- (id)valueInAccountPropertiesForKey:(id)key;
- (id)_objectForAccountInfoKey:(id)key;
- (BOOL)_boolForAccountInfoKey:(id)key defaultValue:(BOOL)value;
- (BOOL)isActive;
- (void)setActive:(BOOL)active;
- (BOOL)canGoOffline;
- (BOOL)isManaged;
- (BOOL)supportsMailDrop;
- (id)_credential;
- (id)_credentialCreateIfNecessary:(BOOL)necessary;
- (id)_credentialCreateIfNecessary:(BOOL)necessary error:(id *)error;
- (void)setPassword:(id)password;
- (id)_password;
- (id)_passwordWithError:(id *)error;
- (id)password;
- (unsigned long long)credentialAccessibility;
- (id)credentialItemForKey:(id)key;
- (id)credentialItemForKey:(id)key error:(id *)error;
- (void)setCredentialItem:(id)item forKey:(id)key;
- (BOOL)setCredentialItem:(id)item forKey:(id)key error:(id *)error;
- (id)oauth2Token;
- (BOOL)setOAuth2Token:(id)token refreshToken:(id)token error:(id *)error;
- (BOOL)_renewCredentialsWithOptions:(id)options completion:(id /* block */)completion;
- (BOOL)renewCredentialsWithOptions:(id)options completion:(id /* block */)completion;
- (BOOL)promptUserForPasswordWithTitle:(id)title message:(id)message completionHandler:(id /* block */)handler;
- (BOOL)promptUserForWebLoginWithURL:(id)url shouldConfirm:(BOOL)confirm completionHandler:(id /* block */)handler;
- (BOOL)fetchTokensIfNecessary:(id *)necessary;
- (unsigned int)portNumber;
- (unsigned int)defaultPortNumber;
- (unsigned int)defaultSecurePortNumber;
- (void)setPortNumber:(unsigned int)number;
- (id)serviceName;
- (id)secureServiceName;
- (struct __CFString *)connectionServiceType;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (BOOL)usesSSL;
- (void)setUsesSSL:(BOOL)ssl;
- (BOOL)allowsTrustPrompt;
- (void)setTryDirectSSL:(BOOL)ssl;
- (id)domain;
- (void)setDomain:(id)domain;
- (id)clientCertificates;
- (void)setClientCertificates:(id)certificates;
- (void)accountInfoDidChange;
- (id)preferredAuthScheme;
- (void)setPreferredAuthScheme:(id)scheme;
- (id)_newConnection;
- (Class)connectionClass;
- (BOOL)requiresAuthentication;
- (id)authenticatedConnection;
- (id)certUIService;
- (id)defaultConnectionSettings;
- (void)applySettingsAsDefault:(id)default;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)port;
- (id)customDescriptionForError:(id)error authScheme:(id)scheme defaultDescription:(id)description;
- (void)reportAuthenticationError:(id)error authScheme:(id)scheme;
- (BOOL)_connectAndAuthenticate:(id)authenticate;
- (id)networkAccountIdentifier;
- (id)nameForMailboxUid:(id)uid;
- (BOOL)shouldEnableAfterError:(id)error;
- (BOOL)enableAccount;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (id)missingPasswordErrorWithTitle:(id)title;
- (id)inaccessiblePasswordErrorWithTitle:(id)title;
- (id)loginDisabledErrorWithTitle:(id)title;
- (id)enabledDataclasses;
- (BOOL)isEnabledForDataclass:(id)dataclass;
- (BOOL)isSyncingNotes;
- (id)copyDiagnosticInformation;
@end

#endif /* MFAccount_h */