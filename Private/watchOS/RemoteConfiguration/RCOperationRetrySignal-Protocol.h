//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.0.0.0.0
//
#ifndef RCOperationRetrySignal_Protocol_h
#define RCOperationRetrySignal_Protocol_h
@import Foundation;

@protocol RCOperationRetrySignal <NSObject>
/* instance methods */
- (void)onQueue:(id)queue signal:(id /* block */)signal;
@end

#endif /* RCOperationRetrySignal_Protocol_h */