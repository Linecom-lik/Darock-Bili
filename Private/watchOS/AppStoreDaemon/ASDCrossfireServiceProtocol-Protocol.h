//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDCrossfireServiceProtocol_Protocol_h
#define ASDCrossfireServiceProtocol_Protocol_h
@import Foundation;

@protocol ASDCrossfireServiceProtocol <NSObject>
/* instance methods */
- (void)flushMetricsWithCompletionBlock:(id /* block */)block;
- (void)getAppEventsWithCompletionBlock:(id /* block */)block;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)block;
- (void)recordMetricsWithCompletionBlock:(id /* block */)block;
- (void)reportAppEvent:(id)event completionBlock:(id /* block */)block;
- (void)resetMetricsWithCompletionBlock:(id /* block */)block;
- (void)sendMetricsWithCompletionBlock:(id /* block */)block;
@end

#endif /* ASDCrossfireServiceProtocol_Protocol_h */