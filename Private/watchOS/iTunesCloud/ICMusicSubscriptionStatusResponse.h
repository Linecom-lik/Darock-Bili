//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicSubscriptionStatusResponse_h
#define ICMusicSubscriptionStatusResponse_h
@import Foundation;

#include "ICMusicSubscriptionStatus.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL finalResponse;
@property (nonatomic) BOOL needsReload;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL expired;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidSubscriptionStatusPropertyListRepresentation:(id)representation error:(id *)error;
+ (BOOL)isValidSubscriptionStatusResponseDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)initWithPropertyListRepresentation:(id)representation;
- (id)initWithResponseDictionary:(id)dictionary expirationDate:(id)date;
- (id)_init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isExpired;
- (BOOL)isFinalResponse;
@end

#endif /* ICMusicSubscriptionStatusResponse_h */