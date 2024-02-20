//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2EncodedEnableNotificationResponse_h
#define HAP2EncodedEnableNotificationResponse_h
@import Foundation;

#include "HAP2EncodedCharacteristicResponse.h"
#include "HAP2EncodedEnableNotificationResponse-Protocol.h"

@class NSArray, NSSet, NSString;

@interface HAP2EncodedEnableNotificationResponse : HAP2EncodedCharacteristicResponse<HAP2EncodedEnableNotificationResponse> {
  /* instance variables */
  NSSet *_valueResponses;
}

@property (readonly, nonatomic) NSSet *updatedValues;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationResponses:(id)responses;
- (id)initWithNotificationResponses:(id)responses updatedValues:(id)values;
@end

#endif /* HAP2EncodedEnableNotificationResponse_h */