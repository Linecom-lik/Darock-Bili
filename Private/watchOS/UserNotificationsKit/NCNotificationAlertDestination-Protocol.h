//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef NCNotificationAlertDestination_Protocol_h
#define NCNotificationAlertDestination_Protocol_h
@import Foundation;

@protocol NCNotificationAlertDestination <NCNotificationDestination>

@property (weak, nonatomic) NSObject<NCNotificationAlertDestinationDelegate> *delegate;
@property (readonly, nonatomic) BOOL alertDestination;

/* instance methods */
- (BOOL)isAlertDestination;
@optional
/* instance methods */
- (void)prepareDestinationToReceiveCriticalNotificationRequest:(id)request;
@end

#endif /* NCNotificationAlertDestination_Protocol_h */