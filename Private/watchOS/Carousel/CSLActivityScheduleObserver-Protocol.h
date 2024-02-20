//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLActivityScheduleObserver_Protocol_h
#define CSLActivityScheduleObserver_Protocol_h
@import Foundation;

@protocol CSLActivityScheduleObserver <NSObject>
/* instance methods */
- (void)activityScheduler:(id)scheduler willRequestStartActivity:(id)activity;
- (void)activityScheduler:(id)scheduler didStartActivity:(id)activity;
@optional
/* instance methods */
- (void)activityScheduler:(id)scheduler didEvaluateActivity:(id)activity atDate:(id)date withResponse:(id)response;
@end

#endif /* CSLActivityScheduleObserver_Protocol_h */