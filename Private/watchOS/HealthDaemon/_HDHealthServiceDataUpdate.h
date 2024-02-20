//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDHealthServiceDataUpdate_h
#define _HDHealthServiceDataUpdate_h
@import Foundation;

#include "HDHealthServiceCharacteristic.h"

@class HKDevice, NSError;

@interface _HDHealthServiceDataUpdate : NSObject

@property (readonly, nonatomic) unsigned long long sessionIdentifier;
@property (readonly, nonatomic) HDHealthServiceCharacteristic *characteristic;
@property (readonly, nonatomic) HKDevice *device;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithSessionIdentifier:(unsigned long long)identifier characteristic:(id)characteristic device:(id)device error:(id)error;
@end

#endif /* _HDHealthServiceDataUpdate_h */