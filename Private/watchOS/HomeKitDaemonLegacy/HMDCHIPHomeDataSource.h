//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCHIPHomeDataSource_h
#define HMDCHIPHomeDataSource_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHome.h"
#include "HMMTRFabricStorageDataSource-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSRecursiveLock, NSSet, NSString;

@interface HMDCHIPHomeDataSource : HMFObject<HMMTRFabricStorageDataSource>

@property (retain, nonatomic) NSMutableDictionary *pendingKeyValueStore;
@property (nonatomic) unsigned long long pendingKeyValueStoreTransactionsCount;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (weak) HMDHome *home;
@property (readonly, copy, nonatomic) NSNumber *fabricID;
@property (readonly, copy, nonatomic) NSNumber *lastNodeID;
@property (readonly, copy, nonatomic) NSData *rootCertificate;
@property (readonly, copy, nonatomic) NSData *operationalCertificate;
@property (readonly, copy, nonatomic) NSData *intermediateCertificate;
@property (readonly, copy, nonatomic) NSDictionary *keyValueStore;
@property (readonly, copy, nonatomic) NSSet *allNodeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithFabricID:(id)id home:(id)home;
- (void)_updateHomeModelWithLabel:(id)label completion:(id /* block */)completion block:(id /* block */)block;
- (void)updateFabricID:(id)id completion:(id /* block */)completion;
- (void)updateLastNodeID:(id)id completion:(id /* block */)completion;
- (void)updateRootCertificate:(id)certificate completion:(id /* block */)completion;
- (void)updateOperationalCertificate:(id)certificate completion:(id /* block */)completion;
- (void)updateIntermediateCertificate:(id)certificate completion:(id /* block */)completion;
- (void)updateKeyValueStore:(id)store completion:(id /* block */)completion;
- (void)updateKeyValueStoreWithBlock:(id /* block */)block completion:(id /* block */)completion;
- (id)storageDataSourceForDeviceWithNodeID:(id)id;
- (id)logIdentifier;
@end

#endif /* HMDCHIPHomeDataSource_h */