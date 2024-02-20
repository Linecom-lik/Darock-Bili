//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIDisenrollRolloutPersistedTask_h
#define TRIDisenrollRolloutPersistedTask_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSString;

@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *rolloutId;
@property (@dynamic, nonatomic) BOOL hasRolloutId;
@property (@dynamic, nonatomic) int triggerEvent;
@property (@dynamic, nonatomic) BOOL hasTriggerEvent;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIDisenrollRolloutPersistedTask_h */