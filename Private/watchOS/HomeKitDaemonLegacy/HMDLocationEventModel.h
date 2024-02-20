//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLocationEventModel_h
#define HMDLocationEventModel_h
@import Foundation;

#include "HMDEventModel.h"

@class NSData;

@interface HMDLocationEventModel : HMDEventModel

@property (retain, @dynamic, nonatomic) NSData *region;

/* class methods */
+ (id)properties;
+ (id)eventModelWithDictionary:(id)dictionary home:(id)home eventTriggerUUID:(id)uuid message:(id)message;
@end

#endif /* HMDLocationEventModel_h */