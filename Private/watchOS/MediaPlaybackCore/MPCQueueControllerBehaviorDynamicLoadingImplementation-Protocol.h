//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCQueueControllerBehaviorDynamicLoadingImplementation_Protocol_h
#define MPCQueueControllerBehaviorDynamicLoadingImplementation_Protocol_h
@import Foundation;

@protocol MPCQueueControllerBehaviorDynamicLoadingImplementation <MPCQueueControllerBehaviorImplementation>

@property (readonly, nonatomic) long long preferredUpcomingItemCount;

/* instance methods */
- (void)loadAdditionalUpcomingItems:(long long)items completion:(id /* block */)completion;
@end

#endif /* MPCQueueControllerBehaviorDynamicLoadingImplementation_Protocol_h */