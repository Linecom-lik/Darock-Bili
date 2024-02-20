//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKProtobufPaymentMerchantSession_h
#define PKProtobufPaymentMerchantSession_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 epochTimestamp; unsigned int x :1 expiresAt; } _has;
}

@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL hasNonce;
@property (retain, nonatomic) NSString *nonce;
@property (nonatomic) BOOL hasEpochTimestamp;
@property (nonatomic) unsigned long long epochTimestamp;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) BOOL hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;
@property (nonatomic) BOOL hasExpiresAt;
@property (nonatomic) unsigned long long expiresAt;
@property (readonly, nonatomic) BOOL hasInitiativeContext;
@property (retain, nonatomic) NSString *initiativeContext;
@property (readonly, nonatomic) BOOL hasInitiative;
@property (retain, nonatomic) NSString *initiative;
@property (retain, nonatomic) NSMutableArray *signedFields;
@property (readonly, nonatomic) BOOL hasAmpEnrollmentPinning;
@property (retain, nonatomic) NSData *ampEnrollmentPinning;
@property (readonly, nonatomic) BOOL hasOperationalAnalyticsIdentifier;
@property (retain, nonatomic) NSString *operationalAnalyticsIdentifier;

/* class methods */
+ (Class)signedFieldsType;

/* instance methods */
- (void)clearSignedFields;
- (void)addSignedFields:(id)fields;
- (unsigned long long)signedFieldsCount;
- (id)signedFieldsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* PKProtobufPaymentMerchantSession_h */