//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCTimedOperationThrottler_h
#define SCTimedOperationThrottler_h
@import Foundation;

#include "SCWOperationThrottler-Protocol.h"
#include "SCWOperationThrottler.h"
#include "SCWOperationThrottlerDelegate-Protocol.h"

@class NSString;

@interface SCTimedOperationThrottler : NSObject<SCWOperationThrottlerDelegate, SCWOperationThrottler>

@property (retain, nonatomic) SCWOperationThrottler *operationThrottler;
@property (weak, nonatomic) NSObject<SCWOperationThrottlerDelegate> *delegate;
@property double cooldownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL suspended;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)completion;
- (void)operationThrottler:(id)throttler performAsyncOperationWithCompletion:(id /* block */)completion;
@end

#endif /* SCTimedOperationThrottler_h */