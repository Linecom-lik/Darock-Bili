//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton_h
#define _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton_h
@import Foundation;

#include "ACActivityFrequentUpdatesObservationXPCClient-Protocol.h"

@interface ActivityKit.(Singleton in _D074D31B035C9B27F4F7807A7D21110D) : NSObject<ACActivityFrequentUpdatesObservationXPCClient> { // (Swift)
  /* instance variables */
   queue;
   connection;
   serverStartupToken;
   activities;
   activityDiffPublisher;
}

/* instance methods */
- (void)activityDidExceedReducedPushBudgetForIdentifier:(id)identifier;
- (void)activityDidUnsubscribeForIdentifier:(id)identifier;
- (id)init;
@end

#endif /* _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton_h */