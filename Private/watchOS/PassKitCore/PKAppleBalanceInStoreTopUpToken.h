//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAppleBalanceInStoreTopUpToken_h
#define PKAppleBalanceInStoreTopUpToken_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSString, NSURL;

@interface PKAppleBalanceInStoreTopUpToken : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long tokenType;
@property (copy, nonatomic) NSString *tokenIdentifier;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSArray *certificateChain;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSData *signature;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary accountIdentifier:(id)identifier;
- (BOOL)isExpired;
- (id)displayableToken;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKAppleBalanceInStoreTopUpToken_h */