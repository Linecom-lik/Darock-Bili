//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDState_h
#define DNDState_h
@import Foundation;

#include "DNDModeConfiguration.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString, NSUUID;

@interface DNDState : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_overrideModeIdentifier;
}

@property (readonly, @dynamic, nonatomic) BOOL willSuppressInterruptions;
@property (readonly, copy, @dynamic, nonatomic) NSArray *activeModeAssertionMetadata;
@property (readonly, copy, @dynamic, nonatomic) NSUUID *activeModeUUID;
@property (readonly, nonatomic) unsigned long long suppressionState;
@property (readonly, copy, @dynamic, nonatomic) NSArray *activeModeIdentifiers;
@property (readonly, copy, @dynamic, nonatomic) NSString *activeModeIdentifier;
@property (readonly, copy, nonatomic) DNDModeConfiguration *activeModeConfiguration;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *userVisibleTransitionDate;
@property (readonly, nonatomic) unsigned long long userVisibleTransitionLifetimeType;
@property (readonly, @dynamic, nonatomic) BOOL active;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSuppressionState:(unsigned long long)state activeModeAssertionMetadata:(id)metadata startDate:(id)date userVisibleTransitionDate:(id)date userVisibleTransitionLifetimeType:(unsigned long long)type activeModeConfiguration:(id)configuration;
- (BOOL)isActive;
- (void)setOverrideModeIdentifier:(id)identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DNDState_h */