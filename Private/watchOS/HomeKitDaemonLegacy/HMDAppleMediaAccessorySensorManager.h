//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleMediaAccessorySensorManager_h
#define HMDAppleMediaAccessorySensorManager_h
@import Foundation;

#include "HMDAppleMediaAccessorySensorManagerDataSource-Protocol.h"
#include "HMDAppleMediaAccessorySensorManagerDataStore-Protocol.h"
#include "HMDLocalAddAccessoryProgressDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"

@class HMFPairingIdentity, HMSetupAccessoryDescription, NSDate, NSMutableArray, NSString, NSUUID;
@protocol HMDHPSManager, OS_dispatch_queue;

@interface HMDAppleMediaAccessorySensorManager : NSObject<HMFMessageReceiver, HMFLogging, HMDLocalAddAccessoryProgressDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _isCurrentlyPairing;
  BOOL _hasAttemptedRecovery;
  BOOL _shouldUseDerivedSensorUUID;
  BOOL _hasPendingRetry;
  BOOL _shouldAttemptToSetServiceNames;
  NSDate *_pairingStartTime;
  NSObject<HMDHPSManager> *_sensorClient;
  NSObject<HMDAppleMediaAccessorySensorManagerDataSource> *_dataSource;
  HMSetupAccessoryDescription *_setupDescription;
  NSObject<HMDAppleMediaAccessorySensorManagerDataStore> *_dataStore;
  NSObject<OS_dispatch_queue> *_workQueue;
  unsigned long long _pairingRetryCount;
  NSMutableArray *_renamedServiceIDs;
  HMFPairingIdentity *_pairingIdentity;
}

@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithWorkQueue:(id)queue;
- (void)configureWithDataSource:(id)source hpsXPCClient:(id)xpcclient dataStore:(id)store;
- (void)_migrateToDataStoreIfNeeded:(id)needed completion:(id /* block */)completion;
- (void)handleErrorCaseTestMessage:(id)message;
- (void)localAccessoryAddRequiresConsent:(id)consent;
- (void)handlePrimaryResidentChanged:(id)changed;
- (void)handleAccessoryAdded:(id)added;
- (void)handleCharacteristicsChangedNotification:(id)notification;
- (void)fetchADKSensorStatusCompletion:(id /* block */)completion;
- (void)managerIsReadyToBePaired;
- (id)logIdentifier;
@end

#endif /* HMDAppleMediaAccessorySensorManager_h */