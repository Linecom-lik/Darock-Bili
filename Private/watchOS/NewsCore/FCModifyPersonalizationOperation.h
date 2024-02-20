//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCModifyPersonalizationOperation_h
#define FCModifyPersonalizationOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCCKPrivateDatabase.h"
#include "FCPersonalizationTreatment.h"

@class CKRecord, NSDictionary, NSError, NTPBPersonalizationProfile;

@interface FCModifyPersonalizationOperation : FCOperation

@property (retain, nonatomic) NTPBPersonalizationProfile *savedProfile;
@property (retain, nonatomic) CKRecord *savedRecord;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) NSDictionary *aggregates;
@property (retain, nonatomic) FCPersonalizationTreatment *treatment;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (copy, nonatomic) id /* block */ saveCompletionHandler;

/* class methods */
+ (id)personalizationProfileFromRecord:(id)record;
+ (void)applyChangeGroups:(id)groups toProfile:(id)profile treatment:(id)treatment prune:(BOOL)prune;
+ (void)applyDeltas:(id)deltas toProfile:(id)profile treatment:(id)treatment prune:(BOOL)prune;
+ (void)pruneAggregates:(id)aggregates;
+ (void)applyAggregates:(id)aggregates toProfile:(id)profile maxRatio:(double)ratio;

/* instance methods */
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)error retryAfter:(id *)after;
- (void)resetForRetry;
@end

#endif /* FCModifyPersonalizationOperation_h */