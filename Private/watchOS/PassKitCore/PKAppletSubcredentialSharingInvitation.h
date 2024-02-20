//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAppletSubcredentialSharingInvitation_h
#define PKAppletSubcredentialSharingInvitation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKSharingCarKeyInvitation.h"

@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitation : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *originatorIDSHandle;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *recipientName;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (nonatomic) unsigned long long entitlement;
@property (copy, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL forWatch;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) PKSharingCarKeyInvitation *originalInvitationMessage;
@property (retain, nonatomic) NSString *activationCode;
@property (readonly, nonatomic) BOOL isThirdPartyCrossPlatformInvitation;

/* class methods */
+ (id)invitationFromShare:(id)share entitlement:(id)entitlement withCredential:(id)credential pass:(id)pass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPartnerIdentifier:(id)identifier brandIdentifier:(id)identifier pairedReaderIdentifier:(id)identifier recipientName:(id)name entitlement:(unsigned long long)entitlement supportedRadioTechnologies:(unsigned long long)technologies;
- (id)initWithIdentifier:(id)identifier sharingSessionIdentifier:(id)identifier originatorIDSHandle:(id)idshandle invitationData:(id)data;
- (id)initWithCrossPlatformInvitation:(id)invitation;
- (id)dataRepresentation;
- (id)sharingConfigurationRepresentation;
- (id)invitationRequestRepresentation;
- (BOOL)isSameInvitationAsInvitation:(id)invitation;
- (BOOL)canBeSent;
- (id)addCarKeyPassConfiguration;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToInvitation:(id)invitation;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isForWatch;
@end

#endif /* PKAppletSubcredentialSharingInvitation_h */