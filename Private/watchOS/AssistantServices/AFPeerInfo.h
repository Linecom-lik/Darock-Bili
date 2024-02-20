//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFPeerInfo_h
#define AFPeerInfo_h
@import Foundation;

#include "AFDictionaryConvertible-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFPeerInfo : NSObject<NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (readonly, copy, nonatomic) NSString *sharedUserID;
@property (readonly, nonatomic) BOOL isDeviceOwnedByCurrentUser;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, copy, nonatomic) NSString *sharedUserIdentifier;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, copy, nonatomic) NSString *idsDeviceUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *rapportEffectiveIdentifier;
@property (readonly, copy, nonatomic) NSString *homeKitAccessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, nonatomic) BOOL isCommunalDevice;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *userInterfaceIdiom;
@property (readonly, copy, nonatomic) NSString *aceVersion;
@property (readonly, nonatomic) BOOL isLocationSharingDevice;
@property (readonly, nonatomic) BOOL isSiriCloudSyncEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)ad_shortDescription;
- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)user assistantIdentifier:(id)identifier idsIdentifier:(id)identifier idsDeviceUniqueIdentifier:(id)identifier sharedUserID:(id)id rapportEffectiveIdentifier:(id)identifier homeKitAccessoryIdentifier:(id)identifier mediaSystemIdentifier:(id)identifier mediaRouteIdentifier:(id)identifier isCommunalDevice:(BOOL)device roomName:(id)name name:(id)name productType:(id)type buildVersion:(id)version userInterfaceIdiom:(id)idiom aceVersion:(id)version;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)user assistantIdentifier:(id)identifier sharedUserIdentifier:(id)identifier idsIdentifier:(id)identifier idsDeviceUniqueIdentifier:(id)identifier rapportEffectiveIdentifier:(id)identifier homeKitAccessoryIdentifier:(id)identifier mediaSystemIdentifier:(id)identifier mediaRouteIdentifier:(id)identifier isCommunalDevice:(BOOL)device roomName:(id)name name:(id)name productType:(id)type buildVersion:(id)version userInterfaceIdiom:(id)idiom aceVersion:(id)version isLocationSharingDevice:(BOOL)device;
- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)user assistantIdentifier:(id)identifier sharedUserIdentifier:(id)identifier idsIdentifier:(id)identifier idsDeviceUniqueIdentifier:(id)identifier rapportEffectiveIdentifier:(id)identifier homeKitAccessoryIdentifier:(id)identifier mediaSystemIdentifier:(id)identifier mediaRouteIdentifier:(id)identifier isCommunalDevice:(BOOL)device roomName:(id)name name:(id)name productType:(id)type buildVersion:(id)version userInterfaceIdiom:(id)idiom aceVersion:(id)version isLocationSharingDevice:(BOOL)device isSiriCloudSyncEnabled:(BOOL)enabled;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)buildDictionaryRepresentation;
@end

#endif /* AFPeerInfo_h */