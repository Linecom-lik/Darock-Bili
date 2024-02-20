//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload_h
#define HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload_h
@import Foundation;

#include "HMFObject.h"
#include "HMMessageEncoding-Protocol.h"

@class NSString, NSUUID;

@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject<HMMessageEncoding>

@property (readonly, copy) NSUUID *modelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithModelIdentifier:(id)identifier;
- (id)initWithPayload:(id)payload;
- (id)payloadCopy;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload_h */