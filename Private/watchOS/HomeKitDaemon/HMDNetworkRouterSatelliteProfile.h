//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterSatelliteProfile_h
#define HMDNetworkRouterSatelliteProfile_h
@import Foundation;

#include "HMDAccessoryProfile.h"

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile

@property (nonatomic) long long satelliteStatus;
@property (nonatomic) unsigned long long networkStatus;

/* class methods */
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRouterSatelliteService:(id)service msgDispatcher:(id)dispatcher;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)unconfigure;
- (void)dealloc;
- (id)runtimeState;
- (void)_registerForNotifications;
- (void)registerForMessages;
- (void)handleInitialState;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)update;
- (void)_updateNetworkStatus;
- (void)__updateSatelliteStatus:(id)status;
- (void)_handleCharacteristicChanges:(id)changes;
- (void)_handleCharacteristicsChangedPayload:(id)payload;
- (void)handleCharacteristicsChangedNotification:(id)notification;
- (void)handleAccessoryIsReachable:(id)reachable;
- (void)_registerForRemoteNotifications;
- (void)__handleAccessoryConnected;
- (void)handleAccessoryConfigured:(id)configured;
- (void)_readAndProcessCharacteristics:(id)characteristics withCompletion:(id /* block */)completion;
- (void)_readAndUpdateCharacteristic;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDNetworkRouterSatelliteProfile_h */