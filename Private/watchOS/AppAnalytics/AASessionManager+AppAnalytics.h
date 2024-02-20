//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 295.0.0.0.0
//
#ifndef AASessionManager_AppAnalytics_h
#define AASessionManager_AppAnalytics_h
@import Foundation;

@interface AASessionManager (AppAnalytics) <AAFlushable>
/* instance methods */
- (void)flushWithCallbackQueue:(id)queue completion:(id /* block */)completion;
- (void)startSessionForKind:(long long)kind withName:(id)name;
- (void)startSessionForKind:(long long)kind withName:(id)name identifier:(id)identifier;
- (void)startSessionForKind:(long long)kind withName:(id)name startDate:(id)date;
- (void)startSessionForKind:(long long)kind withName:(id)name identifier:(id)identifier startDate:(id)date;
- (void)startSessionForKind:(long long)kind withName:(id)name identifier:(id)identifier startDate:(id)date timestampJitter:(id)jitter;
- (void)endSession;
- (void)endSync;
- (void)endSessionWithCompletion:(id /* block */)completion;
- (void)endSessionWithEndDate:(id)date completion:(id /* block */)completion;
- (void)pushSessionData:(id)data;
- (void)pushSessionData:(id)data traits:(id)traits;
- (void)pushSessionData:(id)data submitEventQueues:(BOOL)queues;
- (void)pushSessionData:(id)data traits:(id)traits submitEventQueues:(BOOL)queues;
- (void)transaction:(id /* block */)transaction;
@end

#endif /* AASessionManager_AppAnalytics_h */