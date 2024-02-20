//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSAutoFillPasskey_h
#define WBSAutoFillPasskey_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WBSPublicKeyCredentialIdentifier.h"

@class NSString, NSUUID;

@interface WBSAutoFillPasskey : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (readonly, copy, nonatomic) NSUUID *operationUUID;
@property (readonly, nonatomic) BOOL shouldRequireUserVerification;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUsername:(id)username customTitle:(id)title relyingPartyIdentifier:(id)identifier identifier:(id)identifier operationUUID:(id)uuid shouldRequireUserVerification:(BOOL)verification;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WBSAutoFillPasskey_h */