//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWDatabaseJSONStore_h
#define SCWDatabaseJSONStore_h
@import Foundation;

#include "NSFilePresenter-Protocol.h"
#include "OS_dispatch_source-Protocol.h"
#include "SCWDatabaseSchema.h"
#include "SCWDatabaseStore-Protocol.h"
#include "SCWDatabaseStoreCoordinator-Protocol.h"
#include "SCWOperationThrottler-Protocol.h"
#include "SCWOperationThrottlerDelegate-Protocol.h"

@class CKServerChangeToken, NSDate, NSFileCoordinator, NSHashTable, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SCWDatabaseJSONStore : NSObject<SCWOperationThrottlerDelegate, NSFilePresenter, SCWDatabaseStoreCoordinator, SCWDatabaseStore>

@property (retain, nonatomic) NSFileCoordinator *fileCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) SCWDatabaseSchema *databaseSchema;
@property (nonatomic) BOOL loadedFromDisk;
@property (nonatomic) unsigned int lastKnownStoreChangeTag;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName;
@property (nonatomic) BOOL havePendingChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<SCWOperationThrottler> *saveThrottler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource;
@property (retain, nonatomic) NSSet *allowedCommandClasses;
@property (readonly, copy, nonatomic) NSURL *storeURL;
@property (readonly, nonatomic) unsigned long long diskReadCount;
@property (readonly, nonatomic) unsigned long long diskWriteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, nonatomic) NSObject<SCWDatabaseStore> *underlyingStore;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) BOOL cloudBackupEnabled;

/* class methods */
+ (id)preferredFileURLForSchema:(id)schema parentDirectoryURL:(id)url;

/* instance methods */
- (id)initWithSchema:(id)schema fileURL:(id)url allowedCommandClasses:(id)classes;
- (id)initWithSchema:(id)schema parentDirectoryURL:(id)url allowedCommandClasses:(id)classes;
- (id)initWithSchema:(id)schema fileURL:(id)url;
- (id)initWithSchema:(id)schema parentDirectoryURL:(id)url;
- (id)zoneStoreForSchema:(id)schema;
- (void)readWithAccessor:(id /* block */)accessor;
- (void)writeWithAccessor:(id /* block */)accessor;
- (void)reloadWithAccessor:(id /* block */)accessor;
- (void)readZone:(id)zone withAccessor:(id /* block */)accessor;
- (void)writeZone:(id)zone withAccessor:(id /* block */)accessor;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)operationThrottlerPerformOperation:(id)operation;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)handler;
- (BOOL)flushToDiskWithTimeout:(double)timeout;
- (void)_saveToFileURL:(id)url;
- (void)_applyCloudBackupEnabledPropertyToStoreURL;
- (void)_saveIfNeededToFileURL:(id)url;
- (void)_loadFromFileURL:(id)url;
- (BOOL)_reloadIfNeededFromFileURL:(id)url;
- (void)_listenForChangesToFileURL:(id)url;
- (id)_encodeCodableObject:(id)object;
- (id)_decodeCodableObjectOfClass:(Class)class from:(id)from error:(id *)error;
- (id)_decodeCodableObjectOfClasses:(id)classes from:(id)from error:(id *)error;
- (id)_encodeDate:(id)date;
- (id)_decodeDate:(id)date;
- (BOOL)isCloudBackupEnabled;
@end

#endif /* SCWDatabaseJSONStore_h */