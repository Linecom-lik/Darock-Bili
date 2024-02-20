//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFTriggerBuilderPair_h
#define HFTriggerBuilderPair_h
@import Foundation;

@class HMTrigger, HMTriggerBuilder;

@interface HFTriggerBuilderPair : NSObject

@property (readonly, nonatomic) HMTriggerBuilder *builder;
@property (readonly, nonatomic) HMTrigger *trigger;

/* class methods */
+ (id)creatingTriggerWithBuilder:(id)builder;
+ (id)updatingTrigger:(id)trigger withBuilder:(id)builder;

/* instance methods */
- (id)initWithTrigger:(id)trigger builder:(id)builder;
- (id)commitBuilderInHome:(id)home;
- (void)_notifyObserversOfAddingTrigger:(id)trigger inHome:(id)home;
- (void)_notifyObserversOfChangingTrigger:(id)trigger inHome:(id)home;
@end

#endif /* HFTriggerBuilderPair_h */