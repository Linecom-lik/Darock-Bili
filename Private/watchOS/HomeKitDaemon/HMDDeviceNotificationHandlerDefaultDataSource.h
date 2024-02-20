//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDeviceNotificationHandlerDefaultDataSource_h
#define HMDDeviceNotificationHandlerDefaultDataSource_h
@import Foundation;

#include "HMDDeviceNotificationHandlerDataSource-Protocol.h"
#include "HMDHome.h"

@class NSString;

@interface HMDDeviceNotificationHandlerDefaultDataSource : NSObject<HMDDeviceNotificationHandlerDataSource>

@property (weak, nonatomic) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHome:(id)home;
- (id)timerWithType:(unsigned char)type;
@end

#endif /* HMDDeviceNotificationHandlerDefaultDataSource_h */