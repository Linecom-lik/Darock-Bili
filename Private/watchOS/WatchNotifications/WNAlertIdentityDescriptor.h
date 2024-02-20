//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNAlertIdentityDescriptor_h
#define WNAlertIdentityDescriptor_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface WNAlertIdentityDescriptor : NSObject<NSSecureCoding, BSXPCCoding>

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptorWithDomain:(id)domain;
+ (id)descriptorWithDomain:(id)domain name:(id)name;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDomain:(id)domain name:(id)name;
- (BOOL)matchesAlertIdentity:(id)identity;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
@end

#endif /* WNAlertIdentityDescriptor_h */