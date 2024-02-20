//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPCharacteristicValueLinearDerivedTransitionPoint_h
#define HAPCharacteristicValueLinearDerivedTransitionPoint_h
@import Foundation;

#include "HAPTLVFloatNumberValue.h"
#include "HAPTLVProtocol-Protocol.h"
#include "HAPTLVUnsignedNumberValue.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HAPCharacteristicValueLinearDerivedTransitionPoint : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVFloatNumberValue *scale;
@property (retain, nonatomic) HAPTLVFloatNumberValue *offset;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetCompletionDuration;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startDelayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithScale:(id)scale offset:(id)offset targetCompletionDuration:(id)duration startDelayDuration:(id)duration;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAPCharacteristicValueLinearDerivedTransitionPoint_h */