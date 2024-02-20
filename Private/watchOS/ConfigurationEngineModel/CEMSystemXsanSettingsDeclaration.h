//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMSystemXsanSettingsDeclaration_h
#define CEMSystemXsanSettingsDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSArray, NSString;

@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadSanName;
@property (copy, nonatomic) NSArray *payloadSanConfigURLs;
@property (copy, nonatomic) NSArray *payloadFsnameservers;
@property (copy, nonatomic) NSString *payloadSanAuthMethod;
@property (copy, nonatomic) NSString *payloadSharedSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withSanName:(id)name withSanConfigURLs:(id)urls withFsnameservers:(id)fsnameservers withSanAuthMethod:(id)method withSharedSecret:(id)secret;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withSanName:(id)name withSanConfigURLs:(id)urls withFsnameservers:(id)fsnameservers withSharedSecret:(id)secret;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMSystemXsanSettingsDeclaration_h */