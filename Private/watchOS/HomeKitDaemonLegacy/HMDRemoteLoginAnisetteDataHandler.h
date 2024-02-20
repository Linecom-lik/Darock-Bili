//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteLoginAnisetteDataHandler_h
#define HMDRemoteLoginAnisetteDataHandler_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAppleMediaAccessory.h"
#include "HMDHomeMessageReceiver-Protocol.h"
#include "HMFLogging-Protocol.h"

@class AKAnisetteProvisioningController, HMFMessageDispatcher, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAnisetteDataHandler : HMFObject<HMFLogging, HMDHomeMessageReceiver>

@property (readonly, weak) HMDAppleMediaAccessory *accessory;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) AKAnisetteProvisioningController *provisioningController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;

/* instance methods */
- (id)initWithUUID:(id)uuid accessory:(id)accessory;
- (void)configureWithWorkQueue:(id)queue messageDispatcher:(id)dispatcher;
- (void)registerForMessages;
- (void)_handleProvisionAnisetteDataRequestMessage:(id)message;
- (void)_handleSyncAnisetteDataRequestMessage:(id)message;
- (void)_handleEraseAnisetteDataRequestMessage:(id)message;
- (void)_handleFetchAnisetteDataRequestMessage:(id)message;
- (void)_handleLegacyAnisetteDataRequestMessage:(id)message;
- (id)logIdentifier;
@end

#endif /* HMDRemoteLoginAnisetteDataHandler_h */