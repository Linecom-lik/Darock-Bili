//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVDonateTask_h
#define CKVDonateTask_h
@import Foundation;

#include "CKVDonatorProvider-Protocol.h"

@class NSArray, NSObject;

@interface CKVDonateTask : NSObject {
  /* instance variables */
  NSObject<CKVDonatorProvider> *_donatorProvider;
  NSObject *_bridge;
  double _timeout;
  BOOL _isMultiDataset;
  unsigned short _donateOptions;
}

@property (readonly, nonatomic) NSArray *derivativeTaskIds;

/* instance methods */
- (id)initWithDonatorProvider:(id)provider datasetBridge:(id)bridge timeout:(double)timeout derivativeTaskIds:(id)ids donateOptions:(unsigned short)options;
- (id)initWithDonatorProvider:(id)provider fullDatasetBridge:(id)bridge timeout:(double)timeout;
- (id)initWithDonatorProvider:(id)provider fullDatasetBridge:(id)bridge derivativeTaskIds:(id)ids timeout:(double)timeout;
- (id)initWithDonatorProvider:(id)provider deltaDatasetBridge:(id)bridge timeout:(double)timeout;
- (id)initWithDonatorProvider:(id)provider multiDatasetBridge:(id)bridge timeout:(double)timeout;
- (id)init;
- (void)runWithType:(unsigned short)type reason:(unsigned short)reason;
- (void)runWithType:(unsigned short)type reason:(unsigned short)reason completion:(id /* block */)completion;
- (void)_donateAllDatasets:(unsigned short)datasets withReason:(unsigned short)reason completion:(id /* block */)completion;
- (void)_donateDataset:(id)dataset withType:(unsigned short)type reason:(unsigned short)reason completion:(id /* block */)completion;
- (long long)_enumerateAndStreamFullDataset:(id)dataset fullStream:(id)stream;
- (long long)_enumerateAndStreamDeltaDataset:(id)dataset fullStream:(id)stream incrementalStream:(id)stream;
- (void)clearWithReason:(unsigned short)reason;
- (void)_clearAllDatasets;
- (void)_clearDataset:(id)dataset;
- (id)_getProviderBridge;
- (BOOL)_isIncrementalPreferred;
- (id)modifiedItemIdsWithDatabaseSearcher:(id)searcher;
- (id)lastChangesAccepted;
@end

#endif /* CKVDonateTask_h */