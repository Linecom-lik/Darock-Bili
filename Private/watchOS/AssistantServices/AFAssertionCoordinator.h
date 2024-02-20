//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAssertionCoordinator_h
#define AFAssertionCoordinator_h
@import Foundation;

#include "AFAssertionCoordinatorDelegate-Protocol.h"
#include "AFInvalidating-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface AFAssertionCoordinator : NSObject<AFInvalidating> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<AFAssertionCoordinatorDelegate> *_delegate;
  atomic long long _numberOfAssertions;
  NSMutableDictionary *_assertionsByUUID;
  atomic long long _numberOfActiveAssertions;
  NSMutableSet *_activeAssertionUUIDs;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier queue:(id)queue delegate:(id)delegate;
- (void)dealloc;
- (id)acquireRelinquishableAssertionWithContext:(id)context relinquishmentHandler:(id /* block */)handler;
- (void)relinquishAssertionWithUUID:(id)uuid context:(id)context options:(unsigned long long)options;
- (void)relinquishAssertionWithUUID:(id)uuid error:(id)error options:(unsigned long long)options;
- (void)relinquishAsertionsPassingTest:(id /* block */)test context:(id)context;
- (void)relinquishAsertionsPassingTest:(id /* block */)test error:(id)error;
- (unsigned long long)numberOfPendingAndActiveAssertions;
- (void)getPendingAndActiveAssertionsWithCompletion:(id /* block */)completion;
- (unsigned long long)numberOfActiveAssertions;
- (void)getActiveAssertionsWithCompletion:(id /* block */)completion;
- (void)barrier:(id /* block */)barrier;
- (void)invalidate;
- (void)_addAssertion:(id)assertion;
- (void)_activateAssertionWithUUID:(id)uuid;
- (void)_deactivateAndRemoveAssertionWithUUID:(id)uuid context:(id)context error:(id)error options:(unsigned long long)options;
- (void)_invalidate;
@end

#endif /* AFAssertionCoordinator_h */