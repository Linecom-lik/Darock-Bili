//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCOfflineIssueList_h
#define FCOfflineIssueList_h
@import Foundation;

#include "FCKeyValueStore.h"

@class NSArray, NSHashTable;

@interface FCOfflineIssueList : NSObject {
  /* instance variables */
  FCKeyValueStore *_localStore;
  NSHashTable *_observers;
}

@property (readonly, nonatomic) NSArray *issueIDs;

/* instance methods */
- (id)init;
- (id)initWithStoreDirectoryFileURL:(id)url appActivityMonitor:(id)monitor backgroundTaskable:(id)taskable;
- (id)initWithStoreDirectoryFileURL:(id)url;
- (void)addIssueID:(id)id source:(long long)source;
- (BOOL)containsIssueID:(id)id;
- (BOOL)everContainedIssueID:(id)id;
- (long long)sourceForIssueID:(id)id;
- (id)dateAddedForIssueID:(id)id;
- (id)dateRemovedForIssueID:(id)id;
- (void)removeIssueIDs:(id)ids;
- (void)removeAllIssues;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* FCOfflineIssueList_h */