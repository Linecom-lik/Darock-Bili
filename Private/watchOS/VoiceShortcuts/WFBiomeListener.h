//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFBiomeListener_h
#define WFBiomeListener_h
@import Foundation;

#include "WFTriggerEventQueue.h"
#include "WFTriggerListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WFBiomeListener : NSObject<WFTriggerListener>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *triggerIDToSinks;
@property (readonly, nonatomic) NSMutableDictionary *remoteTriggerIDToSinks;
@property (retain, nonatomic) NSMutableDictionary *seenTransactionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventQueue:(id)queue;
- (void)registerConfiguredTrigger:(id)trigger completion:(id /* block */)completion;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)identifier;
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)identifier;
- (void)fireTriggerWithIdentifier:(id)identifier force:(BOOL)force eventInfo:(id)info completion:(id /* block */)completion;
- (void)checkTriggerStateWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)checkTriggerStateWithKeyPath:(id)path completion:(id /* block */)completion;
- (void)queue_fireTriggerWithIdentifier:(id)identifier force:(BOOL)force eventInfo:(id)info completion:(id /* block */)completion;
- (void)queue_handleEvent:(id)event forTrigger:(id)trigger;
- (BOOL)isTransactionEventDuplicate:(id)duplicate forTrigger:(id)trigger withSeenTransactionIdentifiers:(id)identifiers;
@end

#endif /* WFBiomeListener_h */