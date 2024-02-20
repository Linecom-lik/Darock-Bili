//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSSearch_h
#define MSSearch_h
@import Foundation;

#include "MSXPCService.h"
#include "MSDSearchResultsProtocol-Protocol.h"

@class NSString;
@protocol MSSearchDelegate;

@interface MSSearch : MSXPCService<MSDSearchResultsProtocol>

@property (weak, nonatomic) NSObject<MSSearchDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion options:(unsigned long long)options delegate:(id)delegate;
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;

/* instance methods */
- (id)_initWithDelegate:(id)delegate;
- (id)initWithRemoteObjectInterface:(id)interface;
- (id)newConnectionForInterface:(id)interface;
- (void)cancel;
- (void)foundResults:(id)results error:(id)error;
- (void)_findMessageData:(id)data matchingCriterion:(id)criterion options:(unsigned long long)options;
- (void)_delegateDidFinishWithError:(id)error;
- (void)_delegateDidFindResults:(id)results;
@end

#endif /* MSSearch_h */