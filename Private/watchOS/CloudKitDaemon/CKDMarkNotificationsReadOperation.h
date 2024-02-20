//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDMarkNotificationsReadOperation_h
#define CKDMarkNotificationsReadOperation_h
@import Foundation;

#include "CKDOperation.h"

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol CKMarkNotificationsReadOperationCallbacks;

@interface CKDMarkNotificationsReadOperation : CKDOperation

@property (retain, nonatomic) NSArray *notificationIDs;
@property (retain, nonatomic) NSMutableDictionary *errorByNotificationID;
@property (retain, nonatomic) NSMutableSet *successfulNotificationIDs;
@property (retain, @dynamic, nonatomic) NSObject<CKMarkNotificationsReadOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ notificationMarkedRead;

/* class methods */
+ (long long)isPredominatelyDownload;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)_handleNotificationID:(id)id withResponse:(id)response;
- (int)operationType;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)error;
@end

#endif /* CKDMarkNotificationsReadOperation_h */