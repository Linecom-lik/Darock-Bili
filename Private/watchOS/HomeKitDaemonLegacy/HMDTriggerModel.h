//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTriggerModel_h
#define HMDTriggerModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"
#include "HMDDevice.h"
#include "HMDUser.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (retain, @dynamic, nonatomic) NSString *name;
@property (retain, @dynamic, nonatomic) NSString *configuredName;
@property (retain, @dynamic, nonatomic) NSArray *currentActionSets;
@property (copy, @dynamic, nonatomic) NSNumber *active;
@property (copy, @dynamic, nonatomic) NSDate *mostRecentFireDate;
@property (retain, @dynamic, nonatomic) HMDUser *owner;
@property (retain, @dynamic, nonatomic) HMDDevice *owningDevice;
@property (retain, @dynamic, nonatomic) NSNumber *autoDelete;

/* class methods */
+ (id)properties;

/* instance methods */
- (id)createPayload;
- (id)dependentUUIDs;
@end

#endif /* HMDTriggerModel_h */