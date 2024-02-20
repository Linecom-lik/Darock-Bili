//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteLoginAuthentication_h
#define HMDRemoteLoginAuthentication_h
@import Foundation;

#include "HMFObject.h"
#include "HMDDevice.h"
#include "HMDRemoteLoginMessageSender.h"
#include "HMFLogging-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAuthentication : HMFObject<HMFLogging>

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) HMDDevice *remoteDevice;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id remoteDevice:(id)device workQueue:(id)queue remoteMessageSender:(id)sender;
- (id)logIdentifier;
- (void)authenticate;
@end

#endif /* HMDRemoteLoginAuthentication_h */