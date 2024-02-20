//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef FBProcessObserver_Protocol_h
#define FBProcessObserver_Protocol_h
@import Foundation;

@protocol FBProcessObserver <NSObject>
@optional
/* instance methods */
- (void)processWillExit:(id)exit;
- (void)processDidExit:(id)exit;
- (void)process:(id)process stateDidChangeFromState:(id)state toState:(id)state;
@end

#endif /* FBProcessObserver_Protocol_h */